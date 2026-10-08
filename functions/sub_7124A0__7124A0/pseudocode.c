int __thiscall sub_7124A0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *(this + 0x8C); /*0x7124a0*/
  *(this + 0x8C) = v1 + 1; /*0x7124a9*/
  v2 = *(_DWORD *)(*(this + 0x89) + 4 * v1); /*0x7124b5*/
  if ( v2 == 0xFFFFFFFF ) /*0x7124bb*/
    return 0; /*0x7124bd*/
  else
    return *(_DWORD *)(*(this + 0x7C) + 4 * v2); /*0x7124c6*/
}
