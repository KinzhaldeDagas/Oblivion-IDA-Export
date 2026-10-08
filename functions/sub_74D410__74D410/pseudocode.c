unsigned int __thiscall sub_74D410(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74d412*/
  sub_7531E0(this, a2); /*0x74d41a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B409EC.name); /*0x74d425*/
  end = v2->end; /*0x74d42a*/
  capacity = v2->capacity; /*0x74d42e*/
  a2 = v4; /*0x74d437*/
  if ( end >= capacity ) /*0x74d43b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x74d446*/
  NiTArray_SetAt(v2, end, &a2); /*0x74d453*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Width", *(this + 0x15)); /*0x74d464*/
  v8 = v2->end; /*0x74d469*/
  v9 = v2->capacity; /*0x74d46d*/
  a2 = v7; /*0x74d476*/
  if ( v8 >= v9 ) /*0x74d47a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x74d485*/
  NiTArray_SetAt(v2, v8, &a2); /*0x74d492*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Height", *(this + 0x16)); /*0x74d4a3*/
  v11 = v2->end; /*0x74d4a8*/
  v12 = v2->capacity; /*0x74d4ac*/
  a2 = v10; /*0x74d4b5*/
  if ( v11 >= v12 ) /*0x74d4b9*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x74d4c4*/
  NiTArray_SetAt(v2, v11, &a2); /*0x74d4d1*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Depth", *(this + 0x17)); /*0x74d4e2*/
  v14 = v2->end; /*0x74d4e7*/
  v15 = v2->capacity; /*0x74d4eb*/
  a2 = v13; /*0x74d4f4*/
  if ( v14 >= v15 ) /*0x74d4f8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x74d503*/
  return NiTArray_SetAt(v2, v14, &a2); /*0x74d515*/
}
