unsigned int __thiscall sub_7009A0(void *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx
  char *v14; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((char *)stru_B3F684.name); /*0x7009ac*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7009b1*/
  v5 = a2[5]; /*0x7009b5*/
  v6 = a2[4]; /*0x7009b9*/
  v14 = v3; /*0x7009c2*/
  if ( v5 >= v6 ) /*0x7009c6*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x7009d1*/
  NiTArray_SetAt(v4, v5, &v14); /*0x7009de*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("this", (int)this); /*0x7009e9*/
  end = v4->end; /*0x7009ee*/
  capacity = v4->capacity; /*0x7009f2*/
  a2 = v7; /*0x7009fb*/
  if ( end >= capacity ) /*0x7009ff*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x700a0a*/
  NiTArray_SetAt(v4, end, &a2); /*0x700a17*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiRefCount", *((_DWORD *)this + 1)); /*0x700a25*/
  v11 = v4->end; /*0x700a2a*/
  v12 = v4->capacity; /*0x700a2e*/
  a2 = v10; /*0x700a37*/
  if ( v11 >= v12 ) /*0x700a3b*/
    NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize); /*0x700a46*/
  return NiTArray_SetAt(v4, v11, &a2); /*0x700a58*/
}
