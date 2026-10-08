unsigned int __thiscall sub_8AEAC0(_DWORD *this, float a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // edi
  double v8; // st7
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2); /*0x8aeac2*/
  sub_8AE9A0(this, (unsigned __int16 *)LODWORD(a2)); /*0x8aeaca*/
  v4 = TESOutput_PrintString((char *)stru_BA7F54.name); /*0x8aead5*/
  end = v2->end; /*0x8aeada*/
  capacity = v2->capacity; /*0x8aeade*/
  a2 = *(float *)&v4; /*0x8aeae7*/
  if ( end >= capacity ) /*0x8aeaeb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8aeaf6*/
  NiTArray_SetAt(v2, end, &a2); /*0x8aeb03*/
  if ( this && (v7 = *(this + 2)) != 0 ) /*0x8aeb11*/
    v8 = *(float *)(v7 + 0xC); /*0x8aeb13*/
  else
    v8 = flt_B2EFC4; /*0x8aeb18*/
  a2 = v8; /*0x8aeb1e*/
  a2 = a2 * dbl_A372E0; /*0x8aeb2d*/
  v9 = TESOutput_PrintLabeledFloat("Radius", a2); /*0x8aeb3d*/
  v10 = v2->end; /*0x8aeb42*/
  v11 = v2->capacity; /*0x8aeb46*/
  a2 = *(float *)&v9; /*0x8aeb4f*/
  if ( v10 >= v11 ) /*0x8aeb53*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8aeb5e*/
  return NiTArray_SetAt(v2, v10, &a2); /*0x8aeb70*/
}
