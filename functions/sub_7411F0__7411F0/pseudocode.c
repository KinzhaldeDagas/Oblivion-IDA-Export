// Pass231: Base NiFogProperty dump confirms flags/function +0x18, depth +0x1C, color +0x20/+0x24/+0x28.
unsigned int __userpurge sub_7411F0@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x7411f2*/
  sub_700B10((int *)this, a2, a3); /*0x7411fa*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)LODWORD(MEMORY[0xB3F9B0][0x211])); /*0x741205*/
  end = v3->end; /*0x74120a*/
  capacity = v3->capacity; /*0x74120e*/
  a3 = v5; /*0x741217*/
  if ( end >= capacity ) /*0x74121b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x741226*/
  NiTArray_SetAt(v3, end, &a3); /*0x741233*/
  LOBYTE(a3) = *(_BYTE *)(this + 6) & 1; /*0x74123e*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Enable", (char)a3); /*0x74124c*/
  v9 = v3->end; /*0x741251*/
  a3 = v8; /*0x741255*/
  if ( v9 >= v3->capacity ) /*0x741262*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x74126d*/
  NiTArray_SetAt(v3, v9, &a3); /*0x74127a*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Depth", *(this + 7)); /*0x74128b*/
  v11 = v3->end; /*0x741290*/
  a3 = v10; /*0x741294*/
  if ( v11 >= v3->capacity ) /*0x7412a1*/
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize); /*0x7412ac*/
  NiTArray_SetAt(v3, v11, &a3); /*0x7412b9*/
  v12 = (unsigned __int16 *)sub_740D30("Function", (*((unsigned __int8 *)this + 0x18) >> 1) & 3); /*0x7412cd*/
  v13 = v3->end; /*0x7412d2*/
  a3 = v12; /*0x7412d6*/
  if ( v13 >= v3->capacity ) /*0x7412e3*/
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize); /*0x7412ee*/
  NiTArray_SetAt(v3, v13, &a3); /*0x7412fb*/
  v14 = (unsigned __int16 *)sub_709370(this + 8, "Color"); /*0x741308*/
  v15 = v3->end; /*0x74130d*/
  a3 = v14; /*0x741311*/
  if ( v15 >= v3->capacity ) /*0x74131b*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x741326*/
  return NiTArray_SetAt(v3, v15, &a3); /*0x741338*/
}
