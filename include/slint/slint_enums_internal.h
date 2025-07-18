#pragma once
// This file is auto-generated from api\cpp\cbindgen.rs
#include "slint_enums.h"
namespace slint::cbindgen_private {
/// This enum describes the different types of alignment of text along the horizontal axis of a `Text` element.
enum class TextHorizontalAlignment {
    /// The text will be aligned with the left edge of the containing box.
    Left,
    /// The text will be horizontally centered within the containing box.
    Center,
    /// The text will be aligned to the right of the containing box.
    Right,
};
/// This enum describes the different types of alignment of text along the vertical axis of a `Text` element.
enum class TextVerticalAlignment {
    /// The text will be aligned to the top of the containing box.
    Top,
    /// The text will be vertically centered within the containing box.
    Center,
    /// The text will be aligned to the bottom of the containing box.
    Bottom,
};
/// This enum describes the how the text wrap if it is too wide to fit in the `Text` width.
enum class TextWrap {
    /// The text won't wrap, but instead will overflow.
    NoWrap,
    /// The text will be wrapped at word boundaries if possible, or at any location for very long words.
    WordWrap,
    /// The text will be wrapped at any character. Currently only supported by the Qt and Software renderers.
    CharWrap,
};
/// This enum describes the how the text appear if it is too wide to fit in the `Text` width.
enum class TextOverflow {
    /// The text will simply be clipped.
    Clip,
    /// The text will be elided with `…`.
    Elide,
};
/// This enum describes the positioning of a text stroke relative to the border of the glyphs in a `Text`.
enum class TextStrokeStyle {
    /// The inside edge of the stroke is at the outer edge of the text.
    Outside,
    /// The center line of the stroke is at the outer edge of the text, like in Adobe Illustrator.
    Center,
};
/// This enum describes whether an event was rejected or accepted by an event handler.
enum class EventResult {
    /// The event is rejected by this event handler and may then be handled by the parent item
    Reject,
    /// The event is accepted and won't be processed further
    Accept,
};
/// This enum describes the different ways of deciding what the inside of a shape described by a path shall be.
enum class FillRule {
    /// The ["nonzero" fill rule as defined in SVG](https://developer.mozilla.org/en-US/docs/Web/SVG/Attribute/fill-rule#nonzero).
    Nonzero,
    /// The ["evenodd" fill rule as defined in SVG](https://developer.mozilla.org/en-US/docs/Web/SVG/Attribute/fill-rule#evenodd)
    Evenodd,
};
/// Use this enum to add standard buttons to a `Dialog`. The look and positioning
/// of these `StandardButton`s depends on the environment
/// (OS, UI environment, etc.) the application runs in.
enum class StandardButtonKind {
    /// A "OK" button that accepts a `Dialog`, closing it when clicked.
    Ok,
    /// A "Cancel" button that rejects a `Dialog`, closing it when clicked.
    Cancel,
    /// A "Apply" button that should accept values from a
    /// `Dialog` without closing it.
    Apply,
    /// A "Close" button, which should close a `Dialog` without looking at values.
    Close,
    /// A "Reset" button, which should reset the `Dialog` to its initial state.
    Reset,
    /// A "Help" button, which should bring up context related documentation when clicked.
    Help,
    /// A "Yes" button, used to confirm an action.
    Yes,
    /// A "No" button, used to deny an action.
    No,
    /// A "Abort" button, used to abort an action.
    Abort,
    /// A "Retry" button, used to retry a failed action.
    Retry,
    /// A "Ignore" button, used to ignore a failed action.
    Ignore,
};
/// This enum represents the value of the `dialog-button-role` property which can be added to
/// any element within a `Dialog` to put that item in the button row, and its exact position
/// depends on the role and the platform.
enum class DialogButtonRole {
    /// This isn't a button meant to go into the bottom row
    None,
    /// This is the role of the main button to click to accept the dialog. e.g. "Ok" or "Yes"
    Accept,
    /// This is the role of the main button to click to reject the dialog. e.g. "Cancel" or "No"
    Reject,
    /// This is the role of the "Apply" button
    Apply,
    /// This is the role of the "Reset" button
    Reset,
    /// This is the role of the  "Help" button
    Help,
    /// This is the role of any other button that performs another action.
    Action,
};
/// The enum reports what happened to the `PointerEventButton` in the event
enum class PointerEventKind {
    /// The action was cancelled.
    Cancel,
    /// The button was pressed.
    Down,
    /// The button was released.
    Up,
    /// The pointer has moved,
    Move,
};
using slint::PointerEventButton;
/// This enum represents different types of mouse cursors. It's a subset of the mouse cursors available in CSS.
/// For details and pictograms see the [MDN Documentation for cursor](https://developer.mozilla.org/en-US/docs/Web/CSS/cursor#values).
/// Depending on the backend and used OS unidirectional resize cursors may be replaced with bidirectional ones.
enum class MouseCursor {
    /// The systems default cursor.
    Default,
    /// No cursor is displayed.
    None,
    /// A cursor indicating help information.
    Help,
    /// A pointing hand indicating a link.
    Pointer,
    /// The program is busy but can still be interacted with.
    Progress,
    /// The program is busy.
    Wait,
    /// A crosshair.
    Crosshair,
    /// A cursor indicating selectable text.
    Text,
    /// An alias or shortcut is being created.
    Alias,
    /// A copy is being created.
    Copy,
    /// Something is to be moved.
    Move,
    /// Something can't be dropped here.
    NoDrop,
    /// An action isn't allowed
    NotAllowed,
    /// Something is grabbable.
    Grab,
    /// Something is being grabbed.
    Grabbing,
    /// Indicating that a column is resizable horizontally.
    ColResize,
    /// Indicating that a row is resizable vertically.
    RowResize,
    /// Unidirectional resize north.
    NResize,
    /// Unidirectional resize east.
    EResize,
    /// Unidirectional resize south.
    SResize,
    /// Unidirectional resize west.
    WResize,
    /// Unidirectional resize north-east.
    NeResize,
    /// Unidirectional resize north-west.
    NwResize,
    /// Unidirectional resize south-east.
    SeResize,
    /// Unidirectional resize south-west.
    SwResize,
    /// Bidirectional resize east-west.
    EwResize,
    /// Bidirectional resize north-south.
    NsResize,
    /// Bidirectional resize north-east-south-west.
    NeswResize,
    /// Bidirectional resize north-west-south-east.
    NwseResize,
};
/// This enum defines how the source image shall fit into an `Image` element.
enum class ImageFit {
    /// Scales and stretches the source image to fit the width and height of the `Image` element.
    Fill,
    /// The source image is scaled to fit into the `Image` element's dimension while preserving the aspect ratio.
    Contain,
    /// The source image is scaled to cover into the `Image` element's dimension while preserving the aspect ratio.
    /// If the aspect ratio of the source image doesn't match the element's one, then the image will be clipped to fit.
    Cover,
    /// Preserves the size of the source image in logical pixels.
    /// The source image will still be scaled by the scale factor that applies to all elements in the window.
    /// Any extra space will be left blank.
    Preserve,
};
/// This enum specifies the horizontal alignment of the source image.
enum class ImageHorizontalAlignment {
    /// Aligns the source image at the center of the `Image` element.
    Center,
    /// Aligns the source image at the left of the `Image` element.
    Left,
    /// Aligns the source image at the right of the `Image` element.
    Right,
};
/// This enum specifies the vertical alignment of the source image.
enum class ImageVerticalAlignment {
    /// Aligns the source image at the center of the `Image` element.
    Center,
    /// Aligns the source image at the top of the `Image` element.
    Top,
    /// Aligns the source image at the bottom of the `Image` element.
    Bottom,
};
/// This enum specifies how the source image will be scaled.
enum class ImageRendering {
    /// The image is scaled with a linear interpolation algorithm.
    Smooth,
    /// The image is scaled with the nearest neighbor algorithm.
    Pixelated,
};
/// This enum specifies how the source image will be tiled.
enum class ImageTiling {
    /// The source image will not be tiled.
    None,
    /// The source image will be repeated to fill the `Image` element.
    Repeat,
    /// The source image will be repeated and scaled to fill the `Image` element, ensuring an integer number of repetitions.
    Round,
};
/// This enum is used to define the type of the input field.
enum class InputType {
    /// The default value. This will render all characters normally
    Text,
    /// This will render all characters with a character that defaults to "*"
    Password,
    /// This will only accept and render number characters (0-9)
    Number,
    /// This will accept and render characters if it's valid part of a decimal
    Decimal,
};
/// Enum representing the `alignment` property of a
/// `HorizontalBox`, a `VerticalBox`,
/// a `HorizontalLayout`, or `VerticalLayout`.
enum class LayoutAlignment {
    /// Use the minimum size of all elements in a layout, distribute remaining space
    /// based on `*-stretch` among all elements.
    Stretch,
    /// Use the preferred size for all elements, distribute remaining space evenly before the
    /// first and after the last element.
    Center,
    /// Use the preferred size for all elements, put remaining space after the last element.
    Start,
    /// Use the preferred size for all elements, put remaining space before the first
    /// element.
    End,
    /// Use the preferred size for all elements, distribute remaining space evenly between
    /// elements.
    SpaceBetween,
    /// Use the preferred size for all elements, distribute remaining space evenly before the
    /// first element, after the last element and between elements.
    SpaceAround,
};
/// PathEvent is a low-level data structure describing the composition of a path. Typically it is
/// generated at compile time from a higher-level description, such as SVG commands.
enum class PathEvent {
    /// The beginning of the path.
    Begin,
    /// A straight line on the path.
    Line,
    /// A quadratic bezier curve on the path.
    Quadratic,
    /// A cubic bezier curve on the path.
    Cubic,
    /// The end of the path that remains open.
    EndOpen,
    /// The end of a path that is closed.
    EndClosed,
};
using slint::testing::AccessibleRole;
/// This enum represents the different values of the `sort-order` property.
/// It's used to sort a `StandardTableView` by a column.
enum class SortOrder {
    /// The column is unsorted.
    Unsorted,
    /// The column is sorted in ascending order.
    Ascending,
    /// The column is sorted in descending order.
    Descending,
};
/// Represents the orientation of an element or widget such as the `Slider`.
enum class Orientation {
    /// Element is oriented horizontally.
    Horizontal,
    /// Element is oriented vertically.
    Vertical,
};
/// This enum indicates the color scheme used by the widget style. Use this to explicitly switch
/// between dark and light schemes, or choose Unknown to fall back to the system default.
enum class ColorScheme {
    /// The scheme is not known and a system wide setting configures this. This could mean that
    /// the widgets are shown in a dark or light scheme, but it could also be a custom color scheme.
    Unknown,
    /// The style chooses light colors for the background and dark for the foreground.
    Dark,
    /// The style chooses dark colors for the background and light for the foreground.
    Light,
};
/// This enum describes the direction of an animation.
enum class AnimationDirection {
    /// The ["normal" direction as defined in CSS](https://developer.mozilla.org/en-US/docs/Web/CSS/animation-direction#normal).
    Normal,
    /// The ["reverse" direction as defined in CSS](https://developer.mozilla.org/en-US/docs/Web/CSS/animation-direction#reverse).
    Reverse,
    /// The ["alternate" direction as defined in CSS](https://developer.mozilla.org/en-US/docs/Web/CSS/animation-direction#alternate).
    Alternate,
    /// The ["alternate reverse" direction as defined in CSS](https://developer.mozilla.org/en-US/docs/Web/CSS/animation-direction#alternate-reverse).
    AlternateReverse,
};
/// This enum describes the scrollbar visibility
enum class ScrollBarPolicy {
    /// Scrollbar will be visible only when needed
    AsNeeded,
    /// Scrollbar never shown
    AlwaysOff,
    /// Scrollbar always visible
    AlwaysOn,
};
enum class PopupClosePolicy {
    /// Closes the `PopupWindow` when user clicks or presses the escape key.
    CloseOnClick,
    /// Closes the `PopupWindow` when user clicks outside of the popup or presses the escape key.
    CloseOnClickOutside,
    /// Does not close the `PopupWindow` automatically when user clicks.
    NoAutoClose,
};
/// This enum describes the appearance of the ends of stroked paths.
enum class LineCap {
    /// The stroke ends with a flat edge that is perpendicular to the path.
    Butt,
    /// The stroke ends with a rounded edge.
    Round,
    /// The stroke ends with a square projection beyond the path.
    Square,
};
}
