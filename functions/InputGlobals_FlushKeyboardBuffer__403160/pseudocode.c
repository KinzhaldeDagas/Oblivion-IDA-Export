void __thiscall InputGlobals::FlushKeyboardBuffer(InputGlobal *this)
{
  DWORD v1; // [esp+0h] [ebp-4h] BYREF

  v1 = (DWORD)this;
  if ( this->keyboardInterface )
    ((void (__cdecl *)(ParamInfo *__return_ptr __struct_ptr, IDirectInput8 *, DWORD, DIDEVICEOBJECTDATA *, DWORD *, DWORD))this->keyboardInterface->vtbl->IDirectInputDevice2Impl_GetDeviceData)(
      (ParamInfo *)this->keyboardInterface,
      (IDirectInput8 *)0x14,
      0,
      (DIDEVICEOBJECTDATA *)&v1,
      0,
      INFINITE);
}
