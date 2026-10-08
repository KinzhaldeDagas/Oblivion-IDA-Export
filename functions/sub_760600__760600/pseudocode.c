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

  result = (NiD3DPass **)FormHeapAlloc(0xCu); /*0x760608*/
  v4 = 0; /*0x76060d*/
  if ( result ) /*0x760614*/
  {
    result = sub_760400(result, a2); /*0x76061d*/
    v5 = result; /*0x760622*/
    v10 = result; /*0x760624*/
  }
  else
  {
    v10 = 0; /*0x76062a*/
    v5 = 0; /*0x76062e*/
  }
  for ( i = 0; i < a2; ++v4 ) /*0x760636*/
  {
    if ( i < (unsigned int)v5[1] ) /*0x760643*/
      v7 = &(*v5)[v4]; /*0x76064b*/
    else
      v7 = 0; /*0x760645*/
    v8 = *(this + 1); /*0x76064d*/
    if ( *(this + 2) == v8 ) /*0x760653*/
    {
      if ( v8 ) /*0x760657*/
        v9 = 2 * v8; /*0x760659*/
      else
        v9 = 1; /*0x76065d*/
      sub_6E8CA0(this, v9); /*0x760665*/
      v5 = v10; /*0x76066a*/
    }
    result = (NiD3DPass **)*this; /*0x760671*/
    *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x760673*/
    ++i; /*0x76067a*/
  }
  v5[2] = (NiD3DPass *)*(this + 5); /*0x76068a*/
  *(this + 5) = (unsigned int)v5; /*0x76068d*/
  return result; /*0x760690*/
}
