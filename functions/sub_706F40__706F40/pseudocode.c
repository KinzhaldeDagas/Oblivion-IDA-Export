unsigned int __thiscall sub_706F40(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  int v13; // eax
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  int v17[8]; // [esp+Ch] [ebp-20h]

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x706f45*/
  sub_700B10(this, a2); /*0x706f4d*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F990.name); /*0x706f58*/
  end = v3->end; /*0x706f5d*/
  capacity = v3->capacity; /*0x706f61*/
  a2 = v5; /*0x706f6a*/
  if ( end >= capacity ) /*0x706f6e*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x706f79*/
  NiTArray_SetAt(v3, end, &a2); /*0x706f86*/
  LOBYTE(a2) = *(_BYTE *)(this + 6) & 1; /*0x706f91*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bZTest", (char)a2); /*0x706f9f*/
  v9 = v3->end; /*0x706fa4*/
  a2 = v8; /*0x706fa8*/
  if ( v9 >= v3->capacity ) /*0x706fb5*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x706fc0*/
  NiTArray_SetAt(v3, v9, &a2); /*0x706fcd*/
  LOBYTE(a2) = (*(_BYTE *)(this + 6) & 2) != 0; /*0x706fd9*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bZWrite", (char)a2); /*0x706fe7*/
  v11 = v3->end; /*0x706fec*/
  v12 = v3->capacity; /*0x706ff0*/
  a2 = v10; /*0x706ff9*/
  if ( v11 >= v12 ) /*0x706ffd*/
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize); /*0x707008*/
  NiTArray_SetAt(v3, v11, &a2); /*0x707015*/
  v13 = (*((unsigned __int8 *)this + 0x18) >> 2) & 0xF; /*0x707021*/
  v17[0] = (int)"TEST_ALWAYS"; /*0x707024*/
  v17[1] = (int)"TEST_LESS"; /*0x70702c*/
  v17[2] = (int)"TEST_EQUAL"; /*0x707034*/
  v17[3] = (int)"TEST_LESSEQUAL"; /*0x70703c*/
  v17[4] = (int)"TEST_GREATER"; /*0x707044*/
  v17[5] = (int)"TEST_NOTEQUAL"; /*0x70704c*/
  v17[6] = (int)"TEST_GREATEREQUAL"; /*0x707054*/
  v17[7] = (int)"TEST_NEVER"; /*0x70705c*/
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledString("Test Function", (const char *)v17[v13]); /*0x70706e*/
  v15 = v3->end; /*0x707073*/
  a2 = v14; /*0x707077*/
  if ( v15 >= v3->capacity ) /*0x707084*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x70708f*/
  return NiTArray_SetAt(v3, v15, &a2); /*0x7070a1*/
}
