NiTextKeyExtraData *__thiscall NiTextKeyExtraData::NiTextKeyExtraData(NiTextKeyExtraData *this, _DWORD **a2)
{
  unsigned int *v3; // eax
  unsigned int *v4; // esi

  v3 = (unsigned int *)FormHeapAlloc(0x14u);
  v4 = v3;
  if ( v3 )
  {
    sub_721350(v3);
    *v4 = (unsigned int)&NiTextKeyExtraData::`vftable';
    v4[3] = 0;
    v4[4] = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6D75C0((char **)this, v4, a2);
  return (NiTextKeyExtraData *)v4;
}
