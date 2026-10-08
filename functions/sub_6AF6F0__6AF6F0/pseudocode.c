int __thiscall sub_6AF6F0(unsigned int *this, unsigned int a2)
{
  unsigned int v2; // edi
  int result; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // ecx

  v2 = a2; /*0x6af6f2*/
  *(this + 1) += a2; /*0x6af6f8*/
  result = 0; /*0x6af6fb*/
  if ( a2 ) /*0x6af6ff*/
  {
    do /*0x6af747*/
    {
      if ( !*(this + 4) ) /*0x6af703*/
      {
        ++*(this + 2); /*0x6af709*/
        *(this + 4) = 8; /*0x6af70d*/
      }
      v5 = *(this + 4); /*0x6af714*/
      if ( v2 < v5 ) /*0x6af719*/
        v5 = v2; /*0x6af71b*/
      v6 = *(this + 4); /*0x6af723*/
      v7 = *(_DWORD *)(*(this + 5) + 4 * v6) & *(_DWORD *)(*(this + 3) + 4 * (*(this + 2) & 0xFFF)); /*0x6af732*/
      v8 = v6 - v5; /*0x6af736*/
      v2 -= v5; /*0x6af73a*/
      *(this + 4) = v8; /*0x6af73c*/
      result |= v7 >> v8 << v2; /*0x6af743*/
    }
    while ( v2 ); /*0x6af747*/
  }
  return result; /*0x6af74b*/
}
