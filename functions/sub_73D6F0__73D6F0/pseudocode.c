unsigned int __userpurge sub_73D6F0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_700B10(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40198);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  LOBYTE(a3) = *(_BYTE *)(this + 6) & 1;
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bSpec", (char)a3);
  v9 = v3->end;
  a3 = v8;
  if ( v9 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  return NiTArray_SetAt(v3, v9, &a3);
}
