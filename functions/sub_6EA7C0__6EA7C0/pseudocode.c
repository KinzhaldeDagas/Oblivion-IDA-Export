unsigned int __userpurge sub_6EA7C0@<eax>(float *this@<ecx>, unsigned int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_6CDDB0(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3E910);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)sub_7153C0(this + 0xC, (int)"m_kQuaternionValue");
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  return NiTArray_SetAt(v3, v9, &a3);
}
