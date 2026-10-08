BSStringT *__thiscall sub_4A4F70(_BYTE *this)
{
  BSStringT *v2; // eax

  v2 = (BSStringT *)FormHeapAlloc(0x10u); /*0x4a4f96*/
  if ( v2 ) /*0x4a4fac*/
    return sub_4A4EA0(v2, this); /*0x4a4fb1*/
  else
    return 0; /*0x4a4fc7*/
}
