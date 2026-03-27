InputGlobal *__thiscall InputGlobals::InitializeInputSystem(InputGlobal *this, IDirectInputDevice8 *hinst)
{
  IDirectInput8 **p_dinputInterface; // ebp
  IDirectInput8 *v4; // eax
  IDirectInput8 *v5; // eax
  IDirectInputDevice8 *v6; // eax
  void (__stdcall **p_IDirectInputDevice2Impl_SetCooperativeLevel)(IDirectInputDevice8 *, HWND, signed int); // edi
  HWND ActiveWindow; // eax
  HWND v9; // eax
  IDirectInputDevice8 *keyboardInterface; // eax
  BOOL v11; // eax
  IDirectInputDevice8 *v12; // eax
  void (__stdcall **v13)(IDirectInputDevice8 *, HWND, signed int); // edi
  HWND v14; // eax
  HINSTANCE v16; // [esp+18h] [ebp-38h]
  int v17; // [esp+28h] [ebp-28h]
  _DWORD v18[5]; // [esp+3Ch] [ebp-14h] BYREF

  p_dinputInterface = &this->dinputInterface;
  v16 = (HINSTANCE)hinst;
  this->numJoysticks = 0;
  this->flags = 0;
  DirectInput8Create_0(v16, 0x800u, &a0ayHvmksDa6c, &this->dinputInterface, 0);
  if ( bUseJoystick == 1 )
  {
    v4 = *p_dinputInterface;
    this->flags |= 1u;
    v4->vtbl->EnumDevices(v4, 0, InputGlobals::InitializeJoystickProperties, this, 1);
    if ( !this->numJoysticks )
      this->flags &= ~1u;
  }
  v5 = *p_dinputInterface;
  this->keyboardInterface = 0;
  if ( !v5->vtbl->CreateDevice(v5, &CLSID_GUID_SysKeyboard, &hinst, 0) )
  {
    v6 = hinst;
    this->flags |= 4u;
    this->keyboardInterface = v6;
    p_IDirectInputDevice2Impl_SetCooperativeLevel = &v6->vtbl->IDirectInputDevice2Impl_SetCooperativeLevel;
    if ( bBackgroundKey == 1 )
    {
      ActiveWindow = GetActiveWindow();
      (*p_IDirectInputDevice2Impl_SetCooperativeLevel)(this->keyboardInterface, ActiveWindow, 0x16);
    }
    else
    {
      v9 = GetActiveWindow();
      (*p_IDirectInputDevice2Impl_SetCooperativeLevel)(this->keyboardInterface, v9, 0x15);
    }
    this->keyboardInterface->vtbl->IDirectInputDevice2Impl_SetDataFormat(this->keyboardInterface, &stru_A78E5C);
    v18[3] = 0;
    v18[2] = 0;
    keyboardInterface = this->keyboardInterface;
    v18[0] = 0x14;
    v18[1] = 0x10;
    v18[4] = 0x20;
    keyboardInterface->vtbl->IDirectInputDevice2Impl_SetProperty(keyboardInterface, 1, v18);
  }
  this->mouseInterface = 0;
  v11 = SwapMouseButton(0);
  this->oldMouseButtonSwap = v11;
  SwapMouseButton(v11);
  this->doubleClickTime = GetDoubleClickTime();
  this->unk1B58[0] = 0;
  this->unk1B58[1] = 0;
  this->unk1B58[2] = 0;
  this->unk1B58[3] = 0;
  this->unk1B58[4] = 0;
  this->unk1B58[5] = 0;
  this->unk1B58[6] = 0;
  this->unk1B58[7] = 0;
  _memset(&this->unk1AF4, 0, sizeof(this->unk1AF4));
  this->unk1AF4.bufLen = 0x2C;
  if ( bBackgroundMouse == 1 )
    this->flags |= 8u;
  if ( !(*p_dinputInterface)->vtbl->CreateDevice(*p_dinputInterface, &CLSID_GUID_SysMouse, &hinst, 0) )
  {
    v12 = hinst;
    this->flags |= 2u;
    this->mouseInterface = v12;
    v12->vtbl->SysKeyboardImpl_GetCapabilities(v12, &this->unk1AF4);
    v13 = &this->mouseInterface->vtbl->IDirectInputDevice2Impl_SetCooperativeLevel;
    if ( (this->flags & 8) != 0 )
      v17 = 6;
    else
      v17 = 5;
    v14 = GetActiveWindow();
    (*v13)(this->mouseInterface, v14, v17);
    this->mouseInterface->vtbl->IDirectInputDevice2Impl_SetDataFormat(this->mouseInterface, &stru_A78A4C);
  }
  _memset(this->joystickDeviceStates, 0, 0x500);
  _memset(this->CurrentKeyState, 0, 0x200);
  this->CurrentMouseState.lX = 0;
  this->CurrentMouseState.lY = 0;
  this->CurrentMouseState.lZ = 0;
  *(_DWORD *)this->CurrentMouseState.rgbButtons = 0;
  *(_DWORD *)&this->CurrentMouseState.rgbButtons[4] = 0;
  this->PreviousMouseState.lX = 0;
  this->PreviousMouseState.lY = 0;
  this->PreviousMouseState.lZ = 0;
  *(_DWORD *)this->PreviousMouseState.rgbButtons = 0;
  *(_DWORD *)&this->PreviousMouseState.rgbButtons[4] = 0;
  LOBYTE(this->unk1B7C) = 0;
  HIBYTE(this->unk1B7C) = 0;
  InputGlobals::ResetControlMap((DIDEVCAPS *)this, 3u);
  return this;
}
