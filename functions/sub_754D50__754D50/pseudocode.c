unsigned int __thiscall sub_754D50(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v7; // eax
  const char *v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_75F110(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40ED0);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = *((_DWORD *)this + 0xB);
  if ( v7 )
    v8 = *(const char **)(v7 + 8);
  else
    v8 = "None";
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Collider Object", v8);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Radius", *(this + 0xC));
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  return NiTArray_SetAt(v2, v13, &a2);
}
