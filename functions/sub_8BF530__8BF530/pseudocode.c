int __thiscall sub_8BF530(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi

  v3 = *(this + 1);
  v4 = a2;
  if ( !a2 )
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x29);
    *(float *)(v5 + 0x14) = flt_A31C80;
    *(_WORD *)(v5 + 4) = 0x20;
    *(_WORD *)(v5 + 6) = 1;
    *(_DWORD *)(v5 + 0x10) = 0;
    *(_DWORD *)(v5 + 0xC) = 0;
    *(_DWORD *)v5 = &ahkBreakableConstraintData::`vftable';
    *(_DWORD *)(v5 + 0x1C) = 0;
    *(_BYTE *)(v5 + 0x18) = 0;
    *(_BYTE *)(v5 + 0x19) = 0;
    *(_BYTE *)(v5 + 0x1A) = 0;
    v4 = v5;
  }
  v6 = *(_DWORD *)(v3 + 0xC);
  if ( v6 )
  {
    v7 = sub_8E7FD0(v6, a3);
    v8 = v7;
    if ( v7 )
    {
      sub_8BED90((_DWORD *)v4, v7);
      if ( *(_WORD *)(v8 + 4) )
      {
        if ( !--*(_WORD *)(v8 + 6) )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
    }
  }
  *(float *)(v4 + 0x14) = *(float *)(v3 + 0x14);
  *(_BYTE *)(v4 + 0x19) = *(_BYTE *)(v3 + 0x19);
  *(_BYTE *)(v4 + 0x1A) = *(_BYTE *)(v3 + 0x1A);
  return sub_8A07B0(this, v4, a3);
}
