unsigned int *__thiscall sub_4B2650(char **this, _DWORD **a2)
{
  unsigned int *v3; // eax
  unsigned int *v4; // esi

  v3 = (unsigned int *)FormHeapAlloc(0x10u);
  v4 = 0;
  if ( v3 )
    v4 = sub_4B2470(v3);
  sub_7214A0(this, v4, a2);
  v4[3] = (unsigned int)*(this + 3);
  return v4;
}
