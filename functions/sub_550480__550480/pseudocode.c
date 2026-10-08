int __thiscall sub_550480(_DWORD *this)
{
  int v1; // eax
  int *v2; // eax
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0; /*0x550483*/
  v1 = *(this + 2); /*0x550486*/
  if ( v1 ) /*0x55048d*/
  {
    v2 = (int *)(v1 + 0x1C); /*0x550493*/
  }
  else
  {
    v4 = 0; /*0x55049a*/
    v2 = &v4; /*0x55049e*/
  }
  return *v2; /*0x5504cc*/
}
