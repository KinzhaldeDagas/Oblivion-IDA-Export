int __thiscall sub_4C9D20(int this, int a2)
{
  int result; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4c9d24*/
  {
    *(_DWORD *)(this + 0x50) = a2; /*0x4c9d2a*/
    return a2; /*0x4c9d26*/
  }
  return result; /*0x4c9d2d*/
}
