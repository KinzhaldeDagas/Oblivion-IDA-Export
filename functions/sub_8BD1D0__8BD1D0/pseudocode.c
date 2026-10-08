unsigned int *__thiscall sub_8BD1D0(char **this, _DWORD **a2)
{
  bhkExtraData *v3; // eax
  unsigned int *v4; // esi

  v3 = (bhkExtraData *)FormHeapAlloc(0x24u); /*0x8bd1f7*/
  v4 = 0; /*0x8bd203*/
  if ( v3 ) /*0x8bd20b*/
    v4 = (unsigned int *)bhkExtraData::bhkExtraData(v3); /*0x8bd214*/
  sub_8BD130(this, v4, a2); /*0x8bd226*/
  return v4; /*0x8bd22d*/
}
