// [Controller decode 2026-07-09] Polls all enumerated joysticks, keyboard, and mouse. Joystick current DIJOYSTATE is copied to previous DIJOYSTATE before polling. InputGlobal+0x1B50/+0x1B58 are mouse double-click flags/timestamps, not controller state.
void __thiscall InputGlobals::PollAndUpdateInputState(InputGlobal *this)
{
  int v1; // eax
  UInt32 *unk1B58; // edx
  JoystickDeviceState *joystickDeviceStates; // ebp
  IDirectInputDevice8 *keyboardInterface; // eax
  LONG lY; // ecx
  LONG lZ; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // [esp-8h] [ebp-24h]
  int v11; // [esp-4h] [ebp-20h]
  IDirectInput8 *v12; // [esp+10h] [ebp-Ch]
  IDirectInputDevice8 **joystickInterfaces; // [esp+14h] [ebp-8h]

  if ( (int)this->numJoysticks > 0 ) /*0x4046b8*/
  {
    joystickInterfaces = this->joystickInterfaces; /*0x4046bd*/
    joystickDeviceStates = this->joystickDeviceStates; /*0x4046c1*/
    do /*0x40472d*/
    {
      qmemcpy(joystickDeviceStates->previousState, joystickDeviceStates, 0x50u); /*0x4046ce*/
      if ( (unsigned int)(*joystickInterfaces)->vtbl->SysKeyboardImpl_Acquire(*joystickInterfaces) < 2 ) /*0x4046e0*/
      {
        (*((void (__cdecl **)(IDirectInput8AVtbl *))v12->vtbl->QueryInterface + 0x19))(v12->vtbl); /*0x404702*/
        (*((void (__stdcall **)(IDirectInput8AVtbl *, int, JoystickDeviceState *, int))v12->vtbl->QueryInterface + 9))( /*0x40470f*/
          v12->vtbl,
          0x50,
          joystickDeviceStates,
          v11);
      }
      else
      {
        _memset((int)joystickDeviceStates, 0, 0x50u); /*0x4046ec*/
      }
      ++v12; /*0x404715*/
      joystickDeviceStates = (JoystickDeviceState *)((char *)joystickDeviceStates + 0xA0); /*0x40471d*/
      joystickInterfaces = (IDirectInputDevice8 **)((char *)joystickInterfaces + 1); /*0x404729*/
    }
    while ( (int)joystickInterfaces < (signed int)this->numJoysticks ); /*0x40472d*/
  }
  keyboardInterface = this->keyboardInterface; /*0x40472f*/
  if ( keyboardInterface ) /*0x404734*/
  {
    qmemcpy(this->PreviousKeyState, this->CurrentKeyState, sizeof(this->PreviousKeyState)); /*0x404749*/
    if ( (unsigned int)keyboardInterface->vtbl->SysKeyboardImpl_Acquire(keyboardInterface) < 2 ) /*0x404755*/
    {
      ((void (__cdecl *)(IDirectInputDevice8 *))this->keyboardInterface->vtbl->IDirectInputDevice2Impl_Poll)(this->keyboardInterface); /*0x404777*/
      ((void (__stdcall *)(IDirectInputDevice8 *, int, UInt8 *, int))this->keyboardInterface->vtbl->SysKeyboardImpl_GetDeviceState)( /*0x404788*/
        this->keyboardInterface,
        0x100,
        this->CurrentKeyState,
        v10);
    }
    else
    {
      _memset((int)this->CurrentKeyState, 0, sizeof(this->CurrentKeyState)); /*0x404764*/
    }
  }
  if ( this->mouseInterface ) /*0x40478a*/
  {
    lY = this->CurrentMouseState.lY; /*0x40479a*/
    lZ = this->CurrentMouseState.lZ; /*0x4047a0*/
    this->PreviousMouseState.lX = this->CurrentMouseState.lX; /*0x4047a6*/
    v8 = *(_DWORD *)this->CurrentMouseState.rgbButtons; /*0x4047ac*/
    this->PreviousMouseState.lY = lY; /*0x4047b8*/
    v9 = *(_DWORD *)&this->CurrentMouseState.rgbButtons[4]; /*0x4047be*/
    this->PreviousMouseState.lZ = lZ; /*0x4047c1*/
    *(_DWORD *)this->PreviousMouseState.rgbButtons = v8; /*0x4047c7*/
    *(_DWORD *)&this->PreviousMouseState.rgbButtons[4] = v9; /*0x4047cf*/
    *(_DWORD *)this->mouseDoubleClickFlags = 0; /*0x4047d5*/
    *(_DWORD *)&this->mouseDoubleClickFlags[4] = 0; /*0x4047db*/
    if ( (unsigned int)this->mouseInterface->vtbl->SysKeyboardImpl_Acquire(this->mouseInterface) < 2 ) /*0x4047ee*/
    {
      ((void (__cdecl *)(IDirectInputDevice8 *))this->mouseInterface->vtbl->IDirectInputDevice2Impl_Poll)(this->mouseInterface); /*0x40481c*/
      ((void (__cdecl *)(IDirectInputDevice8 *, int, DIMOUSESTATE2 *))this->mouseInterface->vtbl->SysKeyboardImpl_GetDeviceState)( /*0x40482a*/
        this->mouseInterface,
        0x14,
        &this->CurrentMouseState);
    }
    else
    {
      this->CurrentMouseState.lX = 0; /*0x4047f7*/
      this->CurrentMouseState.lY = 0; /*0x4047f9*/
      this->CurrentMouseState.lZ = 0; /*0x4047fc*/
      *(_DWORD *)this->CurrentMouseState.rgbButtons = 0; /*0x404800*/
      *(_DWORD *)&this->CurrentMouseState.rgbButtons[4] = 0; /*0x404803*/
    }
    v1 = 0; /*0x403c31*/
    unk1B58 = this->mouseButtonPressTimestamps; /*0x403c33*/
    do /*0x403c81*/
    {
      if ( (char)this->CurrentMouseState.rgbButtons[v1] < 0 && (char)this->PreviousMouseState.rgbButtons[v1] >= 0 ) /*0x403c52*/
      {
        if ( MEMORY[0xB33EA0] - *unk1B58 > this->doubleClickTime ) /*0x403c64*/
        {
          *unk1B58 = MEMORY[0xB33EA0]; /*0x403c76*/
        }
        else
        {
          this->mouseDoubleClickFlags[v1] = 1; /*0x403c66*/
          *unk1B58 = 0; /*0x403c6e*/
        }
      }
      ++v1; /*0x403c78*/
      ++unk1B58; /*0x403c7b*/
    }
    while ( v1 <= 7 ); /*0x403c81*/
  }
}
