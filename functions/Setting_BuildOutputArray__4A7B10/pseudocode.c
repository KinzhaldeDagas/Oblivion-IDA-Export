void __thiscall Setting_BuildOutputArray(char *this, unsigned __int16 *a2)
{
  char *v3; // edx
  char v4; // cl
  unsigned int v5; // eax
  char *v6; // edi
  char *v8; // eax
  char *v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  char *v12; // [esp+10h] [ebp-108h] BYREF
  char ArgList[2]; // [esp+14h] [ebp-104h] BYREF
  char v14; // [esp+16h] [ebp-102h]

  v3 = *((char **)this + 1); /*0x4a7b35*/
  v4 = byte_A403A2; /*0x4a7b38*/
  *(_WORD *)ArgList = word_A403A0; /*0x4a7b3e*/
  v14 = v4; /*0x4a7b46*/
  v5 = strlen(v3) + 1; /*0x4a7b57*/
  v6 = (char *)&v12 + 3; /*0x4a7b60*/
  while ( *++v6 ) /*0x4a7b6b*/
    ; /*0x4a7b63*/
  qmemcpy(v6, v3, v5); /*0x4a7b72*/
  switch ( Setting_GetTypeFromName(v3) ) /*0x4a7b8e*/
  {
    case 0: /*0x4a7b8e*/
      v8 = TESOutput_PrintLabeledBool(ArgList, *this); /*0x4a7b9f*/
      goto LABEL_5; /*0x4a7b9f*/
    case 1: /*0x4a7b8e*/
    case 2: /*0x4a7b8e*/
      v12 = TESOutput_PrintLabeledChar(ArgList, *this); /*0x4a7bd5*/
      NiTArray_Add(a2, &v12); /*0x4a7bd9*/
      goto LABEL_8; /*0x4a7bd9*/
    case 3: /*0x4a7b8e*/
LABEL_8:
      v9 = TESOutput_PrintLabeledSignedInt(ArgList, *(_DWORD *)this); /*0x4a7bde*/
      goto LABEL_12; /*0x4a7bec*/
    case 5: /*0x4a7b8e*/
      v12 = TESOutput_PrintLabeledFloat(ArgList, *(float *)this); /*0x4a7c09*/
      NiTArray_Add(a2, &v12); /*0x4a7c0d*/
      goto LABEL_6; /*0x4a7c12*/
    case 6: /*0x4a7b8e*/
      v8 = TESOutput_PrintLabeledString(ArgList, *(const char **)this); /*0x4a7c1d*/
LABEL_5:
      v12 = v8; /*0x4a7ba4*/
      NiTArray_Add(a2, &v12); /*0x4a7bb2*/
      goto LABEL_6; /*0x4a7bb2*/
    default:
      v9 = TESOutput_PrintLabeledUnsignedInt(ArgList, *(_DWORD *)this); /*0x4a7c2d*/
LABEL_12:
      v10 = a2[4]; /*0x4a7c32*/
      v11 = a2[5]; /*0x4a7c36*/
      v12 = v9; /*0x4a7c3f*/
      if ( v11 >= v10 ) /*0x4a7c43*/
        NiTArray_SetSize(a2, v11 + a2[7]); /*0x4a7c4e*/
      NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v11, &v12); /*0x4a7c5b*/
LABEL_6:
      Setting_BuildOutputArray_::Done((int)a2); /*0x4a7bb7*/
      return;
  }
}
