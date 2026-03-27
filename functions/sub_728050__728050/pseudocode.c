unsigned int *__thiscall sub_728050(void *this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi
  void *v5; // eax
  size_t v7; // [esp-8h] [ebp-28h]

  v3 = (NiObject *)FormHeapAlloc(0x14u);
  v4 = (unsigned int *)v3;
  if ( v3 )
  {
    sub_721350(v3);
    *v4 = (unsigned int)&NiBinaryExtraData::`vftable';
    v4[4] = 0;
    v4[3] = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_7214A0((char **)this, v4, a2);
  if ( *((_DWORD *)this + 4) )
  {
    v5 = (void *)FormHeapAlloc(*((_DWORD *)this + 4));
    v4[3] = (unsigned int)v5;
    LODWORD(v7) = *((_DWORD *)this + 4);
    memcpy(v5, *((const void **)this + 3), v7);
    v4[4] = *((_DWORD *)this + 4);
  }
  else
  {
    v4[4] = 0;
    v4[3] = 0;
  }
  return v4;
}
