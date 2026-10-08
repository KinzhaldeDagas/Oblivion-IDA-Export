unsigned int __thiscall sub_6EB3D0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6eb3d2*/
  sub_6CDDB0(this, a2); /*0x6eb3da*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E9C4.name); /*0x6eb3e5*/
  end = v3->end; /*0x6eb3ea*/
  capacity = v3->capacity; /*0x6eb3ee*/
  a2 = v5; /*0x6eb3f7*/
  if ( end >= capacity ) /*0x6eb3fb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6eb406*/
  NiTArray_SetAt(v3, end, &a2); /*0x6eb413*/
  v8 = (unsigned __int16 *)sub_7093D0(this + 0xC, "m_kColorValue"); /*0x6eb420*/
  v9 = v3->end; /*0x6eb425*/
  v10 = v3->capacity; /*0x6eb429*/
  a2 = v8; /*0x6eb42f*/
  if ( v9 >= v10 ) /*0x6eb433*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6eb43e*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x6eb450*/
}
