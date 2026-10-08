// [Controller decode 2026-07-09] Initializes DirectInput keyboard, mouse, and joystick/controller devices. If bUseJoystick is true, enumerates joystick/gamepad devices, clears state caches, then resets default control bindings.
//
// [Controller decode 2026-07-09] Central decoded PC controller/joystick/IsXBox summary is stored in IDB netnode "$ ControllerStuff"; full external doc is C:\src\OblivionIDA\ControllerStuff.md.
//
// [Controller decode 2026-07-09] Controller decode completion estimate stored in IDB netnode "$ ControllerStuff" sup 200. Current overall decoded PC Controller/IsXBox/Joystick knowledge is about 92%.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1065; metadata at sup 999; completion estimate at sup 200.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1067; metadata at sup 999; completion estimate at sup 200.
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

  p_dinputInterface = &this->dinputInterface; /*0x404160*/
  v16 = (HINSTANCE)hinst; /*0x40416e*/
  this->numJoysticks = 0; /*0x40416f*/
  this->flags = 0; /*0x404175*/
  DirectInput8Create_0(v16, 0x800u, &a0ayHvmksDa6c, &this->dinputInterface, 0); /*0x404177*/
  if ( bUseJoystick == 1 ) /*0x404183*/
  {
    v4 = *p_dinputInterface; /*0x404185*/
    this->flags |= 1u; /*0x404188*/
    v4->vtbl->EnumDevices(v4, 0, InputGlobals::InitializeJoystickProperties, this, 1); /*0x40419a*/
    if ( !this->numJoysticks ) /*0x40419c*/
      this->flags &= ~1u; /*0x4041a4*/
  }
  v5 = *p_dinputInterface; /*0x4041a7*/
  this->keyboardInterface = 0; /*0x4041b0*/
  if ( !v5->vtbl->CreateDevice(v5, &CLSID_GUID_SysKeyboard, &hinst, 0) ) /*0x4041be*/
  {
    v6 = hinst; /*0x4041ca*/
    this->flags |= 4u; /*0x4041ce*/
    this->keyboardInterface = v6; /*0x4041d1*/
    p_IDirectInputDevice2Impl_SetCooperativeLevel = &v6->vtbl->IDirectInputDevice2Impl_SetCooperativeLevel; /*0x4041d6*/
    if ( bBackgroundKey == 1 ) /*0x4041e0*/
    {
      ActiveWindow = GetActiveWindow(); /*0x4041e4*/
      (*p_IDirectInputDevice2Impl_SetCooperativeLevel)(this->keyboardInterface, ActiveWindow, 0x16); /*0x4041ed*/
    }
    else
    {
      v9 = GetActiveWindow(); /*0x4041f3*/
      (*p_IDirectInputDevice2Impl_SetCooperativeLevel)(this->keyboardInterface, v9, 0x15); /*0x4041fc*/
    }
    this->keyboardInterface->vtbl->IDirectInputDevice2Impl_SetDataFormat(this->keyboardInterface, &stru_A78E5C); /*0x40420c*/
    v18[3] = 0; /*0x404210*/
    v18[2] = 0; /*0x404214*/
    keyboardInterface = this->keyboardInterface; /*0x404218*/
    v18[0] = 0x14; /*0x404220*/
    v18[1] = 0x10; /*0x404228*/
    v18[4] = 0x20; /*0x404230*/
    keyboardInterface->vtbl->IDirectInputDevice2Impl_SetProperty(keyboardInterface, 1, v18); /*0x404240*/
  }
  this->mouseInterface = 0; /*0x404244*/
  v11 = SwapMouseButton(0); /*0x40424e*/
  this->oldMouseButtonSwap = v11; /*0x404251*/
  SwapMouseButton(v11); /*0x404257*/
  this->doubleClickTime = GetDoubleClickTime(); /*0x40425f*/
  this->mouseButtonPressTimestamps[0] = 0; /*0x404267*/
  this->mouseButtonPressTimestamps[1] = 0; /*0x40426d*/
  this->mouseButtonPressTimestamps[2] = 0; /*0x404273*/
  this->mouseButtonPressTimestamps[3] = 0; /*0x404279*/
  this->mouseButtonPressTimestamps[4] = 0; /*0x40427f*/
  this->mouseButtonPressTimestamps[5] = 0; /*0x404287*/
  this->mouseButtonPressTimestamps[6] = 0; /*0x404294*/
  this->mouseButtonPressTimestamps[7] = 0; /*0x40429b*/
  _memset((int)&this->mouseDeviceCaps, 0, sizeof(this->mouseDeviceCaps)); /*0x4042a1*/
  this->mouseDeviceCaps.bufLen = 0x2C; /*0x4042a9*/
  if ( bBackgroundMouse == 1 ) /*0x4042b6*/
    this->flags |= 8u; /*0x4042b8*/
  if ( !(*p_dinputInterface)->vtbl->CreateDevice(*p_dinputInterface, &CLSID_GUID_SysMouse, &hinst, 0) ) /*0x4042d0*/
  {
    v12 = hinst; /*0x4042d6*/
    this->flags |= 2u; /*0x4042da*/
    this->mouseInterface = v12; /*0x4042dd*/
    v12->vtbl->SysKeyboardImpl_GetCapabilities(v12, &this->mouseDeviceCaps); /*0x4042e7*/
    v13 = &this->mouseInterface->vtbl->IDirectInputDevice2Impl_SetCooperativeLevel; /*0x4042ee*/
    if ( (this->flags & 8) != 0 ) /*0x4042f4*/
      v17 = 6; /*0x4042f6*/
    else
      v17 = 5; /*0x4042fa*/
    v14 = GetActiveWindow(); /*0x4042fc*/
    (*v13)(this->mouseInterface, v14, v17); /*0x404305*/
    this->mouseInterface->vtbl->IDirectInputDevice2Impl_SetDataFormat(this->mouseInterface, &stru_A78A4C); /*0x404315*/
  }
  _memset((int)this->joystickDeviceStates, 0, 0x500u); /*0x404322*/
  _memset((int)this->CurrentKeyState, 0, 0x200u); /*0x404335*/
  this->CurrentMouseState.lX = 0; /*0x40433c*/
  this->CurrentMouseState.lY = 0; /*0x404342*/
  this->CurrentMouseState.lZ = 0; /*0x404348*/
  *(_DWORD *)this->CurrentMouseState.rgbButtons = 0; /*0x40434e*/
  *(_DWORD *)&this->CurrentMouseState.rgbButtons[4] = 0; /*0x404354*/
  this->PreviousMouseState.lX = 0; /*0x40435a*/
  this->PreviousMouseState.lY = 0; /*0x404360*/
  this->PreviousMouseState.lZ = 0; /*0x404366*/
  *(_DWORD *)this->PreviousMouseState.rgbButtons = 0; /*0x40436c*/
  *(_DWORD *)&this->PreviousMouseState.rgbButtons[4] = 0; /*0x404375*/
  LOBYTE(this->unk1B7C) = 0; /*0x40437f*/
  HIBYTE(this->unk1B7C) = 0; /*0x404385*/
  InputGlobals::ResetControlMap((DIDEVCAPS *)this, 3u); /*0x40438b*/
  return this; /*0x404390*/
}
