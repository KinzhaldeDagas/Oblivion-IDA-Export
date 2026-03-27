unsigned int __userpurge sub_749D70@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_7421B0(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40864);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("World Space", *((_BYTE *)this + 0xC0));
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("NumMods", *((_DWORD *)this + 0x34));
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a3);
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort(
                              "NumParticles",
                              *(_WORD *)(*((_DWORD *)this + 0x2D) + 0x48));
  v15 = v3->end;
  a3 = v14;
  if ( v15 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort(
                              "MaxParticles",
                              *(_WORD *)(*((_DWORD *)this + 0x2D) + 8));
  v17 = v3->end;
  v18 = v3->capacity;
  a3 = v16;
  if ( v17 >= v18 )
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize);
  return NiTArray_SetAt(v3, v17, &a3);
}
