unsigned int __thiscall sub_74F4F0(float *this, unsigned __int16 *a2)
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
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned __int16 *v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  unsigned __int16 *v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // ecx
  unsigned __int16 *v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  unsigned __int16 *v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ecx
  unsigned __int16 *v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74f4f2*/
  sub_752EC0(this, a2); /*0x74f4fa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40B50.name); /*0x74f505*/
  end = v2->end; /*0x74f50a*/
  capacity = v2->capacity; /*0x74f50e*/
  a2 = v4; /*0x74f517*/
  if ( end >= capacity ) /*0x74f51b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x74f526*/
  NiTArray_SetAt(v2, end, &a2); /*0x74f533*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Speed", *(this + 6)); /*0x74f544*/
  v8 = v2->end; /*0x74f549*/
  v9 = v2->capacity; /*0x74f54d*/
  a2 = v7; /*0x74f556*/
  if ( v8 >= v9 ) /*0x74f55a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x74f565*/
  NiTArray_SetAt(v2, v8, &a2); /*0x74f572*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Speed Variation", *(this + 7)); /*0x74f583*/
  v11 = v2->end; /*0x74f588*/
  v12 = v2->capacity; /*0x74f58c*/
  a2 = v10; /*0x74f595*/
  if ( v11 >= v12 ) /*0x74f599*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x74f5a4*/
  NiTArray_SetAt(v2, v11, &a2); /*0x74f5b1*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Declination", *(this + 8)); /*0x74f5c2*/
  v14 = v2->end; /*0x74f5c7*/
  v15 = v2->capacity; /*0x74f5cb*/
  a2 = v13; /*0x74f5d4*/
  if ( v14 >= v15 ) /*0x74f5d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x74f5e3*/
  NiTArray_SetAt(v2, v14, &a2); /*0x74f5f0*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Declination Variation", *(this + 9)); /*0x74f601*/
  v17 = v2->end; /*0x74f606*/
  v18 = v2->capacity; /*0x74f60a*/
  a2 = v16; /*0x74f613*/
  if ( v17 >= v18 ) /*0x74f617*/
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x74f622*/
  NiTArray_SetAt(v2, v17, &a2); /*0x74f62f*/
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Planar Angle", *(this + 0xA)); /*0x74f640*/
  v20 = v2->end; /*0x74f645*/
  v21 = v2->capacity; /*0x74f649*/
  a2 = v19; /*0x74f652*/
  if ( v20 >= v21 ) /*0x74f656*/
    NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize); /*0x74f661*/
  NiTArray_SetAt(v2, v20, &a2); /*0x74f66e*/
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Planar Angle Variation", *(this + 0xB)); /*0x74f67f*/
  v23 = v2->end; /*0x74f684*/
  v24 = v2->capacity; /*0x74f688*/
  a2 = v22; /*0x74f691*/
  if ( v23 >= v24 ) /*0x74f695*/
    NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize); /*0x74f6a0*/
  NiTArray_SetAt(v2, v23, &a2); /*0x74f6ad*/
  v25 = (unsigned __int16 *)sub_7093D0(this + 0xC, "Initial Color"); /*0x74f6ba*/
  v26 = v2->end; /*0x74f6bf*/
  v27 = v2->capacity; /*0x74f6c3*/
  a2 = v25; /*0x74f6c9*/
  if ( v26 >= v27 ) /*0x74f6cd*/
    NiTArray_SetSize((unsigned __int16 *)v2, v26 + v2->growSize); /*0x74f6d8*/
  NiTArray_SetAt(v2, v26, &a2); /*0x74f6e5*/
  v28 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Radius", *(this + 0x10)); /*0x74f6f6*/
  v29 = v2->end; /*0x74f6fb*/
  v30 = v2->capacity; /*0x74f6ff*/
  a2 = v28; /*0x74f708*/
  if ( v29 >= v30 ) /*0x74f70c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize); /*0x74f717*/
  NiTArray_SetAt(v2, v29, &a2); /*0x74f724*/
  v31 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Radius Variation", *(this + 0x11)); /*0x74f735*/
  v32 = v2->end; /*0x74f73a*/
  v33 = v2->capacity; /*0x74f73e*/
  a2 = v31; /*0x74f747*/
  if ( v32 >= v33 ) /*0x74f74b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v32 + v2->growSize); /*0x74f756*/
  NiTArray_SetAt(v2, v32, &a2); /*0x74f763*/
  v34 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span", *(this + 0x12)); /*0x74f774*/
  v35 = v2->end; /*0x74f779*/
  v36 = v2->capacity; /*0x74f77d*/
  a2 = v34; /*0x74f786*/
  if ( v35 >= v36 ) /*0x74f78a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v35 + v2->growSize); /*0x74f795*/
  NiTArray_SetAt(v2, v35, &a2); /*0x74f7a2*/
  v37 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span Variation", *(this + 0x13)); /*0x74f7b3*/
  v38 = v2->end; /*0x74f7b8*/
  v39 = v2->capacity; /*0x74f7bc*/
  a2 = v37; /*0x74f7c5*/
  if ( v38 >= v39 ) /*0x74f7c9*/
    NiTArray_SetSize((unsigned __int16 *)v2, v38 + v2->growSize); /*0x74f7d4*/
  return NiTArray_SetAt(v2, v38, &a2); /*0x74f7e6*/
}
