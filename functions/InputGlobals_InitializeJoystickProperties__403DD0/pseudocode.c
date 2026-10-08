// [Controller decode 2026-07-09] DirectInput EnumDevices callback for joystick/gamepad devices. Accepts device types 0x14/0x15, copies DIDEVICEINSTANCE, sets g_joystickDIDATAFORMAT, reads DIDEVCAPS, enumerates objects, sets axis range -100..100 and 10 percent deadzone.
BOOL __stdcall InputGlobals::InitializeJoystickProperties(_BYTE *a1, InputGlobal *a2)
{
  _BYTE *v2; // edx
  char v3; // al
  InputGlobal *v5; // ebx
  IDirectInputDevice8 *v6; // esi
  void (__stdcall **v7)(IDirectInputDevice8 *, HWND, int); // edi
  HWND ActiveWindow; // eax
  IDirectInputDevice8 *v9; // eax
  _DWORD v10[6]; // [esp+5Ch] [ebp-18h] BYREF

  v2 = a1; /*0x403dd0*/
  v3 = a1[0x24]; /*0x403dd4*/
  if ( v3 != 0x14 && v3 != 0x15 ) /*0x403de0*/
    return 1; /*0x403de2*/
  v5 = a2; /*0x403dee*/
  qmemcpy(&a2->joystickDevices[a2->numJoysticks], a1, sizeof(a2->joystickDevices[a2->numJoysticks])); /*0x403e0f*/
  v5->dinputInterface->vtbl->CreateDevice(v5->dinputInterface, v2 + 4, (IDirectInputDevice8 **)&a1, 0); /*0x403e26*/
  v6 = (IDirectInputDevice8 *)a1; /*0x403e28*/
  v7 = (void (__stdcall **)(IDirectInputDevice8 *, HWND, int))(*(_DWORD *)a1 + 0x34); /*0x403e30*/
  ActiveWindow = GetActiveWindow(); /*0x403e33*/
  (*v7)(v6, ActiveWindow, 6); /*0x403e3d*/
  v6->vtbl->IDirectInputDevice2Impl_SetDataFormat(v6, &g_joystickDIDATAFORMAT); /*0x403e4a*/
  _memset((int)&v5->joystickDevCaps[v5->numJoysticks], 0, sizeof(v5->joystickDevCaps[v5->numJoysticks])); /*0x403e60*/
  v5->joystickDevCaps[v5->numJoysticks].dwSize = 0x2C; /*0x403e6e*/
  v6->vtbl->SysKeyboardImpl_GetCapabilities(v6, (Unk1AF4 *)&v5->joystickDevCaps[v5->numJoysticks]); /*0x403e93*/
  v5->joystickObjectInfo[v5->numJoysticks].axisMask = 0; /*0x403e9b*/
  v5->joystickObjectInfo[v5->numJoysticks].povMask = 0; /*0x403ea8*/
  ((void (__stdcall *)(IDirectInputDevice8 *, signed int (__stdcall *)(int, _DWORD *), JoystickObjectsInfo *, _DWORD))v6->vtbl->IDirectInputDevice2Impl_EnumObjects)( /*0x403ec9*/
    v6,
    InputGlobals::EnumJoystickObjectsCallback,
    &v5->joystickObjectInfo[v5->numJoysticks],
    0);
  v5->joystickInterfaces[v5->numJoysticks] = v6; /*0x403ed1*/
  v9 = v5->joystickInterfaces[v5->numJoysticks]; /*0x403edb*/
  v10[0] = 0x18; /*0x403ee3*/
  v10[1] = 0x10; /*0x403eeb*/
  v10[3] = 0; /*0x403ef3*/
  v10[2] = 0; /*0x403ef7*/
  v10[4] = 0xFFFFFF9C; /*0x403efb*/
  v10[5] = 0x64; /*0x403f03*/
  v9->vtbl->IDirectInputDevice2Impl_SetProperty(v9, 4, v10); /*0x403f14*/
  InputGlobals::SetJoystickDeadzone(v5, v5->numJoysticks, 0.1); /*0x403f29*/
  return ++v5->numJoysticks != 8; /*0x403de7*/
}
