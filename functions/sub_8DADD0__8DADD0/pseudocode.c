int __thiscall sub_8DADD0(int *this, int a2, int a3, int a4)
{
  int *v5; // ecx
  int result; // eax

  v5 = this + 5 * *(this + 0x63) + 0x264;
  *v5 = *(_DWORD *)a2;
  v5[1] = *(_DWORD *)(a2 + 4);
  v5[2] = *(_DWORD *)(a2 + 8);
  v5[3] = *(_DWORD *)(a2 + 0xC);
  v5[4] = *(_DWORD *)(a2 + 0x10);
  sub_8DA580((int)this, (int)(this + 0x3A5), 1, a3, a4, a3, a4, *(this + 0x706), 0);
  sub_8DA580((int)this, (int)(this + 0x64), *(this + 0x63), a3, a4, a3, a4, *(this + 0x704), 0);
  if ( *(_BYTE *)(a2 + 0x11) )
  {
    sub_8DA580((int)this, (int)(this + 0x4A5), 1, a3, a4, a3, a4, *(this + 0x707), 0);
    sub_8DA580((int)this, (int)(this + 0x164), *(this + 0x63), a3, a4, a3, a4, *(this + 0x705), 0);
  }
  result = *(this + 0x63) + 1;
  *(this + 0x63) = result;
  return result;
}
