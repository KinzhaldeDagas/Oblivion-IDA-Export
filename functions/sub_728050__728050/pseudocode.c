unsigned int *__thiscall sub_728050(void *this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi
  void *v5; // eax

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x728078*/
  v4 = (unsigned int *)v3; /*0x72807d*/
  if ( v3 ) /*0x72808e*/
  {
    sub_721350(v3); /*0x728092*/
    *v4 = (unsigned int)&NiBinaryExtraData::`vftable'; /*0x728097*/
    v4[4] = 0; /*0x72809d*/
    v4[3] = 0; /*0x7280a0*/
  }
  else
  {
    v4 = 0; /*0x7280a5*/
  }
  sub_7214A0((char **)this, v4, a2); /*0x7280b7*/
  if ( *((_DWORD *)this + 4) ) /*0x7280bc*/
  {
    v5 = (void *)FormHeapAlloc(*((_DWORD *)this + 4)); /*0x7280c4*/
    v4[3] = (unsigned int)v5; /*0x7280c9*/
    memcpy(v5, *((const void **)this + 3), *((_DWORD *)this + 4)); /*0x7280d5*/
    v4[4] = *((_DWORD *)this + 4); /*0x7280e0*/
  }
  else
  {
    v4[4] = 0; /*0x7280e5*/
    v4[3] = 0; /*0x7280e8*/
  }
  return v4; /*0x7280ed*/
}
