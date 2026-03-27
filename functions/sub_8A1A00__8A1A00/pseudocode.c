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

  sub_8CE640(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7D5C);
  v4 = a2[5];
  v5 = a2[4];
  v13 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v13);
  if ( this && (v6 = *(this + 2)) != 0 )
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x1C))(v6);
  else
    v7 = 0;
  v8 = TESOutput_PrintLabeledSignedInt("Shapes", v7);
  v9 = a2[5];
  v10 = a2[4];
  v13 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize(a2, v9 + a2[7]);
  result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, &v13);
  for ( i = 0; i < v7; ++i )
    result = _sprintf(v14, "Shape%d", i);
  return result;
}
