int __thiscall sub_89FD60(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2; /*0x89fd62*/
  sub_712A20(a2); /*0x89fd6a*/
  sub_712A20(v2); /*0x89fd71*/
  sub_89D650(this, (signed int)v2); /*0x89fd79*/
  result = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2); /*0x89fd8a*/
  if ( result ) /*0x89fd92*/
  {
    *(_DWORD *)(result + 4) = 0; /*0x89fd94*/
    *(_DWORD *)(result + 8) = 0; /*0x89fd97*/
  }
  return result; /*0x89fd90*/
}
