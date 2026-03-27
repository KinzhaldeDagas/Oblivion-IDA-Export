// positive sp value has been detected, the output may be wrong!
unsigned int __userpurge def_726FA2@<eax>(int a1@<ebx>, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v2; // eax
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned __int16 *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned __int16 *v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edx
  unsigned __int16 *v23; // eax
  unsigned int v24; // edi
  char *v25; // [esp-4h] [ebp-4h] BYREF

  v2 = TESOutput_PrintLabeledString("        m_uiType", "UNKNOWN!!!");
  v3 = a2;
  end = a2->end;
  capacity = a2->capacity;
  v25 = v2;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  NiTArray_SetAt(v3, end, &v25);
  v6 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("        m_uiUnitSize", *(_DWORD *)(a1 + 8));
  v7 = v3->end;
  v8 = v3->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v6;
  if ( v7 >= v8 )
    NiTArray_SetSize((unsigned __int16 *)v3, v7 + v3->growSize);
  NiTArray_SetAt(v3, v7, &a2);
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("        m_uiTotalSize", *(_DWORD *)(a1 + 0xC));
  v10 = v3->end;
  a2 = (NiTArray_NiTexturingPropertyMap *)v9;
  if ( v10 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v10 + v3->growSize);
  NiTArray_SetAt(v3, v10, &a2);
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("        m_uiStride", *(_DWORD *)(a1 + 0x10));
  v12 = v3->end;
  v13 = v3->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a2);
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("        m_uiBlockIndex", *(_DWORD *)(a1 + 0x14));
  v15 = v3->end;
  v16 = v3->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a2);
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("        m_uiBlockOffset", *(_DWORD *)(a1 + 0x18));
  v18 = v3->end;
  a2 = (NiTArray_NiTexturingPropertyMap *)v17;
  if ( v18 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize);
  NiTArray_SetAt(v3, v18, &a2);
  LOBYTE(a2) = *(_BYTE *)a1 & 1;
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledBool("        Keep", (char)a2);
  v20 = v3->end;
  v21 = v3->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v19;
  if ( v20 >= v21 )
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize);
  NiTArray_SetAt(v3, v20, &a2);
  if ( (*(_BYTE *)a1 & 6) == 2 )
  {
    v23 = (unsigned __int16 *)TESOutput_PrintLabeledString("        Consistency", "MUTABLE");
  }
  else
  {
    if ( (*(_BYTE *)a1 & 6) == 4 )
    {
      a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString("        Consistency", "VOLATILE");
      return NiTArray_Add((unsigned __int16 *)v3, &a2);
    }
    v23 = (unsigned __int16 *)TESOutput_PrintLabeledString("        Consistency", "STATIC");
  }
  v24 = v3->end;
  a2 = (NiTArray_NiTexturingPropertyMap *)v23;
  if ( v24 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize);
  return NiTArray_SetAt(v3, v24, &a2);
}
