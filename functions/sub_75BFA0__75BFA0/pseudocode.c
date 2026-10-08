unsigned int __thiscall sub_75BFA0(char *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  int v10; // ebx
  const char *v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75bfa2*/
  sub_752EC0(this, a2); /*0x75bfaa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41A58.name); /*0x75bfb5*/
  end = v2->end; /*0x75bfba*/
  capacity = v2->capacity; /*0x75bfbe*/
  a2 = v4; /*0x75bfc7*/
  if ( end >= capacity ) /*0x75bfcb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75bfd6*/
  NiTArray_SetAt(v2, end, &a2); /*0x75bfe3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Spawn on Death", *(this + 0x18)); /*0x75bff2*/
  v8 = v2->end; /*0x75bff7*/
  v9 = v2->capacity; /*0x75bffb*/
  a2 = v7; /*0x75c004*/
  if ( v8 >= v9 ) /*0x75c008*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x75c013*/
  NiTArray_SetAt(v2, v8, &a2); /*0x75c020*/
  v10 = *((_DWORD *)this + 7); /*0x75c025*/
  if ( v10 ) /*0x75c02a*/
    v11 = *(const char **)(v10 + 8); /*0x75c02c*/
  else
    v11 = "None"; /*0x75c031*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("Spawn Modifier", v11); /*0x75c03c*/
  v13 = v2->end; /*0x75c041*/
  v14 = v2->capacity; /*0x75c045*/
  a2 = v12; /*0x75c04e*/
  if ( v13 >= v14 ) /*0x75c052*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x75c05d*/
  return NiTArray_SetAt(v2, v13, &a2); /*0x75c06f*/
}
