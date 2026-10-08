unsigned int __thiscall sub_89E210(_DWORD *this, unsigned __int16 *a2)
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

  sub_89DA00(this, a2); /*0x89e228*/
  v3 = TESOutput_PrintString((char *)stru_BA7D10.name); /*0x89e233*/
  v4 = a2[5]; /*0x89e238*/
  v5 = a2[4]; /*0x89e23c*/
  v11 = v3; /*0x89e245*/
  if ( v4 >= v5 ) /*0x89e249*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x89e254*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v11); /*0x89e261*/
  if ( this && (v6 = *(this + 2)) != 0 ) /*0x89e26f*/
    v7 = *(_DWORD *)(v6 + 0x18); /*0x89e271*/
  else
    v7 = 0; /*0x89e276*/
  _sprintf(v12, "0x%08X", v7); /*0x89e283*/
  v8 = TESOutput_PrintLabeledString("hkRigidBody", v12); /*0x89e292*/
  v9 = a2[5]; /*0x89e297*/
  v11 = v8; /*0x89e29b*/
  if ( v9 >= a2[4] ) /*0x89e2a8*/
    NiTArray_SetSize(a2, v9 + a2[7]); /*0x89e2b3*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, &v11); /*0x89e2c5*/
}
