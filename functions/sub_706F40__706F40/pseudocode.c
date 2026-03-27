unsigned int __userpurge sub_706F40@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
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

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_700B10(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3F990);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  LOBYTE(a3) = *(_BYTE *)(this + 6) & 1;
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"m_bZTest", (char)a3);
  v9 = v3->end;
  a3 = v8;
  if ( v9 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  LOBYTE(a3) = (*(_BYTE *)(this + 6) & 2) != 0;
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"m_bZWrite", (char)a3);
  v11 = v3->end;
  v12 = v3->capacity;
  a3 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize);
  NiTArray_SetAt(v3, v11, &a3);
  v13 = (*((unsigned __int8 *)this + 0x18) >> 2) & 0xF;
  v17[0] = (int)"TEST_ALWAYS";
  v17[1] = (int)"TEST_LESS";
  v17[2] = (int)"TEST_EQUAL";
  v17[3] = (int)"TEST_LESSEQUAL";
  v17[4] = (int)"TEST_GREATER";
  v17[5] = (int)"TEST_NOTEQUAL";
  v17[6] = (int)"TEST_GREATEREQUAL";
  v17[7] = (int)"TEST_NEVER";
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledString(a2, (int)"Test Function", v17[v13]);
  v15 = v3->end;
  a3 = v14;
  if ( v15 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  return NiTArray_SetAt(v3, v15, &a3);
}
