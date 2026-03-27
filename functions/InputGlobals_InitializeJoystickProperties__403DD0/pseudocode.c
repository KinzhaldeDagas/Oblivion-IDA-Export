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

  v2 = a1;
  v3 = a1[0x24];
  if ( v3 != 0x14 && v3 != 0x15 )
    return 1;
  v5 = a2;
  qmemcpy(&a2->joystickDevices[a2->numJoysticks], a1, sizeof(a2->joystickDevices[a2->numJoysticks]));
  v5->dinputInterface->vtbl->CreateDevice(v5->dinputInterface, v2 + 4, (IDirectInputDevice8 **)&a1, 0);
  v6 = (IDirectInputDevice8 *)a1;
  v7 = (void (__stdcall **)(IDirectInputDevice8 *, HWND, int))(*(_DWORD *)a1 + 0x34);
  ActiveWindow = GetActiveWindow();
  (*v7)(v6, ActiveWindow, 6);
  v6->vtbl->IDirectInputDevice2Impl_SetDataFormat(v6, &JoystickDeviceFormat);
  _memset(&v5->joysticDevCaps[v5->numJoysticks], 0, sizeof(v5->joysticDevCaps[v5->numJoysticks]));
  v5->joysticDevCaps[v5->numJoysticks].dwSize = 0x2C;
  v6->vtbl->SysKeyboardImpl_GetCapabilities(v6, (Unk1AF4 *)&v5->joysticDevCaps[v5->numJoysticks]);
  v5->devInfo[v5->numJoysticks].axis = 0;
  v5->devInfo[v5->numJoysticks].buttons = 0;
  ((void (__stdcall *)(IDirectInputDevice8 *, signed int (__stdcall *)(int, _DWORD *), JoystickObjectsInfo *, _DWORD))v6->vtbl->IDirectInputDevice2Impl_EnumObjects)(
    v6,
    sub_4035D0,
    &v5->devInfo[v5->numJoysticks],
    0);
  v5->joystickInterfaces[v5->numJoysticks] = v6;
  v9 = v5->joystickInterfaces[v5->numJoysticks];
  v10[0] = 0x18;
  v10[1] = 0x10;
  v10[3] = 0;
  v10[2] = 0;
  v10[4] = 0xFFFFFF9C;
  v10[5] = 0x64;
  v9->vtbl->IDirectInputDevice2Impl_SetProperty(v9, 4, v10);
  InputGlobals::SetJoystickDeadzone(v5, v5->numJoysticks, 0.1);
  return ++v5->numJoysticks != 8;
}
