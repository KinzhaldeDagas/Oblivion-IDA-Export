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

  v3 = TESOutput_PrintString(*(_DWORD *)dword_B3F684);
  v4 = (NiTArray_NiTexturingPropertyMap *)a2;
  v5 = a2[5];
  v6 = a2[4];
  v14 = v3;
  if ( v5 >= v6 )
    NiTArray_SetSize(a2, v5 + a2[7]);
  NiTArray_SetAt(v4, v5, &v14);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("this", (int)this);
  end = v4->end;
  capacity = v4->capacity;
  a2 = v7;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize);
  NiTArray_SetAt(v4, end, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"m_uiRefCount", *((_DWORD *)this + 1));
  v11 = v4->end;
  v12 = v4->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize);
  return NiTArray_SetAt(v4, v11, &a2);
}
