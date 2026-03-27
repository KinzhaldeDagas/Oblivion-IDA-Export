unsigned int *__thiscall sub_8BD1D0(char **this, _DWORD **a2)
{
  bhkExtraData *v3; // eax
  unsigned int *v4; // esi

  v3 = (bhkExtraData *)FormHeapAlloc(0x24u);
  v4 = 0;
  if ( v3 )
    v4 = (unsigned int *)bhkExtraData::bhkExtraData(v3);
  sub_8BD130(this, v4, a2);
  return v4;
}
