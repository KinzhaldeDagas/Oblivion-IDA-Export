unsigned int __thiscall sub_756560(float *this, unsigned __int16 *a2)
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x756562*/
  sub_75F110(this, a2); /*0x75656a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4104C.name); /*0x756575*/
  end = v2->end; /*0x75657a*/
  capacity = v2->capacity; /*0x75657e*/
  a2 = v4; /*0x756587*/
  if ( end >= capacity ) /*0x75658b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x756596*/
  NiTArray_SetAt(v2, end, &a2); /*0x7565a3*/
  v7 = *((_DWORD *)this + 0xB); /*0x7565a8*/
  if ( v7 ) /*0x7565ad*/
    v8 = *(const char **)(v7 + 8); /*0x7565af*/
  else
    v8 = "None"; /*0x7565b4*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Collider Object", v8); /*0x7565bf*/
  v10 = v2->end; /*0x7565c4*/
  v11 = v2->capacity; /*0x7565c8*/
  a2 = v9; /*0x7565d1*/
  if ( v10 >= v11 ) /*0x7565d5*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x7565e0*/
  NiTArray_SetAt(v2, v10, &a2); /*0x7565ed*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Width", *(this + 0xC)); /*0x7565fe*/
  v13 = v2->end; /*0x756603*/
  v14 = v2->capacity; /*0x756607*/
  a2 = v12; /*0x756610*/
  if ( v13 >= v14 ) /*0x756614*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x75661f*/
  NiTArray_SetAt(v2, v13, &a2); /*0x75662c*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Height", *(this + 0xD)); /*0x75663d*/
  v16 = v2->end; /*0x756642*/
  v17 = v2->capacity; /*0x756646*/
  a2 = v15; /*0x75664f*/
  if ( v16 >= v17 ) /*0x756653*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x75665e*/
  NiTArray_SetAt(v2, v16, &a2); /*0x75666b*/
  v18 = (unsigned __int16 *)sub_707280(this + 0xE, "X-Axis"); /*0x756678*/
  v19 = v2->end; /*0x75667d*/
  v20 = v2->capacity; /*0x756681*/
  a2 = v18; /*0x756687*/
  if ( v19 >= v20 ) /*0x75668b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x756696*/
  NiTArray_SetAt(v2, v19, &a2); /*0x7566a3*/
  v21 = (unsigned __int16 *)sub_707280(this + 0x11, "Y-Axis"); /*0x7566b0*/
  v22 = v2->end; /*0x7566b5*/
  v23 = v2->capacity; /*0x7566b9*/
  a2 = v21; /*0x7566bf*/
  if ( v22 >= v23 ) /*0x7566c3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x7566ce*/
  return NiTArray_SetAt(v2, v22, &a2); /*0x7566e0*/
}
