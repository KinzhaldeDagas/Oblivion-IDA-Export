_BYTE *__thiscall sub_569D80(_BYTE *this, int a2)
{
  *this = *(_BYTE *)a2; /*0x569d89*/
  *(this + 1) = *(_BYTE *)(a2 + 1); /*0x569d8f*/
  *(this + 2) = *(_BYTE *)(a2 + 2); /*0x569d96*/
  *(this + 3) = *(_BYTE *)(a2 + 3); /*0x569d9d*/
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4); /*0x569da3*/
  return this; /*0x569da6*/
}
