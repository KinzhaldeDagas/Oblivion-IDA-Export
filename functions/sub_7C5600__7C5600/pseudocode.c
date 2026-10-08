unsigned int __thiscall sub_7C5600(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  int v10; // eax
  const char *v11; // eax
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // edx
  unsigned __int16 *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7c5602*/
  sub_7E28E0(this, a2); /*0x7c560a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4335C.name); /*0x7c5615*/
  end = v2->end; /*0x7c561a*/
  capacity = v2->capacity; /*0x7c561e*/
  a2 = v4; /*0x7c5627*/
  if ( end >= capacity ) /*0x7c562b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7c5636*/
  NiTArray_SetAt(v2, end, &a2); /*0x7c5643*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("SOType", *((_DWORD *)this + 0x22)); /*0x7c5654*/
  v8 = v2->end; /*0x7c5659*/
  v9 = v2->capacity; /*0x7c565d*/
  a2 = v7; /*0x7c5666*/
  if ( v8 >= v9 ) /*0x7c566a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x7c5675*/
  NiTArray_SetAt(v2, v8, &a2); /*0x7c5682*/
  v10 = *((_DWORD *)this + 0x1F); /*0x7c5687*/
  if ( !v10 || (v11 = *(const char **)(v10 + 8)) == 0 ) /*0x7c5693*/
    v11 = EmptyString; /*0x7c5695*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("Blend Texture", v11); /*0x7c56a0*/
  v13 = v2->end; /*0x7c56a5*/
  v14 = v2->capacity; /*0x7c56a9*/
  a2 = v12; /*0x7c56b2*/
  if ( v13 >= v14 ) /*0x7c56b6*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x7c56c1*/
  NiTArray_SetAt(v2, v13, &a2); /*0x7c56ce*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Blend Value", *(this + 0x20)); /*0x7c56e2*/
  v16 = v2->end; /*0x7c56e7*/
  v17 = v2->capacity; /*0x7c56eb*/
  a2 = v15; /*0x7c56f4*/
  if ( v16 >= v17 ) /*0x7c56f8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x7c5703*/
  return NiTArray_SetAt(v2, v16, &a2); /*0x7c5715*/
}
