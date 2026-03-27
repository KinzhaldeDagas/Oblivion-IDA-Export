float *__thiscall sub_6C87A0(unsigned int *this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x68u);
  v4 = 0;
  if ( v3 )
    v4 = (unsigned int *)sub_6C6550(v3);
  sub_6C70A0(this, v4, a2);
  return (float *)v4;
}
