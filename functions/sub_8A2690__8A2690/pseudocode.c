int __thiscall sub_8A2690(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int result; // eax

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x8a2699*/
  {
    result = *(_DWORD *)(v2 + 8); /*0x8a269b*/
    *a2 = result; /*0x8a26a2*/
  }
  else
  {
    *a2 = 0; /*0x8a26ad*/
    return 0; /*0x8a26ab*/
  }
  return result; /*0x8a26a4*/
}
