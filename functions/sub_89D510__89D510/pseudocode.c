unsigned int __thiscall sub_89D510(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int result; // eax
  int v10; // ebx
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edx
  char *v14; // [esp+Ch] [ebp-28h] BYREF
  char v15[32]; // [esp+10h] [ebp-24h] BYREF

  sub_7009A0(this, a2); /*0x89d528*/
  v3 = TESOutput_PrintString((char *)stru_BA7BA4.name); /*0x89d533*/
  v4 = a2[5]; /*0x89d538*/
  v5 = a2[4]; /*0x89d53c*/
  v14 = v3; /*0x89d545*/
  if ( v4 >= v5 ) /*0x89d549*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x89d554*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v14); /*0x89d561*/
  _sprintf(v15, "0x%08X", *(this + 2)); /*0x89d574*/
  v6 = TESOutput_PrintLabeledString("hkObject", v15); /*0x89d583*/
  v7 = a2[5]; /*0x89d588*/
  v8 = a2[4]; /*0x89d58c*/
  v14 = v6; /*0x89d595*/
  if ( v7 >= v8 ) /*0x89d599*/
    NiTArray_SetSize(a2, v7 + a2[7]); /*0x89d5a4*/
  result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v14); /*0x89d5b1*/
  v10 = *(this + 2); /*0x89d5b6*/
  if ( v10 ) /*0x89d5bb*/
  {
    v11 = TESOutput_PrintLabeledSignedInt("hkRefcount", *(__int16 *)(v10 + 6)); /*0x89d5c7*/
    v12 = a2[5]; /*0x89d5cc*/
    v13 = a2[4]; /*0x89d5d0*/
    v14 = v11; /*0x89d5d9*/
    if ( v12 >= v13 ) /*0x89d5dd*/
      NiTArray_SetSize(a2, v12 + a2[7]); /*0x89d5e8*/
    return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v12, &v14); /*0x89d5f5*/
  }
  return result; /*0x89d5fa*/
}
