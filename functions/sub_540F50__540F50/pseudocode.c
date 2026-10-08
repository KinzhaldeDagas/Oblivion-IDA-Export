void __thiscall sub_540F50(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v1 = InterlockedDecrement; /*0x540f52*/
  v3 = *(this + 1); /*0x540f5c*/
  if ( v3 ) /*0x540f61*/
  {
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v3 + 0x88))(v3, &v6, *(this + 2)); /*0x540f74*/
    if ( v6 ) /*0x540f7c*/
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v6; /*0x540f7e*/
      if ( !v1((volatile LONG *)(v6 + 4)) ) /*0x540f84*/
        (**v4)(v4, 1); /*0x540f96*/
    }
  }
  v5 = *(this + 2); /*0x540f98*/
  if ( v5 ) /*0x540f9d*/
  {
    if ( !v1((volatile LONG *)(v5 + 4)) ) /*0x540fa3*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x540fb5*/
    *(this + 2) = 0; /*0x540fb7*/
  }
}
