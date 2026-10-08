int __thiscall sub_8DADD0(int *this, int a2, int a3, int a4)
{
  int *v5; // ecx
  int result; // eax

  v5 = this + 5 * *(this + 0x63) + 0x264; /*0x8dade6*/
  *v5 = *(_DWORD *)a2; /*0x8dadf1*/
  v5[1] = *(_DWORD *)(a2 + 4); /*0x8dadf6*/
  v5[2] = *(_DWORD *)(a2 + 8); /*0x8dadfc*/
  v5[3] = *(_DWORD *)(a2 + 0xC); /*0x8dae07*/
  v5[4] = *(_DWORD *)(a2 + 0x10); /*0x8dae0f*/
  sub_8DA580((int)this, (int)(this + 0x3A5), 1, a3, a4, a3, a4, *(this + 0x706), 0); /*0x8dae28*/
  sub_8DA580((int)this, (int)(this + 0x64), *(this + 0x63), a3, a4, a3, a4, *(this + 0x704), 0); /*0x8dae4a*/
  if ( *(_BYTE *)(a2 + 0x11) ) /*0x8dae4f*/
  {
    sub_8DA580((int)this, (int)(this + 0x4A5), 1, a3, a4, a3, a4, *(this + 0x707), 0); /*0x8dae6e*/
    sub_8DA580((int)this, (int)(this + 0x164), *(this + 0x63), a3, a4, a3, a4, *(this + 0x705), 0); /*0x8dae90*/
  }
  result = *(this + 0x63) + 1; /*0x8dae9c*/
  *(this + 0x63) = result; /*0x8dae9d*/
  return result; /*0x8dae9b*/
}
