unsigned int __thiscall sub_75A0E0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75a0e2*/
  sub_73FB80(this, a2); /*0x75a0ea*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41864.name); /*0x75a0f5*/
  end = v2->end; /*0x75a0fa*/
  capacity = v2->capacity; /*0x75a0fe*/
  a2 = v4; /*0x75a107*/
  if ( end >= capacity ) /*0x75a10b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75a116*/
  NiTArray_SetAt(v2, end, &a2); /*0x75a123*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkParticleInfo", *((_DWORD *)this + 0x17)); /*0x75a131*/
  v8 = v2->end; /*0x75a136*/
  v9 = v2->capacity; /*0x75a13a*/
  a2 = v7; /*0x75a143*/
  if ( v8 >= v9 ) /*0x75a147*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x75a152*/
  NiTArray_SetAt(v2, v8, &a2); /*0x75a15f*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pfRotationSpeeds", *((_DWORD *)this + 0x18)); /*0x75a16d*/
  v11 = v2->end; /*0x75a172*/
  a2 = v10; /*0x75a176*/
  if ( v11 >= v2->capacity ) /*0x75a183*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x75a18e*/
  NiTArray_SetAt(v2, v11, &a2); /*0x75a19b*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("NumAddedParticles", *((_WORD *)this + 0x32)); /*0x75a1aa*/
  v13 = v2->end; /*0x75a1af*/
  v14 = v2->capacity; /*0x75a1b3*/
  a2 = v12; /*0x75a1bc*/
  if ( v13 >= v14 ) /*0x75a1c0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x75a1cb*/
  NiTArray_SetAt(v2, v13, &a2); /*0x75a1d8*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("AddedParticlesBase", *((_WORD *)this + 0x33)); /*0x75a1e7*/
  v16 = v2->end; /*0x75a1ec*/
  v17 = v2->capacity; /*0x75a1f0*/
  a2 = v15; /*0x75a1f9*/
  if ( v16 >= v17 ) /*0x75a1fd*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x75a208*/
  return NiTArray_SetAt(v2, v16, &a2); /*0x75a21a*/
}
