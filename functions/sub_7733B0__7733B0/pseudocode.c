_DWORD *__thiscall sub_7733B0(_DWORD *this, char a2)
{
  sub_773470(this); /*0x7733b3*/
  if ( (a2 & 1) != 0 ) /*0x7733bd*/
    FormHeapFree((unsigned int)this); /*0x7733c0*/
  return this; /*0x7733ca*/
}
