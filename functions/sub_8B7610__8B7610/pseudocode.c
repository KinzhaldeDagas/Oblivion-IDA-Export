int __thiscall sub_8B7610(NiRenderer *this, signed int a2)
{
  int v2; // edi
  int result; // eax

  v2 = a2; /*0x8b7612*/
  sub_8A25C0(this, a2); /*0x8b7619*/
  result = ((int (__thiscall *)(NiRenderer *, signed int *))this->__vftable->ValidateRenderTargetGroup)(this, &a2); /*0x8b762a*/
  if ( result ) /*0x8b762e*/
    return sub_8E83B0(v2, result + 4); /*0x8b7635*/
  return result; /*0x8b763d*/
}
