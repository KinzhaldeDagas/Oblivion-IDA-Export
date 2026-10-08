unsigned int __thiscall sub_6DA9D0(void *this, unsigned __int16 *a2)
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6da9d2*/
  sub_6EC460(this, a2); /*0x6da9da*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DCF0.name); /*0x6da9e5*/
  end = v2->end; /*0x6da9ea*/
  capacity = v2->capacity; /*0x6da9ee*/
  a2 = v4; /*0x6da9f7*/
  if ( end >= capacity ) /*0x6da9fb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6daa06*/
  NiTArray_SetAt(v2, end, &a2); /*0x6daa13*/
  v7 = (unsigned __int16 *)sub_707280((float *)this + 3, "m_kPoint3Value"); /*0x6daa20*/
  v8 = v2->end; /*0x6daa25*/
  v9 = v2->capacity; /*0x6daa29*/
  a2 = v7; /*0x6daa2f*/
  if ( v8 >= v9 ) /*0x6daa33*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6daa3e*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6daa4b*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_spPoint3Data", *((_DWORD *)this + 6)); /*0x6daa59*/
  v11 = v2->end; /*0x6daa5e*/
  v12 = v2->capacity; /*0x6daa62*/
  a2 = v10; /*0x6daa6b*/
  if ( v11 >= v12 ) /*0x6daa6f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6daa7a*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6daa8c*/
}
