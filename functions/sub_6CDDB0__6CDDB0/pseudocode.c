unsigned int __thiscall sub_6CDDB0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // edx
  unsigned __int16 *v25; // eax
  unsigned int v26; // ebx
  unsigned int result; // eax
  int v28; // ebx
  bool v29; // zf
  int v30; // eax
  int v31; // eax
  char *v32; // eax
  unsigned int v33; // ebp
  char *v34; // eax
  unsigned int v35; // ebp
  unsigned int v36; // edx
  char *v37; // eax
  unsigned int v38; // ebp
  char *v39; // eax
  unsigned int v40; // ebp
  unsigned int v41; // ecx
  char *v42; // eax
  unsigned int v43; // ebp
  unsigned int v44; // edx
  unsigned int v45; // edx
  char *v46; // [esp+14h] [ebp-4h] BYREF

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6cddb3*/
  sub_6EBAC0(this, a2); /*0x6cddbb*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CC5C.name); /*0x6cddc6*/
  end = v3->end; /*0x6cddcb*/
  capacity = v3->capacity; /*0x6cddcf*/
  a2 = v5; /*0x6cddd8*/
  if ( end >= capacity ) /*0x6cdddc*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6cdde7*/
  NiTArray_SetAt(v3, end, &a2); /*0x6cddf4*/
  v8 = (unsigned __int16 *)sub_70FA00("m_ucArraySize", *((_BYTE *)this + 0xD)); /*0x6cde03*/
  v9 = v3->end; /*0x6cde08*/
  v10 = v3->capacity; /*0x6cde0c*/
  a2 = v8; /*0x6cde15*/
  if ( v9 >= v10 ) /*0x6cde19*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6cde24*/
  NiTArray_SetAt(v3, v9, &a2); /*0x6cde31*/
  v11 = (unsigned __int16 *)sub_70FA00("ms_ucArrayGrowBy", byte_B242A0); /*0x6cde43*/
  v12 = v3->end; /*0x6cde48*/
  a2 = v11; /*0x6cde4c*/
  if ( v12 >= v3->capacity ) /*0x6cde59*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x6cde64*/
  NiTArray_SetAt(v3, v12, &a2); /*0x6cde71*/
  LOBYTE(a2) = *(_BYTE *)(this + 3) & 1; /*0x6cde7b*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool("ManagerControlled", (char)a2); /*0x6cde89*/
  v14 = v3->end; /*0x6cde8e*/
  v15 = v3->capacity; /*0x6cde92*/
  a2 = v13; /*0x6cde9b*/
  if ( v14 >= v15 ) /*0x6cde9f*/
    NiTArray_SetSize((unsigned __int16 *)v3, v14 + v3->growSize); /*0x6cdeaa*/
  NiTArray_SetAt(v3, v14, &a2); /*0x6cdeb7*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fWeightThreshold", *(this + 7)); /*0x6cdec8*/
  v17 = v3->end; /*0x6cdecd*/
  v18 = v3->capacity; /*0x6cded1*/
  a2 = v16; /*0x6cdeda*/
  if ( v17 >= v18 ) /*0x6cdede*/
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize); /*0x6cdee9*/
  NiTArray_SetAt(v3, v17, &a2); /*0x6cdef6*/
  LOBYTE(a2) = (*(_BYTE *)(this + 3) & 2) != 0; /*0x6cdf03*/
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bOnlyUseHighestWeight", (char)a2); /*0x6cdf11*/
  v20 = v3->end; /*0x6cdf16*/
  v21 = v3->capacity; /*0x6cdf1a*/
  a2 = v19; /*0x6cdf23*/
  if ( v20 >= v21 ) /*0x6cdf27*/
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize); /*0x6cdf32*/
  NiTArray_SetAt(v3, v20, &a2); /*0x6cdf3f*/
  v22 = (unsigned __int16 *)sub_70FA00("m_ucInterpCount", *((_BYTE *)this + 0xE)); /*0x6cdf4e*/
  v23 = v3->end; /*0x6cdf53*/
  v24 = v3->capacity; /*0x6cdf57*/
  a2 = v22; /*0x6cdf60*/
  if ( v23 >= v24 ) /*0x6cdf64*/
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize); /*0x6cdf6f*/
  NiTArray_SetAt(v3, v23, &a2); /*0x6cdf7c*/
  v25 = (unsigned __int16 *)sub_70FA00("m_ucSingleIdx", *((_BYTE *)this + 0xF)); /*0x6cdf8b*/
  v26 = v3->end; /*0x6cdf90*/
  a2 = v25; /*0x6cdf94*/
  if ( v26 >= v3->capacity ) /*0x6cdfa1*/
    NiTArray_SetSize((unsigned __int16 *)v3, v26 + v3->growSize); /*0x6cdfac*/
  result = NiTArray_SetAt(v3, v26, &a2); /*0x6cdfb9*/
  v28 = 0; /*0x6cdfbe*/
  v29 = *((_BYTE *)this + 0xD) == 0; /*0x6cdfc0*/
  a2 = 0; /*0x6cdfc3*/
  if ( !v29 ) /*0x6cdfc7*/
  {
    do /*0x6ce176*/
    {
      v30 = *(_DWORD *)(v28 + *((_DWORD *)this + 5)); /*0x6cdfd3*/
      if ( v30 ) /*0x6cdfd8*/
      {
        if ( unk_B3CC30 ) /*0x6cdfde*/
        {
          v31 = sub_6C4390((_WORD *)unk_B3CC30, v30, 1); /*0x6cdfef*/
          if ( v31 /*0x6ce016*/
            || unk_B3CC34 && (v31 = sub_6C4390((_WORD *)unk_B3CC34, *(_DWORD *)(v28 + *((_DWORD *)this + 5)), 1)) != 0 )
          {
            v32 = TESOutput_PrintLabeledString("NiControllerSequence", *(const char **)(v31 + 8)); /*0x6ce025*/
            v33 = v3->end; /*0x6ce02a*/
            v46 = v32; /*0x6ce02e*/
            if ( v33 >= v3->capacity ) /*0x6ce03b*/
              NiTArray_SetSize((unsigned __int16 *)v3, v33 + v3->growSize); /*0x6ce046*/
            NiTArray_SetAt(v3, v33, &v46); /*0x6ce053*/
            v34 = sub_70FA00("m_cPriority", *(_BYTE *)(v28 + *((_DWORD *)this + 5) + 0xC)); /*0x6ce066*/
            v35 = v3->end; /*0x6ce06b*/
            v36 = v3->capacity; /*0x6ce06f*/
            v46 = v34; /*0x6ce078*/
            if ( v35 >= v36 ) /*0x6ce07c*/
              NiTArray_SetSize((unsigned __int16 *)v3, v35 + v3->growSize); /*0x6ce087*/
            NiTArray_SetAt(v3, v35, &v46); /*0x6ce094*/
            v37 = TESOutput_PrintLabeledFloat("m_fWeight", *(float *)(v28 + *((_DWORD *)this + 5) + 4)); /*0x6ce0a9*/
            v38 = v3->end; /*0x6ce0ae*/
            v46 = v37; /*0x6ce0b2*/
            if ( v38 >= v3->capacity ) /*0x6ce0bf*/
              NiTArray_SetSize((unsigned __int16 *)v3, v38 + v3->growSize); /*0x6ce0ca*/
            NiTArray_SetAt(v3, v38, &v46); /*0x6ce0d7*/
            v39 = TESOutput_PrintLabeledFloat("m_fNormalizedWeight", *(float *)(v28 + *((_DWORD *)this + 5) + 8)); /*0x6ce0ec*/
            v40 = v3->end; /*0x6ce0f1*/
            v41 = v3->capacity; /*0x6ce0f5*/
            v46 = v39; /*0x6ce0fe*/
            if ( v40 >= v41 ) /*0x6ce102*/
              NiTArray_SetSize((unsigned __int16 *)v3, v40 + v3->growSize); /*0x6ce10d*/
            NiTArray_SetAt(v3, v40, &v46); /*0x6ce11a*/
            v42 = TESOutput_PrintLabeledFloat("m_fEaseSpinner", *(float *)(v28 + *((_DWORD *)this + 5) + 0x10)); /*0x6ce12f*/
            v43 = v3->end; /*0x6ce134*/
            v44 = v3->capacity; /*0x6ce138*/
            v46 = v42; /*0x6ce141*/
            if ( v43 >= v44 ) /*0x6ce145*/
              NiTArray_SetSize((unsigned __int16 *)v3, v43 + v3->growSize); /*0x6ce150*/
            NiTArray_SetAt(v3, v43, &v46); /*0x6ce15d*/
          }
        }
      }
      v45 = *((unsigned __int8 *)this + 0xD); /*0x6ce166*/
      result = (unsigned int)a2 + 1; /*0x6ce16a*/
      v28 += 0x18; /*0x6ce16d*/
      a2 = (unsigned __int16 *)((char *)a2 + 1); /*0x6ce172*/
    }
    while ( (unsigned int)a2 < v45 ); /*0x6ce176*/
  }
  return result; /*0x6ce17d*/
}
