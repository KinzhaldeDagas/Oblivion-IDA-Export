unsigned __int16 *__thiscall sub_95FE50(void *this)
{
  unsigned __int16 *v2; // eax

  v2 = (unsigned __int16 *)FormHeapAlloc(0x18u); /*0x95fe55*/
  if ( v2 ) /*0x95fe5f*/
    return sub_95F880(v2, (int)this); /*0x95fe64*/
  else
    return 0; /*0x95fe6b*/
}
