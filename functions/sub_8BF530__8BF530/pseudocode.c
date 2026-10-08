int __thiscall sub_8BF530(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi

  v3 = *(this + 1); /*0x8bf533*/
  v4 = a2; /*0x8bf537*/
  if ( !a2 ) /*0x8bf543*/
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x29); /*0x8bf554*/
    *(float *)(v5 + 0x14) = flt_A31C80; /*0x8bf55c*/
    *(_WORD *)(v5 + 4) = 0x20; /*0x8bf55f*/
    *(_WORD *)(v5 + 6) = 1; /*0x8bf565*/
    *(_DWORD *)(v5 + 0x10) = 0; /*0x8bf56b*/
    *(_DWORD *)(v5 + 0xC) = 0; /*0x8bf56e*/
    *(_DWORD *)v5 = &ahkBreakableConstraintData::`vftable'; /*0x8bf571*/
    *(_DWORD *)(v5 + 0x1C) = 0; /*0x8bf577*/
    *(_BYTE *)(v5 + 0x18) = 0; /*0x8bf57a*/
    *(_BYTE *)(v5 + 0x19) = 0; /*0x8bf57d*/
    *(_BYTE *)(v5 + 0x1A) = 0; /*0x8bf580*/
    v4 = v5; /*0x8bf583*/
  }
  v6 = *(_DWORD *)(v3 + 0xC); /*0x8bf585*/
  if ( v6 ) /*0x8bf58a*/
  {
    v7 = sub_8E7FD0(v6, a3); /*0x8bf593*/
    v8 = v7; /*0x8bf598*/
    if ( v7 ) /*0x8bf59f*/
    {
      sub_8BED90((_DWORD *)v4, v7); /*0x8bf5a4*/
      if ( *(_WORD *)(v8 + 4) ) /*0x8bf5a9*/
      {
        if ( !--*(_WORD *)(v8 + 6) ) /*0x8bf5b4*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x8bf5c5*/
      }
    }
  }
  *(float *)(v4 + 0x14) = *(float *)(v3 + 0x14); /*0x8bf5cf*/
  *(_BYTE *)(v4 + 0x19) = *(_BYTE *)(v3 + 0x19); /*0x8bf5d5*/
  *(_BYTE *)(v4 + 0x1A) = *(_BYTE *)(v3 + 0x1A); /*0x8bf5dc*/
  return sub_8A07B0(this, v4, a3); /*0x8bf5e9*/
}
