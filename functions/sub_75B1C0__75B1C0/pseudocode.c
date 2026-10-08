unsigned int __thiscall sub_75B1C0(__int16 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75b1c2*/
  sub_752EC0(this, a2); /*0x75b1ca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B419AC.name); /*0x75b1d5*/
  end = v2->end; /*0x75b1da*/
  capacity = v2->capacity; /*0x75b1de*/
  a2 = v4; /*0x75b1e7*/
  if ( end >= capacity ) /*0x75b1eb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75b1f6*/
  NiTArray_SetAt(v2, end, &a2); /*0x75b203*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedShort("Update Skip", *(this + 0xC)); /*0x75b212*/
  v8 = v2->end; /*0x75b217*/
  v9 = v2->capacity; /*0x75b21b*/
  a2 = v7; /*0x75b224*/
  if ( v8 >= v9 ) /*0x75b228*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x75b233*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x75b245*/
}
