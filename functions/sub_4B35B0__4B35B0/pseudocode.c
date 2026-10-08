unsigned int __thiscall sub_4B35B0(int *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v11; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((char *)stru_B35ACC.name); /*0x4b35bc*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x4b35c1*/
  v5 = a2[5]; /*0x4b35c5*/
  v6 = a2[4]; /*0x4b35c9*/
  v11 = v3; /*0x4b35d2*/
  if ( v5 >= v6 ) /*0x4b35d6*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x4b35e1*/
  NiTArray_SetAt(v4, v5, &v11); /*0x4b35ee*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("Attached Ref", *(this + 3)); /*0x4b35fc*/
  end = v4->end; /*0x4b3601*/
  capacity = v4->capacity; /*0x4b3605*/
  a2 = v7; /*0x4b360e*/
  if ( end >= capacity ) /*0x4b3612*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x4b361d*/
  return NiTArray_SetAt(v4, end, &a2); /*0x4b362f*/
}
