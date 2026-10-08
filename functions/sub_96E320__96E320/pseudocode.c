unsigned int __thiscall sub_96E320(float *this, unsigned __int16 *a2)
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
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x96e322*/
  sub_711E60((int *)this, a2); /*0x96e32a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA9AC8.name); /*0x96e335*/
  end = v2->end; /*0x96e33a*/
  capacity = v2->capacity; /*0x96e33e*/
  a2 = v4; /*0x96e347*/
  if ( end >= capacity ) /*0x96e34b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x96e356*/
  NiTArray_SetAt(v2, end, &a2); /*0x96e363*/
  v7 = (unsigned __int16 *)sub_96DA10("m_ePropagationMode", *((_DWORD *)this + 9)); /*0x96e373*/
  v8 = v2->end; /*0x96e378*/
  v9 = v2->capacity; /*0x96e37c*/
  a2 = v7; /*0x96e382*/
  if ( v8 >= v9 ) /*0x96e386*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x96e391*/
  NiTArray_SetAt(v2, v8, &a2); /*0x96e39e*/
  v10 = (unsigned __int16 *)sub_96D930("m_eCollisionMode", *((_DWORD *)this + 0xA)); /*0x96e3ae*/
  v11 = v2->end; /*0x96e3b3*/
  v12 = v2->capacity; /*0x96e3b7*/
  a2 = v10; /*0x96e3bd*/
  if ( v11 >= v12 ) /*0x96e3c1*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x96e3cc*/
  NiTArray_SetAt(v2, v11, &a2); /*0x96e3d9*/
  if ( *((_DWORD *)this + 0xB) ) /*0x96e3de*/
    (*(void (__thiscall **)(_DWORD, const char *, NiTArray_NiTexturingPropertyMap *))(**((_DWORD **)this + 0xB) + 0x2C))( /*0x96e3f2*/
      *((_DWORD *)this + 0xB),
      "m_pkModelABV->Type",
      v2);
  v13 = (unsigned __int16 *)sub_707280(this + 3, "m_kLocalVelocity"); /*0x96e3fc*/
  v14 = v2->end; /*0x96e401*/
  v15 = v2->capacity; /*0x96e405*/
  a2 = v13; /*0x96e40b*/
  if ( v14 >= v15 ) /*0x96e40f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x96e41a*/
  NiTArray_SetAt(v2, v14, &a2); /*0x96e427*/
  v16 = (unsigned __int16 *)sub_707280(this + 6, "m_kWorldVelocity"); /*0x96e434*/
  v17 = v2->end; /*0x96e439*/
  v18 = v2->capacity; /*0x96e43d*/
  a2 = v16; /*0x96e443*/
  if ( v17 >= v18 ) /*0x96e447*/
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x96e452*/
  return NiTArray_SetAt(v2, v17, &a2); /*0x96e464*/
}
