unsigned int __userpurge sub_723620@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int result; // eax
  int v12; // ecx
  const char **v13; // eax
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_7086B0(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B3FD5C);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("GeomData", *((_DWORD *)this + 0x2D));
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  result = NiTArray_SetAt(v3, v9, &a3);
  v12 = *((_DWORD *)this + 0x2F);
  if ( v12 )
  {
    v13 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
    v14 = (unsigned __int16 *)TESOutput_PrintLabeledString("shader", *v13);
    v15 = v3->end;
    v16 = v3->capacity;
    a3 = v14;
    if ( v15 >= v16 )
      NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
    result = NiTArray_SetAt(v3, v15, &a3);
  }
  v17 = *((_DWORD *)this + 0x2E);
  if ( v17 )
  {
    result = *(_DWORD *)(v17 + 0xC);
    if ( result )
    {
      v18 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("skin partitions", *(_DWORD *)(result + 8));
      v19 = v3->end;
      v20 = v3->capacity;
      a3 = v18;
      if ( v19 >= v20 )
        NiTArray_SetSize((unsigned __int16 *)v3, v19 + v3->growSize);
      return NiTArray_SetAt(v3, v19, &a3);
    }
  }
  return result;
}
