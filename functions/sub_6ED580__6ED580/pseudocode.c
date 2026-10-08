unsigned int __thiscall sub_6ED580(float *this, unsigned __int16 *a2)
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
  unsigned int result; // eax
  int v14; // ecx
  int v15; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ed582*/
  sub_6EBAC0(this, a2); /*0x6ed58a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3EF9C.name); /*0x6ed595*/
  end = v2->end; /*0x6ed59a*/
  capacity = v2->capacity; /*0x6ed59e*/
  a2 = v4; /*0x6ed5a7*/
  if ( end >= capacity ) /*0x6ed5ab*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ed5b6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6ed5c3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fStartTime", *(this + 3)); /*0x6ed5d4*/
  v8 = v2->end; /*0x6ed5d9*/
  v9 = v2->capacity; /*0x6ed5dd*/
  a2 = v7; /*0x6ed5e6*/
  if ( v8 >= v9 ) /*0x6ed5ea*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6ed5f5*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6ed602*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fEndTime", *(this + 4)); /*0x6ed613*/
  v11 = v2->end; /*0x6ed618*/
  v12 = v2->capacity; /*0x6ed61c*/
  a2 = v10; /*0x6ed625*/
  if ( v11 >= v12 ) /*0x6ed629*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6ed634*/
  result = NiTArray_SetAt(v2, v11, &a2); /*0x6ed641*/
  v14 = *((_DWORD *)this + 5); /*0x6ed646*/
  if ( v14 ) /*0x6ed64b*/
    result = (*(int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v14 + 0x30))(v14, v2); /*0x6ed653*/
  v15 = *((_DWORD *)this + 6); /*0x6ed655*/
  if ( v15 ) /*0x6ed65a*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v15 + 0x30))(v15, v2); /*0x6ed662*/
  return result; /*0x6ed664*/
}
