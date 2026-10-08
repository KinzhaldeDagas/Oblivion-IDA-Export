// Hair viewer strings call the base PP-lighting exporter, so native Refract/RefractF power/period state is visible on Hair before Hair-specific fields are appended.
unsigned int __thiscall HairShaderProperty_GetViewerStrings(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char *v10; // eax
  unsigned int v11; // ebx
  char *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edx
  char *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ecx

  v2 = a2; /*0x882fc2*/
  BSShaderPPLightingProperty_GetViewerStrings(this, a2); /*0x882fca*/
  v4 = TESOutput_PrintString((char *)stru_B478A0.name); /*0x882fd5*/
  end = v2->end; /*0x882fda*/
  capacity = v2->capacity; /*0x882fde*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v4; /*0x882fe7*/
  if ( end >= capacity ) /*0x882feb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x882ff6*/
  NiTArray_SetAt(v2, end, &a2); /*0x883003*/
  v7 = TESOutput_PrintLabeledPointer("height map", *((_DWORD *)this + 0x5A)); /*0x883014*/
  v8 = v2->end; /*0x883019*/
  v9 = v2->capacity; /*0x88301d*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v7; /*0x883026*/
  if ( v8 >= v9 ) /*0x88302a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x883035*/
  NiTArray_SetAt(v2, v8, &a2); /*0x883042*/
  LOBYTE(a2) = (*(_DWORD *)(this + 7) & 0x400) != 0; /*0x883051*/
  v10 = TESOutput_PrintLabeledBool("primary light is point", (char)a2); /*0x88305f*/
  v11 = v2->end; /*0x883064*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v10; /*0x883068*/
  if ( v11 >= v2->capacity ) /*0x883075*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x883080*/
  NiTArray_SetAt(v2, v11, &a2); /*0x88308d*/
  LOBYTE(a2) = (*(_DWORD *)(this + 7) & 0x800) != 0; /*0x88309c*/
  v12 = TESOutput_PrintLabeledBool("second light", (char)a2); /*0x8830aa*/
  v13 = v2->end; /*0x8830af*/
  v14 = v2->capacity; /*0x8830b3*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v12; /*0x8830bc*/
  if ( v13 >= v14 ) /*0x8830c0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x8830cb*/
  NiTArray_SetAt(v2, v13, &a2); /*0x8830d8*/
  LOBYTE(a2) = (*(_DWORD *)(this + 7) & 0x1000) != 0; /*0x8830e7*/
  v15 = TESOutput_PrintLabeledBool("third light", (char)a2); /*0x8830f5*/
  v16 = v2->end; /*0x8830fa*/
  v17 = v2->capacity; /*0x8830fe*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v15; /*0x883107*/
  if ( v16 >= v17 ) /*0x88310b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x883116*/
  return NiTArray_SetAt(v2, v16, &a2); /*0x883128*/
}
