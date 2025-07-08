#include"slintfile.h"

/*

Change this class after slint building

class Cell {

    public:
    static int created;

    int number;
    int posX;
    int posY;
    friend auto operator== (const class Cell &a, const class Cell &b) -> bool = default;

    Cell() = default;
    Cell(const int& n) {
        number = n;
    }
};

*/

std::vector<Cell> gameMap;

std::vector<Cell> win3x3 = std::vector<Cell>({ 1,2,3,4,5,6,7,8,-1 });
std::vector<Cell> win4x4 = std::vector<Cell>({ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1 });

auto app = MainWindow::create();

void initGame(const int& r) {
    if (r == 3) {
        gameMap = std::vector<Cell>({
            4,5,2,
            1,8,7,
            3,6,-1 });
    }
    else {
        gameMap = std::vector<Cell>({
            1,11,2,4,
            6,5,10,8,
            14,3,15,12,
            9,13,7,-1 });
    }

    for (int i = 0; i < r*r; i++) {
        gameMap[i].posX = i % r;
        gameMap[i].posY = i / r;
    }
    app->set_size(r);
    app->set_current(r*r - 1);
    gameMap[r*r-1].number = -1;
}

void updateMap() {
    auto gameMapPtr = std::make_shared<slint::VectorModel<Cell>>((gameMap));
    app->set_map(gameMapPtr);
}

void swapCells(const int&n1,const int& n2) {
    int tmp = gameMap[n1].number;
    gameMap[n1].number = gameMap[n2].number;
    gameMap[n2].number = tmp;
    app->set_current(n1);
    updateMap();
}

void moveCell(const int& indx) {
    int mapSize = app->get_size();
    int x = (indx) % mapSize; // 0 - (n-1)
    int y = (indx) / mapSize; // 0 - (n-1)

    if (x == 0) { // left border
        if (y == 0) { // up border
            if (gameMap[y* mapSize +x + 1].number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (gameMap[(y + 1) * mapSize + x].number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
        else if (y == mapSize - 1) { // down border
            if (gameMap[y * mapSize + x + 1].number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (gameMap[(y - 1) * mapSize + x].number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
        }
        else { // "center"
            if (gameMap[y * mapSize + x + 1].number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (gameMap[(y - 1) * mapSize + x].number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
            if (gameMap[(y + 1) * mapSize + x].number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
    }
    else if(x == app->get_size()-1) { // right border
        if (y == 0) { // up border
            if (gameMap[y * mapSize + x - 1].number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (gameMap[(y + 1) * mapSize + x].number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
        else if (y == mapSize - 1) { // down border
            if (gameMap[y * mapSize + x - 1].number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (gameMap[(y - 1) * mapSize + x].number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
        }
        else { // "center"
            if (gameMap[y * mapSize + x - 1].number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (gameMap[(y - 1) * mapSize + x].number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
            if (gameMap[(y + 1) * mapSize + x].number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
    }
    else {
        if (y == 0) { // up border
            if (gameMap[y * mapSize + x - 1].number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (gameMap[(y + 1) * mapSize + x].number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
            if (gameMap[(y) *mapSize + x+1].number == -1) {
                swapCells(indx, y* mapSize + x + 1);
            }
        }
        else if (y == mapSize - 1) { // down border
            if (gameMap[y * mapSize + x - 1].number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (gameMap[y * mapSize + x + 1].number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (gameMap[(y - 1) * mapSize + x].number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
        }
        else { // "center"
            if (gameMap[y * mapSize + x - 1].number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (gameMap[(y - 1) * mapSize + x].number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
            if (gameMap[(y + 1) * mapSize + x].number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
            if (gameMap[(y) *mapSize + x+1].number == -1) {
                swapCells(indx, (y)*mapSize + x + 1);
            }
        }
    }
}

bool checkWin() {
    const auto& winMap = (app->get_size() == 3) ? win3x3 : win4x4;

    for (int i = 0; i < gameMap.size(); ++i) {
        if (gameMap[i].number != winMap[i].number) {
            return false;
        }
    }
    return true;
}

int main() {
    
    app->on_initGame([&](const int& n) {
        initGame(n);
        updateMap();
        app->set_menu(1);
    });

    app->on_onClickBtn([](const int& indx) {
        moveCell(indx);
        app->set_win(checkWin());
    });

    app->run();
}