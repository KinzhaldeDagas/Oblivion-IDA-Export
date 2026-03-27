unsigned int __thiscall sub_7EE5D0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7E28E0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B4618C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("number of lights", *((_DWORD *)this + 0x1E));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = sub_7ED5D0(this);
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("active lights", v10);
  v12 = v2->end;
  v13 = v2->capacity;
  a2 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
  NiTArray_SetAt(v2, v12, &a2);
  if ( *((_DWORD *)this + 0x23) )
  {
    v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("number of decals", *((_DWORD *)this + 0x23));
    v15 = v2->end;
    v16 = v2->capacity;
    a2 = v14;
    if ( v15 >= v16 )
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
    NiTArray_SetAt(v2, v15, &a2);
  }
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Reference ID", *((_DWORD *)this + 0x26));
  v18 = v2->end;
  v19 = v2->capacity;
  a2 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
  return NiTArray_SetAt(v2, v18, &a2);
}
