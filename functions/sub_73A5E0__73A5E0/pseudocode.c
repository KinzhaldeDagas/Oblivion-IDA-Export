unsigned int __thiscall sub_73A5E0(unsigned int *this, NiD3DPass **a2)
{
  unsigned int v3; // edx
  unsigned int result; // eax
  NiD3DPass *v5; // ecx
  int v6; // eax
  unsigned int v7; // eax

  v3 = *(this + 2);
  result = 0;
  if ( !v3 )
    goto LABEL_7;
  v5 = (NiD3DPass *)*this;
  while ( (NiD3DPass *)v5->__vftable != *a2 )
  {
    ++result;
    v5 = (NiD3DPass *)((char *)v5 + 4);
    if ( result >= v3 )
      goto LABEL_7;
  }
  if ( result == 0xFFFFFFFF )
  {
LABEL_7:
    v6 = *(this + 1);
    if ( v3 == v6 )
    {
      if ( v6 )
        v7 = 2 * v6;
      else
        v7 = 1;
      sub_6E8CA0(this, v7);
    }
    result = *(this + 2);
    *(_DWORD *)(*this + 4 * result) = *a2;
    ++*(this + 2);
  }
  return result;
}
