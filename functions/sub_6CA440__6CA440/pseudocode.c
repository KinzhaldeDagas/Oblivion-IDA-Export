unsigned int __thiscall sub_6CA440(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned __int16 *v9; // eax
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
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
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  unsigned __int16 *v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // ecx
  unsigned __int16 *v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // ecx
  unsigned __int16 *v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // ecx
  unsigned __int16 *v38; // eax
  unsigned int v39; // ebx
  unsigned int v40; // ecx
  unsigned __int16 *v41; // eax
  unsigned int v42; // edi
  unsigned int v43; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7009A0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3CB24);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  sub_6C6140("State", *((_DWORD *)this + 0x11));
  v7 = v2->end;
  v8 = v2->capacity;
  a2 = v9;
  if ( v7 >= v8 )
    NiTArray_SetSize((unsigned __int16 *)v2, v7 + v2->growSize);
  NiTArray_SetAt(v2, v7, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"ArraySize", *((_DWORD *)this + 3));
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"Weight", *((float *)this + 7));
  v13 = v2->end;
  a2 = v12;
  if ( v13 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v14 = (unsigned __int16 *)sub_715910((int)"CycleType", *((_DWORD *)this + 9));
  v15 = v2->end;
  v16 = v2->capacity;
  a2 = v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
  NiTArray_SetAt(v2, v15, &a2);
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"Freq", *((float *)this + 0xA));
  v18 = v2->end;
  v19 = v2->capacity;
  a2 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
  NiTArray_SetAt(v2, v18, &a2);
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"Begin", *((float *)this + 0xB));
  v21 = v2->end;
  v22 = v2->capacity;
  a2 = v20;
  if ( v21 >= v22 )
    NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize);
  NiTArray_SetAt(v2, v21, &a2);
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)&aEnd, *((float *)this + 0xC));
  v24 = v2->end;
  v25 = v2->capacity;
  a2 = v23;
  if ( v24 >= v25 )
    NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize);
  NiTArray_SetAt(v2, v24, &a2);
  v26 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"Last", *((float *)this + 0xD));
  v27 = v2->end;
  v28 = v2->capacity;
  a2 = v26;
  if ( v27 >= v28 )
    NiTArray_SetSize((unsigned __int16 *)v2, v27 + v2->growSize);
  NiTArray_SetAt(v2, v27, &a2);
  v29 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"Offset", *((float *)this + 0x12));
  v30 = v2->end;
  v31 = v2->capacity;
  a2 = v29;
  if ( v30 >= v31 )
    NiTArray_SetSize((unsigned __int16 *)v2, v30 + v2->growSize);
  NiTArray_SetAt(v2, v30, &a2);
  v32 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"Start", *((float *)this + 0x13));
  v33 = v2->end;
  v34 = v2->capacity;
  a2 = v32;
  if ( v33 >= v34 )
    NiTArray_SetSize((unsigned __int16 *)v2, v33 + v2->growSize);
  NiTArray_SetAt(v2, v33, &a2);
  v35 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)&aEnd, *((float *)this + 0x14));
  v36 = v2->end;
  v37 = v2->capacity;
  a2 = v35;
  if ( v36 >= v37 )
    NiTArray_SetSize((unsigned __int16 *)v2, v36 + v2->growSize);
  NiTArray_SetAt(v2, v36, &a2);
  v38 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"WeightLast", *((float *)this + 0xE));
  v39 = v2->end;
  v40 = v2->capacity;
  a2 = v38;
  if ( v39 >= v40 )
    NiTArray_SetSize((unsigned __int16 *)v2, v39 + v2->growSize);
  NiTArray_SetAt(v2, v39, &a2);
  v41 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"LastScaled", *((float *)this + 0xF));
  v42 = v2->end;
  v43 = v2->capacity;
  a2 = v41;
  if ( v42 >= v43 )
    NiTArray_SetSize((unsigned __int16 *)v2, v42 + v2->growSize);
  return NiTArray_SetAt(v2, v42, &a2);
}
