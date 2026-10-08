// [Controller decode 2026-07-09] Synthetic logical-control press for controls <14. Chooses first available binding in keyboard, mouse, first-joystick order. Joystick bindings <0x20 set currentState.rgbButtons; bindings >=0x20 write POV0 angles in 4500-unit steps and preserve adjacent diagonals.
void __thiscall InputGlobals::SendControlPress(InputGlobal *this, signed int controlId)
{
  int v2; // eax
  UInt8 *v3; // edi
  UInt8 v4; // dl
  int v5; // eax
  DWORD v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  signed int a2a; // [esp+8h] [ebp+4h]

  if ( controlId < 0xE ) /*0x40338a*/
  {
    v2 = this->KeyboardInputControls[controlId] == 0xFF; /*0x40339c*/
    if ( this->KeyboardInputControls[0x1D * v2 + controlId] == 0xFF ) /*0x4033b0*/
      ++v2; /*0x4033b2*/
    v3 = &this->KeyboardInputControls[0x1D * v2 + controlId]; /*0x4033bd*/
    v4 = *v3; /*0x4033c4*/
    if ( *v3 != 0xFF ) /*0x4033c9*/
    {
      if ( v2 ) /*0x4033d2*/
      {
        v5 = v2 - 1; /*0x4033d8*/
        if ( v5 ) /*0x4033db*/
        {
          if ( v5 == 0xFE ) /*0x4033e2*/
            return; /*0x4033e2*/
          if ( v4 < 0x20u ) /*0x4033eb*/
          {
            this->joystickDeviceStates[0].currentState.rgbButtons[v4] |= 0x80u; /*0x4033f0*/
            return; /*0x4033fb*/
          }
          v6 = this->joystickDeviceStates[0].currentState.rgdwPOV[0]; /*0x403401*/
          v7 = 0x1194 * (*v3 - 0x20); /*0x403407*/
          if ( v6 != 0xFFFFFFFF ) /*0x403410*/
          {
            a2a = v6 - v7; /*0x403414*/
            v8 = abs32(v6 - v7); /*0x40341b*/
            if ( v8 == 0x2328 ) /*0x403422*/
            {
              this->joystickDeviceStates[0].currentState.rgdwPOV[0] = Double_To_SInt32((double)a2a * 0.5) + v7; /*0x403435*/
              return; /*0x40343a*/
            }
            if ( v8 == 0x6978 ) /*0x403442*/
              v7 = 0x7B0C; /*0x403444*/
          }
          this->joystickDeviceStates[0].currentState.rgdwPOV[0] = v7; /*0x403449*/
        }
        else
        {
          this->CurrentMouseState.rgbButtons[this->MouseInputControls[controlId]] |= 0x80u; /*0x403459*/
        }
      }
      else
      {
        this->CurrentKeyState[this->KeyboardInputControls[controlId]] |= 0x80u; /*0x403475*/
      }
    }
  }
}
