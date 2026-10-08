int __thiscall GameSettingCollection_BuildOutputArray(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  int v6; // ebx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  char *v10; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString("GameSettings"); /*0x4a7fbb*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x4a7fc0*/
  v5 = a2[5]; /*0x4a7fc4*/
  v10 = v3; /*0x4a7fc8*/
  if ( v5 >= a2[4] ) /*0x4a7fd5*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x4a7fe0*/
  NiTArray_SetAt(v4, v5, &v10); /*0x4a7fed*/
  v6 = SettingCollectionMap_BuildOutputArray(this, (char *)v4); /*0x4a7ffa*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Total GameSettings", v6); /*0x4a8002*/
  end = v4->end; /*0x4a8007*/
  a2 = v7; /*0x4a800b*/
  if ( end >= v4->capacity ) /*0x4a8018*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x4a8023*/
  NiTArray_SetAt(v4, end, &a2); /*0x4a8030*/
  return v6; /*0x4a8035*/
}
