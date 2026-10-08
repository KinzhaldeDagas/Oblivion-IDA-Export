int __thiscall sub_8A0550(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  if ( this ) /*0x8a0552*/
    v1 = *(this + 2); /*0x8a0554*/
  else
    v1 = 0; /*0x8a0559*/
  result = 0; /*0x8a055b*/
  if ( v1 ) /*0x8a055f*/
    return *(_DWORD *)(v1 + 0x14); /*0x8a0561*/
  return result; /*0x8a0564*/
}
