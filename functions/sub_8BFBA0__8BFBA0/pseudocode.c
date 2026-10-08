void __thiscall sub_8BFBA0(int *this, float a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  int v4; // eax
  double v5; // st7
  char *v6; // eax
  unsigned int end; // edi
  int v8; // eax
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int capacity; // edx
  int v12; // eax
  char *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx
  int v16; // ebp
  int v17; // ebp
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2); /*0x8bfba2*/
  sub_8A0D20(this, (unsigned __int16 *)LODWORD(a2)); /*0x8bfbaa*/
  v4 = *(this + 1); /*0x8bfbaf*/
  if ( v4 ) /*0x8bfbb4*/
    v5 = *(float *)(v4 + 0x14); /*0x8bfbb6*/
  else
    v5 = 0.0; /*0x8bfbbb*/
  a2 = v5; /*0x8bfbbd*/
  v6 = TESOutput_PrintLabeledFloat("Threshold", a2); /*0x8bfbce*/
  end = v2->end; /*0x8bfbd3*/
  a2 = *(float *)&v6; /*0x8bfbd7*/
  if ( end >= v2->capacity ) /*0x8bfbe4*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8bfbef*/
  NiTArray_SetAt(v2, end, &a2); /*0x8bfbfc*/
  v8 = *(this + 1); /*0x8bfc01*/
  if ( v8 ) /*0x8bfc06*/
    LOBYTE(a2) = *(_BYTE *)(v8 + 0x19); /*0x8bfc0b*/
  else
    LOBYTE(a2) = 0; /*0x8bfc11*/
  v9 = TESOutput_PrintLabeledBool("RemIfBroke", LOBYTE(a2) != 0); /*0x8bfc26*/
  v10 = v2->end; /*0x8bfc2b*/
  capacity = v2->capacity; /*0x8bfc2f*/
  a2 = *(float *)&v9; /*0x8bfc38*/
  if ( v10 >= capacity ) /*0x8bfc3c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8bfc47*/
  NiTArray_SetAt(v2, v10, &a2); /*0x8bfc54*/
  v12 = *(this + 1); /*0x8bfc59*/
  if ( v12 ) /*0x8bfc5e*/
    LOBYTE(a2) = *(_BYTE *)(v12 + 0x18); /*0x8bfc63*/
  else
    LOBYTE(a2) = 0; /*0x8bfc69*/
  v13 = TESOutput_PrintLabeledBool("Broken", LOBYTE(a2) != 0); /*0x8bfc7e*/
  v14 = v2->end; /*0x8bfc83*/
  v15 = v2->capacity; /*0x8bfc87*/
  a2 = *(float *)&v13; /*0x8bfc90*/
  if ( v14 >= v15 ) /*0x8bfc94*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x8bfc9f*/
  NiTArray_SetAt(v2, v14, &a2); /*0x8bfcac*/
  v16 = *(this + 1); /*0x8bfcb1*/
  if ( v16 ) /*0x8bfcb6*/
    v17 = *(_DWORD *)(v16 + 0xC); /*0x8bfcb8*/
  else
    v17 = 0; /*0x8bfcbd*/
  if ( v17 ) /*0x8bfcc1*/
  {
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0xC))(v17); /*0x8bfccb*/
    v19 = sub_8E7E60(v18); /*0x8bfcce*/
    v20 = v19; /*0x8bfcd3*/
    if ( v19 ) /*0x8bfcda*/
    {
      sub_8A0200(v19, v17); /*0x8bfcdf*/
      (*(void (__thiscall **)(_DWORD *, NiTArray_NiTexturingPropertyMap *))(*v20 + 0x14))(v20, v2); /*0x8bfcec*/
      *v20 = &hkConstraintCinfo::`vftable'; /*0x8bfcf2*/
      sub_8A0200(v20, 0); /*0x8bfcf8*/
      FormHeapFree((unsigned int)v20); /*0x8bfcfe*/
    }
  }
}
