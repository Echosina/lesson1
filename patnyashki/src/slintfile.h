// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
#include <cmath>
static_assert(1 == SLINT_VERSION_MAJOR && 11 == SLINT_VERSION_MINOR && 0 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.11.0, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class BorderProps {
    public:
    float border_radius;
    float border_width;
    slint::Brush border_color;
    friend auto operator== (const class BorderProps &a, const class BorderProps &b) -> bool = default;
};

enum class BorderType {
None,Small,Normal,Large,XLarge,CircleNone,CircleSmall,CircleNormal,CircleLarge,CircleXLarge,};

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

enum class ColorLevel {
Weakest,Weaker,Normal,Deeper,Deepest,Font,Opacity,};

class ColorProps {
    public:
    slint::SharedString name;
    slint::Brush weakest;
    slint::Brush weaker;
    slint::Brush normal;
    slint::Brush deeper;
    slint::Brush deepest;
    slint::Brush font;
    slint::Brush opacity;
    friend auto operator== (const class ColorProps &a, const class ColorProps &b) -> bool = default;
};

class FontProps {
    public:
    slint::SharedString font_family;
    float font_size;
    int font_weight;
    bool font_italic;
    slint::Brush color;
    friend auto operator== (const class FontProps &a, const class FontProps &b) -> bool = default;
};

class PaddingProps {
    public:
    float padding_top;
    float padding_bottom;
    float padding_left;
    float padding_right;
    float padding_same;
    friend auto operator== (const class PaddingProps &a, const class PaddingProps &b) -> bool = default;
};

enum class PaddingType {
None,Tip,Icon,Tag,Small,Normal,Large,};

class RotationProps {
    public:
    float rotation_angle;
    float rotation_origin_x;
    float rotation_origin_y;
    friend auto operator== (const class RotationProps &a, const class RotationProps &b) -> bool = default;
};

class ShadowProps {
    public:
    float x;
    float y;
    float blur;
    friend auto operator== (const class ShadowProps &a, const class ShadowProps &b) -> bool = default;
};

enum class ShadowType {
Low1,Low2,Low3,High1,High2,HighEmpty,};

class SizeProps {
    public:
    float small;
    float normal;
    float large;
    float largest;
    friend auto operator== (const class SizeProps &a, const class SizeProps &b) -> bool = default;
};

class TextActionProps {
    public:
    slint::cbindgen_private::TextWrap wrap;
    slint::cbindgen_private::TextOverflow overflow;
    float letter_spacing;
    friend auto operator== (const class TextActionProps &a, const class TextActionProps &b) -> bool = default;
};

class TextAlignmentProps {
    public:
    slint::cbindgen_private::TextHorizontalAlignment horizontal_alignment;
    slint::cbindgen_private::TextVerticalAlignment vertical_alignment;
    friend auto operator== (const class TextAlignmentProps &a, const class TextAlignmentProps &b) -> bool = default;
};

class ThemeBorder {
    public:
    BorderProps none;
    BorderProps small;
    BorderProps normal;
    BorderProps large;
    BorderProps x_large;
    std::tuple<BorderProps, BorderProps, BorderProps, BorderProps, BorderProps> circle;
    friend auto operator== (const class ThemeBorder &a, const class ThemeBorder &b) -> bool = default;
};

class ThemeColor {
    public:
    ColorProps light;
    ColorProps primary;
    ColorProps success;
    ColorProps info;
    ColorProps warning;
    ColorProps error;
    ColorProps dark;
    friend auto operator== (const class ThemeColor &a, const class ThemeColor &b) -> bool = default;
};

class ThemePadding {
    public:
    PaddingProps none;
    PaddingProps tip;
    PaddingProps tag;
    PaddingProps icon;
    PaddingProps small;
    PaddingProps normal;
    PaddingProps large;
    friend auto operator== (const class ThemePadding &a, const class ThemePadding &b) -> bool = default;
};

class ThemeShadow {
    public:
    ShadowProps low1;
    ShadowProps low2;
    ShadowProps low3;
    ShadowProps high1;
    ShadowProps high2;
    ShadowProps high_empty;
    friend auto operator== (const class ThemeShadow &a, const class ThemeShadow &b) -> bool = default;
};

class ThemeSpace {
    public:
    float none;
    float len20;
    float len40;
    float len60;
    float len80;
    float len120;
    float len160;
    float len200;
    float len240;
    float len280;
    float len320;
    float len360;
    float len400;
    float len440;
    float len480;
    float len520;
    float len560;
    friend auto operator== (const class ThemeSpace &a, const class ThemeSpace &b) -> bool = default;
};

enum class Themes {
Light,Primary,Success,Info,Warning,Error,Dark,};

class MainWindow;

class Icon_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_1_clicked;
    slint::private_api::Property<slint::Brush> root_1_colorize;
    slint::private_api::Property<float> root_1_height;
    slint::private_api::Property<float> root_1_inner_4_preferred_height;
    slint::private_api::Property<float> root_1_inner_4_preferred_width;
    slint::private_api::Property<float> root_1_inner_4_x;
    slint::private_api::Property<float> root_1_inner_4_y;
    slint::private_api::Callback<void()> root_1_moved;
    slint::private_api::Property<slint::Image> root_1_source;
    slint::private_api::Property<Themes> root_1_theme;
    slint::private_api::Property<float> root_1_width;
    slint::private_api::Property<float> root_1_x;
    slint::private_api::Property<float> root_1_y;
    slint::cbindgen_private::Empty root_1 = {};
    slint::cbindgen_private::TouchArea area_2 = {};
    slint::cbindgen_private::Rotate inner_rotation_angle_3 = {};
    slint::cbindgen_private::ClippedImage inner_4 = {};
    auto fn_get_colorize () const -> slint::Brush;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class UseSurrealismFn_59 {
    public:
    UseSurrealismFn_59 (const class SharedGlobals *globals);
    private:
    const class SharedGlobals* globals;
    public:
    auto fn_count_height (float arg_0, float arg_1) const -> float;
    auto fn_count_width (float arg_0, float arg_1) const -> float;
    auto fn_dark_deeper (slint::Brush arg_0) const -> slint::Brush;
    auto fn_error_deeper (slint::Brush arg_0) const -> slint::Brush;
    auto fn_get_border (BorderType arg_0) const -> BorderProps;
    auto fn_get_color (Themes arg_0, ColorLevel arg_1) const -> slint::Brush;
    auto fn_get_color_dark (ColorLevel arg_0) const -> slint::Brush;
    auto fn_get_color_error (ColorLevel arg_0) const -> slint::Brush;
    auto fn_get_color_info (ColorLevel arg_0) const -> slint::Brush;
    auto fn_get_color_light (ColorLevel arg_0) const -> slint::Brush;
    auto fn_get_color_primary (ColorLevel arg_0) const -> slint::Brush;
    auto fn_get_color_success (ColorLevel arg_0) const -> slint::Brush;
    auto fn_get_color_warning (ColorLevel arg_0) const -> slint::Brush;
    auto fn_get_days (int arg_0, int arg_1, int arg_2) const -> int;
    auto fn_get_padding (PaddingType arg_0) const -> PaddingProps;
    auto fn_get_shadow (ShadowType arg_0) const -> ShadowProps;
    auto fn_get_space (float arg_0) const -> float;
    auto fn_info_deeper (slint::Brush arg_0) const -> slint::Brush;
    auto fn_light_deeper (slint::Brush arg_0) const -> slint::Brush;
    auto fn_primary_deeper (slint::Brush arg_0) const -> slint::Brush;
    auto fn_success_deeper (slint::Brush arg_0) const -> slint::Brush;
    auto fn_warning_deeper (slint::Brush arg_0) const -> slint::Brush;
};

class FluentPalette_63 {
    public:
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> color_scheme;
    slint::private_api::Property<bool> dark_color_scheme;
    slint::private_api::Property<slint::Brush> foreground;
    FluentPalette_63 (const class SharedGlobals *globals);
    private:
    const class SharedGlobals* globals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<UseSurrealismFn_59> global_UseSurrealismFn_59 = std::make_shared<UseSurrealismFn_59>(this);
    std::shared_ptr<FluentPalette_63> global_FluentPalette_63 = std::make_shared<FluentPalette_63>(this);
};

class Component_icon_container_13 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_8 const> parent;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_13_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_13_layoutinfo_v;
    Icon_root_1 btn_icon_14;
    slint::cbindgen_private::Empty icon_container_13 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_8 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_8 const * parent) -> slint::ComponentHandle<Component_icon_container_13>;
    ~Component_icon_container_13 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_13>;
};

class Component_icon_container_23 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_8 const> parent;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_23_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_23_layoutinfo_v;
    Icon_root_1 btn_icon_24;
    slint::cbindgen_private::Empty icon_container_23 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_8 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_8 const * parent) -> slint::ComponentHandle<Component_icon_container_23>;
    ~Component_icon_container_23 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_23>;
};

class Component_rectangle_8 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> rectangle_8_btn_txt_17_min_height;
    slint::private_api::Property<float> rectangle_8_btn_txt_17_min_width;
    slint::private_api::Property<float> rectangle_8_btn_txt_17_preferred_height;
    slint::private_api::Property<float> rectangle_8_btn_txt_17_preferred_width;
    slint::private_api::Property<float> rectangle_8_btn_txt_17_x;
    slint::private_api::Property<float> rectangle_8_btn_txt_17_y;
    slint::private_api::Property<float> rectangle_8_btn_txt_27_min_height;
    slint::private_api::Property<float> rectangle_8_btn_txt_27_min_width;
    slint::private_api::Property<float> rectangle_8_btn_txt_27_preferred_height;
    slint::private_api::Property<float> rectangle_8_btn_txt_27_preferred_width;
    slint::private_api::Property<float> rectangle_8_btn_txt_27_x;
    slint::private_api::Property<float> rectangle_8_btn_txt_27_y;
    slint::private_api::Property<float> rectangle_8_layout_12_height;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_8_layout_12_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_layout_12_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_layout_12_layoutinfo_v;
    slint::private_api::Property<float> rectangle_8_layout_22_height;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_8_layout_22_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_layout_22_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_layout_22_layoutinfo_v;
    slint::private_api::Callback<void()> rectangle_8_rectangle_10_clicked;
    slint::private_api::Callback<void()> rectangle_8_rectangle_10_pending;
    slint::private_api::Callback<void()> rectangle_8_rectangle_20_clicked;
    slint::private_api::Callback<void()> rectangle_8_rectangle_20_pending;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_txt_container_16_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_txt_container_16_layoutinfo_v;
    slint::private_api::Property<float> rectangle_8_txt_container_16_width;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_txt_container_26_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_8_txt_container_26_layoutinfo_v;
    slint::private_api::Property<float> rectangle_8_txt_container_26_width;
    slint::cbindgen_private::Rectangle rectangle_8 = {};
    slint::cbindgen_private::BoxShadow _shadow_9 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_10 = {};
    slint::cbindgen_private::Clip _clip_11 = {};
    slint::cbindgen_private::Empty layout_12 = {};
    slint::cbindgen_private::TouchArea txt_container_16 = {};
    slint::cbindgen_private::ComplexText btn_txt_17 = {};
    slint::cbindgen_private::TouchArea toucharea_18 = {};
    slint::cbindgen_private::BoxShadow _shadow_19 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_20 = {};
    slint::cbindgen_private::Clip _clip_21 = {};
    slint::cbindgen_private::Empty layout_22 = {};
    slint::cbindgen_private::TouchArea txt_container_26 = {};
    slint::cbindgen_private::ComplexText btn_txt_27 = {};
    slint::cbindgen_private::TouchArea toucharea_28 = {};
    slint::private_api::Conditional<class Component_icon_container_13> repeater_0;
    slint::private_api::Conditional<class Component_icon_container_23> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_8>;
    ~Component_rectangle_8 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_8>;
};

class Component_icon_container_35 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_30 const> parent;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_35_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_35_layoutinfo_v;
    Icon_root_1 btn_icon_36;
    slint::cbindgen_private::Empty icon_container_35 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_30 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_30 const * parent) -> slint::ComponentHandle<Component_icon_container_35>;
    ~Component_icon_container_35 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_35>;
};

class Component_icon_container_46 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_42 const> parent;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_46_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> icon_container_46_layoutinfo_v;
    Icon_root_1 btn_icon_47;
    slint::cbindgen_private::Empty icon_container_46 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_42 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_42 const * parent) -> slint::ComponentHandle<Component_icon_container_46>;
    ~Component_icon_container_46 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_46>;
};

class Component__shadow_42 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_41 const> parent;
    slint::private_api::Property<float> _shadow_42_btn_txt_50_min_height;
    slint::private_api::Property<float> _shadow_42_btn_txt_50_min_width;
    slint::private_api::Property<float> _shadow_42_btn_txt_50_preferred_height;
    slint::private_api::Property<float> _shadow_42_btn_txt_50_preferred_width;
    slint::private_api::Property<float> _shadow_42_btn_txt_50_x;
    slint::private_api::Property<float> _shadow_42_btn_txt_50_y;
    slint::private_api::Property<float> _shadow_42_layout_45_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_42_layout_45_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_42_layout_45_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_42_layout_45_layoutinfo_v;
    slint::private_api::Callback<void()> _shadow_42_rectangle_43_clicked;
    slint::private_api::Callback<void()> _shadow_42_rectangle_43_pending;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_42_txt_container_49_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_42_txt_container_49_layoutinfo_v;
    slint::private_api::Property<float> _shadow_42_txt_container_49_width;
    slint::cbindgen_private::BoxShadow _shadow_42 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_43 = {};
    slint::cbindgen_private::Clip _clip_44 = {};
    slint::cbindgen_private::Empty layout_45 = {};
    slint::cbindgen_private::TouchArea txt_container_49 = {};
    slint::cbindgen_private::ComplexText btn_txt_50 = {};
    slint::cbindgen_private::TouchArea toucharea_51 = {};
    slint::private_api::Conditional<class Component_icon_container_46> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_41 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_41 const * parent) -> slint::ComponentHandle<Component__shadow_42>;
    ~Component__shadow_42 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_42>;
};

class Component_rectangle_41 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_30 const> parent;
    slint::private_api::Property<Cell> model_data;
    slint::private_api::Property<int> model_index;
    slint::cbindgen_private::Empty rectangle_41 = {};
    slint::private_api::Conditional<class Component__shadow_42> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_30 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_30 const * parent) -> slint::ComponentHandle<Component_rectangle_41>;
    ~Component_rectangle_41 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const Cell &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_41>;
};

class Component_rectangle_54 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_30 const> parent;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_54_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_54_layoutinfo_v;
    slint::private_api::Property<float> rectangle_54_text_55_min_height;
    slint::private_api::Property<float> rectangle_54_text_55_min_width;
    slint::private_api::Property<float> rectangle_54_text_55_preferred_height;
    slint::private_api::Property<float> rectangle_54_text_55_preferred_width;
    slint::private_api::Property<float> rectangle_54_text_55_x;
    slint::private_api::Property<float> rectangle_54_text_55_y;
    slint::cbindgen_private::Rectangle rectangle_54 = {};
    slint::cbindgen_private::SimpleText text_55 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_30 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_30 const * parent) -> slint::ComponentHandle<Component_rectangle_54>;
    ~Component_rectangle_54 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_54>;
};

class Component_rectangle_30 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> rectangle_30_btn_txt_39_min_height;
    slint::private_api::Property<float> rectangle_30_btn_txt_39_min_width;
    slint::private_api::Property<float> rectangle_30_btn_txt_39_preferred_height;
    slint::private_api::Property<float> rectangle_30_btn_txt_39_preferred_width;
    slint::private_api::Property<float> rectangle_30_btn_txt_39_x;
    slint::private_api::Property<float> rectangle_30_btn_txt_39_y;
    slint::private_api::Property<float> rectangle_30_layout_34_height;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_30_layout_34_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_30_layout_34_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_30_layout_34_layoutinfo_v;
    slint::private_api::Callback<void()> rectangle_30_rectangle_32_clicked;
    slint::private_api::Callback<void()> rectangle_30_rectangle_32_pending;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_30_txt_container_38_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_30_txt_container_38_layoutinfo_v;
    slint::private_api::Property<float> rectangle_30_txt_container_38_width;
    slint::cbindgen_private::Rectangle rectangle_30 = {};
    slint::cbindgen_private::BoxShadow _shadow_31 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_32 = {};
    slint::cbindgen_private::Clip _clip_33 = {};
    slint::cbindgen_private::Empty layout_34 = {};
    slint::cbindgen_private::TouchArea txt_container_38 = {};
    slint::cbindgen_private::ComplexText btn_txt_39 = {};
    slint::cbindgen_private::TouchArea toucharea_40 = {};
    slint::private_api::Conditional<class Component_icon_container_35> repeater_0;
    slint::private_api::Repeater<class Component_rectangle_41, Cell> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_54> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_30>;
    ~Component_rectangle_30 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_30>;
};

class MainWindow {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<int> root_window_5_current;
    slint::private_api::Property<float> root_window_5_fixed_height;
    slint::private_api::Property<float> root_window_5_fixed_width;
    slint::private_api::Callback<void(int)> root_window_5_initGame;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_window_5_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_window_5_layoutinfo_v;
    slint::private_api::Property<std::shared_ptr<slint::Model<Cell>>> root_window_5_map;
    slint::private_api::Property<int> root_window_5_menu;
    slint::private_api::Callback<void(int)> root_window_5_onClickBtn;
    slint::private_api::Callback<void(int)> root_window_5_showIndx1;
    slint::private_api::Property<int> root_window_5_size;
    slint::private_api::Property<bool> root_window_5_win;
    slint::cbindgen_private::WindowItem root_window_5 = {};
    slint::cbindgen_private::Empty root_6 = {};
    slint::cbindgen_private::Rectangle rectangle_7 = {};
    slint::private_api::Conditional<class Component_rectangle_8> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_30> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<MainWindow>;
    ~MainWindow ();
    auto get_current () const -> int;
    auto set_current (const int &value) const -> void;
    auto invoke_initGame (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_initGame (Functor && callback_handler) const;
    auto get_map () const -> std::shared_ptr<slint::Model<Cell>>;
    auto set_map (const std::shared_ptr<slint::Model<Cell>> &value) const -> void;
    auto get_menu () const -> int;
    auto set_menu (const int &value) const -> void;
    auto invoke_onClickBtn (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_onClickBtn (Functor && callback_handler) const;
    auto invoke_showIndx1 (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_showIndx1 (Functor && callback_handler) const;
    auto get_size () const -> int;
    auto set_size (const int &value) const -> void;
    auto get_win () const -> bool;
    auto set_win (const bool &value) const -> void;
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class UseSurrealismFn_59;
    friend class FluentPalette_63;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>;
    friend class Component_icon_container_13;
    friend class Component_icon_container_23;
    friend class Component_rectangle_8;
    friend class Component_icon_container_35;
    friend class Component_icon_container_46;
    friend class Component__shadow_42;
    friend class Component_rectangle_41;
    friend class Component_rectangle_54;
    friend class Component_rectangle_30;
    friend class slint::private_api::WindowAdapterRc;
    friend class Component_rectangle_8;
    friend class Component_icon_container_13;
    friend class Component_icon_container_23;
    friend class Component_rectangle_30;
    friend class Component_icon_container_35;
    friend class Component_rectangle_41;
    friend class Component__shadow_42;
    friend class Component_icon_container_46;
    friend class Component_rectangle_54;
};

inline auto Icon_root_1::fn_get_colorize () const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return self->globals->global_UseSurrealismFn_59->fn_get_color(self->root_1_theme.get(),ColorLevel::Font);
}

inline auto Icon_root_1::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_1_height.set(16);
    self->root_1_inner_4_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ClippedImageVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->inner_4)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).preferred;
                        });
    self->root_1_inner_4_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ClippedImageVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->inner_4)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).preferred;
                        });
    self->root_1_inner_4_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_1_width.get() -(float) self->root_1_width.get()) /(float) 2);
                        });
    self->root_1_inner_4_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_1_height.get() -(float) self->root_1_height.get()) /(float) 2);
                        });
    self->root_1_source.set(slint::Image());
    self->root_1_theme.set(Themes::Dark);
    self->root_1_width.set(16);
    self->area_2.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->root_1_clicked.call();
                    });
    self->area_2.enabled.set(true);
    self->area_2.mouse_cursor.set(slint::cbindgen_private::MouseCursor::Pointer);
    self->area_2.moved.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->root_1_moved.call();
                    });
    self->inner_rotation_angle_3.rotation_angle.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 0;
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->inner_rotation_angle_3.rotation_origin_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 0;
                        });
    self->inner_rotation_angle_3.rotation_origin_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 0;
                        });
    self->inner_4.colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float([&]() -> float { if (self->area_2.has_hover.get()) { return 1; } else { return 0; }}() - 1)) < std::numeric_limits<float>::epsilon()) { return self->root_1_colorize.get().brighter(0.2); } else { return self->root_1_colorize.get(); }}();
                        });
    self->inner_4.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_1_height.get();
                        });
    self->inner_4.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->inner_4.image_rendering.set(slint::cbindgen_private::ImageRendering::Smooth);
    self->inner_4.source.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_1_source.get();
                        });
    self->inner_4.source_clip_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return static_cast<int>((self->root_1_source.get().size().height -(float) static_cast<int>(0)));
                        });
    self->inner_4.source_clip_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return static_cast<int>((self->root_1_source.get().size().width -(float) static_cast<int>(0)));
                        });
    self->inner_4.source_clip_x.set(static_cast<int>(0));
    self->inner_4.source_clip_y.set(static_cast<int>(0));
    self->inner_4.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_1_width.get();
                        });
    self->area_2.enabled.set_constant();
    self->area_2.mouse_cursor.set_constant();
    self->inner_4.horizontal_alignment.set_constant();
    self->inner_4.horizontal_tiling.set_constant();
    self->inner_4.image_fit.set_constant();
    self->inner_4.image_rendering.set_constant();
    self->inner_4.source_clip_x.set_constant();
    self->inner_4.source_clip_y.set_constant();
    self->inner_4.vertical_alignment.set_constant();
    self->inner_4.vertical_tiling.set_constant();
}

inline auto Icon_root_1::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Icon_root_1::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->root_1_inner_4_preferred_width.get(), 0)));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_1_width.get(), layout_info.max_percent, self->root_1_width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->root_1_inner_4_preferred_height.get(), 0)));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_1_height.get(), layout_info.max_percent, self->root_1_height.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Icon_root_1::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(self->root_1_x.get()), float(self->root_1_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(self->root_1_inner_4_x.get()), float(self->root_1_inner_4_y.get())));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(0), float(0)));
    }
    return {};
}

inline auto Icon_root_1::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 3: return slint::cbindgen_private::AccessibleRole::Image;
    }
    return {};
}

inline auto Icon_root_1::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Icon_root_1::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Icon_root_1::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Icon_root_1::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline UseSurrealismFn_59::UseSurrealismFn_59 (const class SharedGlobals *globals)
 : globals(globals)
{
    (void)this->globals;
}

inline auto UseSurrealismFn_59::fn_count_height (float arg_0, float arg_1) const -> float{
    [[maybe_unused]] auto self = this;
    return (arg_0 + (arg_1 * 2));
}

inline auto UseSurrealismFn_59::fn_count_width (float arg_0, float arg_1) const -> float{
    [[maybe_unused]] auto self = this;
    return (arg_0 + (arg_1 * 2));
}

inline auto UseSurrealismFn_59::fn_dark_deeper (slint::Brush arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.285558896e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.284572001e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.284572001e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.280558628e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_error_deeper (slint::Brush arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.293502887e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.294216073e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.294216073e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.29374627e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.29374627e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.293742158e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.293737275e9)); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_border (BorderType arg_0) const -> BorderProps{
    [[maybe_unused]] auto self = this;
    return [&]() -> BorderProps { if (arg_0 == BorderType::Small) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 2, 1); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::Normal) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 4, 2); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::Large) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 8, 4); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::XLarge) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 12, 6); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::CircleNone) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 96000, 0); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::CircleSmall) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 96000, 1); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::CircleNormal) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 96000, 2); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::CircleLarge) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 96000, 4); } else { return [&]() -> BorderProps { if (arg_0 == BorderType::CircleXLarge) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 96000, 6); } else { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ BorderProps o{}; o.border_color = a_0; o.border_radius = a_1; o.border_width = a_2; return o; }(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)), 0, 0); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color (Themes arg_0, ColorLevel arg_1) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == Themes::Light) { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.280361249e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294375158e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.294309365e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.291348678e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.296439008e9)); }}(); }}(); }}(); }}(); }}(); }}(); } else { return [&]() -> slint::Brush { if (arg_0 == Themes::Dark) { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.293190884e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.285558896e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.284572001e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.280558628e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.286043714e9)); }}(); }}(); }}(); }}(); }}(); }}(); } else { return [&]() -> slint::Brush { if (arg_0 == Themes::Error) { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.294960612e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.293502887e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.294216073e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.29374627e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.293742158e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.293737275e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.297253454e9)); }}(); }}(); }}(); }}(); }}(); }}(); } else { return [&]() -> slint::Brush { if (arg_0 == Themes::Info) { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.282927176e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294375158e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.293585642e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.29200661e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.290624957e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.296439008e9)); }}(); }}(); }}(); }}(); }}(); }}(); } else { return [&]() -> slint::Brush { if (arg_0 == Themes::Success) { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.293263355e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.28761466e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.2845961e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.281902946e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.280391242e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.279339581e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.285414242e9)); }}(); }}(); }}(); }}(); }}(); }}(); } else { return [&]() -> slint::Brush { if (arg_0 == Themes::Primary) { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.293263359e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.28715646e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.285315319e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.282032629e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.279800307e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.278945521e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.285543925e9)); }}(); }}(); }}(); }}(); }}(); }}(); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.29496446e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294956477e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.294753689e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.294551159e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.29454678e9)); } else { return [&]() -> slint::Brush { if (arg_1 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294478154e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.298062455e9)); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color_dark (ColorLevel arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.293190884e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.285558896e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.284572001e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.280558628e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.286043714e9)); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color_error (ColorLevel arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.294960612e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.293502887e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.294216073e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.29374627e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.293742158e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.293737275e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.297253454e9)); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color_info (ColorLevel arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.282927176e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294375158e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.293585642e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.29200661e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.290624957e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.296439008e9)); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color_light (ColorLevel arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.280361249e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294375158e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.294309365e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.291348678e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.296439008e9)); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color_primary (ColorLevel arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.293263359e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.28715646e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.285315319e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.282032629e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.279800307e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.278945521e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.285543925e9)); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color_success (ColorLevel arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.293263355e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.28761466e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.2845961e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.281902946e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.280391242e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.279339581e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.285414242e9)); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_color_warning (ColorLevel arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Font) { return slint::Brush(slint::Color::from_argb_encoded(+4.29496446e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weakest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294956477e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Weaker) { return slint::Brush(slint::Color::from_argb_encoded(+4.294753689e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Normal) { return slint::Brush(slint::Color::from_argb_encoded(+4.294551159e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deeper) { return slint::Brush(slint::Color::from_argb_encoded(+4.29454678e9)); } else { return [&]() -> slint::Brush { if (arg_0 == ColorLevel::Deepest) { return slint::Brush(slint::Color::from_argb_encoded(+4.294478154e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+2.298062455e9)); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_days (int arg_0, int arg_1, int arg_2) const -> int{
    [[maybe_unused]] auto self = this;
    return [&]() -> int { if (! (arg_1 < static_cast<int>(3))) { return ([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })((((((arg_2 + std::floor(((13 * (arg_1 + 1)) /(float) 5))) + ([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })(arg_0,100)) + std::floor((([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })(arg_0,100) /(float) 4))) + std::floor((std::floor((arg_0 /(float) 100)) /(float) 4))) -(float) (2 * std::floor((arg_0 /(float) 100)))),7); } else { return ([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })((((((arg_2 + std::floor(((13 * ((arg_1 + 12) + 1)) /(float) 5))) + ([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })((arg_0 -(float) 1),100)) + std::floor((([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })((arg_0 -(float) 1),100) /(float) 4))) + std::floor((std::floor(((arg_0 -(float) 1) /(float) 100)) /(float) 4))) -(float) (2 * std::floor(((arg_0 -(float) 1) /(float) 100)))),7); }}();
}

inline auto UseSurrealismFn_59::fn_get_padding (PaddingType arg_0) const -> PaddingProps{
    [[maybe_unused]] auto self = this;
    return [&]() -> PaddingProps { if (arg_0 == PaddingType::Small) { return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ PaddingProps o{}; o.padding_bottom = a_0; o.padding_left = a_1; o.padding_right = a_2; o.padding_same = a_3; o.padding_top = a_4; return o; }(8, 12, 12, 10, 8); } else { return [&]() -> PaddingProps { if (arg_0 == PaddingType::Normal) { return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ PaddingProps o{}; o.padding_bottom = a_0; o.padding_left = a_1; o.padding_right = a_2; o.padding_same = a_3; o.padding_top = a_4; return o; }(10, 16, 16, 14, 10); } else { return [&]() -> PaddingProps { if (arg_0 == PaddingType::Large) { return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ PaddingProps o{}; o.padding_bottom = a_0; o.padding_left = a_1; o.padding_right = a_2; o.padding_same = a_3; o.padding_top = a_4; return o; }(16, 24, 24, 20, 16); } else { return [&]() -> PaddingProps { if (arg_0 == PaddingType::None) { return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ PaddingProps o{}; o.padding_bottom = a_0; o.padding_left = a_1; o.padding_right = a_2; o.padding_same = a_3; o.padding_top = a_4; return o; }(0, 0, 0, 0, 0); } else { return [&]() -> PaddingProps { if (arg_0 == PaddingType::Tip) { return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ PaddingProps o{}; o.padding_bottom = a_0; o.padding_left = a_1; o.padding_right = a_2; o.padding_same = a_3; o.padding_top = a_4; return o; }(6, 10, 10, 8, 6); } else { return [&]() -> PaddingProps { if (arg_0 == PaddingType::Tag) { return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ PaddingProps o{}; o.padding_bottom = a_0; o.padding_left = a_1; o.padding_right = a_2; o.padding_same = a_3; o.padding_top = a_4; return o; }(4, 6, 6, 5, 4); } else { return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ PaddingProps o{}; o.padding_bottom = a_0; o.padding_left = a_1; o.padding_right = a_2; o.padding_same = a_3; o.padding_top = a_4; return o; }(2, 2, 2, 2, 2); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_shadow (ShadowType arg_0) const -> ShadowProps{
    [[maybe_unused]] auto self = this;
    return [&]() -> ShadowProps { if (arg_0 == ShadowType::Low1) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ ShadowProps o{}; o.blur = a_0; o.x = a_1; o.y = a_2; return o; }(2, 0, 1); } else { return [&]() -> ShadowProps { if (arg_0 == ShadowType::Low2) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ ShadowProps o{}; o.blur = a_0; o.x = a_1; o.y = a_2; return o; }(4, 0, 2); } else { return [&]() -> ShadowProps { if (arg_0 == ShadowType::Low3) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ ShadowProps o{}; o.blur = a_0; o.x = a_1; o.y = a_2; return o; }(8, 0, 4); } else { return [&]() -> ShadowProps { if (arg_0 == ShadowType::High1) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ ShadowProps o{}; o.blur = a_0; o.x = a_1; o.y = a_2; return o; }(14, 0, 4); } else { return [&]() -> ShadowProps { if (arg_0 == ShadowType::High2) { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ ShadowProps o{}; o.blur = a_0; o.x = a_1; o.y = a_2; return o; }(28, 0, 8); } else { return [&](const auto &a_0, const auto &a_1, const auto &a_2){ ShadowProps o{}; o.blur = a_0; o.x = a_1; o.y = a_2; return o; }(28, 0, 0); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_get_space (float arg_0) const -> float{
    [[maybe_unused]] auto self = this;
    return [&]() -> float { if (arg_0 >= 560) { return 56; } else { return [&]() -> float { if (arg_0 >= 520) { return 52; } else { return [&]() -> float { if (arg_0 >= 480) { return 48; } else { return [&]() -> float { if (arg_0 >= 440) { return 44; } else { return [&]() -> float { if (arg_0 >= 400) { return 40; } else { return [&]() -> float { if (arg_0 >= 360) { return 36; } else { return [&]() -> float { if (arg_0 >= 320) { return 32; } else { return [&]() -> float { if (arg_0 >= 280) { return 28; } else { return [&]() -> float { if (arg_0 >= 240) { return 24; } else { return [&]() -> float { if (arg_0 >= 200) { return 20; } else { return [&]() -> float { if (arg_0 >= 160) { return 16; } else { return [&]() -> float { if (arg_0 >= 120) { return 12; } else { return [&]() -> float { if (arg_0 >= 80) { return 8; } else { return [&]() -> float { if (arg_0 >= 60) { return 6; } else { return [&]() -> float { if (arg_0 >= 40) { return 4; } else { return [&]() -> float { if (arg_0 >= 20) { return 2; } else { return 0; }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_info_deeper (slint::Brush arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.294375158e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.293585642e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.293585642e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.29200661e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.290624957e9)); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_light_deeper (slint::Brush arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.294375158e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.292927712e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.294309365e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.291348678e9)); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_primary_deeper (slint::Brush arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.28715646e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.285315319e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.285315319e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.282032629e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.282032629e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.279800307e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.278945521e9)); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_success_deeper (slint::Brush arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.28761466e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.2845961e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.2845961e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.281902946e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.281902946e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.280391242e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.279339581e9)); }}(); }}(); }}();
}

inline auto UseSurrealismFn_59::fn_warning_deeper (slint::Brush arg_0) const -> slint::Brush{
    [[maybe_unused]] auto self = this;
    return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.294956477e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.294753689e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.294753689e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.294551159e9)); } else { return [&]() -> slint::Brush { if (arg_0 == slint::Brush(slint::Color::from_argb_encoded(+4.294551159e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.29454678e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.294478154e9)); }}(); }}(); }}();
}

inline FluentPalette_63::FluentPalette_63 (const class SharedGlobals *globals)
 : globals(globals)
{
    (void)this->globals;
    this->color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return this->globals->window().window_handle().color_scheme();
                        });
    this->dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ auto tmp_FluentPalette_63_color_scheme = this->globals->global_FluentPalette_63->color_scheme.get();;return [&]() -> bool { if (! (tmp_FluentPalette_63_color_scheme == slint::cbindgen_private::ColorScheme::Unknown)) { return (tmp_FluentPalette_63_color_scheme == slint::cbindgen_private::ColorScheme::Dark); } else { return (this->globals->window().window_handle().color_scheme() == slint::cbindgen_private::ColorScheme::Dark); }}(); }();
                        });
    this->foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (this->globals->global_FluentPalette_63->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}());
                        });
}

inline const slint::private_api::ItemTreeVTable Component_icon_container_13::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_icon_container_13>, slint::private_api::dealloc };

inline auto Component_icon_container_13::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_8 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_rectangle_8>(parent->self_weak.lock().value(), parent);
    this->btn_icon_14.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 2 - 1);
    self->icon_container_13_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_width.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_width.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_width.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_width.get(), 0))).stretch));
                        });
    self->icon_container_13_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_height.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_height.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_height.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_14.root_1_inner_4_preferred_height.get(), 0))).stretch));
                        });
    self->btn_icon_14.root_1_colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_icon_14.fn_get_colorize();
                        });
    self->btn_icon_14.root_1_height.set(16);
    self->btn_icon_14.root_1_source.set(slint::Image());
    self->btn_icon_14.root_1_theme.set(Themes::Dark);
    self->btn_icon_14.root_1_width.set(16);
    self->btn_icon_14.root_1_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_12_layout_cache.get(), 1, 0) -(float) 16) /(float) 2);
                        });
    self->btn_icon_14.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->btn_txt_17.height.get() -(float) 16) /(float) 2);
                        });
    self->btn_icon_14.root_1_height.set_constant();
    self->btn_icon_14.root_1_source.set_constant();
    self->btn_icon_14.root_1_theme.set_constant();
    self->btn_icon_14.root_1_width.set_constant();
}

inline auto Component_icon_container_13::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->btn_icon_14.user_init();
}

inline auto Component_icon_container_13::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->icon_container_13_layoutinfo_h.get() : self->icon_container_13_layoutinfo_v.get();
}

inline auto Component_icon_container_13::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->btn_txt_17.height.get()), float(slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_12_layout_cache.get(), 1, 0)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_12_layout_cache.get(), 0, 0)), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(16), float(16), float(((slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_12_layout_cache.get(), 1, 0) -(float) 16) /(float) 2)), float(((self->parent.lock().value()->btn_txt_17.height.get() -(float) 16) /(float) 2))));
    }
    if (index == 1) {
        return self->btn_icon_14.item_geometry(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_14.item_geometry(index - 1);
    } else return {};
}

inline auto Component_icon_container_13::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_14.accessible_role(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_14.accessible_role(index - 1);
    } else return {};
}

inline auto Component_icon_container_13::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 1) {
        return self->btn_icon_14.accessible_string_property(0, what);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_14.accessible_string_property(index - 1, what);
    } else return {};
}

inline auto Component_icon_container_13::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 1) {
        return self->btn_icon_14.accessibility_action(0, action);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_14.accessibility_action(index - 1, action);
    } else return ;
}

inline auto Component_icon_container_13::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_14.supported_accessibility_actions(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_14.supported_accessibility_actions(index - 1);
    } else return {};
}

inline auto Component_icon_container_13::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_14.element_infos(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_14.element_infos(index - 1);
    } else return {};
}

inline auto Component_icon_container_13::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_icon_container_13*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_icon_container_13*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_icon_container_13::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_icon_container_13::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_icon_container_13::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_icon_container_13::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_icon_container_13::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_icon_container_13*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 7 };
}

inline auto Component_icon_container_13::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_icon_container_13::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_icon_container_13::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(1, 3, 1, 2, false), 
slint::private_api::make_item_node(1, 4, 2, 3, false), 
slint::private_api::make_item_node(0, 5, 3, 4, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_icon_container_13::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_icon_container_13, icon_container_13) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Component_icon_container_13, btn_icon_14) +  offsetof(Icon_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Component_icon_container_13, btn_icon_14) +  offsetof(Icon_root_1, area_2) }, 
{ SLINT_GET_ITEM_VTABLE(RotateVTable), offsetof(Component_icon_container_13, btn_icon_14) +  offsetof(Icon_root_1, inner_rotation_angle_3) }, 
{ SLINT_GET_ITEM_VTABLE(ClippedImageVTable), offsetof(Component_icon_container_13, btn_icon_14) +  offsetof(Icon_root_1, inner_4) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_icon_container_13::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_icon_container_13*>(component.instance)->layout_info(o);
}

inline auto Component_icon_container_13::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_icon_container_13*>(component.instance)->item_geometry(index);
}

inline auto Component_icon_container_13::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_icon_container_13*>(component.instance)->accessible_role(index);
}

inline auto Component_icon_container_13::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_icon_container_13*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_icon_container_13::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_icon_container_13*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_icon_container_13::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_icon_container_13*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_icon_container_13::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_icon_container_13::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_icon_container_13*>(component.instance)->globals->window().window_handle();
}

inline auto Component_icon_container_13::create (class Component_rectangle_8 const * parent) -> slint::ComponentHandle<Component_icon_container_13>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_13>::make();
    auto self = const_cast<Component_icon_container_13 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_icon_container_13>{ self_rc };
}

inline Component_icon_container_13::~Component_icon_container_13 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_icon_container_13::init () -> void{
    user_init();
}

inline auto Component_icon_container_13::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_icon_container_23::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_icon_container_23>, slint::private_api::dealloc };

inline auto Component_icon_container_23::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_8 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_rectangle_8>(parent->self_weak.lock().value(), parent);
    this->btn_icon_24.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 2 - 1);
    self->icon_container_23_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_width.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_width.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_width.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_width.get(), 0))).stretch));
                        });
    self->icon_container_23_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_height.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_height.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_height.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_24.root_1_inner_4_preferred_height.get(), 0))).stretch));
                        });
    self->btn_icon_24.root_1_colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_icon_24.fn_get_colorize();
                        });
    self->btn_icon_24.root_1_height.set(16);
    self->btn_icon_24.root_1_source.set(slint::Image());
    self->btn_icon_24.root_1_theme.set(Themes::Dark);
    self->btn_icon_24.root_1_width.set(16);
    self->btn_icon_24.root_1_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_22_layout_cache.get(), 1, 0) -(float) 16) /(float) 2);
                        });
    self->btn_icon_24.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->btn_txt_27.height.get() -(float) 16) /(float) 2);
                        });
    self->btn_icon_24.root_1_height.set_constant();
    self->btn_icon_24.root_1_source.set_constant();
    self->btn_icon_24.root_1_theme.set_constant();
    self->btn_icon_24.root_1_width.set_constant();
}

inline auto Component_icon_container_23::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->btn_icon_24.user_init();
}

inline auto Component_icon_container_23::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->icon_container_23_layoutinfo_h.get() : self->icon_container_23_layoutinfo_v.get();
}

inline auto Component_icon_container_23::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->btn_txt_27.height.get()), float(slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_22_layout_cache.get(), 1, 0)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_22_layout_cache.get(), 0, 0)), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(16), float(16), float(((slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_8_layout_22_layout_cache.get(), 1, 0) -(float) 16) /(float) 2)), float(((self->parent.lock().value()->btn_txt_27.height.get() -(float) 16) /(float) 2))));
    }
    if (index == 1) {
        return self->btn_icon_24.item_geometry(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_24.item_geometry(index - 1);
    } else return {};
}

inline auto Component_icon_container_23::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_24.accessible_role(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_24.accessible_role(index - 1);
    } else return {};
}

inline auto Component_icon_container_23::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 1) {
        return self->btn_icon_24.accessible_string_property(0, what);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_24.accessible_string_property(index - 1, what);
    } else return {};
}

inline auto Component_icon_container_23::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 1) {
        return self->btn_icon_24.accessibility_action(0, action);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_24.accessibility_action(index - 1, action);
    } else return ;
}

inline auto Component_icon_container_23::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_24.supported_accessibility_actions(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_24.supported_accessibility_actions(index - 1);
    } else return {};
}

inline auto Component_icon_container_23::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_24.element_infos(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_24.element_infos(index - 1);
    } else return {};
}

inline auto Component_icon_container_23::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_icon_container_23*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_icon_container_23*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_icon_container_23::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_icon_container_23::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_icon_container_23::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_icon_container_23::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_icon_container_23::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_icon_container_23*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 13 };
}

inline auto Component_icon_container_23::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_icon_container_23::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_icon_container_23::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(1, 3, 1, 2, false), 
slint::private_api::make_item_node(1, 4, 2, 3, false), 
slint::private_api::make_item_node(0, 5, 3, 4, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_icon_container_23::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_icon_container_23, icon_container_23) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Component_icon_container_23, btn_icon_24) +  offsetof(Icon_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Component_icon_container_23, btn_icon_24) +  offsetof(Icon_root_1, area_2) }, 
{ SLINT_GET_ITEM_VTABLE(RotateVTable), offsetof(Component_icon_container_23, btn_icon_24) +  offsetof(Icon_root_1, inner_rotation_angle_3) }, 
{ SLINT_GET_ITEM_VTABLE(ClippedImageVTable), offsetof(Component_icon_container_23, btn_icon_24) +  offsetof(Icon_root_1, inner_4) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_icon_container_23::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_icon_container_23*>(component.instance)->layout_info(o);
}

inline auto Component_icon_container_23::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_icon_container_23*>(component.instance)->item_geometry(index);
}

inline auto Component_icon_container_23::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_icon_container_23*>(component.instance)->accessible_role(index);
}

inline auto Component_icon_container_23::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_icon_container_23*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_icon_container_23::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_icon_container_23*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_icon_container_23::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_icon_container_23*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_icon_container_23::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_icon_container_23::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_icon_container_23*>(component.instance)->globals->window().window_handle();
}

inline auto Component_icon_container_23::create (class Component_rectangle_8 const * parent) -> slint::ComponentHandle<Component_icon_container_23>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_23>::make();
    auto self = const_cast<Component_icon_container_23 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_icon_container_23>{ self_rc };
}

inline Component_icon_container_23::~Component_icon_container_23 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_icon_container_23::init () -> void{
    user_init();
}

inline auto Component_icon_container_23::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_8::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_8>, slint::private_api::dealloc };

inline auto Component_rectangle_8::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const MainWindow>(parent->self_weak.lock().value(), parent);
    self->rectangle_8.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->rectangle_8_btn_txt_17_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_17)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_8_btn_txt_17_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_17)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_8_btn_txt_17_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_17)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_8_btn_txt_17_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_17)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_8_btn_txt_17_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->btn_txt_17.width.get() -(float) self->btn_txt_17.width.get()) /(float) 2);
                        });
    self->rectangle_8_btn_txt_17_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->rectangle_8_layout_12_height.get() -(float) self->btn_txt_17.height.get()) /(float) 2);
                        });
    self->rectangle_8_btn_txt_27_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_27)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_8_btn_txt_27_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_27)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_8_btn_txt_27_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_27)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_8_btn_txt_27_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_27)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_8_btn_txt_27_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->btn_txt_27.width.get() -(float) self->btn_txt_27.width.get()) /(float) 2);
                        });
    self->rectangle_8_btn_txt_27_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->rectangle_8_layout_22_height.get() -(float) self->btn_txt_27.height.get()) /(float) 2);
                        });
    self->rectangle_8_layout_12_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_17.height.get();
                        });
    self->rectangle_8_layout_12_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->rectangle_8_txt_container_16_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_17.width.get(), layout_info.max_percent, self->btn_txt_17.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });slint::cbindgen_private::Slice<int> repeated_indices{ repeated_indices_array.data(), repeated_indices_array.size() }; slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->rectangle_8_txt_container_16_width.get(), 0),repeated_indices); }();
                        });
    self->rectangle_8_layout_12_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->rectangle_8_txt_container_16_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_17.width.get(), layout_info.max_percent, self->btn_txt_17.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->rectangle_8_layout_12_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(self->rectangle_8_txt_container_16_layoutinfo_v.get()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->rectangle_8_layout_22_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_27.height.get();
                        });
    self->rectangle_8_layout_22_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_1.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_1.len();self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->rectangle_8_txt_container_26_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_27.width.get(), layout_info.max_percent, self->btn_txt_27.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });slint::cbindgen_private::Slice<int> repeated_indices{ repeated_indices_array.data(), repeated_indices_array.size() }; slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->rectangle_8_txt_container_26_width.get(), 0),repeated_indices); }();
                        });
    self->rectangle_8_layout_22_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->rectangle_8_txt_container_26_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_27.width.get(), layout_info.max_percent, self->btn_txt_27.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->rectangle_8_layout_22_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(self->rectangle_8_txt_container_26_layoutinfo_v.get()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->rectangle_8_rectangle_10_clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->root_window_5_initGame.call(static_cast<int>(3));
                    });
    self->rectangle_8_rectangle_20_clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->root_window_5_initGame.call(static_cast<int>(4));
                    });
    self->rectangle_8_txt_container_16_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_17)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()));
                        });
    self->rectangle_8_txt_container_16_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_17)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()));
                        });
    self->rectangle_8_txt_container_16_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_17.width.get();
                        });
    self->rectangle_8_txt_container_26_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_27)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()));
                        });
    self->rectangle_8_txt_container_26_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_27)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()));
                        });
    self->rectangle_8_txt_container_26_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_27.width.get();
                        });
    self->_shadow_9.blur.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_18.has_hover.get()) { return 8; } else { return 2; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->_shadow_9.border_radius.set(4);
    self->_shadow_9.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)).color());
    self->_shadow_9.offset_x.set(0);
    self->_shadow_9.offset_y.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_18.has_hover.get()) { return 4; } else { return 1; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->rectangle_10.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294291522e9)));
    self->rectangle_10.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)));
    self->rectangle_10.border_radius.set(4);
    self->rectangle_10.border_width.set(2);
    self->_clip_11.border_bottom_left_radius.set(4);
    self->_clip_11.border_bottom_right_radius.set(4);
    self->_clip_11.border_top_left_radius.set(4);
    self->_clip_11.border_top_right_radius.set(4);
    self->_clip_11.border_width.set(2);
    self->_clip_11.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->txt_container_16.enabled.set(true);
    self->btn_txt_17.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(+4.293190884e9));
                        });
    self->btn_txt_17.font_family.set(slint::SharedString(u8"Arial"));
    self->btn_txt_17.font_italic.set(false);
    self->btn_txt_17.font_size.set(16);
    self->btn_txt_17.font_weight.set(static_cast<int>(400));
    self->btn_txt_17.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_8_btn_txt_17_preferred_height.get(), self->rectangle_8_btn_txt_17_min_height.get());
                        });
    self->btn_txt_17.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->btn_txt_17.letter_spacing.set(0);
    self->btn_txt_17.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->btn_txt_17.text.set(slint::SharedString(u8"3x3"));
    self->btn_txt_17.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->btn_txt_17.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_8_btn_txt_17_preferred_width.get(), self->rectangle_8_btn_txt_17_min_width.get());
                        });
    self->btn_txt_17.wrap.set(slint::cbindgen_private::TextWrap::NoWrap);
    self->toucharea_18.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if (! false) { self->rectangle_8_rectangle_10_clicked.call(); } else { self->rectangle_8_rectangle_10_pending.call(); }}();
                    });
    self->toucharea_18.enabled.set(true);
    self->toucharea_18.mouse_cursor.set(slint::cbindgen_private::MouseCursor::Pointer);
    self->_shadow_19.blur.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_28.has_hover.get()) { return 8; } else { return 2; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->_shadow_19.border_radius.set(4);
    self->_shadow_19.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)).color());
    self->_shadow_19.offset_x.set(0);
    self->_shadow_19.offset_y.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_28.has_hover.get()) { return 4; } else { return 1; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->rectangle_20.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294291522e9)));
    self->rectangle_20.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)));
    self->rectangle_20.border_radius.set(4);
    self->rectangle_20.border_width.set(2);
    self->_clip_21.border_bottom_left_radius.set(4);
    self->_clip_21.border_bottom_right_radius.set(4);
    self->_clip_21.border_top_left_radius.set(4);
    self->_clip_21.border_top_right_radius.set(4);
    self->_clip_21.border_width.set(2);
    self->_clip_21.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->txt_container_26.enabled.set(true);
    self->btn_txt_27.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(+4.293190884e9));
                        });
    self->btn_txt_27.font_family.set(slint::SharedString(u8"Arial"));
    self->btn_txt_27.font_italic.set(false);
    self->btn_txt_27.font_size.set(16);
    self->btn_txt_27.font_weight.set(static_cast<int>(400));
    self->btn_txt_27.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_8_btn_txt_27_preferred_height.get(), self->rectangle_8_btn_txt_27_min_height.get());
                        });
    self->btn_txt_27.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->btn_txt_27.letter_spacing.set(0);
    self->btn_txt_27.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->btn_txt_27.text.set(slint::SharedString(u8"4x4"));
    self->btn_txt_27.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->btn_txt_27.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_8_btn_txt_27_preferred_width.get(), self->rectangle_8_btn_txt_27_min_width.get());
                        });
    self->btn_txt_27.wrap.set(slint::cbindgen_private::TextWrap::NoWrap);
    self->toucharea_28.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if (! false) { self->rectangle_8_rectangle_20_clicked.call(); } else { self->rectangle_8_rectangle_20_pending.call(); }}();
                    });
    self->toucharea_28.enabled.set(true);
    self->toucharea_28.mouse_cursor.set(slint::cbindgen_private::MouseCursor::Pointer);
    self->rectangle_8.background.set_constant();
    self->_shadow_9.border_radius.set_constant();
    self->_shadow_9.color.set_constant();
    self->_shadow_9.offset_x.set_constant();
    self->rectangle_10.background.set_constant();
    self->rectangle_10.border_color.set_constant();
    self->rectangle_10.border_radius.set_constant();
    self->rectangle_10.border_width.set_constant();
    self->_clip_11.border_bottom_left_radius.set_constant();
    self->_clip_11.border_bottom_right_radius.set_constant();
    self->_clip_11.border_top_left_radius.set_constant();
    self->_clip_11.border_top_right_radius.set_constant();
    self->_clip_11.border_width.set_constant();
    self->txt_container_16.enabled.set_constant();
    self->txt_container_16.mouse_cursor.set_constant();
    self->btn_txt_17.font_family.set_constant();
    self->btn_txt_17.font_italic.set_constant();
    self->btn_txt_17.font_size.set_constant();
    self->btn_txt_17.font_weight.set_constant();
    self->btn_txt_17.horizontal_alignment.set_constant();
    self->btn_txt_17.letter_spacing.set_constant();
    self->btn_txt_17.overflow.set_constant();
    self->btn_txt_17.stroke.set_constant();
    self->btn_txt_17.stroke_style.set_constant();
    self->btn_txt_17.stroke_width.set_constant();
    self->btn_txt_17.vertical_alignment.set_constant();
    self->btn_txt_17.wrap.set_constant();
    self->toucharea_18.enabled.set_constant();
    self->toucharea_18.mouse_cursor.set_constant();
    self->_shadow_19.border_radius.set_constant();
    self->_shadow_19.color.set_constant();
    self->_shadow_19.offset_x.set_constant();
    self->rectangle_20.background.set_constant();
    self->rectangle_20.border_color.set_constant();
    self->rectangle_20.border_radius.set_constant();
    self->rectangle_20.border_width.set_constant();
    self->_clip_21.border_bottom_left_radius.set_constant();
    self->_clip_21.border_bottom_right_radius.set_constant();
    self->_clip_21.border_top_left_radius.set_constant();
    self->_clip_21.border_top_right_radius.set_constant();
    self->_clip_21.border_width.set_constant();
    self->txt_container_26.enabled.set_constant();
    self->txt_container_26.mouse_cursor.set_constant();
    self->btn_txt_27.font_family.set_constant();
    self->btn_txt_27.font_italic.set_constant();
    self->btn_txt_27.font_size.set_constant();
    self->btn_txt_27.font_weight.set_constant();
    self->btn_txt_27.horizontal_alignment.set_constant();
    self->btn_txt_27.letter_spacing.set_constant();
    self->btn_txt_27.overflow.set_constant();
    self->btn_txt_27.stroke.set_constant();
    self->btn_txt_27.stroke_style.set_constant();
    self->btn_txt_27.stroke_width.set_constant();
    self->btn_txt_27.vertical_alignment.set_constant();
    self->btn_txt_27.wrap.set_constant();
    self->toucharea_28.enabled.set_constant();
    self->toucharea_28.mouse_cursor.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return false; });
    self->repeater_1.set_model_binding([self] { (void)self; return false; });
}

inline auto Component_rectangle_8::user_init () -> void{
    [[maybe_unused]] auto self = this;
    [&]{ ;; }();
    [&]{ ;; }();
}

inline auto Component_rectangle_8::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? SLINT_GET_ITEM_VTABLE(RectangleVTable)->layout_info({SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->rectangle_8)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()) : SLINT_GET_ITEM_VTABLE(RectangleVTable)->layout_info({SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->rectangle_8)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle());
}

inline auto Component_rectangle_8::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * (1 * self->parent.lock().value()->root_window_5_fixed_height.get()))), float((1 * (1 * self->parent.lock().value()->root_window_5_fixed_width.get()))), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(100), float(200)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(100), float(200)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(300), float(200)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(300), float(200)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(0), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_17.height.get()), float(self->btn_txt_17.width.get()), float(((80 -(float) self->btn_txt_17.width.get()) /(float) 2)), float(((80 -(float) self->btn_txt_17.height.get()) /(float) 2))));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(0), float(0)));
        case 9: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_17.height.get()), float(self->btn_txt_17.width.get()), float(self->rectangle_8_layout_12_layout_cache.get()[2]), float(0)));
        case 10: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_17.height.get()), float(self->btn_txt_17.width.get()), float(self->rectangle_8_btn_txt_17_x.get()), float(self->rectangle_8_btn_txt_17_y.get())));
        case 11: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(0), float(0)));
        case 12: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_27.height.get()), float(self->btn_txt_27.width.get()), float(((80 -(float) self->btn_txt_27.width.get()) /(float) 2)), float(((80 -(float) self->btn_txt_27.height.get()) /(float) 2))));
        case 13: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(0), float(0)));
        case 15: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_27.height.get()), float(self->btn_txt_27.width.get()), float(self->rectangle_8_layout_22_layout_cache.get()[2]), float(0)));
        case 16: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_27.height.get()), float(self->btn_txt_27.width.get()), float(self->rectangle_8_btn_txt_27_x.get()), float(self->rectangle_8_btn_txt_27_y.get())));
    }
    return {};
}

inline auto Component_rectangle_8::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 10: return slint::cbindgen_private::AccessibleRole::Text;
        case 16: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component_rectangle_8::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (10 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->btn_txt_17.text.get();
        case (16 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->btn_txt_27.text.get();
    }
    return {};
}

inline auto Component_rectangle_8::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_8::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_8::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_8::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            } };
        std::abort();
}

inline auto Component_rectangle_8::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            } };
        std::abort();
}

inline auto Component_rectangle_8::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto Component_rectangle_8::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_8*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_8*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_8::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_8::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component_rectangle_8*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component_rectangle_8::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_8*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component_rectangle_8::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_8::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_8*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 2 };
}

inline auto Component_rectangle_8::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_8::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_rectangle_8::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(4, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 5, 0, 1, false), 
slint::private_api::make_item_node(1, 5, 0, 2, false), 
slint::private_api::make_item_node(0, 11, 0, 3, false), 
slint::private_api::make_item_node(1, 11, 0, 4, false), 
slint::private_api::make_item_node(2, 6, 2, 5, false), 
slint::private_api::make_item_node(2, 8, 5, 6, false), 
slint::private_api::make_item_node(0, 11, 5, 7, false), 
slint::private_api::make_dyn_node(0, 6), 
slint::private_api::make_item_node(1, 10, 6, 8, false), 
slint::private_api::make_item_node(0, 11, 9, 9, true), 
slint::private_api::make_item_node(2, 12, 4, 10, false), 
slint::private_api::make_item_node(2, 14, 11, 11, false), 
slint::private_api::make_item_node(0, 17, 11, 12, false), 
slint::private_api::make_dyn_node(1, 12), 
slint::private_api::make_item_node(1, 16, 12, 13, false), 
slint::private_api::make_item_node(0, 17, 15, 14, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_rectangle_8::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component_rectangle_8, rectangle_8) }, 
{ SLINT_GET_ITEM_VTABLE(BoxShadowVTable),  offsetof(Component_rectangle_8, _shadow_9) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_rectangle_8, rectangle_10) }, 
{ SLINT_GET_ITEM_VTABLE(BoxShadowVTable),  offsetof(Component_rectangle_8, _shadow_19) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_rectangle_8, rectangle_20) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_rectangle_8, _clip_11) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_rectangle_8, layout_12) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_8, toucharea_18) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_8, txt_container_16) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component_rectangle_8, btn_txt_17) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_rectangle_8, _clip_21) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_rectangle_8, layout_22) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_8, toucharea_28) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_8, txt_container_26) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component_rectangle_8, btn_txt_27) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_rectangle_8::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_8*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_8::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_8*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_8::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_8*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_8::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_8*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_8::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_8*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_8::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_8*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_8::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_8::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_8*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_8::create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_8>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_8>::make();
    auto self = const_cast<Component_rectangle_8 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_8>{ self_rc };
}

inline Component_rectangle_8::~Component_rectangle_8 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_8::init () -> void{
    user_init();
}

inline auto Component_rectangle_8::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_icon_container_35::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_icon_container_35>, slint::private_api::dealloc };

inline auto Component_icon_container_35::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_30 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_rectangle_30>(parent->self_weak.lock().value(), parent);
    this->btn_icon_36.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 2 - 1);
    self->icon_container_35_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_width.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_width.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_width.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_width.get(), 0))).stretch));
                        });
    self->icon_container_35_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_height.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_height.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_height.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_36.root_1_inner_4_preferred_height.get(), 0))).stretch));
                        });
    self->btn_icon_36.root_1_colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_icon_36.fn_get_colorize();
                        });
    self->btn_icon_36.root_1_height.set(16);
    self->btn_icon_36.root_1_source.set(slint::Image());
    self->btn_icon_36.root_1_theme.set(Themes::Dark);
    self->btn_icon_36.root_1_width.set(16);
    self->btn_icon_36.root_1_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_30_layout_34_layout_cache.get(), 1, 0) -(float) 16) /(float) 2);
                        });
    self->btn_icon_36.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->btn_txt_39.height.get() -(float) 16) /(float) 2);
                        });
    self->btn_icon_36.root_1_height.set_constant();
    self->btn_icon_36.root_1_source.set_constant();
    self->btn_icon_36.root_1_theme.set_constant();
    self->btn_icon_36.root_1_width.set_constant();
}

inline auto Component_icon_container_35::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->btn_icon_36.user_init();
}

inline auto Component_icon_container_35::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->icon_container_35_layoutinfo_h.get() : self->icon_container_35_layoutinfo_v.get();
}

inline auto Component_icon_container_35::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->btn_txt_39.height.get()), float(slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_30_layout_34_layout_cache.get(), 1, 0)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_30_layout_34_layout_cache.get(), 0, 0)), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(16), float(16), float(((slint::private_api::layout_cache_access(self->parent.lock().value()->rectangle_30_layout_34_layout_cache.get(), 1, 0) -(float) 16) /(float) 2)), float(((self->parent.lock().value()->btn_txt_39.height.get() -(float) 16) /(float) 2))));
    }
    if (index == 1) {
        return self->btn_icon_36.item_geometry(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_36.item_geometry(index - 1);
    } else return {};
}

inline auto Component_icon_container_35::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_36.accessible_role(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_36.accessible_role(index - 1);
    } else return {};
}

inline auto Component_icon_container_35::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 1) {
        return self->btn_icon_36.accessible_string_property(0, what);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_36.accessible_string_property(index - 1, what);
    } else return {};
}

inline auto Component_icon_container_35::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 1) {
        return self->btn_icon_36.accessibility_action(0, action);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_36.accessibility_action(index - 1, action);
    } else return ;
}

inline auto Component_icon_container_35::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_36.supported_accessibility_actions(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_36.supported_accessibility_actions(index - 1);
    } else return {};
}

inline auto Component_icon_container_35::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_36.element_infos(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_36.element_infos(index - 1);
    } else return {};
}

inline auto Component_icon_container_35::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_icon_container_35*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_icon_container_35*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_icon_container_35::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_icon_container_35::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_icon_container_35::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_icon_container_35::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_icon_container_35::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_icon_container_35*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 7 };
}

inline auto Component_icon_container_35::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_icon_container_35::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_icon_container_35::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(1, 3, 1, 2, false), 
slint::private_api::make_item_node(1, 4, 2, 3, false), 
slint::private_api::make_item_node(0, 5, 3, 4, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_icon_container_35::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_icon_container_35, icon_container_35) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Component_icon_container_35, btn_icon_36) +  offsetof(Icon_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Component_icon_container_35, btn_icon_36) +  offsetof(Icon_root_1, area_2) }, 
{ SLINT_GET_ITEM_VTABLE(RotateVTable), offsetof(Component_icon_container_35, btn_icon_36) +  offsetof(Icon_root_1, inner_rotation_angle_3) }, 
{ SLINT_GET_ITEM_VTABLE(ClippedImageVTable), offsetof(Component_icon_container_35, btn_icon_36) +  offsetof(Icon_root_1, inner_4) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_icon_container_35::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_icon_container_35*>(component.instance)->layout_info(o);
}

inline auto Component_icon_container_35::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_icon_container_35*>(component.instance)->item_geometry(index);
}

inline auto Component_icon_container_35::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_icon_container_35*>(component.instance)->accessible_role(index);
}

inline auto Component_icon_container_35::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_icon_container_35*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_icon_container_35::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_icon_container_35*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_icon_container_35::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_icon_container_35*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_icon_container_35::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_icon_container_35::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_icon_container_35*>(component.instance)->globals->window().window_handle();
}

inline auto Component_icon_container_35::create (class Component_rectangle_30 const * parent) -> slint::ComponentHandle<Component_icon_container_35>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_35>::make();
    auto self = const_cast<Component_icon_container_35 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_icon_container_35>{ self_rc };
}

inline Component_icon_container_35::~Component_icon_container_35 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_icon_container_35::init () -> void{
    user_init();
}

inline auto Component_icon_container_35::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_icon_container_46::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_icon_container_46>, slint::private_api::dealloc };

inline auto Component_icon_container_46::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_42 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component__shadow_42>(parent->self_weak.lock().value(), parent);
    this->btn_icon_47.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 2 - 1);
    self->icon_container_46_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_width.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_width.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_width.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_width.get(), 0))).stretch));
                        });
    self->icon_container_46_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_height.get(), 0))).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_height.get(), 0))).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_height.get(), 0))).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->btn_icon_47.root_1_inner_4_preferred_height.get(), 0))).stretch));
                        });
    self->btn_icon_47.root_1_colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_icon_47.fn_get_colorize();
                        });
    self->btn_icon_47.root_1_height.set(16);
    self->btn_icon_47.root_1_source.set(slint::Image());
    self->btn_icon_47.root_1_theme.set(Themes::Dark);
    self->btn_icon_47.root_1_width.set(16);
    self->btn_icon_47.root_1_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::layout_cache_access(self->parent.lock().value()->_shadow_42_layout_45_layout_cache.get(), 1, 0) -(float) 16) /(float) 2);
                        });
    self->btn_icon_47.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->btn_txt_50.height.get() -(float) 16) /(float) 2);
                        });
    self->btn_icon_47.root_1_height.set_constant();
    self->btn_icon_47.root_1_source.set_constant();
    self->btn_icon_47.root_1_theme.set_constant();
    self->btn_icon_47.root_1_width.set_constant();
}

inline auto Component_icon_container_46::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->btn_icon_47.user_init();
}

inline auto Component_icon_container_46::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->icon_container_46_layoutinfo_h.get() : self->icon_container_46_layoutinfo_v.get();
}

inline auto Component_icon_container_46::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->btn_txt_50.height.get()), float(slint::private_api::layout_cache_access(self->parent.lock().value()->_shadow_42_layout_45_layout_cache.get(), 1, 0)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->_shadow_42_layout_45_layout_cache.get(), 0, 0)), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(16), float(16), float(((slint::private_api::layout_cache_access(self->parent.lock().value()->_shadow_42_layout_45_layout_cache.get(), 1, 0) -(float) 16) /(float) 2)), float(((self->parent.lock().value()->btn_txt_50.height.get() -(float) 16) /(float) 2))));
    }
    if (index == 1) {
        return self->btn_icon_47.item_geometry(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_47.item_geometry(index - 1);
    } else return {};
}

inline auto Component_icon_container_46::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_47.accessible_role(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_47.accessible_role(index - 1);
    } else return {};
}

inline auto Component_icon_container_46::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 1) {
        return self->btn_icon_47.accessible_string_property(0, what);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_47.accessible_string_property(index - 1, what);
    } else return {};
}

inline auto Component_icon_container_46::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 1) {
        return self->btn_icon_47.accessibility_action(0, action);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_47.accessibility_action(index - 1, action);
    } else return ;
}

inline auto Component_icon_container_46::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_47.supported_accessibility_actions(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_47.supported_accessibility_actions(index - 1);
    } else return {};
}

inline auto Component_icon_container_46::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->btn_icon_47.element_infos(0);
    } else if (index >= 2 && index < 5) {
        return self->btn_icon_47.element_infos(index - 1);
    } else return {};
}

inline auto Component_icon_container_46::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_icon_container_46*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_icon_container_46*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_icon_container_46::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_icon_container_46::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_icon_container_46::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_icon_container_46::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_icon_container_46::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_icon_container_46*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 4 };
}

inline auto Component_icon_container_46::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_icon_container_46::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_icon_container_46::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(1, 3, 1, 2, false), 
slint::private_api::make_item_node(1, 4, 2, 3, false), 
slint::private_api::make_item_node(0, 5, 3, 4, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_icon_container_46::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_icon_container_46, icon_container_46) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Component_icon_container_46, btn_icon_47) +  offsetof(Icon_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Component_icon_container_46, btn_icon_47) +  offsetof(Icon_root_1, area_2) }, 
{ SLINT_GET_ITEM_VTABLE(RotateVTable), offsetof(Component_icon_container_46, btn_icon_47) +  offsetof(Icon_root_1, inner_rotation_angle_3) }, 
{ SLINT_GET_ITEM_VTABLE(ClippedImageVTable), offsetof(Component_icon_container_46, btn_icon_47) +  offsetof(Icon_root_1, inner_4) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_icon_container_46::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_icon_container_46*>(component.instance)->layout_info(o);
}

inline auto Component_icon_container_46::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_icon_container_46*>(component.instance)->item_geometry(index);
}

inline auto Component_icon_container_46::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_icon_container_46*>(component.instance)->accessible_role(index);
}

inline auto Component_icon_container_46::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_icon_container_46*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_icon_container_46::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_icon_container_46*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_icon_container_46::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_icon_container_46*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_icon_container_46::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_icon_container_46::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_icon_container_46*>(component.instance)->globals->window().window_handle();
}

inline auto Component_icon_container_46::create (class Component__shadow_42 const * parent) -> slint::ComponentHandle<Component_icon_container_46>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_icon_container_46>::make();
    auto self = const_cast<Component_icon_container_46 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_icon_container_46>{ self_rc };
}

inline Component_icon_container_46::~Component_icon_container_46 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_icon_container_46::init () -> void{
    user_init();
}

inline auto Component_icon_container_46::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component__shadow_42::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component__shadow_42>, slint::private_api::dealloc };

inline auto Component__shadow_42::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_41 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_rectangle_41>(parent->self_weak.lock().value(), parent);
    self->_shadow_42.blur.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_51.has_hover.get()) { return 8; } else { return 2; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->_shadow_42.border_radius.set(4);
    self->_shadow_42_btn_txt_50_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_50)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).min;
                        });
    self->_shadow_42_btn_txt_50_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_50)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).min;
                        });
    self->_shadow_42_btn_txt_50_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_50)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).preferred;
                        });
    self->_shadow_42_btn_txt_50_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_50)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).preferred;
                        });
    self->_shadow_42_btn_txt_50_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->btn_txt_50.width.get() -(float) self->btn_txt_50.width.get()) /(float) 2);
                        });
    self->_shadow_42_btn_txt_50_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->_shadow_42_layout_45_height.get() -(float) self->btn_txt_50.height.get()) /(float) 2);
                        });
    self->_shadow_42.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)).color());
    self->_shadow_42_layout_45_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_50.height.get();
                        });
    self->_shadow_42_layout_45_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->_shadow_42_txt_container_49_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_50.width.get(), layout_info.max_percent, self->btn_txt_50.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });slint::cbindgen_private::Slice<int> repeated_indices{ repeated_indices_array.data(), repeated_indices_array.size() }; slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->_shadow_42_txt_container_49_width.get(), 0),repeated_indices); }();
                        });
    self->_shadow_42_layout_45_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->_shadow_42_txt_container_49_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_50.width.get(), layout_info.max_percent, self->btn_txt_50.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->_shadow_42_layout_45_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(self->_shadow_42_txt_container_49_layoutinfo_v.get()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->_shadow_42.offset_x.set(0);
    self->_shadow_42.offset_y.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_51.has_hover.get()) { return 4; } else { return 1; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->_shadow_42_rectangle_43_clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->parent.lock().value()->parent.lock().value()->root_window_5_onClickBtn.call(self->parent.lock().value()->model_index.get());
                    });
    self->_shadow_42_txt_container_49_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_50)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()));
                        });
    self->_shadow_42_txt_container_49_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_50)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()));
                        });
    self->_shadow_42_txt_container_49_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_50.width.get();
                        });
    self->rectangle_43.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294291522e9)));
    self->rectangle_43.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)));
    self->rectangle_43.border_radius.set(4);
    self->rectangle_43.border_width.set(2);
    self->_clip_44.border_bottom_left_radius.set(4);
    self->_clip_44.border_bottom_right_radius.set(4);
    self->_clip_44.border_top_left_radius.set(4);
    self->_clip_44.border_top_right_radius.set(4);
    self->_clip_44.border_width.set(2);
    self->_clip_44.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->txt_container_49.enabled.set(true);
    self->btn_txt_50.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(+4.293190884e9));
                        });
    self->btn_txt_50.font_family.set(slint::SharedString(u8"Arial"));
    self->btn_txt_50.font_italic.set(false);
    self->btn_txt_50.font_size.set(16);
    self->btn_txt_50.font_weight.set(static_cast<int>(400));
    self->btn_txt_50.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->_shadow_42_btn_txt_50_preferred_height.get(), self->_shadow_42_btn_txt_50_min_height.get());
                        });
    self->btn_txt_50.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->btn_txt_50.letter_spacing.set(0);
    self->btn_txt_50.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->btn_txt_50.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->parent.lock().value()->model_data.get().number);
                        });
    self->btn_txt_50.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->btn_txt_50.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->_shadow_42_btn_txt_50_preferred_width.get(), self->_shadow_42_btn_txt_50_min_width.get());
                        });
    self->btn_txt_50.wrap.set(slint::cbindgen_private::TextWrap::NoWrap);
    self->toucharea_51.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if (! false) { self->_shadow_42_rectangle_43_clicked.call(); } else { self->_shadow_42_rectangle_43_pending.call(); }}();
                    });
    self->toucharea_51.enabled.set(true);
    self->toucharea_51.mouse_cursor.set(slint::cbindgen_private::MouseCursor::Pointer);
    self->_shadow_42.border_radius.set_constant();
    self->_shadow_42.color.set_constant();
    self->_shadow_42.offset_x.set_constant();
    self->rectangle_43.background.set_constant();
    self->rectangle_43.border_color.set_constant();
    self->rectangle_43.border_radius.set_constant();
    self->rectangle_43.border_width.set_constant();
    self->_clip_44.border_bottom_left_radius.set_constant();
    self->_clip_44.border_bottom_right_radius.set_constant();
    self->_clip_44.border_top_left_radius.set_constant();
    self->_clip_44.border_top_right_radius.set_constant();
    self->_clip_44.border_width.set_constant();
    self->txt_container_49.enabled.set_constant();
    self->txt_container_49.mouse_cursor.set_constant();
    self->btn_txt_50.font_family.set_constant();
    self->btn_txt_50.font_italic.set_constant();
    self->btn_txt_50.font_size.set_constant();
    self->btn_txt_50.font_weight.set_constant();
    self->btn_txt_50.horizontal_alignment.set_constant();
    self->btn_txt_50.letter_spacing.set_constant();
    self->btn_txt_50.overflow.set_constant();
    self->btn_txt_50.stroke.set_constant();
    self->btn_txt_50.stroke_style.set_constant();
    self->btn_txt_50.stroke_width.set_constant();
    self->btn_txt_50.vertical_alignment.set_constant();
    self->btn_txt_50.wrap.set_constant();
    self->toucharea_51.enabled.set_constant();
    self->toucharea_51.mouse_cursor.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return false; });
}

inline auto Component__shadow_42::user_init () -> void{
    [[maybe_unused]] auto self = this;
    [&]{ ;; }();
}

inline auto Component__shadow_42::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->_shadow_42_layout_45_layoutinfo_h.get()) : ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->_shadow_42_layout_45_layoutinfo_v.get());
}

inline auto Component__shadow_42::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float((90 + (self->parent.lock().value()->model_data.get().posX * 80))), float((90 + (self->parent.lock().value()->model_data.get().posY * 80)))));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_50.height.get()), float(self->btn_txt_50.width.get()), float(((80 -(float) self->btn_txt_50.width.get()) /(float) 2)), float(((80 -(float) self->btn_txt_50.height.get()) /(float) 2))));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(80), float(80), float(0), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_50.height.get()), float(self->btn_txt_50.width.get()), float(self->_shadow_42_layout_45_layout_cache.get()[2]), float(0)));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_50.height.get()), float(self->btn_txt_50.width.get()), float(self->_shadow_42_btn_txt_50_x.get()), float(self->_shadow_42_btn_txt_50_y.get())));
    }
    return {};
}

inline auto Component__shadow_42::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 7: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component__shadow_42::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (7 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->btn_txt_50.text.get();
    }
    return {};
}

inline auto Component__shadow_42::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component__shadow_42::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component__shadow_42::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component__shadow_42::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto Component__shadow_42::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto Component__shadow_42::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto Component__shadow_42::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component__shadow_42*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component__shadow_42*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component__shadow_42::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component__shadow_42::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component__shadow_42*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component__shadow_42::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component__shadow_42*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component__shadow_42::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component__shadow_42::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component__shadow_42*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 0 };
}

inline auto Component__shadow_42::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component__shadow_42::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component__shadow_42::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(2, 3, 1, 2, false), 
slint::private_api::make_item_node(2, 5, 2, 3, false), 
slint::private_api::make_item_node(0, 8, 2, 4, false), 
slint::private_api::make_dyn_node(0, 3), 
slint::private_api::make_item_node(1, 7, 3, 5, false), 
slint::private_api::make_item_node(0, 8, 6, 6, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component__shadow_42::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BoxShadowVTable),  offsetof(Component__shadow_42, _shadow_42) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component__shadow_42, rectangle_43) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component__shadow_42, _clip_44) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component__shadow_42, layout_45) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component__shadow_42, toucharea_51) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component__shadow_42, txt_container_49) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component__shadow_42, btn_txt_50) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component__shadow_42::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component__shadow_42*>(component.instance)->layout_info(o);
}

inline auto Component__shadow_42::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component__shadow_42*>(component.instance)->item_geometry(index);
}

inline auto Component__shadow_42::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component__shadow_42*>(component.instance)->accessible_role(index);
}

inline auto Component__shadow_42::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component__shadow_42*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component__shadow_42::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component__shadow_42*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component__shadow_42::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component__shadow_42*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component__shadow_42::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component__shadow_42::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component__shadow_42*>(component.instance)->globals->window().window_handle();
}

inline auto Component__shadow_42::create (class Component_rectangle_41 const * parent) -> slint::ComponentHandle<Component__shadow_42>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_42>::make();
    auto self = const_cast<Component__shadow_42 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component__shadow_42>{ self_rc };
}

inline Component__shadow_42::~Component__shadow_42 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component__shadow_42::init () -> void{
    user_init();
}

inline auto Component__shadow_42::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_41::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_41>, slint::private_api::dealloc };

inline auto Component_rectangle_41::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_30 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_rectangle_30>(parent->self_weak.lock().value(), parent);
    self->repeater_0.set_model_binding([self] { (void)self; return (std::abs(float(self->model_index.get() - self->parent.lock().value()->parent.lock().value()->root_window_5_current.get())) >= std::numeric_limits<float>::epsilon()); });
}

inline auto Component_rectangle_41::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_rectangle_41::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? SLINT_GET_ITEM_VTABLE(EmptyVTable)->layout_info({SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->rectangle_41)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()) : SLINT_GET_ITEM_VTABLE(EmptyVTable)->layout_info({SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->rectangle_41)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle());
}

inline auto Component_rectangle_41::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * (1 * self->parent.lock().value()->parent.lock().value()->root_window_5_fixed_height.get()))), float((1 * (1 * self->parent.lock().value()->parent.lock().value()->root_window_5_fixed_width.get()))), float(0), float(0)));
    }
    return {};
}

inline auto Component_rectangle_41::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_41::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_rectangle_41::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_41::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_41::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_41::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto Component_rectangle_41::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto Component_rectangle_41::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto Component_rectangle_41::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_41*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_41*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_41::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_41::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component_rectangle_41*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component_rectangle_41::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_41*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component_rectangle_41::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_41::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_41*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 2 };
}

inline auto Component_rectangle_41::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_41::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    auto self = reinterpret_cast<const Component_rectangle_41*>(component.instance);
    return self->model_index.get();
}

inline auto Component_rectangle_41::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_dyn_node(0, 0) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_rectangle_41::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_rectangle_41, rectangle_41) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_rectangle_41::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_41*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_41::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_41*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_41::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_41*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_41::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_41*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_41::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_41*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_41::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_41*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_41::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_41::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_41*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_41::create (class Component_rectangle_30 const * parent) -> slint::ComponentHandle<Component_rectangle_41>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_41>::make();
    auto self = const_cast<Component_rectangle_41 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_41>{ self_rc };
}

inline Component_rectangle_41::~Component_rectangle_41 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_41::update_data ([[maybe_unused]] int i, [[maybe_unused]] const Cell &data) const -> void{
    [[maybe_unused]] auto self = this;
    self->model_index.set(i);
    self->model_data.set(data);
}

inline auto Component_rectangle_41::init () -> void{
    user_init();
}

inline auto Component_rectangle_41::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_54::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_54>, slint::private_api::dealloc };

inline auto Component_rectangle_54::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_30 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_rectangle_30>(parent->self_weak.lock().value(), parent);
    self->rectangle_54.background.set(slint::Brush(slint::Color::from_argb_encoded(+1.711336251e9)));
    self->rectangle_54_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(SimpleTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_55)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()));
                        });
    self->rectangle_54_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(SimpleTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_55)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()));
                        });
    self->rectangle_54_text_55_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(SimpleTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_55)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_54_text_55_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(SimpleTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_55)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_54_text_55_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(SimpleTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_55)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_54_text_55_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(SimpleTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_55)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_54_text_55_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (((1 * (1 * (1 * self->parent.lock().value()->parent.lock().value()->root_window_5_fixed_width.get()))) -(float) self->text_55.width.get()) /(float) 2);
                        });
    self->rectangle_54_text_55_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (((1 * (1 * (1 * self->parent.lock().value()->parent.lock().value()->root_window_5_fixed_height.get()))) -(float) self->text_55.height.get()) /(float) 2);
                        });
    self->text_55.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_63->foreground.get();
                        });
    self->text_55.font_size.set(32);
    self->text_55.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_54_text_55_preferred_height.get(), self->rectangle_54_text_55_min_height.get());
                        });
    self->text_55.text.set(slint::SharedString(u8"You win!"));
    self->text_55.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_54_text_55_preferred_width.get(), self->rectangle_54_text_55_min_width.get());
                        });
    self->rectangle_54.background.set_constant();
    self->text_55.font_size.set_constant();
    self->text_55.font_weight.set_constant();
    self->text_55.horizontal_alignment.set_constant();
    self->text_55.text.set_constant();
    self->text_55.vertical_alignment.set_constant();
}

inline auto Component_rectangle_54::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_rectangle_54::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->rectangle_54_layoutinfo_h.get() : self->rectangle_54_layoutinfo_v.get();
}

inline auto Component_rectangle_54::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * (1 * (1 * self->parent.lock().value()->parent.lock().value()->root_window_5_fixed_height.get())))), float((1 * (1 * (1 * self->parent.lock().value()->parent.lock().value()->root_window_5_fixed_width.get())))), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->text_55.height.get()), float(self->text_55.width.get()), float(self->rectangle_54_text_55_x.get()), float(self->rectangle_54_text_55_y.get())));
    }
    return {};
}

inline auto Component_rectangle_54::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component_rectangle_54::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"You win!");
    }
    return {};
}

inline auto Component_rectangle_54::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_54::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_54::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_54::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_54*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_54*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_54::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_54::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_rectangle_54::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_rectangle_54::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_54::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_54*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 3 };
}

inline auto Component_rectangle_54::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_54::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_rectangle_54::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_rectangle_54::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component_rectangle_54, rectangle_54) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Component_rectangle_54, text_55) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_rectangle_54::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_54*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_54::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_54*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_54::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_54*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_54::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_54*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_54::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_54*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_54::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_54*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_54::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_54::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_54*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_54::create (class Component_rectangle_30 const * parent) -> slint::ComponentHandle<Component_rectangle_54>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_54>::make();
    auto self = const_cast<Component_rectangle_54 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_54>{ self_rc };
}

inline Component_rectangle_54::~Component_rectangle_54 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_54::init () -> void{
    user_init();
}

inline auto Component_rectangle_54::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_30::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_30>, slint::private_api::dealloc };

inline auto Component_rectangle_30::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const MainWindow>(parent->self_weak.lock().value(), parent);
    self->rectangle_30.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->rectangle_30_btn_txt_39_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_39)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_30_btn_txt_39_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_39)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).min;
                        });
    self->rectangle_30_btn_txt_39_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_39)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_30_btn_txt_39_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_39)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()).preferred;
                        });
    self->rectangle_30_btn_txt_39_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->btn_txt_39.width.get() -(float) self->btn_txt_39.width.get()) /(float) 2);
                        });
    self->rectangle_30_btn_txt_39_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->rectangle_30_layout_34_height.get() -(float) self->btn_txt_39.height.get()) /(float) 2);
                        });
    self->rectangle_30_layout_34_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_39.height.get();
                        });
    self->rectangle_30_layout_34_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->rectangle_30_txt_container_38_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_39.width.get(), layout_info.max_percent, self->btn_txt_39.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });slint::cbindgen_private::Slice<int> repeated_indices{ repeated_indices_array.data(), repeated_indices_array.size() }; slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->rectangle_30_txt_container_38_width.get(), 0),repeated_indices); }();
                        });
    self->rectangle_30_layout_34_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ auto layout_info = self->rectangle_30_txt_container_38_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->btn_txt_39.width.get(), layout_info.max_percent, self->btn_txt_39.width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->rectangle_30_layout_34_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(self->rectangle_30_txt_container_38_layoutinfo_v.get()) }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells{cells_vector.data(), cells_vector.size()}; return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->rectangle_30_rectangle_32_clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->root_window_5_menu.set(static_cast<int>(0));
                    });
    self->rectangle_30_txt_container_38_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_39)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()));
                        });
    self->rectangle_30_txt_container_38_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + SLINT_GET_ITEM_VTABLE(ComplexTextVTable)->layout_info({SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->btn_txt_39)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()));
                        });
    self->rectangle_30_txt_container_38_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->btn_txt_39.width.get();
                        });
    self->_shadow_31.blur.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_40.has_hover.get()) { return 8; } else { return 2; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->_shadow_31.border_radius.set(4);
    self->_shadow_31.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)).color());
    self->_shadow_31.offset_x.set(0);
    self->_shadow_31.offset_y.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->toucharea_40.has_hover.get()) { return 4; } else { return 1; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->rectangle_32.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (self->toucharea_40.has_hover.get()) { return [&]() -> slint::Brush { if (slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)) == slint::Brush(slint::Color::from_argb_encoded(+4.285558896e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.284572001e9)); } else { return [&]() -> slint::Brush { if (slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)) == slint::Brush(slint::Color::from_argb_encoded(+4.284572001e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)); } else { return [&]() -> slint::Brush { if (slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)) == slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9))) { return slint::Brush(slint::Color::from_argb_encoded(+4.280558628e9)); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)); }}(); }}(); }}(); } else { return slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)); }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), 1));
    self->rectangle_32.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282006074e9)));
    self->rectangle_32.border_radius.set(4);
    self->rectangle_32.border_width.set(2);
    self->_clip_33.border_bottom_left_radius.set(4);
    self->_clip_33.border_bottom_right_radius.set(4);
    self->_clip_33.border_top_left_radius.set(4);
    self->_clip_33.border_top_right_radius.set(4);
    self->_clip_33.border_width.set(2);
    self->_clip_33.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->txt_container_38.enabled.set(true);
    self->btn_txt_39.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(+4.293190884e9));
                        });
    self->btn_txt_39.font_family.set(slint::SharedString(u8"Arial"));
    self->btn_txt_39.font_italic.set(false);
    self->btn_txt_39.font_size.set(16);
    self->btn_txt_39.font_weight.set(static_cast<int>(400));
    self->btn_txt_39.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_30_btn_txt_39_preferred_height.get(), self->rectangle_30_btn_txt_39_min_height.get());
                        });
    self->btn_txt_39.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->btn_txt_39.letter_spacing.set(0);
    self->btn_txt_39.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->btn_txt_39.text.set(slint::SharedString(u8"Back"));
    self->btn_txt_39.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->btn_txt_39.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->rectangle_30_btn_txt_39_preferred_width.get(), self->rectangle_30_btn_txt_39_min_width.get());
                        });
    self->btn_txt_39.wrap.set(slint::cbindgen_private::TextWrap::NoWrap);
    self->toucharea_40.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if (! false) { self->rectangle_30_rectangle_32_clicked.call(); } else { self->rectangle_30_rectangle_32_pending.call(); }}();
                    });
    self->toucharea_40.enabled.set(true);
    self->toucharea_40.mouse_cursor.set(slint::cbindgen_private::MouseCursor::Pointer);
    self->rectangle_30.background.set_constant();
    self->_shadow_31.border_radius.set_constant();
    self->_shadow_31.color.set_constant();
    self->_shadow_31.offset_x.set_constant();
    self->rectangle_32.border_color.set_constant();
    self->rectangle_32.border_radius.set_constant();
    self->rectangle_32.border_width.set_constant();
    self->_clip_33.border_bottom_left_radius.set_constant();
    self->_clip_33.border_bottom_right_radius.set_constant();
    self->_clip_33.border_top_left_radius.set_constant();
    self->_clip_33.border_top_right_radius.set_constant();
    self->_clip_33.border_width.set_constant();
    self->txt_container_38.enabled.set_constant();
    self->txt_container_38.mouse_cursor.set_constant();
    self->btn_txt_39.font_family.set_constant();
    self->btn_txt_39.font_italic.set_constant();
    self->btn_txt_39.font_size.set_constant();
    self->btn_txt_39.font_weight.set_constant();
    self->btn_txt_39.horizontal_alignment.set_constant();
    self->btn_txt_39.letter_spacing.set_constant();
    self->btn_txt_39.overflow.set_constant();
    self->btn_txt_39.stroke.set_constant();
    self->btn_txt_39.stroke_style.set_constant();
    self->btn_txt_39.stroke_width.set_constant();
    self->btn_txt_39.vertical_alignment.set_constant();
    self->btn_txt_39.wrap.set_constant();
    self->toucharea_40.enabled.set_constant();
    self->toucharea_40.mouse_cursor.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return false; });
    self->repeater_1.set_model_binding([self] { (void)self; return self->parent.lock().value()->root_window_5_map.get(); });
    self->repeater_2.set_model_binding([self] { (void)self; return (self->parent.lock().value()->root_window_5_win.get() == true); });
}

inline auto Component_rectangle_30::user_init () -> void{
    [[maybe_unused]] auto self = this;
    [&]{ ;; }();
}

inline auto Component_rectangle_30::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? SLINT_GET_ITEM_VTABLE(RectangleVTable)->layout_info({SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->rectangle_30)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()) : SLINT_GET_ITEM_VTABLE(RectangleVTable)->layout_info({SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->rectangle_30)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle());
}

inline auto Component_rectangle_30::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * (1 * self->parent.lock().value()->root_window_5_fixed_height.get()))), float((1 * (1 * self->parent.lock().value()->root_window_5_fixed_width.get()))), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(35), float(150), float(330), float(445)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(35), float(150), float(330), float(445)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(35), float(150), float(0), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_39.height.get()), float(self->btn_txt_39.width.get()), float(((150 -(float) self->btn_txt_39.width.get()) /(float) 2)), float(((35 -(float) self->btn_txt_39.height.get()) /(float) 2))));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(35), float(150), float(0), float(0)));
        case 9: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_39.height.get()), float(self->btn_txt_39.width.get()), float(self->rectangle_30_layout_34_layout_cache.get()[2]), float(0)));
        case 10: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->btn_txt_39.height.get()), float(self->btn_txt_39.width.get()), float(self->rectangle_30_btn_txt_39_x.get()), float(self->rectangle_30_btn_txt_39_y.get())));
    }
    return {};
}

inline auto Component_rectangle_30::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 10: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component_rectangle_30::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (10 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->btn_txt_39.text.get();
    }
    return {};
}

inline auto Component_rectangle_30::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_30::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_30::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_30::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.visit(order, visitor);
            } };
        std::abort();
}

inline auto Component_rectangle_30::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.index_range();
            } };
        std::abort();
}

inline auto Component_rectangle_30::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                *result = self->repeater_2.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto Component_rectangle_30::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_30*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_30*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_30::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_30::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component_rectangle_30*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component_rectangle_30::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_30*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component_rectangle_30::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_30::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_30*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 3 };
}

inline auto Component_rectangle_30::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_30::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_rectangle_30::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(4, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 5, 0, 1, false), 
slint::private_api::make_item_node(1, 5, 0, 2, false), 
slint::private_api::make_dyn_node(1, 0), 
slint::private_api::make_dyn_node(2, 0), 
slint::private_api::make_item_node(2, 6, 2, 3, false), 
slint::private_api::make_item_node(2, 8, 5, 4, false), 
slint::private_api::make_item_node(0, 11, 5, 5, false), 
slint::private_api::make_dyn_node(0, 6), 
slint::private_api::make_item_node(1, 10, 6, 6, false), 
slint::private_api::make_item_node(0, 11, 9, 7, true) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto Component_rectangle_30::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component_rectangle_30, rectangle_30) }, 
{ SLINT_GET_ITEM_VTABLE(BoxShadowVTable),  offsetof(Component_rectangle_30, _shadow_31) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_rectangle_30, rectangle_32) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_rectangle_30, _clip_33) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_rectangle_30, layout_34) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_30, toucharea_40) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_30, txt_container_38) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component_rectangle_30, btn_txt_39) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto Component_rectangle_30::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_30*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_30::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_30*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_30::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_30*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_30::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_30*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_30::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_30*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_30::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_30*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_30::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_30::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_30*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_30::create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_30>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_30>::make();
    auto self = const_cast<Component_rectangle_30 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_30>{ self_rc };
}

inline Component_rectangle_30::~Component_rectangle_30 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_30::init () -> void{
    user_init();
}

inline auto Component_rectangle_30::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable MainWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<MainWindow>, slint::private_api::dealloc };

inline auto MainWindow::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_window_5.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_63->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.280032284e9); } else { return slint::Color::from_argb_encoded(+4.29463833e9); }}()).color());
                        });
    self->root_window_5_current.set(static_cast<int>(-1));
    self->root_window_5_fixed_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 500;
                        });
    self->root_window_5_fixed_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 500;
                        });
    self->root_window_5.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_window_5_fixed_height.get();
                        });
    self->root_window_5_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (SLINT_GET_ITEM_VTABLE(WindowItemVTable)->layout_info({SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_window_5)}, slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle()) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)));
                        });
    self->root_window_5_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (SLINT_GET_ITEM_VTABLE(WindowItemVTable)->layout_info({SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_window_5)}, slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle()) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)));
                        });
    self->root_window_5_menu.set(static_cast<int>(0));
    self->root_window_5_size.set(static_cast<int>(0));
    self->root_window_5.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_window_5_fixed_width.get();
                        });
    self->root_window_5_win.set(false);
    self->rectangle_7.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->root_window_5.always_on_top.set_constant();
    self->root_window_5.default_font_family.set_constant();
    self->root_window_5.default_font_weight.set_constant();
    self->root_window_5.icon.set_constant();
    self->root_window_5.no_frame.set_constant();
    self->root_window_5.resize_border_width.set_constant();
    self->root_window_5.title.set_constant();
    self->rectangle_7.background.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return (std::abs(float(self->root_window_5_menu.get() - static_cast<int>(0))) < std::numeric_limits<float>::epsilon()); });
    self->repeater_1.set_model_binding([self] { (void)self; return (std::abs(float(self->root_window_5_menu.get() - static_cast<int>(1))) < std::numeric_limits<float>::epsilon()); });
}

inline auto MainWindow::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto MainWindow::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ auto layout_info = self->root_window_5_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_window_5_fixed_width.get(), layout_info.max_percent, self->root_window_5_fixed_width.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ auto layout_info = self->root_window_5_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_window_5_fixed_height.get(), layout_info.max_percent, self->root_window_5_fixed_height.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto MainWindow::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_window_5_fixed_height.get()), float(self->root_window_5_fixed_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_window_5_fixed_height.get()), float(self->root_window_5_fixed_width.get()), float([&]{ auto tmp_root_window_5_fixed_width = self->root_window_5_fixed_width.get();;return ((tmp_root_window_5_fixed_width -(float) tmp_root_window_5_fixed_width) /(float) 2); }()), float([&]{ auto tmp_root_window_5_fixed_height = self->root_window_5_fixed_height.get();;return ((tmp_root_window_5_fixed_height -(float) tmp_root_window_5_fixed_height) /(float) 2); }())));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * self->root_window_5_fixed_height.get())), float((1 * self->root_window_5_fixed_width.get())), float(0), float(0)));
    }
    return {};
}

inline auto MainWindow::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto MainWindow::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto MainWindow::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto MainWindow::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto MainWindow::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto MainWindow::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            } };
        std::abort();
}

inline auto MainWindow::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            } };
        std::abort();
}

inline auto MainWindow::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto MainWindow::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const MainWindow*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const MainWindow*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto MainWindow::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto MainWindow::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto MainWindow::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto MainWindow::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto MainWindow::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto MainWindow::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto MainWindow::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto MainWindow::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(2, 3, 1, 2, false), 
slint::private_api::make_dyn_node(0, 2), 
slint::private_api::make_dyn_node(1, 2) };
    return { const_cast<slint::private_api::ItemTreeNode*>(children), std::size(children) };
}

inline auto MainWindow::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(MainWindow, root_window_5) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, root_6) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, rectangle_7) } };
    return { const_cast<slint::private_api::ItemArrayEntry*>(items), std::size(items) };
}

inline auto MainWindow::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const MainWindow*>(component.instance)->layout_info(o);
}

inline auto MainWindow::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const MainWindow*>(component.instance)->item_geometry(index);
}

inline auto MainWindow::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const MainWindow*>(component.instance)->accessible_role(index);
}

inline auto MainWindow::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const MainWindow*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto MainWindow::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const MainWindow*>(component.instance)->accessibility_action(index, *action);
}

inline auto MainWindow::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const MainWindow*>(component.instance)->supported_accessibility_actions(index);
}

inline auto MainWindow::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto MainWindow::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const MainWindow*>(component.instance)->globals->window().window_handle();
}

inline auto MainWindow::create () -> slint::ComponentHandle<MainWindow>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>::make();
    auto self = const_cast<MainWindow *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    self->user_init();
    self->window();
    return slint::ComponentHandle<MainWindow>{ self_rc };
}

inline MainWindow::~MainWindow (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto MainWindow::get_current () const -> int{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_current.get();
}

inline auto MainWindow::set_current (const int &value) const -> void{
    [[maybe_unused]] auto self = this;
    self->root_window_5_current.set(value);
}

inline auto MainWindow::invoke_initGame (int arg_0) const -> void{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_initGame.call(arg_0);
}

template<std::invocable<int> Functor> inline auto MainWindow::on_initGame (Functor && callback_handler) const{
    [[maybe_unused]] auto self = this;
    self->root_window_5_initGame.set_handler(std::forward<Functor>(callback_handler));
}

inline auto MainWindow::get_map () const -> std::shared_ptr<slint::Model<Cell>>{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_map.get();
}

inline auto MainWindow::set_map (const std::shared_ptr<slint::Model<Cell>> &value) const -> void{
    [[maybe_unused]] auto self = this;
    self->root_window_5_map.set(value);
}

inline auto MainWindow::get_menu () const -> int{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_menu.get();
}

inline auto MainWindow::set_menu (const int &value) const -> void{
    [[maybe_unused]] auto self = this;
    self->root_window_5_menu.set(value);
}

inline auto MainWindow::invoke_onClickBtn (int arg_0) const -> void{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_onClickBtn.call(arg_0);
}

template<std::invocable<int> Functor> inline auto MainWindow::on_onClickBtn (Functor && callback_handler) const{
    [[maybe_unused]] auto self = this;
    self->root_window_5_onClickBtn.set_handler(std::forward<Functor>(callback_handler));
}

inline auto MainWindow::invoke_showIndx1 (int arg_0) const -> void{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_showIndx1.call(arg_0);
}

template<std::invocable<int> Functor> inline auto MainWindow::on_showIndx1 (Functor && callback_handler) const{
    [[maybe_unused]] auto self = this;
    self->root_window_5_showIndx1.set_handler(std::forward<Functor>(callback_handler));
}

inline auto MainWindow::get_size () const -> int{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_size.get();
}

inline auto MainWindow::set_size (const int &value) const -> void{
    [[maybe_unused]] auto self = this;
    self->root_window_5_size.set(value);
}

inline auto MainWindow::get_win () const -> bool{
    [[maybe_unused]] auto self = this;
    return self->root_window_5_win.get();
}

inline auto MainWindow::set_win (const bool &value) const -> void{
    [[maybe_unused]] auto self = this;
    self->root_window_5_win.set(value);
}

inline auto MainWindow::show () -> void{
    window().show();
}

inline auto MainWindow::hide () -> void{
    window().hide();
}

inline auto MainWindow::window () const -> slint::Window&{
    return m_globals.window();
}

inline auto MainWindow::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
