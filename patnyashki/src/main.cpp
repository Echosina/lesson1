#include"slintfile.h"

/*

Change this class after slint building

class Cell {

public:
    static int created;

    int number=-1;
    int posX;
    int posY;
    friend auto operator== (const class Cell& a, const class Cell& b) -> bool = default;

    Cell() = default;
    Cell(const int& n) {
        number = n;
    }
    Cell(const int& x, const int& y) {
        posX = x;
        posY = y;
    }
};

*/

std::vector<Cell> win3x3 = std::vector<Cell>({ 1,2,3,4,5,6,7,8,-1 });
std::vector<Cell> win4x4 = std::vector<Cell>({ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1 });

auto app = MainWindow::create();

void initGame(const int& r) {

    if (r == 3) {
        app->set_map(
            std::make_shared<slint::VectorModel<Cell>> (std::vector<Cell>({
            4,5,2,
            1,8,7,
            3,6,-1 }
            ))
            );
    }
    else {

        app->set_map(
            std::make_shared<slint::VectorModel<Cell>>(std::vector<Cell>({
            1,11,2,4,
            6,5,10,8,
            14,3,15,12,
            9,13,7,-1 }
            ))
        );
    }

    for (int i = 0; i < r * r; i++) {
        auto ptr = app->get_map();
        Cell tmp = *ptr->row_data(i);
        tmp.posX = i % r;
        tmp.posY = i / r;
        ptr->set_row_data(i, tmp);
    }
    
    app->set_size(r);
    app->set_current(r*r - 1);
}

void swapCells(const int&n1,const int& n2) {
    std::shared_ptr<slint::Model<Cell>> ptr = app->get_map();
    Cell tmpCell = *ptr->row_data(n1);
    Cell tmpCell2 = *ptr->row_data(n2);
    int tmp = tmpCell.number;
    tmpCell.number = tmpCell2.number;
    tmpCell2.number = tmp;
    ptr->set_row_data(n1, tmpCell);
    ptr->set_row_data(n2, tmpCell2);

    app->set_current(n1);
}

void moveCell(const int& indx) {

    int mapSize = app->get_size();
    int x = (indx) % mapSize; // 0 - (n-1)
    int y = (indx) / mapSize; // 0 - (n-1)

    std::shared_ptr<slint::Model<Cell>> ptr = app->get_map();

    if (x == 0) { // left border
        if (y == 0) { // up border
            if (ptr->row_data(y * mapSize + x + 1)->number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (ptr->row_data((y + 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
        else if (y == mapSize - 1) { // down border
            if (ptr->row_data(y * mapSize + x + 1)->number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (ptr->row_data((y - 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
        }
        else { // "center"
            if (ptr->row_data(y * mapSize + x + 1)->number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (ptr->row_data((y - 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
            if (ptr->row_data((y + 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
    }
    else if (x == app->get_size() - 1) { // right border
        if (y == 0) { // up border
            if (ptr->row_data(y * mapSize + x - 1)->number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (ptr->row_data((y + 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
        else if (y == mapSize - 1) { // down border
            if (ptr->row_data(y * mapSize + x - 1)->number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (ptr->row_data((y - 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
        }
        else { // "center"
            if (ptr->row_data(y * mapSize + x - 1)->number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (ptr->row_data((y - 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
            if (ptr->row_data((y + 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
        }
    }
    else {
        if (y == 0) { // up border
            if (ptr->row_data(y * mapSize + x - 1)->number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (ptr->row_data((y + 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
            if (ptr->row_data((y)*mapSize + x + 1)->number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
        }
        else if (y == mapSize - 1) { // down border
            if (ptr->row_data(y * mapSize + x - 1)->number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (ptr->row_data(y * mapSize + x + 1)->number == -1) {
                swapCells(indx, y * mapSize + x + 1);
            }
            if (ptr->row_data((y - 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
        }
        else { // "center"
            if (ptr->row_data(y * mapSize + x - 1)->number == -1) {
                swapCells(indx, y * mapSize + x - 1);
            }
            if (ptr->row_data((y - 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y - 1) * mapSize + x);
            }
            if (ptr->row_data((y + 1) * mapSize + x)->number == -1) {
                swapCells(indx, (y + 1) * mapSize + x);
            }
            if (ptr->row_data((y)*mapSize + x + 1)->number == -1) {
                swapCells(indx, (y)*mapSize + x + 1);
            }
        }
    }
}

bool checkWin() {
    const auto& winMap = (app->get_size() == 3) ? win3x3 : win4x4;
    auto ptr = app->get_map();

    for (int i = 0; i < ptr->row_count(); ++i) {
        if (ptr->row_data(i)->number != winMap[i].number) {
            return false;
        }
    }

    return true;
}

int main() {
    
    app->on_initGame([&](const int& n) {
        initGame(n);
        app->set_menu(1);
    });

    app->on_onClickBtn([](const int& indx) {
        moveCell(indx);
        app->set_win(checkWin());
    });

    app->run();
}