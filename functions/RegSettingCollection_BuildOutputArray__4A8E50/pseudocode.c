int __thiscall RegSettingCollection_BuildOutputArray(char *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // edi
  unsigned int v5; // esi
  char *v6; // esi
  int i; // ebx
  unsigned __int16 *v8; // eax
  unsigned int end; // esi
  char *v11; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString("RegSettings"); /*0x4a8e5b*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x4a8e60*/
  v5 = a2[5]; /*0x4a8e64*/
  v11 = v3; /*0x4a8e68*/
  if ( v5 >= a2[4] ) /*0x4a8e75*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x4a8e80*/
  NiTArray_SetAt(v4, v5, &v11); /*0x4a8e8d*/
  v6 = this + 0x10C; /*0x4a8e92*/
  for ( i = 0; v6; ++i ) /*0x4a8e9c*/
  {
    Setting_BuildOutputArray(*(char **)v6, (unsigned __int16 *)v4); /*0x4a8ea3*/
    v6 = *((char **)v6 + 1); /*0x4a8ea8*/
  }
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Total RegSettings", i); /*0x4a8eb8*/
  end = v4->end; /*0x4a8ebd*/
  a2 = v8; /*0x4a8ec1*/
  if ( end >= v4->capacity ) /*0x4a8ece*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x4a8ed9*/
  NiTArray_SetAt(v4, end, &a2); /*0x4a8ee6*/
  return i; /*0x4a8eeb*/
}
