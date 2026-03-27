unsigned int __userpurge sub_741C20@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx

  v3 = a3;
  sub_70BAE0(this, a2, a3);
  v5 = TESOutput_PrintString(*(char **)dword_B4020C);
  end = v3->end;
  capacity = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = sub_716E40(this + 0x37, "m_kModelPlane");
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = sub_716E40(this + 0x3B, "m_kWorldPlane");
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  return NiTArray_SetAt(v3, v12, &a3);
}
