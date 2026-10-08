char __thiscall sub_88B600(unsigned int *this, int a2)
{
  char v3; // bl
  int *v4; // eax
  int v5; // edi

  v3 = 0; /*0x88b609*/
  v4 = (int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88b60b*/
  if ( !v4 ) /*0x88b60f*/
    return v3; /*0x88b60f*/
  v5 = a2; /*0x88b612*/
  if ( !a2 ) /*0x88b618*/
    return v3; /*0x88b618*/
  v3 = 1; /*0x88b61e*/
  if ( !*(this + 8) ) /*0x88b623*/
  {
    sub_8988F0(v4, &a2, a2); /*0x88b671*/
    return v3; /*0x88b678*/
  }
  if ( *(this + 0x11) >= 0xC8 ) /*0x88b62c*/
  {
    sub_88A440(this); /*0x88b630*/
    sub_88A3A0(this); /*0x88b637*/
    sub_88A310((int *)this); /*0x88b63e*/
    sub_88A280(this); /*0x88b645*/
  }
  if ( *(_WORD *)(v5 + 4) ) /*0x88b64a*/
    ++*(_WORD *)(v5 + 6); /*0x88b651*/
  *(_DWORD *)(*(this + 0x10) + 4 * (*(this + 0x11))++) = v5; /*0x88b65b*/
  return 1; /*0x88b662*/
}
