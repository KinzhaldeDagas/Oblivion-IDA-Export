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

  if ( controlId < 0xE )
  {
    v2 = this->KeyboardInputControls[controlId] == 0xFF;
    if ( this->KeyboardInputControls[0x1D * v2 + controlId] == 0xFF )
      ++v2;
    v3 = &this->KeyboardInputControls[0x1D * v2 + controlId];
    v4 = *v3;
    if ( *v3 != 0xFF )
    {
      if ( v2 )
      {
        v5 = v2 - 1;
        if ( v5 )
        {
          if ( v5 == 0xFE )
            return;
          if ( v4 < 0x20u )
          {
            this->joystickDeviceStates[0].allStateThisFrame.rgbButtons[v4] |= 0x80u;
            return;
          }
          v6 = this->joystickDeviceStates[0].allStateThisFrame.rgdwPOV[0];
          v7 = 0x1194 * (*v3 - 0x20);
          if ( v6 != 0xFFFFFFFF )
          {
            a2a = v6 - v7;
            v8 = abs32(v6 - v7);
            if ( v8 == 0x2328 )
            {
              this->joystickDeviceStates[0].allStateThisFrame.rgdwPOV[0] = Double_To_SInt32((double)a2a * 0.5) + v7;
              return;
            }
            if ( v8 == 0x6978 )
              v7 = 0x7B0C;
          }
          this->joystickDeviceStates[0].allStateThisFrame.rgdwPOV[0] = v7;
        }
        else
        {
          this->CurrentMouseState.rgbButtons[this->MouseInputControls[controlId]] |= 0x80u;
        }
      }
      else
      {
        this->CurrentKeyState[this->KeyboardInputControls[controlId]] |= 0x80u;
      }
    }
  }
}
