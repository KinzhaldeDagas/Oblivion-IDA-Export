unsigned int __thiscall sub_8AEAC0(_DWORD *this, float a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // edi
  double v8; // st7
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2);
  sub_8AE9A0(this, (unsigned __int16 *)LODWORD(a2));
  v4 = TESOutput_PrintString(*(char **)dword_BA7F54);
  end = v2->end;
  capacity = v2->capacity;
  a2 = *(float *)&v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( this && (v7 = *(this + 2)) != 0 )
    v8 = *(float *)(v7 + 0xC);
  else
    v8 = flt_B2EFC4;
  a2 = v8;
  a2 = a2 * dbl_A372E0;
  v9 = TESOutput_PrintLabeledFloat("Radius", a2);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = *(float *)&v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  return NiTArray_SetAt(v2, v10, &a2);
}
