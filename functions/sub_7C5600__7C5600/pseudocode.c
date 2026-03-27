unsigned int __thiscall sub_7C5600(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx
  int v11; // eax
  const char *v12; // eax
  unsigned __int16 *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7E28E0(this, a2);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B4335C);
  end = v3->end;
  capacity = v3->capacity;
  a2 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a2);
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("SOType", *((_DWORD *)this + 0x22));
  v9 = v3->end;
  v10 = v3->capacity;
  a2 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a2);
  v11 = *((_DWORD *)this + 0x1F);
  if ( !v11 || (v12 = *(const char **)(v11 + 8)) == 0 )
    v12 = EmptyString;
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledString("Blend Texture", v12);
  v14 = v3->end;
  v15 = v3->capacity;
  a2 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v3, v14 + v3->growSize);
  NiTArray_SetAt(v3, v14, &a2);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Blend Value", *(this + 0x20));
  v17 = v3->end;
  v18 = v3->capacity;
  a2 = v16;
  if ( v17 >= v18 )
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize);
  return NiTArray_SetAt(v3, v17, &a2);
}
