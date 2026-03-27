NiD3DPass **__thiscall sub_760600(unsigned int *this, unsigned int a2)
{
  NiD3DPass **result; // eax
  int v4; // ebp
  NiD3DPass **v5; // ecx
  unsigned int i; // ebx
  NiD3DPass *v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  NiD3DPass **v10; // [esp+Ch] [ebp-4h]

  result = (NiD3DPass **)FormHeapAlloc(0xCu);
  v4 = 0;
  if ( result )
  {
    result = sub_760400(result, a2);
    v5 = result;
    v10 = result;
  }
  else
  {
    v10 = 0;
    v5 = 0;
  }
  for ( i = 0; i < a2; ++v4 )
  {
    if ( i < (unsigned int)v5[1] )
      v7 = &(*v5)[v4];
    else
      v7 = 0;
    v8 = *(this + 1);
    if ( *(this + 2) == v8 )
    {
      if ( v8 )
        v9 = 2 * v8;
      else
        v9 = 1;
      sub_6E8CA0(this, v9);
      v5 = v10;
    }
    result = (NiD3DPass **)*this;
    *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7;
    ++i;
  }
  v5[2] = (NiD3DPass *)*(this + 5);
  *(this + 5) = (unsigned int)v5;
  return result;
}
