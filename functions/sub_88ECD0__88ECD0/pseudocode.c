unsigned int __thiscall sub_88ECD0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  unsigned int result; // eax

  sub_89EF90(a2);
  v3 = *(this + 4);
  *((_WORD *)this + 6) |= 8u;
  if ( v3 && (v4 = *(_DWORD *)(v3 + 8)) != 0 && (v5 = v4 + 0x14) != 0 )
    v6 = *(_DWORD *)(v5 + 0x1C);
  else
    v6 = 0;
  result = (v6 >> 8) & 0x1F;
  *((float *)this + 5) = *(float *)(8 * result + 0xB2E660);
  *((float *)this + 6) = *(float *)(8 * result + 0xB2E664);
  return result;
}
