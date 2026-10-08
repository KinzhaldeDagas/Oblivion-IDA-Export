// NiTextKeyExtraData clone factory: allocates a 0x14-byte object, initializes count +0x0C and array +0x10 to zero, then deep-copies through NiTextKeyExtraData_CopyMembers.
NiTextKeyExtraData *__thiscall NiTextKeyExtraData_CreateClone(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x6d7717*/
  v4 = (unsigned int *)v3; /*0x6d771c*/
  if ( v3 ) /*0x6d772f*/
  {
    sub_721350(v3); /*0x6d7733*/
    *v4 = (unsigned int)&NiTextKeyExtraData::`vftable'; /*0x6d7738*/
    v4[3] = 0; /*0x6d773e*/
    v4[4] = 0; /*0x6d7745*/
  }
  else
  {
    v4 = 0; /*0x6d774e*/
  }
  NiTextKeyExtraData_CopyMembers(this, v4, a2); /*0x6d7760*/
  return (NiTextKeyExtraData *)v4; /*0x6d7767*/
}
