int __thiscall Setting_BuildOutputArray(char *this, unsigned __int16 *a2)
{
  char *v3; // edx
  char v4; // cl
  unsigned int v5; // eax
  char *v6; // edi
  char *v8; // eax
  char *v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  char *v13; // [esp+10h] [ebp-108h] BYREF
  char ArgList[2]; // [esp+14h] [ebp-104h] BYREF
  char v15; // [esp+16h] [ebp-102h]

  v3 = *((char **)this + 1);
  v4 = byte_A403A2;
  *(_WORD *)ArgList = word_A403A0;
  v15 = v4;
  v5 = strlen(v3) + 1;
  v6 = (char *)&v13 + 3;
  while ( *++v6 )
    ;
  qmemcpy(v6, v3, v5);
  switch ( Setting_GetTypeFromName(v3) )
  {
    case 0:
      v8 = TESOutput_PrintLabeledBool((int)ArgList, *this);
      goto LABEL_5;
    case 1:
    case 2:
      v13 = TESOutput_PrintLabeledChar((int)ArgList, *this);
      NiTArray_Add(a2, &v13);
      goto LABEL_8;
    case 3:
LABEL_8:
      v10 = TESOutput_PrintLabeledSignedInt((int)ArgList, *(_DWORD *)this);
      goto LABEL_12;
    case 5:
      v13 = TESOutput_PrintLabeledFloat((int)ArgList, *(float *)this);
      NiTArray_Add(a2, &v13);
      return Setting_BuildOutputArray_::Done(a2);
    case 6:
      v8 = TESOutput_PrintLabeledString(*(_DWORD *)this, (int)ArgList, *(_DWORD *)this);
LABEL_5:
      v13 = v8;
      NiTArray_Add(a2, &v13);
      return Setting_BuildOutputArray_::Done(a2);
    default:
      v10 = TESOutput_PrintLabeledUnsignedInt((int)ArgList, *(_DWORD *)this);
LABEL_12:
      v11 = a2[4];
      v12 = a2[5];
      v13 = v10;
      if ( v12 >= v11 )
        NiTArray_SetSize(a2, v12 + a2[7]);
      NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v12, &v13);
      return Setting_BuildOutputArray_::Done(a2);
  }
}
