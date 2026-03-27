unsigned int __userpurge sub_6CDDB0@<eax>(float *this@<ecx>, unsigned int a2@<ebp>, unsigned __int16 *a3)
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
  unsigned int v43; // edx
  unsigned int v44; // edx
  char *v45; // [esp+14h] [ebp-4h] BYREF

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_6EBAC0(this, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3CC5C);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)sub_70FA00((int)"m_ucArraySize", *((_BYTE *)this + 0xD));
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = (unsigned __int16 *)sub_70FA00((int)"ms_ucArrayGrowBy", byte_B242A0);
  v12 = v3->end;
  a3 = v11;
  if ( v12 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a3);
  LOBYTE(a3) = *(_BYTE *)(this + 3) & 1;
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"ManagerControlled", (char)a3);
  v14 = v3->end;
  v15 = v3->capacity;
  a3 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v3, v14 + v3->growSize);
  NiTArray_SetAt(v3, v14, &a3);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fWeightThreshold", *(this + 7));
  v17 = v3->end;
  v18 = v3->capacity;
  a3 = v16;
  if ( v17 >= v18 )
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize);
  NiTArray_SetAt(v3, v17, &a3);
  LOBYTE(a3) = (*(_BYTE *)(this + 3) & 2) != 0;
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"m_bOnlyUseHighestWeight", (char)a3);
  v20 = v3->end;
  v21 = v3->capacity;
  a3 = v19;
  if ( v20 >= v21 )
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize);
  NiTArray_SetAt(v3, v20, &a3);
  v22 = (unsigned __int16 *)sub_70FA00((int)"m_ucInterpCount", *((_BYTE *)this + 0xE));
  v23 = v3->end;
  v24 = v3->capacity;
  a3 = v22;
  if ( v23 >= v24 )
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize);
  NiTArray_SetAt(v3, v23, &a3);
  v25 = (unsigned __int16 *)sub_70FA00((int)"m_ucSingleIdx", *((_BYTE *)this + 0xF));
  v26 = v3->end;
  a3 = v25;
  if ( v26 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v26 + v3->growSize);
  result = NiTArray_SetAt(v3, v26, &a3);
  v28 = 0;
  v29 = *((_BYTE *)this + 0xD) == 0;
  a3 = 0;
  if ( !v29 )
  {
    do
    {
      v30 = *(_DWORD *)(v28 + *((_DWORD *)this + 5));
      if ( v30 )
      {
        if ( dword_B3CC30 )
        {
          v31 = sub_6C4390((_WORD *)dword_B3CC30, v30, 1);
          if ( v31
            || dword_B3CC34
            && (v31 = sub_6C4390((_WORD *)dword_B3CC34, *(_DWORD *)(v28 + *((_DWORD *)this + 5)), 1)) != 0 )
          {
            v32 = TESOutput_PrintLabeledString(a2, (int)"NiControllerSequence", *(_DWORD *)(v31 + 8));
            v33 = v3->end;
            v45 = v32;
            if ( v33 >= v3->capacity )
              NiTArray_SetSize((unsigned __int16 *)v3, v33 + v3->growSize);
            NiTArray_SetAt(v3, v33, &v45);
            v34 = sub_70FA00((int)"m_cPriority", *(_BYTE *)(v28 + *((_DWORD *)this + 5) + 0xC));
            v35 = v3->end;
            v36 = v3->capacity;
            v45 = v34;
            if ( v35 >= v36 )
              NiTArray_SetSize((unsigned __int16 *)v3, v35 + v3->growSize);
            NiTArray_SetAt(v3, v35, &v45);
            v37 = TESOutput_PrintLabeledFloat((int)"m_fWeight", *(float *)(v28 + *((_DWORD *)this + 5) + 4));
            v38 = v3->end;
            v45 = v37;
            if ( v38 >= v3->capacity )
              NiTArray_SetSize((unsigned __int16 *)v3, v38 + v3->growSize);
            NiTArray_SetAt(v3, v38, &v45);
            v39 = TESOutput_PrintLabeledFloat((int)"m_fNormalizedWeight", *(float *)(v28 + *((_DWORD *)this + 5) + 8));
            v40 = v3->end;
            v41 = v3->capacity;
            v45 = v39;
            if ( v40 >= v41 )
              NiTArray_SetSize((unsigned __int16 *)v3, v40 + v3->growSize);
            NiTArray_SetAt(v3, v40, &v45);
            v42 = TESOutput_PrintLabeledFloat((int)"m_fEaseSpinner", *(float *)(v28 + *((_DWORD *)this + 5) + 0x10));
            a2 = v3->end;
            v43 = v3->capacity;
            v45 = v42;
            if ( a2 >= v43 )
              NiTArray_SetSize((unsigned __int16 *)v3, a2 + v3->growSize);
            NiTArray_SetAt(v3, a2, &v45);
          }
        }
      }
      v44 = *((unsigned __int8 *)this + 0xD);
      result = (unsigned int)a3 + 1;
      v28 += 0x18;
      a3 = (unsigned __int16 *)((char *)a3 + 1);
    }
    while ( (unsigned int)a3 < v44 );
  }
  return result;
}
