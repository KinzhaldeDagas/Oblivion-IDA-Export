float *__thiscall sub_75C7A0(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  float *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x68u); /*0x75c7a6*/
  if ( v3 ) /*0x75c7b0*/
    v4 = (float *)sub_75C250(v3); /*0x75c7b9*/
  else
    v4 = 0; /*0x75c7bd*/
  sub_75E830((const char **)this, (int)v4, a2); /*0x75c7c7*/
  sub_75C1C0(v4, this + 0x10); /*0x75c7d2*/
  return v4; /*0x75c7d7*/
}
