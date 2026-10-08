unsigned int __thiscall sub_8A1A00(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  int v6; // ecx
  int v7; // edi
  char *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int result; // eax
  int i; // esi
  char *v13; // [esp+Ch] [ebp-28h] BYREF
  char v14[32]; // [esp+10h] [ebp-24h] BYREF

  sub_8CE640(this, a2); /*0x8a1a18*/
  v3 = TESOutput_PrintString((char *)stru_BA7D5C.name); /*0x8a1a23*/
  v4 = a2[5]; /*0x8a1a28*/
  v5 = a2[4]; /*0x8a1a2c*/
  v13 = v3; /*0x8a1a35*/
  if ( v4 >= v5 ) /*0x8a1a39*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8a1a44*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v13); /*0x8a1a51*/
  if ( this && (v6 = *(this + 2)) != 0 ) /*0x8a1a5f*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x1C))(v6); /*0x8a1a68*/
  else
    v7 = 0; /*0x8a1a6c*/
  v8 = TESOutput_PrintLabeledSignedInt("Shapes", v7); /*0x8a1a74*/
  v9 = a2[5]; /*0x8a1a79*/
  v10 = a2[4]; /*0x8a1a7d*/
  v13 = v8; /*0x8a1a86*/
  if ( v9 >= v10 ) /*0x8a1a8a*/
    NiTArray_SetSize(a2, v9 + a2[7]); /*0x8a1a95*/
  result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, &v13); /*0x8a1aa2*/
  for ( i = 0; i < v7; ++i ) /*0x8a1aab*/
    result = _sprintf(v14, "Shape%d", i); /*0x8a1abb*/
  return result; /*0x8a1aca*/
}
