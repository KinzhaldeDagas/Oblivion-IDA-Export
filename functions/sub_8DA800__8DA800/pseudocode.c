int __thiscall sub_8DA800(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int i; // edi
  int v7; // edx
  int v8; // ecx

  *(this + a2 + 0x43) |= *(this + a3 + 0x43); /*0x8da813*/
  result = *(this + 0x702); /*0x8da81a*/
  for ( i = 0; i < result; ++i ) /*0x8da825*/
  {
    v7 = *(this + 0x701); /*0x8da830*/
    v8 = *(_DWORD *)(v7 + 8 * i + 4); /*0x8da836*/
    if ( v8 == a2 ) /*0x8da83f*/
      sub_8DA800(this, *(_DWORD *)(v7 + 8 * i), v8, a4 + 1); /*0x8da84b*/
    result = *(this + 0x702); /*0x8da850*/
  }
  return result; /*0x8da85c*/
}
