unsigned int __thiscall sub_88BF40(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edx
  unsigned __int16 *v20; // eax
  unsigned int v21; // edi
  unsigned __int16 *v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // ecx
  unsigned __int16 *v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // edx
  unsigned __int16 *v28; // eax
  unsigned int v29; // edi
  unsigned __int16 *v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_89D820(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA7938);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  LOBYTE(a2) = *((_BYTE *)this + 0x19);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Enabled", (char)a2);
  v8 = v2->end;
  a2 = v7;
  if ( v8 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  LOBYTE(a2) = *(this + 5) != 0;
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Vis Debug", (char)a2);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Worlds", dword_BA7900);
  v13 = v2->end;
  a2 = v12;
  if ( v13 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Actions", dword_BA7D00);
  v15 = v2->end;
  v16 = v2->capacity;
  a2 = v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
  NiTArray_SetAt(v2, v15, &a2);
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Contraints", dword_BA7D4C);
  v18 = v2->end;
  v19 = v2->capacity;
  a2 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
  NiTArray_SetAt(v2, v18, &a2);
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Entities", dword_BA7F8C);
  v21 = v2->end;
  a2 = v20;
  if ( v21 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize);
  NiTArray_SetAt(v2, v21, &a2);
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("RigidBodies", dword_BA7D80);
  v23 = v2->end;
  v24 = v2->capacity;
  a2 = v22;
  if ( v23 >= v24 )
    NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize);
  NiTArray_SetAt(v2, v23, &a2);
  v25 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Shapes", dword_BA7D70);
  v26 = v2->end;
  v27 = v2->capacity;
  a2 = v25;
  if ( v26 >= v27 )
    NiTArray_SetSize((unsigned __int16 *)v2, v26 + v2->growSize);
  NiTArray_SetAt(v2, v26, &a2);
  v28 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Phantoms", dword_BA7F5C);
  v29 = v2->end;
  a2 = v28;
  if ( v29 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize);
  NiTArray_SetAt(v2, v29, &a2);
  v30 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("MoppBVTreeShapes", dword_BA80F4);
  v31 = v2->end;
  v32 = v2->capacity;
  a2 = v30;
  if ( v31 >= v32 )
    NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize);
  return NiTArray_SetAt(v2, v31, &a2);
}
