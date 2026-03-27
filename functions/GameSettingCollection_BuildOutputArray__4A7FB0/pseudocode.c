int __thiscall GameSettingCollection_BuildOutputArray(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  int v6; // ebx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  char *v10; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((int)"GameSettings");
  v4 = (NiTArray_NiTexturingPropertyMap *)a2;
  v5 = a2[5];
  v10 = v3;
  if ( v5 >= a2[4] )
    NiTArray_SetSize(a2, v5 + a2[7]);
  NiTArray_SetAt(v4, v5, &v10);
  v6 = SettingCollectionMap_BuildOutputArray(this, (char *)v4);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"Total GameSettings", v6);
  end = v4->end;
  a2 = v7;
  if ( end >= v4->capacity )
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize);
  NiTArray_SetAt(v4, end, &a2);
  return v6;
}
