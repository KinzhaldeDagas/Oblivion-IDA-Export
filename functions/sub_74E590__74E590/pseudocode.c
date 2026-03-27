unsigned int __thiscall sub_74E590(void *this, unsigned __int16 *a2)
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
  unsigned int v15; // edx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // edx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned __int16 *v24; // eax
  unsigned int v25; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_752EC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40AA4);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Speed", *((float *)this + 6));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Speed Variation", *((float *)this + 7));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Random Rot Speed Sign", *((_BYTE *)this + 0x35));
  v14 = v2->end;
  v15 = v2->capacity;
  a2 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Angle", *((float *)this + 8));
  v17 = v2->end;
  v18 = v2->capacity;
  a2 = v16;
  if ( v17 >= v18 )
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
  NiTArray_SetAt(v2, v17, &a2);
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Angle Variation", *((float *)this + 9));
  v20 = v2->end;
  v21 = v2->capacity;
  a2 = v19;
  if ( v20 >= v21 )
    NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize);
  NiTArray_SetAt(v2, v20, &a2);
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Random Initial Axis", *((_BYTE *)this + 0x34));
  v23 = v2->end;
  a2 = v22;
  if ( v23 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize);
  NiTArray_SetAt(v2, v23, &a2);
  v24 = (unsigned __int16 *)sub_707280((float *)this + 0xA, "Initial Axis");
  v25 = v2->end;
  a2 = v24;
  if ( v25 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize);
  return NiTArray_SetAt(v2, v25, &a2);
}
