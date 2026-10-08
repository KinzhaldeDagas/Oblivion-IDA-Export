unsigned int __thiscall sub_6D9BC0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d9bc2*/
  sub_6EC460(this, a2); /*0x6d9bca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DC68.name); /*0x6d9bd5*/
  end = v2->end; /*0x6d9bda*/
  capacity = v2->capacity; /*0x6d9bde*/
  a2 = v4; /*0x6d9be7*/
  if ( end >= capacity ) /*0x6d9beb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d9bf6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d9c03*/
  v7 = (unsigned __int16 *)sub_7153C0((float *)this + 3, "m_kQuaternionValue"); /*0x6d9c10*/
  v8 = v2->end; /*0x6d9c15*/
  v9 = v2->capacity; /*0x6d9c19*/
  a2 = v7; /*0x6d9c1f*/
  if ( v8 >= v9 ) /*0x6d9c23*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6d9c2e*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6d9c3b*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_spQuaternionData", *((_DWORD *)this + 7)); /*0x6d9c49*/
  v11 = v2->end; /*0x6d9c4e*/
  v12 = v2->capacity; /*0x6d9c52*/
  a2 = v10; /*0x6d9c5b*/
  if ( v11 >= v12 ) /*0x6d9c5f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6d9c6a*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6d9c7c*/
}
