unsigned int __thiscall sub_8A2430(__m128 **this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  __m128 *v7; // eax
  __m128 *v8; // ebx
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int result; // eax
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  float v17[9]; // [esp+Ch] [ebp-34h] BYREF
  float v18[4]; // [esp+30h] [ebp-10h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8a2435*/
  sub_8A2A50(this, a2); /*0x8a243d*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7D68.name); /*0x8a2448*/
  end = v2->end; /*0x8a244d*/
  capacity = v2->capacity; /*0x8a2451*/
  a2 = v4; /*0x8a245a*/
  if ( end >= capacity ) /*0x8a245e*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8a2469*/
  NiTArray_SetAt(v2, end, &a2); /*0x8a2476*/
  if ( !this || (v7 = *(this + 2), v8 = v7 + 2, !v7) ) /*0x8a2487*/
    v8 = (__m128 *)xmmword_B2F090; /*0x8a2489*/
  sub_607740((int)v17, v8); /*0x8a2494*/
  HavokVector_ToWorldVector(v18, v8 + 3); /*0x8a24a2*/
  v9 = (unsigned __int16 *)sub_707280(v18, "Trans"); /*0x8a24b3*/
  v10 = v2->end; /*0x8a24b8*/
  a2 = v9; /*0x8a24bc*/
  if ( v10 >= v2->capacity ) /*0x8a24c6*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8a24d1*/
  NiTArray_SetAt(v2, v10, &a2); /*0x8a24de*/
  v11 = (unsigned __int16 *)sub_711A50(v17, (char *)&off_A97270); /*0x8a24ec*/
  v12 = v2->end; /*0x8a24f1*/
  a2 = v11; /*0x8a24f5*/
  if ( v12 >= v2->capacity ) /*0x8a24ff*/
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x8a250a*/
  result = NiTArray_SetAt(v2, v12, &a2); /*0x8a2517*/
  if ( this && (v14 = (int)*(this + 2)) != 0 && (v15 = *(_DWORD *)(v14 + 0xC)) != 0 ) /*0x8a252c*/
    v16 = *(_DWORD *)(v15 + 8); /*0x8a252e*/
  else
    v16 = 0; /*0x8a2533*/
  if ( v16 ) /*0x8a2537*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v16 + 0x30))(v16, v2); /*0x8a253f*/
  return result; /*0x8a2541*/
}
