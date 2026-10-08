float *__thiscall sub_54F100(void *this)
{
  float *v2; // eax

  v2 = (float *)FormHeapAlloc(0x14u); /*0x54f126*/
  if ( v2 ) /*0x54f13c*/
    return sub_54EAA0(v2, (int)this); /*0x54f141*/
  else
    return 0; /*0x54f157*/
}
