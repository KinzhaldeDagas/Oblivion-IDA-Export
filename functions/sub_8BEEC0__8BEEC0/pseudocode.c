signed int __thiscall sub_8BEEC0(_DWORD *this)
{
  int v2; // eax

  if ( !*(this + 1) ) /*0x8beec3*/
  {
    v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x29); /*0x8beed8*/
    *(_WORD *)(v2 + 4) = 0x18; /*0x8beeda*/
    *(_WORD *)(v2 + 6) = 1; /*0x8beee0*/
    *(_DWORD *)(v2 + 0xC) = 0; /*0x8beee6*/
    *(_DWORD *)v2 = &ahkMalleableConstraintData::`vftable'; /*0x8beeed*/
    *(this + 1) = v2; /*0x8beef3*/
  }
  return 0x18; /*0x8beefb*/
}
