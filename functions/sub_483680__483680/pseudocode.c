void __thiscall sub_483680(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  void (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // edi
  int v9; // eax

  v3 = *(this + 4) + 0x10 * (a3 + a2 * *(this + 3));
  v4 = *(_DWORD *)(v3 + 4);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 0x1C);
    v6 = InterlockedDecrement;
    if ( v5 )
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v5 + 0x88))(v5, &a2, v4);
      if ( a2 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))a2;
        if ( !v6((volatile LONG *)(a2 + 4)) )
          (**v7)(v7, 1);
      }
    }
    v8 = *(_DWORD *)(v3 + 4);
    if ( v8 )
    {
      if ( !v6((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      *(_DWORD *)(v3 + 4) = 0;
    }
    v9 = sub_4EF1D0(*(_WORD *)(v3 + 8), *(_WORD *)(v3 + 0xC));
    sub_4B27F0(v9);
  }
  if ( dword_B35B8C )
    sub_4BD380((void *)dword_B35B8C, *(_DWORD *)(v3 + 8), *(volatile LONG **)(v3 + 0xC));
  *(_BYTE *)v3 = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 0xC) = 0;
  *(_BYTE *)(v3 + 1) = 0;
}
