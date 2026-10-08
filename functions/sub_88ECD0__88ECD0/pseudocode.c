int __thiscall sub_88ECD0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int result; // eax

  sub_89EF90(a2); /*0x88ecd8*/
  v3 = *(this + 4); /*0x88ecdd*/
  *((_WORD *)this + 6) |= 8u; /*0x88ece0*/
  if ( v3 && (v4 = *(_DWORD *)(v3 + 8)) != 0 && (v5 = v4 + 0x14) != 0 ) /*0x88ecf3*/
    v6 = *(_DWORD *)(v5 + 0x1C); /*0x88ecf5*/
  else
    v6 = 0; /*0x88ecfa*/
  result = (v6 >> 8) & 0x1F; /*0x88ecff*/
  *((float *)this + 5) = *(float *)(8 * result + 0xB2E660); /*0x88ed09*/
  *((float *)this + 6) = *(float *)(8 * result + 0xB2E664); /*0x88ed13*/
  return result; /*0x88ed16*/
}
