unsigned int __thiscall sub_6EA090(int *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  char *v13; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString(*(_DWORD *)dword_B3E8B0);
  v4 = (NiTArray_NiTexturingPropertyMap *)a2;
  v5 = a2[5];
  v6 = a2[4];
  v13 = v3;
  if ( v5 >= v6 )
    NiTArray_SetSize(a2, v5 + a2[7]);
  NiTArray_SetAt(v4, v5, &v13);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt((int)"m_iLOD", *(this + 0xF));
  end = v4->end;
  capacity = v4->capacity;
  a2 = v7;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize);
  NiTArray_SetAt(v4, end, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"m_uiNumLODs", *(this + 0x10));
  v11 = v4->end;
  a2 = v10;
  if ( v11 >= v4->capacity )
    NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize);
  return NiTArray_SetAt(v4, v11, &a2);
}
