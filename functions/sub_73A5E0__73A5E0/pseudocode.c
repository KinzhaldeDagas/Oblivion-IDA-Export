unsigned int __thiscall sub_73A5E0(unsigned int *this, NiD3DPass **a2)
{
  unsigned int v3; // edx
  unsigned int result; // eax
  NiD3DPass *v5; // ecx
  int v6; // eax
  unsigned int v7; // eax

  v3 = *(this + 2); /*0x73a5e8*/
  result = 0; /*0x73a5eb*/
  if ( !v3 ) /*0x73a5f0*/
    goto LABEL_7; /*0x73a5f0*/
  v5 = (NiD3DPass *)*this; /*0x73a5f4*/
  while ( (NiD3DPass *)v5->__vftable != *a2 ) /*0x73a5f8*/
  {
    ++result; /*0x73a5fa*/
    v5 = (NiD3DPass *)((char *)v5 + 4); /*0x73a5fd*/
    if ( result >= v3 ) /*0x73a602*/
      goto LABEL_7; /*0x73a602*/
  }
  if ( result == 0xFFFFFFFF ) /*0x73a609*/
  {
LABEL_7:
    v6 = *(this + 1); /*0x73a60b*/
    if ( v3 == v6 ) /*0x73a610*/
    {
      if ( v6 ) /*0x73a614*/
        v7 = 2 * v6; /*0x73a616*/
      else
        v7 = 1; /*0x73a61a*/
      sub_6E8CA0(this, v7); /*0x73a622*/
    }
    result = *(this + 2); /*0x73a627*/
    *(_DWORD *)(*this + 4 * result) = *a2; /*0x73a62e*/
    ++*(this + 2); /*0x73a631*/
  }
  return result; /*0x73a635*/
}
