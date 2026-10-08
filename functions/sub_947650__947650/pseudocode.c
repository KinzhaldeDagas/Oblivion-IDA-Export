_DWORD *__thiscall sub_947650(_DWORD *this, char a2)
{
  *this = &off_AA2984; /*0x947658*/
  if ( (a2 & 1) != 0 ) /*0x94765e*/
    FormHeapFree((unsigned int)this); /*0x947661*/
  return this; /*0x94766b*/
}
