unsigned int __thiscall sub_74CD60(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74cd62*/
  sub_7531E0(this, a2); /*0x74cd6a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40944.name); /*0x74cd75*/
  end = v2->end; /*0x74cd7a*/
  capacity = v2->capacity; /*0x74cd7e*/
  a2 = v4; /*0x74cd87*/
  if ( end >= capacity ) /*0x74cd8b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x74cd96*/
  NiTArray_SetAt(v2, end, &a2); /*0x74cda3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Radius", *(this + 0x15)); /*0x74cdb4*/
  v8 = v2->end; /*0x74cdb9*/
  v9 = v2->capacity; /*0x74cdbd*/
  a2 = v7; /*0x74cdc6*/
  if ( v8 >= v9 ) /*0x74cdca*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x74cdd5*/
  NiTArray_SetAt(v2, v8, &a2); /*0x74cde2*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Height", *(this + 0x16)); /*0x74cdf3*/
  v11 = v2->end; /*0x74cdf8*/
  v12 = v2->capacity; /*0x74cdfc*/
  a2 = v10; /*0x74ce05*/
  if ( v11 >= v12 ) /*0x74ce09*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x74ce14*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x74ce26*/
}
