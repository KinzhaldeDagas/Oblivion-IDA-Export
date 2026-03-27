signed int __thiscall sub_8BF5F0(_DWORD *this)
{
  int v2; // eax

  if ( !*(this + 1) )
  {
    v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x29);
    *(float *)(v2 + 0x14) = flt_A31C80;
    *(_WORD *)(v2 + 4) = 0x20;
    *(_WORD *)(v2 + 6) = 1;
    *(_DWORD *)(v2 + 0x10) = 0;
    *(_DWORD *)(v2 + 0xC) = 0;
    *(_DWORD *)v2 = &ahkBreakableConstraintData::`vftable';
    *(_DWORD *)(v2 + 0x1C) = 0;
    *(_BYTE *)(v2 + 0x18) = 0;
    *(_BYTE *)(v2 + 0x19) = 0;
    *(_BYTE *)(v2 + 0x1A) = 0;
    *(this + 1) = v2;
  }
  return 0x20;
}
