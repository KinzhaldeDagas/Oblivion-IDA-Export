int __thiscall sub_8A0530(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  if ( this ) /*0x8a0532*/
    v1 = *(this + 2); /*0x8a0534*/
  else
    v1 = 0; /*0x8a0539*/
  result = 0; /*0x8a053b*/
  if ( v1 ) /*0x8a053f*/
    return *(_DWORD *)(v1 + 0x10); /*0x8a0541*/
  return result; /*0x8a0544*/
}
