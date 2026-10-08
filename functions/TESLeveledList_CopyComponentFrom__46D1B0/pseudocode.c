char __thiscall TESLeveledList_CopyComponentFrom(char *this, void *a2)
{
  char *v2; // edi
  char *v3; // eax
  char *v4; // esi
  int *v5; // ebp
  int *v6; // ebx
  int v7; // esi
  int v8; // edi
  int *v9; // eax
  char *v12; // [esp+10h] [ebp+4h]

  v2 = this; /*0x46d1c3*/
  v3 = (char *)OblivionDynamicCast( /*0x46d1cc*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESLeveledList `RTTI Type Descriptor',
                 0);
  v4 = v3; /*0x46d1d1*/
  v12 = v3; /*0x46d1d8*/
  if ( !v3 ) /*0x46d1dc*/
    return (char)v3; /*0x46d1dc*/
  TESLeveledList_Clear((unsigned int *)v2); /*0x46d1e6*/
  v5 = (int *)(v4 + 4); /*0x46d1eb*/
  v6 = (int *)(v2 + 4); /*0x46d1f0*/
  if ( v4 == (char *)0xFFFFFFFC ) /*0x46d1f3*/
    goto LABEL_14; /*0x46d1f3*/
  do /*0x46d200*/
  {
    v7 = *v5; /*0x46d200*/
    if ( !*v5 ) /*0x46d200*/
      break; /*0x46d200*/
    v8 = FormHeapAlloc(0xCu); /*0x46d215*/
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v7 + 4); /*0x46d217*/
    *(_WORD *)v8 = *(_WORD *)v7; /*0x46d21d*/
    *(_WORD *)(v8 + 8) = *(_WORD *)(v7 + 8); /*0x46d224*/
    if ( *((_DWORD *)this + 2) || *((_DWORD *)this + 1) ) /*0x46d238*/
    {
      BSSimpleList_PushBack(v6, v8); /*0x46d27a*/
      v6 = (int *)v6[1]; /*0x46d27f*/
      goto LABEL_12; /*0x46d27f*/
    }
    if ( !*v6 ) /*0x46d240*/
      goto LABEL_10; /*0x46d240*/
    v9 = (int *)FormHeapAlloc(8u); /*0x46d244*/
    if ( !v9 ) /*0x46d24e*/
    {
      *(_DWORD *)4 = v6[1]; /*0x46d26d*/
      v6[1] = 0; /*0x46d270*/
LABEL_10:
      *v6 = v8; /*0x46d273*/
      goto LABEL_12; /*0x46d275*/
    }
    *v9 = *v6; /*0x46d252*/
    v9[1] = 0; /*0x46d254*/
    v9[1] = v6[1]; /*0x46d25e*/
    v6[1] = (int)v9; /*0x46d261*/
    *v6 = v8; /*0x46d264*/
LABEL_12:
    v5 = (int *)v5[1]; /*0x46d282*/
    v2 = this; /*0x46d287*/
  }
  while ( v5 ); /*0x46d200*/
  v4 = v12; /*0x46d291*/
LABEL_14:
  v2[0xC] = v4[0xC]; /*0x46d295*/
  if ( (v4[0xD] & 1) != 0 ) /*0x46d2a2*/
    v2[0xD] |= 1u; /*0x46d2a4*/
  else
    v2[0xD] &= ~1u; /*0x46d2a9*/
  if ( (v4[0xD] & 2) != 0 ) /*0x46d2b2*/
    v2[0xD] |= 2u; /*0x46d2b4*/
  else
    v2[0xD] &= ~2u; /*0x46d2b9*/
  LOBYTE(v3) = 4; /*0x46d2bd*/
  if ( (v4[0xD] & 4) != 0 ) /*0x46d2c2*/
    v2[0xD] |= 4u; /*0x46d2c4*/
  else
    v2[0xD] &= ~4u; /*0x46d2cd*/
  return (char)v3; /*0x46d2c7*/
}
