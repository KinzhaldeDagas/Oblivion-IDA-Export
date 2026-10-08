int __thiscall sub_8A1090(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2; /*0x8a1092*/
  sub_712AE0(a2); /*0x8a109a*/
  sub_8A25C0(this, (signed int)v2); /*0x8a10a2*/
  result = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2); /*0x8a10b3*/
  if ( result ) /*0x8a10b7*/
    return sub_8E85E0((signed int)v2, result + 0x10); /*0x8a10be*/
  return result; /*0x8a10c6*/
}
