unsigned __int16 *__thiscall sub_95FE50(void *this)
{
  unsigned __int16 *v2; // eax

  v2 = (unsigned __int16 *)FormHeapAlloc(0x18u);
  if ( v2 )
    return sub_95F880(v2, (int)this);
  else
    return 0;
}
