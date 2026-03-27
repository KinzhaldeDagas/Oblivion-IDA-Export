unsigned int __userpurge BSFile_BuildFormattedStatusArray@<eax>(void *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  char *v4; // eax
  NiTArray_NiTexturingPropertyMap *v5; // esi
  unsigned int v6; // ebx
  unsigned __int16 *v7; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // ecx
  char *v22; // [esp+Ch] [ebp-4h] BYREF

  v4 = TESOutput_PrintString((int)"BSFile");
  v5 = (NiTArray_NiTexturingPropertyMap *)a3;
  v6 = a3[5];
  v22 = v4;
  if ( v6 >= a3[4] )
    NiTArray_SetSize(a3, v6 + a3[7]);
  NiTArray_SetAt(v5, v6, &v22);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString(a2, (int)"Name", (int)this + 0x3C);
  end = v5->end;
  capacity = v5->capacity;
  a3 = v7;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v5, end + v5->growSize);
  NiTArray_SetAt(v5, end, &a3);
  LOBYTE(a3) = *((_BYTE *)this + 0x24);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"Good", (char)a3);
  v11 = v5->end;
  a3 = v10;
  if ( v11 >= v5->capacity )
    NiTArray_SetSize((unsigned __int16 *)v5, v11 + v5->growSize);
  NiTArray_SetAt(v5, v11, &a3);
  v12 = *((_DWORD *)this + 0xC);
  if ( v12 == 0xFFFFFFFF )
    v12 = *((_DWORD *)this + 0x52);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"Position", v12);
  v14 = v5->end;
  a3 = v13;
  if ( v14 >= v5->capacity )
    NiTArray_SetSize((unsigned __int16 *)v5, v14 + v5->growSize);
  NiTArray_SetAt(v5, v14, &a3);
  v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x1C))(this);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"Size", v15);
  v17 = v5->end;
  a3 = v16;
  if ( v17 >= v5->capacity )
    NiTArray_SetSize((unsigned __int16 *)v5, v17 + v5->growSize);
  NiTArray_SetAt(v5, v17, &a3);
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"BufferSize", *((_DWORD *)this + 3));
  v19 = v5->end;
  v20 = v5->capacity;
  a3 = v18;
  if ( v19 >= v20 )
    NiTArray_SetSize((unsigned __int16 *)v5, v19 + v5->growSize);
  return NiTArray_SetAt(v5, v19, &a3);
}
