unsigned int __thiscall sub_6EB8C0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6eb8c2*/
  sub_6CDDB0(this, a2); /*0x6eb8ca*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3EA50.name); /*0x6eb8d5*/
  end = v3->end; /*0x6eb8da*/
  capacity = v3->capacity; /*0x6eb8de*/
  a2 = v5; /*0x6eb8e7*/
  if ( end >= capacity ) /*0x6eb8eb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6eb8f6*/
  NiTArray_SetAt(v3, end, &a2); /*0x6eb903*/
  v8 = (unsigned __int16 *)sub_70FA00("m_bBoolValue", *((_BYTE *)this + 0x30)); /*0x6eb912*/
  v9 = v3->end; /*0x6eb917*/
  v10 = v3->capacity; /*0x6eb91b*/
  a2 = v8; /*0x6eb924*/
  if ( v9 >= v10 ) /*0x6eb928*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6eb933*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x6eb945*/
}
