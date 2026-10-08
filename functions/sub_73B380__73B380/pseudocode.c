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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73b382*/
  sub_721730(this, a2); /*0x73b38a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40168.name); /*0x73b395*/
  end = v2->end; /*0x73b39a*/
  capacity = v2->capacity; /*0x73b39e*/
  a2 = v4; /*0x73b3a7*/
  if ( end >= capacity ) /*0x73b3ab*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73b3b6*/
  NiTArray_SetAt(v2, end, &a2); /*0x73b3c3*/
  v7 = (unsigned __int16 *)FormHeapAlloc(0x37u); /*0x73b3ca*/
  v11 = *(this + 6); /*0x73b3d5*/
  a2 = v7; /*0x73b3d9*/
  HIDWORD(v10) = "Vector = (%5.3f,%5.3f,%5.3f,%5.3f)"; /*0x73b3f1*/
  LODWORD(v10) = 0x37; /*0x73b3f6*/
  sub_6C5D40( /*0x73b3f9*/
    (va_list)this,
    (char *)v7,
    v10,
    (char *)COERCE_UNSIGNED_INT64(*(this + 3)),
    (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64(*(this + 3))),
    *(this + 4),
    *(this + 5),
    v11);
  v8 = v2->end; /*0x73b3fe*/
  if ( v8 >= v2->capacity ) /*0x73b40b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73b416*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x73b428*/
}
