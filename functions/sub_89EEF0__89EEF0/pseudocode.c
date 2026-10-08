unsigned int __thiscall sub_89EEF0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  __int16 v7; // ax
  char v8; // al
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x89eef2*/
  sub_898210(this, a2); /*0x89eefa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)MEMORY[0xBA7D24].name); /*0x89ef05*/
  end = v2->end; /*0x89ef0a*/
  capacity = v2->capacity; /*0x89ef0e*/
  a2 = v4; /*0x89ef17*/
  if ( end >= capacity ) /*0x89ef1b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x89ef26*/
  NiTArray_SetAt(v2, end, &a2); /*0x89ef33*/
  v7 = *((_WORD *)this + 6); /*0x89ef38*/
  v8 = (v7 & 0x20) != 0 && (v7 & 0x40) == 0; /*0x89ef4e*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledBool("bUseVel", v8); /*0x89ef56*/
  v10 = v2->end; /*0x89ef5b*/
  v11 = v2->capacity; /*0x89ef5f*/
  a2 = v9; /*0x89ef68*/
  if ( v10 >= v11 ) /*0x89ef6c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x89ef77*/
  return NiTArray_SetAt(v2, v10, &a2); /*0x89ef89*/
}
