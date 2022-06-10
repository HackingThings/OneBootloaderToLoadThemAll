/** @file
  TODO: Brief Description of UEFI Driver UnSB
  
  TODO: Detailed Description of UEFI Driver UnSB

  TODO: Copyright for UEFI Driver UnSB
  
  TODO: License for UEFI Driver UnSB

**/

#include "UnSB.h"

///
/// Simple Text Output Protocol Mode instance
///
GLOBAL_REMOVE_IF_UNREFERENCED 
EFI_SIMPLE_TEXT_OUTPUT_MODE  gUnSBSimpleTextOutputMode = {
  0,                                                // MaxMode
  0,                                                // Mode
  EFI_TEXT_ATTR (EFI_WHITE, EFI_BACKGROUND_BLACK),  // Attribute
  0,                                                // CursorColumn
  0,                                                // CursorRow
  TRUE                                              // CursorVisible
};

///
/// Simple Text Output Protocol instance
///
GLOBAL_REMOVE_IF_UNREFERENCED 
EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL  gUnSBSimpleTextOutput = {
  UnSBSimpleTextOutputReset,
  UnSBSimpleTextOutputOutputString,
  UnSBSimpleTextOutputTestString,
  UnSBSimpleTextOutputQueryMode,
  UnSBSimpleTextOutputSetMode,
  UnSBSimpleTextOutputSetAttribute,
  UnSBSimpleTextOutputClearScreen,
  UnSBSimpleTextOutputSetCursorPosition,
  UnSBSimpleTextOutputEnableCursor,
  &gUnSBSimpleTextOutputMode
};

/**
  Reset the text output device hardware and optionaly run diagnostics

  @param  This                 The protocol instance pointer.
  @param  ExtendedVerification Driver may perform more exhaustive verfication
                               operation of the device during reset.

  @retval EFI_SUCCESS          The text output device was reset.
  @retval EFI_DEVICE_ERROR     The text output device is not functioning correctly and
                               could not be reset.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputReset (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN BOOLEAN                                ExtendedVerification
  )
{
  return EFI_DEVICE_ERROR;
}

/**
  Write a string to the output device.

  @param  This   The protocol instance pointer.
  @param  String The NULL-terminated string to be displayed on the output
                 device(s). All output devices must also support the Unicode
                 drawing character codes defined in this file.

  @retval EFI_SUCCESS             The string was output to the device.
  @retval EFI_DEVICE_ERROR        The device reported an error while attempting to output
                                  the text.
  @retval EFI_UNSUPPORTED         The output device's mode is not currently in a
                                  defined text mode.
  @retval EFI_WARN_UNKNOWN_GLYPH  This warning code indicates that some of the
                                  characters in the string could not be
                                  rendered and were skipped.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputOutputString (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN CHAR16                                 *String
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Verifies that all characters in a string can be output to the 
  target device.

  @param  This   The protocol instance pointer.
  @param  String The NULL-terminated string to be examined for the output
                 device(s).

  @retval EFI_SUCCESS      The device(s) are capable of rendering the output string.
  @retval EFI_UNSUPPORTED  Some of the characters in the string cannot be
                           rendered by one or more of the output devices mapped
                           by the EFI handle.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputTestString (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN CHAR16                                 *String
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Returns information for an available text mode that the output device(s)
  supports.

  @param  This       The protocol instance pointer.
  @param  ModeNumber The mode number to return information on.
  @param  Columns    Returns the geometry of the text output device for the
                     requested ModeNumber.
  @param  Rows       Returns the geometry of the text output device for the
                     requested ModeNumber.
                                          
  @retval EFI_SUCCESS      The requested mode information was returned.
  @retval EFI_DEVICE_ERROR The device had an error and could not complete the request.
  @retval EFI_UNSUPPORTED  The mode number was not valid.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputQueryMode (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN UINTN                                  ModeNumber,
  OUT UINTN                                 *Columns,
  OUT UINTN                                 *Rows
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Sets the output device(s) to a specified mode.

  @param  This       The protocol instance pointer.
  @param  ModeNumber The mode number to set.

  @retval EFI_SUCCESS      The requested text mode was set.
  @retval EFI_DEVICE_ERROR The device had an error and could not complete the request.
  @retval EFI_UNSUPPORTED  The mode number was not valid.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputSetMode (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN UINTN                                  ModeNumber
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Sets the background and foreground colors for the OutputString () and
  ClearScreen () functions.

  @param  This      The protocol instance pointer.
  @param  Attribute The attribute to set. Bits 0..3 are the foreground color, and
                    bits 4..6 are the background color. All other bits are undefined
                    and must be zero. The valid Attributes are defined in this file.

  @retval EFI_SUCCESS       The attribute was set.
  @retval EFI_DEVICE_ERROR  The device had an error and could not complete the request.
  @retval EFI_UNSUPPORTED   The attribute requested is not defined.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputSetAttribute (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN UINTN                                  Attribute
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Clears the output device(s) display to the currently selected background 
  color.

  @param  This              The protocol instance pointer.
                           
  @retval  EFI_SUCCESS      The operation completed successfully.
  @retval  EFI_DEVICE_ERROR The device had an error and could not complete the request.
  @retval  EFI_UNSUPPORTED  The output device is not in a valid text mode.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputClearScreen (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL   *This
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Sets the current coordinates of the cursor position

  @param  This        The protocol instance pointer.
  @param  Column      The position to set the cursor to. Must be greater than or
                      equal to zero and less than the number of columns and rows
                      by QueryMode ().
  @param  Row         The position to set the cursor to. Must be greater than or
                      equal to zero and less than the number of columns and rows
                      by QueryMode ().

  @retval EFI_SUCCESS      The operation completed successfully.
  @retval EFI_DEVICE_ERROR The device had an error and could not complete the request.
  @retval EFI_UNSUPPORTED  The output device is not in a valid text mode, or the
                           cursor position is invalid for the current mode.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputSetCursorPosition (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN UINTN                                  Column,
  IN UINTN                                  Row
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Makes the cursor visible or invisible

  @param  This    The protocol instance pointer.
  @param  Visible If TRUE, the cursor is set to be visible. If FALSE, the cursor is
                  set to be invisible.

  @retval EFI_SUCCESS      The operation completed successfully.
  @retval EFI_DEVICE_ERROR The device had an error and could not complete the
                           request, or the device does not support changing
                           the cursor mode.
  @retval EFI_UNSUPPORTED  The output device is not in a valid text mode.

**/
EFI_STATUS
EFIAPI
UnSBSimpleTextOutputEnableCursor (
  IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
  IN BOOLEAN                                Visible
  )
{
  return EFI_UNSUPPORTED;
}
