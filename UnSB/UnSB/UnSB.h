/** @file
  TODO: Brief Description of UEFI Driver UnSB
  
  TODO: Detailed Description of UEFI Driver UnSB

  TODO: Copyright for UEFI Driver UnSB
  
  TODO: License for UEFI Driver UnSB

**/

#ifndef __EFI_UN_SB_H__
#define __EFI_UN_SB_H__

#include <Uefi.h>
#include <Library/PcdLib.h>

//
// Libraries
//
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/BaseLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/DebugLib.h>

//
// UEFI Driver Model Protocols
//
#include <Protocol/DriverBinding.h>

//
// Consumed Protocols
//
#include <Protocol/PciIo.h>

#define EFI_SECURITY_ARCH_PROTOCOL_GUID  \
  { 0xA46423E3, 0x4617, 0x49f1, {0xB9, 0xFF, 0xD1, 0xBF, 0xA9, 0x11, 0x58, 0x39 } }

//
// Produced Protocols
//
#include <Protocol/SimpleTextOut.h>

//
// Guids
//

//
// Driver Version
//
#define UN_SB_VERSION  0x00000000

//
// Protocol instances
//
extern EFI_DRIVER_BINDING_PROTOCOL  gUnSBDriverBinding;

//
// Include files with function prototypes
//
#include "DriverBinding.h"
#include "SimpleTextOutput.h"

#endif
