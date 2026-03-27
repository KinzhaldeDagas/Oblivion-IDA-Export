unsigned int __userpurge sub_70DC20@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned __int16 *v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // ecx
  float v30; // [esp+10h] [ebp-Ch] BYREF
  float v31; // [esp+14h] [ebp-8h]
  float v32; // [esp+18h] [ebp-4h]

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_7086B0(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3FACC);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)sub_70DEB0(this + 0x3B, (int)"m_kViewFrustum");
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = (unsigned __int16 *)sub_70D270(this + 0x44, "m_kPort");
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a3);
  v30 = *(this + 0x19);
  v31 = *(this + 0x1C);
  v32 = *(this + 0x1F);
  v14 = (unsigned __int16 *)sub_707280(&v30, "m_kWorldDir");
  v15 = v3->end;
  v16 = v3->capacity;
  a3 = v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v30 = *(this + 0x1A);
  v31 = *(this + 0x1D);
  v32 = *(this + 0x20);
  v17 = (unsigned __int16 *)sub_707280(&v30, "m_kWorldUp");
  v18 = v3->end;
  v19 = v3->capacity;
  a3 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize);
  NiTArray_SetAt(v3, v18, &a3);
  v30 = *(this + 0x1B);
  v31 = *(this + 0x1E);
  v32 = *(this + 0x21);
  v20 = (unsigned __int16 *)sub_707280(&v30, "m_kWorldRight");
  v21 = v3->end;
  v22 = v3->capacity;
  a3 = v20;
  if ( v21 >= v22 )
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize);
  NiTArray_SetAt(v3, v21, &a3);
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fMinNearPlaneDist", *(this + 0x42));
  v24 = v3->end;
  v25 = v3->capacity;
  a3 = v23;
  if ( v24 >= v25 )
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize);
  NiTArray_SetAt(v3, v24, &a3);
  v26 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fMaxFarNearRatio", *(this + 0x43));
  v27 = v3->end;
  v28 = v3->capacity;
  a3 = v26;
  if ( v27 >= v28 )
    NiTArray_SetSize((unsigned __int16 *)v3, v27 + v3->growSize);
  return NiTArray_SetAt(v3, v27, &a3);
}
