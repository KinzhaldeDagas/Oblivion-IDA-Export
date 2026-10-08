int __thiscall INISettingCollection_BuildOutputArray(char *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // edi
  unsigned int v5; // esi
  char *v6; // esi
  int i; // ebx
  unsigned __int16 *v8; // eax
  unsigned int end; // esi
  char *v11; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString("INISettings"); /*0x4a8b1b*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x4a8b20*/
  v5 = a2[5]; /*0x4a8b24*/
  v11 = v3; /*0x4a8b28*/
  if ( v5 >= a2[4] ) /*0x4a8b35*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x4a8b40*/
  NiTArray_SetAt(v4, v5, &v11); /*0x4a8b4d*/
  v6 = this + 0x10C; /*0x4a8b52*/
  for ( i = 0; v6; ++i ) /*0x4a8b5c*/
  {
    Setting_BuildOutputArray(*(char **)v6, (unsigned __int16 *)v4); /*0x4a8b63*/
    v6 = *((char **)v6 + 1); /*0x4a8b68*/
  }
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Total INISettings", i); /*0x4a8b78*/
  end = v4->end; /*0x4a8b7d*/
  a2 = v8; /*0x4a8b81*/
  if ( end >= v4->capacity ) /*0x4a8b8e*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x4a8b99*/
  NiTArray_SetAt(v4, end, &a2); /*0x4a8ba6*/
  return i; /*0x4a8bab*/
}
