unsigned int __thiscall sub_758E90(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // eax
  const char *v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x758e92*/
  sub_752EC0(this, a2); /*0x758e9a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B417C4.name); /*0x758ea5*/
  end = v2->end; /*0x758eaa*/
  capacity = v2->capacity; /*0x758eae*/
  a2 = v4; /*0x758eb7*/
  if ( end >= capacity ) /*0x758ebb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x758ec6*/
  NiTArray_SetAt(v2, end, &a2); /*0x758ed3*/
  v7 = *((_DWORD *)this + 6); /*0x758ed8*/
  if ( v7 ) /*0x758edd*/
    v8 = *(const char **)(v7 + 8); /*0x758edf*/
  else
    v8 = "None"; /*0x758ee4*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Drag Object", v8); /*0x758eef*/
  v10 = v2->end; /*0x758ef4*/
  v11 = v2->capacity; /*0x758ef8*/
  a2 = v9; /*0x758f01*/
  if ( v10 >= v11 ) /*0x758f05*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x758f10*/
  NiTArray_SetAt(v2, v10, &a2); /*0x758f1d*/
  v12 = (unsigned __int16 *)sub_707280(this + 7, "Drag Axis"); /*0x758f2a*/
  v13 = v2->end; /*0x758f2f*/
  v14 = v2->capacity; /*0x758f33*/
  a2 = v12; /*0x758f39*/
  if ( v13 >= v14 ) /*0x758f3d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x758f48*/
  NiTArray_SetAt(v2, v13, &a2); /*0x758f55*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Percentage", *(this + 0xA)); /*0x758f66*/
  v16 = v2->end; /*0x758f6b*/
  v17 = v2->capacity; /*0x758f6f*/
  a2 = v15; /*0x758f78*/
  if ( v16 >= v17 ) /*0x758f7c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x758f87*/
  NiTArray_SetAt(v2, v16, &a2); /*0x758f94*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Range", *(this + 0xB)); /*0x758fa5*/
  v19 = v2->end; /*0x758faa*/
  v20 = v2->capacity; /*0x758fae*/
  a2 = v18; /*0x758fb7*/
  if ( v19 >= v20 ) /*0x758fbb*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x758fc6*/
  NiTArray_SetAt(v2, v19, &a2); /*0x758fd3*/
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("RangeFalloff", *(this + 0xC)); /*0x758fe4*/
  v22 = v2->end; /*0x758fe9*/
  v23 = v2->capacity; /*0x758fed*/
  a2 = v21; /*0x758ff6*/
  if ( v22 >= v23 ) /*0x758ffa*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x759005*/
  return NiTArray_SetAt(v2, v22, &a2); /*0x759017*/
}
