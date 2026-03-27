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

  if ( *(_BYTE *)(this + 0x34) )
  {
    v2 = *(_DWORD *)(this + 0xC);
    *(_BYTE *)(this + 0x34) = 0;
    FormHeapFree(v2);
    sub_49CA50((int **)this);
    v3 = *(_DWORD *)(this + 4);
    v4 = InterlockedDecrement;
    if ( v3 )
    {
      v5 = *(_DWORD *)(v3 + 0x1C);
      if ( v5 )
      {
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v5 + 0x88))(v5, &v11, *(_DWORD *)(this + 4));
        if ( v11 )
        {
          v6 = (void (__thiscall ***)(_DWORD, int))v11;
          if ( !v4((volatile LONG *)(v11 + 4)) )
            (**v6)(v6, 1);
        }
      }
      v7 = *(_DWORD *)(this + 4);
      if ( v7 )
      {
        if ( !v4((volatile LONG *)(v7 + 4)) )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
        *(_DWORD *)(this + 4) = 0;
      }
    }
    v8 = *(_DWORD *)(this + 0x10);
    if ( v8 )
    {
      if ( !v4((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      *(_DWORD *)(this + 0x10) = 0;
    }
    v9 = *(_DWORD *)(this + 0x1C);
    if ( v9 )
    {
      if ( !v4((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      *(_DWORD *)(this + 0x1C) = 0;
    }
    v10 = *(_DWORD *)(this + 0x24);
    if ( v10 )
    {
      if ( !v4((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      *(_DWORD *)(this + 0x24) = 0;
    }
  }
}
