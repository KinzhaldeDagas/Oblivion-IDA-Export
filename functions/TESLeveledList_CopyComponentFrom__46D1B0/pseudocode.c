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

  v2 = this;
  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESLeveledList `RTTI Type Descriptor',
                 0);
  v4 = v3;
  v12 = v3;
  if ( !v3 )
    return (char)v3;
  TESLeveledList_Clear((unsigned int *)v2);
  v5 = (int *)(v4 + 4);
  v6 = (int *)(v2 + 4);
  if ( v4 == (char *)0xFFFFFFFC )
    goto LABEL_14;
  do
  {
    v7 = *v5;
    if ( !*v5 )
      break;
    v8 = FormHeapAlloc(0xCu);
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v7 + 4);
    *(_WORD *)v8 = *(_WORD *)v7;
    *(_WORD *)(v8 + 8) = *(_WORD *)(v7 + 8);
    if ( *((_DWORD *)this + 2) || *((_DWORD *)this + 1) )
    {
      BSSimpleList_PushBack(v6, v8);
      v6 = (int *)v6[1];
      goto LABEL_12;
    }
    if ( !*v6 )
      goto LABEL_10;
    v9 = (int *)FormHeapAlloc(8u);
    if ( !v9 )
    {
      *(_DWORD *)4 = v6[1];
      v6[1] = 0;
LABEL_10:
      *v6 = v8;
      goto LABEL_12;
    }
    *v9 = *v6;
    v9[1] = 0;
    v9[1] = v6[1];
    v6[1] = (int)v9;
    *v6 = v8;
LABEL_12:
    v5 = (int *)v5[1];
    v2 = this;
  }
  while ( v5 );
  v4 = v12;
LABEL_14:
  v2[0xC] = v4[0xC];
  if ( (v4[0xD] & 1) != 0 )
    v2[0xD] |= 1u;
  else
    v2[0xD] &= ~1u;
  if ( (v4[0xD] & 2) != 0 )
    v2[0xD] |= 2u;
  else
    v2[0xD] &= ~2u;
  LOBYTE(v3) = 4;
  if ( (v4[0xD] & 4) != 0 )
    v2[0xD] |= 4u;
  else
    v2[0xD] &= ~4u;
  return (char)v3;
}
