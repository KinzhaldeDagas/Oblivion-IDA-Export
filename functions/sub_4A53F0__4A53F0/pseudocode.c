_DWORD *__thiscall sub_4A53F0(_BYTE *this)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)FormHeapAlloc(0x14u);
  if ( v2 )
    return sub_4A5060(v2, this);
  else
    return 0;
}
