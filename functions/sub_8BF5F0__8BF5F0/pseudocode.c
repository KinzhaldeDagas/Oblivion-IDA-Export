signed int __thiscall sub_8BF5F0(_DWORD *this)
{
  int v2; // eax

  if ( !*(this + 1) ) /*0x8bf5f6*/
  {
    v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x29); /*0x8bf60a*/
    *(float *)(v2 + 0x14) = flt_A31C80; /*0x8bf612*/
    *(_WORD *)(v2 + 4) = 0x20; /*0x8bf615*/
    *(_WORD *)(v2 + 6) = 1; /*0x8bf61b*/
    *(_DWORD *)(v2 + 0x10) = 0; /*0x8bf621*/
    *(_DWORD *)(v2 + 0xC) = 0; /*0x8bf624*/
    *(_DWORD *)v2 = &ahkBreakableConstraintData::`vftable'; /*0x8bf627*/
    *(_DWORD *)(v2 + 0x1C) = 0; /*0x8bf62d*/
    *(_BYTE *)(v2 + 0x18) = 0; /*0x8bf630*/
    *(_BYTE *)(v2 + 0x19) = 0; /*0x8bf633*/
    *(_BYTE *)(v2 + 0x1A) = 0; /*0x8bf636*/
    *(this + 1) = v2; /*0x8bf639*/
  }
  return 0x20; /*0x8bf63c*/
}
