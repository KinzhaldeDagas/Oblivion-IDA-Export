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

  if ( (int)this->numJoysticks > 0 )
  {
    joystickInterfaces = this->joystickInterfaces;
    joystickDeviceStates = this->joystickDeviceStates;
    do
    {
      qmemcpy(joystickDeviceStates->buttonsLastFrame, joystickDeviceStates, 0x50u);
      if ( (unsigned int)(*joystickInterfaces)->vtbl->SysKeyboardImpl_Acquire(*joystickInterfaces) < 2 )
      {
        (*((void (__cdecl **)(IDirectInput8AVtbl *))v12->vtbl->QueryInterface + 0x19))(v12->vtbl);
        (*((void (__stdcall **)(IDirectInput8AVtbl *, int, JoystickDeviceState *, int))v12->vtbl->QueryInterface + 9))(
          v12->vtbl,
          0x50,
          joystickDeviceStates,
          v11);
      }
      else
      {
        _memset(joystickDeviceStates, 0, 0x50);
      }
      ++v12;
      joystickDeviceStates = (JoystickDeviceState *)((char *)joystickDeviceStates + 0xA0);
      joystickInterfaces = (IDirectInputDevice8 **)((char *)joystickInterfaces + 1);
    }
    while ( (int)joystickInterfaces < (signed int)this->numJoysticks );
  }
  keyboardInterface = this->keyboardInterface;
  if ( keyboardInterface )
  {
    qmemcpy(this->PreviousKeyState, this->CurrentKeyState, sizeof(this->PreviousKeyState));
    if ( (unsigned int)keyboardInterface->vtbl->SysKeyboardImpl_Acquire(keyboardInterface) < 2 )
    {
      ((void (__cdecl *)(IDirectInputDevice8 *))this->keyboardInterface->vtbl->IDirectInputDevice2Impl_Poll)(this->keyboardInterface);
      ((void (__stdcall *)(IDirectInputDevice8 *, int, UInt8 *, int))this->keyboardInterface->vtbl->SysKeyboardImpl_GetDeviceState)(
        this->keyboardInterface,
        0x100,
        this->CurrentKeyState,
        v10);
    }
    else
    {
      _memset(this->CurrentKeyState, 0, sizeof(this->CurrentKeyState));
    }
  }
  if ( this->mouseInterface )
  {
    lY = this->CurrentMouseState.lY;
    lZ = this->CurrentMouseState.lZ;
    this->PreviousMouseState.lX = this->CurrentMouseState.lX;
    v8 = *(_DWORD *)this->CurrentMouseState.rgbButtons;
    this->PreviousMouseState.lY = lY;
    v9 = *(_DWORD *)&this->CurrentMouseState.rgbButtons[4];
    this->PreviousMouseState.lZ = lZ;
    *(_DWORD *)this->PreviousMouseState.rgbButtons = v8;
    *(_DWORD *)&this->PreviousMouseState.rgbButtons[4] = v9;
    *(_DWORD *)this->unk1B50 = 0;
    *(_DWORD *)&this->unk1B50[4] = 0;
    if ( (unsigned int)this->mouseInterface->vtbl->SysKeyboardImpl_Acquire(this->mouseInterface) < 2 )
    {
      ((void (__cdecl *)(IDirectInputDevice8 *))this->mouseInterface->vtbl->IDirectInputDevice2Impl_Poll)(this->mouseInterface);
      ((void (__cdecl *)(IDirectInputDevice8 *, int, DIMOUSESTATE2 *))this->mouseInterface->vtbl->SysKeyboardImpl_GetDeviceState)(
        this->mouseInterface,
        0x14,
        &this->CurrentMouseState);
    }
    else
    {
      this->CurrentMouseState.lX = 0;
      this->CurrentMouseState.lY = 0;
      this->CurrentMouseState.lZ = 0;
      *(_DWORD *)this->CurrentMouseState.rgbButtons = 0;
      *(_DWORD *)&this->CurrentMouseState.rgbButtons[4] = 0;
    }
    v1 = 0;
    unk1B58 = this->unk1B58;
    do
    {
      if ( (char)this->CurrentMouseState.rgbButtons[v1] < 0 && (char)this->PreviousMouseState.rgbButtons[v1] >= 0 )
      {
        if ( Seed - *unk1B58 > this->doubleClickTime )
        {
          *unk1B58 = Seed;
        }
        else
        {
          this->unk1B50[v1] = 1;
          *unk1B58 = 0;
        }
      }
      ++v1;
      ++unk1B58;
    }
    while ( v1 <= 7 );
  }
}
