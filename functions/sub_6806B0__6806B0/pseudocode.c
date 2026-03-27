unsigned __int16 __usercall sub_6806B0@<ax>(int a1@<esi>)
{
  unsigned __int16 v1; // di
  int v2; // esi
  int v3; // eax
  _BYTE *v4; // ecx
  unsigned __int16 v5; // ax

  v1 = word_B3BF08;
  if ( word_B3BF08 == (__int16)0xFFFF )
    return 0xFFFF;
  if ( !dword_B3BF00 )
    sub_680620(a1, 0x1F4u);
  *((_BYTE *)dword_B3BF00 + 0x10 * v1 + 0xC) |= 4u;
  v2 = (unsigned __int16)word_B3BF04;
  v3 = v1 + 1;
  if ( v3 < v2 )
  {
    v4 = (char *)dword_B3BF00 + 0x10 * v3 + 0xC;
    while ( (*v4 & 4) != 0 )
    {
      ++v3;
      v4 += 0x10;
      if ( v3 >= v2 )
        goto LABEL_10;
    }
    word_B3BF08 = v3;
  }
LABEL_10:
  if ( word_B3BF08 == v1 )
  {
    v5 = v2 + 0x64;
    if ( v2 + 0x64 > 0xFFFF )
      v5 = 0xFFFF;
    sub_680620(v2, v5);
    word_B3BF08 = v2;
  }
  return v1;
}
