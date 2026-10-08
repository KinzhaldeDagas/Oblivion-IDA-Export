float *__thiscall sub_6C87A0(unsigned int *this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x68u); /*0x6c87c7*/
  v4 = 0; /*0x6c87d3*/
  if ( v3 ) /*0x6c87db*/
    v4 = (unsigned int *)sub_6C6550(v3); /*0x6c87e4*/
  sub_6C70A0(this, v4, a2); /*0x6c87f6*/
  return (float *)v4; /*0x6c87fd*/
}
