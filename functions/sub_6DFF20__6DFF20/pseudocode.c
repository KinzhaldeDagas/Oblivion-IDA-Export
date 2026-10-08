void __thiscall sub_6DFF20(char *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  char *v10; // edi
  int v11; // ebx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6dff22*/
  sub_6EBAC0(this, a2); /*0x6dff2a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DF08.name); /*0x6dff35*/
  end = v2->end; /*0x6dff3a*/
  capacity = v2->capacity; /*0x6dff3e*/
  a2 = v4; /*0x6dff47*/
  if ( end >= capacity ) /*0x6dff4b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6dff56*/
  NiTArray_SetAt(v2, end, &a2); /*0x6dff63*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkLookAt", *((_DWORD *)this + 4)); /*0x6dff71*/
  v8 = v2->end; /*0x6dff76*/
  v9 = v2->capacity; /*0x6dff7a*/
  a2 = v7; /*0x6dff83*/
  if ( v8 >= v9 ) /*0x6dff87*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6dff92*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6dff9f*/
  sub_6CBAD0((float *)this + 6, (unsigned __int16 *)v2); /*0x6dffa8*/
  v10 = this + 0x38; /*0x6dffad*/
  v11 = 3; /*0x6dffb0*/
  do /*0x6dffc9*/
  {
    if ( *(_DWORD *)v10 ) /*0x6dffb5*/
      (*(void (__thiscall **)(_DWORD, NiTArray_NiTexturingPropertyMap *))(**(_DWORD **)v10 + 0x30))(*(_DWORD *)v10, v2); /*0x6dffc1*/
    v10 += 4; /*0x6dffc3*/
    --v11; /*0x6dffc6*/
  }
  while ( v11 ); /*0x6dffc9*/
}
