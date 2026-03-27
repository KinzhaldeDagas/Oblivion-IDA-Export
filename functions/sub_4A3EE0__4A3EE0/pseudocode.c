_DWORD *__thiscall sub_4A3EE0(void *this)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)FormHeapAlloc(0xCu);
  if ( v2 )
    return sub_4A3D80(v2, (int)this);
  else
    return 0;
}
