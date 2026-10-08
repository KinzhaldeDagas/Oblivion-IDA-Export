unsigned int __userpurge sub_723E50@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v8; // ecx
  unsigned int v10; // edi
  unsigned int v11; // ecx

  v3 = a3; /*0x723e52*/
  sub_7248C0(this, a2, a3); /*0x723e5a*/
  v5 = TESOutput_PrintString((char *)LODWORD(MEMORY[0xB3F9B0][0xEE])); /*0x723e65*/
  end = v3->end; /*0x723e6a*/
  capacity = v3->capacity; /*0x723e6e*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x723e77*/
  if ( end >= capacity ) /*0x723e7b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x723e86*/
  NiTArray_SetAt(v3, end, &a3); /*0x723e93*/
  v8 = *((_DWORD *)this + 0x3F); /*0x723e98*/
  if ( v8 ) /*0x723ea0*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v8 + 0x30))(v8, v3); /*0x723ea8*/
  v10 = v3->end; /*0x723eb0*/
  v11 = v3->capacity; /*0x723eb4*/
  a3 = (NiTArray_NiTexturingPropertyMap *)"NULL LOD Data"; /*0x723eba*/
  if ( v10 >= v11 ) /*0x723ec2*/
    NiTArray_SetSize((unsigned __int16 *)v3, v10 + v3->growSize); /*0x723ecd*/
  return NiTArray_SetAt(v3, v10, &a3); /*0x723eaa*/
}
