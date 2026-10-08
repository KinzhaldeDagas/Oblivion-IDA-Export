int __thiscall sub_89E090(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2; /*0x89e092*/
  sub_712A20(a2); /*0x89e09a*/
  sub_89D650(this, (signed int)v2); /*0x89e0a2*/
  result = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2); /*0x89e0b3*/
  if ( result ) /*0x89e0b9*/
    *(_DWORD *)(result + 4) = 0; /*0x89e0bb*/
  return result; /*0x89e0b7*/
}
