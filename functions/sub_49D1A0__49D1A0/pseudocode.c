void __thiscall sub_49D1A0(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // [esp+8h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 0x34) ) /*0x49d1a7*/
  {
    v2 = *(_DWORD *)(this + 0xC); /*0x49d1b0*/
    *(_BYTE *)(this + 0x34) = 0; /*0x49d1b6*/
    FormHeapFree(v2); /*0x49d1b9*/
    sub_49CA50((char **)this); /*0x49d1c3*/
    v3 = *(_DWORD *)(this + 4); /*0x49d1c8*/
    v4 = InterlockedDecrement; /*0x49d1cd*/
    if ( v3 ) /*0x49d1d3*/
    {
      v5 = *(_DWORD *)(v3 + 0x1C); /*0x49d1d5*/
      if ( v5 ) /*0x49d1da*/
      {
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v5 + 0x88))(v5, &v11, *(_DWORD *)(this + 4)); /*0x49d1ea*/
        if ( v11 ) /*0x49d1f2*/
        {
          v6 = (void (__thiscall ***)(_DWORD, int))v11; /*0x49d1f4*/
          if ( !v4((volatile LONG *)(v11 + 4)) ) /*0x49d1fa*/
            (**v6)(v6, 1); /*0x49d20c*/
        }
      }
      v7 = *(_DWORD *)(this + 4); /*0x49d20e*/
      if ( v7 ) /*0x49d213*/
      {
        if ( !v4((volatile LONG *)(v7 + 4)) ) /*0x49d219*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x49d22b*/
        *(_DWORD *)(this + 4) = 0; /*0x49d22d*/
      }
    }
    v8 = *(_DWORD *)(this + 0x10); /*0x49d230*/
    if ( v8 ) /*0x49d235*/
    {
      if ( !v4((volatile LONG *)(v8 + 4)) ) /*0x49d23b*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x49d24d*/
      *(_DWORD *)(this + 0x10) = 0; /*0x49d24f*/
    }
    v9 = *(_DWORD *)(this + 0x1C); /*0x49d252*/
    if ( v9 ) /*0x49d257*/
    {
      if ( !v4((volatile LONG *)(v9 + 4)) ) /*0x49d25d*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x49d26f*/
      *(_DWORD *)(this + 0x1C) = 0; /*0x49d271*/
    }
    v10 = *(_DWORD *)(this + 0x24); /*0x49d274*/
    if ( v10 ) /*0x49d279*/
    {
      if ( !v4((volatile LONG *)(v10 + 4)) ) /*0x49d27f*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x49d291*/
      *(_DWORD *)(this + 0x24) = 0; /*0x49d293*/
    }
  }
}
