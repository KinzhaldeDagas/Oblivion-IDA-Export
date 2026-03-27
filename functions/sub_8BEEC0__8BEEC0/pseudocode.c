signed int __thiscall sub_8BEEC0(_DWORD *this)
{
  int v2; // eax

  if ( !*(this + 1) )
  {
    v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x29);
    *(_WORD *)(v2 + 4) = 0x18;
    *(_WORD *)(v2 + 6) = 1;
    *(_DWORD *)(v2 + 0xC) = 0;
    *(_DWORD *)v2 = &ahkMalleableConstraintData::`vftable';
    *(this + 1) = v2;
  }
  return 0x18;
}
