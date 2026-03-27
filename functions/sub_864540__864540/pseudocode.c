unsigned int __thiscall sub_864540(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned __int16 *v6; // eax
  unsigned int v7; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_719C60(this, a2);
  v4 = (unsigned __int16 *)sub_72A040(this + 0x31, "pLocalBound");
  end = v2->end;
  a2 = v4;
  if ( end >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v6 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("instance count", *((_WORD *)this + 0x60));
  v7 = v2->end;
  capacity = v2->capacity;
  a2 = v6;
  if ( v7 >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v7 + v2->growSize);
  return NiTArray_SetAt(v2, v7, &a2);
}
