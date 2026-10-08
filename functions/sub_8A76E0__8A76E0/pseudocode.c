int __thiscall sub_8A76E0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *(this + 0xA); /*0x8a76e0*/
  v3 = *(this + 0xB) - v2; /*0x8a76ec*/
  *(this + 8) = *(_DWORD *)(v2 - 0x10); /*0x8a76f5*/
  *(this + 9) = *(_DWORD *)(v2 - 0x10 + 4); /*0x8a76fa*/
  *(this + 0xA) = *(_DWORD *)(v2 - 0x10 + 8); /*0x8a7705*/
  *(this + 0xB) = *(_DWORD *)(v2 - 0x10 + 0xC); /*0x8a770d*/
  return sub_8A75D0((int)this, (_DWORD *)(v2 - 0x10), v3 + 0x10, 0x14); /*0x8a7715*/
}
