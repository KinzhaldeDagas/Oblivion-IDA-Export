_DWORD *__thiscall sub_4A5710(void *this)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)FormHeapAlloc(0x10u);
  if ( v2 )
    return sub_4A5670(v2, (int)this);
  else
    return 0;
}
