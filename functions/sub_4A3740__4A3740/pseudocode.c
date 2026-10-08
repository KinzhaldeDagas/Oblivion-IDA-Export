_DWORD *__thiscall sub_4A3740(void *this)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)FormHeapAlloc(0xCu); /*0x4a3766*/
  if ( v2 ) /*0x4a377c*/
    return sub_4A3660(v2, (int)this); /*0x4a3781*/
  else
    return 0; /*0x4a3797*/
}
