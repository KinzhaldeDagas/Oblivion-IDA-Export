int __thiscall sub_8A76E0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *(this + 0xA);
  v3 = *(this + 0xB) - v2;
  *(this + 8) = *(_DWORD *)(v2 - 0x10);
  *(this + 9) = *(_DWORD *)(v2 - 0x10 + 4);
  *(this + 0xA) = *(_DWORD *)(v2 - 0x10 + 8);
  *(this + 0xB) = *(_DWORD *)(v2 - 0x10 + 0xC);
  return sub_8A75D0((int)this, (_DWORD *)(v2 - 0x10), v3 + 0x10, 0x14);
}
