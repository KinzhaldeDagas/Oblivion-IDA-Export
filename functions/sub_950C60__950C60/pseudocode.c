int __thiscall sub_950C60(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // edi

  result = a2; /*0x950c60*/
  v3 = 0; /*0x950c69*/
  v4 = a2; /*0x950c6d*/
  if ( (int)*(this + 5) > 0 ) /*0x950c6f*/
  {
    v5 = 0; /*0x950c71*/
    do /*0x950c90*/
    {
      *(_OWORD *)v4 = *(_OWORD *)(*(this + 4) + v5); /*0x950c7b*/
      *(_DWORD *)(v4 + 0xC) = *(this + 3); /*0x950c81*/
      v4 += 0x10; /*0x950c87*/
      ++v3; /*0x950c8a*/
      v5 += 0x10; /*0x950c8b*/
    }
    while ( v3 < *(this + 5) ); /*0x950c90*/
  }
  return result; /*0x950c93*/
}
