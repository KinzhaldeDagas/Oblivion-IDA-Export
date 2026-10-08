int __thiscall sub_8B9AE0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2; /*0x8b9ae2*/
  sub_712A20(a2); /*0x8b9aea*/
  sub_89D650(this, (signed int)v2); /*0x8b9af2*/
  result = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2); /*0x8b9b03*/
  if ( result ) /*0x8b9b09*/
    *(_DWORD *)(result + 0x48) = 0; /*0x8b9b0b*/
  return result; /*0x8b9b07*/
}
