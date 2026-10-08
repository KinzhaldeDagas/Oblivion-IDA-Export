unsigned int __thiscall sub_4A1180(unsigned __int16 **this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v11; // [esp+10h] [ebp-4h] BYREF

  v3 = TESOutput_PrintString(*(char **)&MEMORY[0xB33E90][0x1404]); /*0x4a118c*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x4a1191*/
  v5 = a2[5]; /*0x4a1195*/
  v6 = a2[4]; /*0x4a1199*/
  v11 = v3; /*0x4a11a2*/
  if ( v5 >= v6 ) /*0x4a11a6*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x4a11b1*/
  NiTArray_SetAt(v4, v5, &v11); /*0x4a11be*/
  a2 = *(this + 3); /*0x4a11c6*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Alpha Value", *(float *)&a2); /*0x4a11d7*/
  end = v4->end; /*0x4a11dc*/
  capacity = v4->capacity; /*0x4a11e0*/
  a2 = v7; /*0x4a11e9*/
  if ( end >= capacity ) /*0x4a11ed*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x4a11f8*/
  return NiTArray_SetAt(v4, end, &a2); /*0x4a120a*/
}
