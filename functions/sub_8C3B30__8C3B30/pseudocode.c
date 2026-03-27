unsigned int __thiscall sub_8C3B30(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // edi
  char *v8; // eax
  unsigned int v9; // edi
  char *v11; // [esp+Ch] [ebp-28h] BYREF
  char v12[32]; // [esp+10h] [ebp-24h] BYREF

  sub_8B04D0(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA80F8);
  v4 = a2[5];
  v5 = a2[4];
  v11 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v11);
  if ( this && (v6 = *(this + 2)) != 0 )
    v7 = *(_DWORD *)(v6 + 0x10);
  else
    v7 = 0;
  _sprintf(v12, "0x%8X", v7);
  v8 = TESOutput_PrintLabeledString("MoppCode", v12);
  v9 = a2[5];
  v11 = v8;
  if ( v9 >= a2[4] )
    NiTArray_SetSize(a2, v9 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, &v11);
}
