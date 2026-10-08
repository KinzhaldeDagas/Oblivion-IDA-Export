int __thiscall sub_8A1DB0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2; /*0x8a1db2*/
  sub_712A20(a2); /*0x8a1dba*/
  sub_8A25C0(this, (signed int)v2); /*0x8a1dc2*/
  result = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2); /*0x8a1dd3*/
  if ( result ) /*0x8a1dd9*/
    *(_DWORD *)(result + 4) = 0; /*0x8a1ddb*/
  return result; /*0x8a1dd7*/
}
