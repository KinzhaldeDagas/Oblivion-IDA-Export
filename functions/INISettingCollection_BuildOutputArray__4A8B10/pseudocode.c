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

  v3 = TESOutput_PrintString((int)"INISettings");
  v4 = (NiTArray_NiTexturingPropertyMap *)a2;
  v5 = a2[5];
  v11 = v3;
  if ( v5 >= a2[4] )
    NiTArray_SetSize(a2, v5 + a2[7]);
  NiTArray_SetAt(v4, v5, &v11);
  v6 = this + 0x10C;
  for ( i = 0; v6; ++i )
  {
    Setting_BuildOutputArray(*(char **)v6, (unsigned __int16 *)v4);
    v6 = *((char **)v6 + 1);
  }
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"Total INISettings", i);
  end = v4->end;
  a2 = v8;
  if ( end >= v4->capacity )
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize);
  NiTArray_SetAt(v4, end, &a2);
  return i;
}
