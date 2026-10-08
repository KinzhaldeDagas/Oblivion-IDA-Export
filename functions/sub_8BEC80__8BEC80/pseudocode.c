unsigned int __thiscall sub_8BEC80(_DWORD *this, float a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // eax
  double v8; // st7
  char *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  int v12; // edi
  double v13; // st7
  char *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2); /*0x8bec82*/
  sub_89E210(this, (unsigned __int16 *)LODWORD(a2)); /*0x8bec8a*/
  v4 = TESOutput_PrintString((char *)stru_BA8080.name); /*0x8bec95*/
  end = v2->end; /*0x8bec9a*/
  capacity = v2->capacity; /*0x8bec9e*/
  a2 = *(float *)&v4; /*0x8beca7*/
  if ( end >= capacity ) /*0x8becab*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8becb6*/
  NiTArray_SetAt(v2, end, &a2); /*0x8becc3*/
  if ( this && (v7 = *(this + 2)) != 0 ) /*0x8becd1*/
    v8 = *(float *)(v7 + 0x30); /*0x8becd3*/
  else
    v8 = 0.0; /*0x8becd8*/
  a2 = v8; /*0x8becda*/
  v9 = TESOutput_PrintLabeledFloat("SpinRate", a2); /*0x8beceb*/
  v10 = v2->end; /*0x8becf0*/
  v11 = v2->capacity; /*0x8becf4*/
  a2 = *(float *)&v9; /*0x8becfd*/
  if ( v10 >= v11 ) /*0x8bed01*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8bed0c*/
  NiTArray_SetAt(v2, v10, &a2); /*0x8bed19*/
  if ( this && (v12 = *(this + 2)) != 0 ) /*0x8bed27*/
    v13 = *(float *)(v12 + 0x34); /*0x8bed29*/
  else
    v13 = 0.0; /*0x8bed2e*/
  a2 = v13; /*0x8bed30*/
  v14 = TESOutput_PrintLabeledFloat("Gain", a2); /*0x8bed41*/
  v15 = v2->end; /*0x8bed46*/
  v16 = v2->capacity; /*0x8bed4a*/
  a2 = *(float *)&v14; /*0x8bed53*/
  if ( v15 >= v16 ) /*0x8bed57*/
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x8bed62*/
  return NiTArray_SetAt(v2, v15, &a2); /*0x8bed74*/
}
