unsigned int __userpurge sub_7225F0@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v3 = a3; /*0x7225f2*/
  sub_70BAE0(this, a2, a3); /*0x7225fa*/
  v5 = TESOutput_PrintString((char *)stru_B3FD4C.name); /*0x722605*/
  end = v3->end; /*0x72260a*/
  capacity = v3->capacity; /*0x72260e*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x722617*/
  if ( end >= capacity ) /*0x72261b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x722626*/
  NiTArray_SetAt(v3, end, &a3); /*0x722633*/
  v8 = sub_721A90("m_eMode", *(_BYTE *)(this + 0x37) & 7); /*0x722648*/
  v9 = v3->end; /*0x72264d*/
  v10 = v3->capacity; /*0x722651*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x72265a*/
  if ( v9 >= v10 ) /*0x72265e*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x722669*/
  return NiTArray_SetAt(v3, v9, &a3); /*0x72267b*/
}
