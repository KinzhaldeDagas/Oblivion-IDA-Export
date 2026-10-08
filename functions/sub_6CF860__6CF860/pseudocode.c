NiObject *__thiscall sub_6CF860(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x58u); /*0x6cf887*/
  v4 = 0; /*0x6cf893*/
  if ( v3 ) /*0x6cf89b*/
    v4 = sub_6CE4C0(v3); /*0x6cf8a4*/
  sub_6CF490(this, (int)v4, a2); /*0x6cf8b6*/
  return v4; /*0x6cf8bd*/
}
