_DWORD *__thiscall sub_539830(_DWORD *this, char a2)
{
  sub_538C80(this); /*0x539833*/
  if ( (a2 & 1) != 0 ) /*0x53983d*/
    FormHeapFree((unsigned int)this); /*0x539840*/
  return this; /*0x53984a*/
}
