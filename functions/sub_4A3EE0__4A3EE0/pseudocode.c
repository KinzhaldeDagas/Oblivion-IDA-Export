_DWORD *__thiscall sub_4A3EE0(void *this)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)FormHeapAlloc(0xCu); /*0x4a3f06*/
  if ( v2 ) /*0x4a3f1c*/
    return sub_4A3D80(v2, (int)this); /*0x4a3f21*/
  else
    return 0; /*0x4a3f37*/
}
