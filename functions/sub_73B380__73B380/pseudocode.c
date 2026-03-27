unsigned int __thiscall sub_73B380(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  size_t v10; // [esp-8h] [ebp-34h]
  double v11; // [esp+18h] [ebp-14h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_721730(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40168);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)FormHeapAlloc(0x37u);
  v11 = *(this + 6);
  a2 = v7;
  HIDWORD(v10) = "Vector = (%5.3f,%5.3f,%5.3f,%5.3f)";
  LODWORD(v10) = 0x37;
  sub_6C5D40(
    (va_list)this,
    (char *)v7,
    v10,
    (char *)COERCE_UNSIGNED_INT64(*(this + 3)),
    (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64(*(this + 3))),
    *(this + 4),
    *(this + 5),
    v11);
  v8 = v2->end;
  if ( v8 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  return NiTArray_SetAt(v2, v8, &a2);
}
