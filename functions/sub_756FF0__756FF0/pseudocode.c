unsigned int __thiscall sub_756FF0(void *this, unsigned __int16 *a2)
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
  unsigned int v12; // edx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_752EC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B4128C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Grow Time", *((float *)this + 6));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Grow Generation", *((_WORD *)this + 0xE));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Fade Time", *((float *)this + 8));
  v14 = v2->end;
  v15 = v2->capacity;
  a2 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Fade Generation", *((_WORD *)this + 0x12));
  v17 = v2->end;
  a2 = v16;
  if ( v17 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
  return NiTArray_SetAt(v2, v17, &a2);
}
