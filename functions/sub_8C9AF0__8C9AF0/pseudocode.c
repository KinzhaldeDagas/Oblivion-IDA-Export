unsigned int __thiscall sub_8C9AF0(__m128 **this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  __m128 *v7; // eax
  __m128 *v8; // ebx
  char *v9; // eax
  unsigned int v10; // ebx
  char *v11; // eax
  unsigned int v12; // ebx
  unsigned int result; // eax
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  float v17[9]; // [esp+Ch] [ebp-34h] BYREF
  float v18[4]; // [esp+30h] [ebp-10h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8c9af5*/
  sub_8AEAC0(this, *(float *)&a2); /*0x8c9afd*/
  v4 = TESOutput_PrintString((char *)stru_BA815C.name); /*0x8c9b08*/
  end = v2->end; /*0x8c9b0d*/
  capacity = v2->capacity; /*0x8c9b11*/
  a2 = v4; /*0x8c9b1a*/
  if ( end >= capacity ) /*0x8c9b1e*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8c9b29*/
  NiTArray_SetAt(v2, end, &a2); /*0x8c9b36*/
  if ( !this || (v7 = *(this + 2), v8 = v7 + 2, !v7) ) /*0x8c9b47*/
    v8 = (__m128 *)xmmword_B2F090; /*0x8c9b49*/
  sub_607740((int)v17, v8); /*0x8c9b54*/
  HavokVector_ToWorldVector(v18, v8 + 3); /*0x8c9b62*/
  v9 = sub_707280(v18, "Trans"); /*0x8c9b73*/
  v10 = v2->end; /*0x8c9b78*/
  a2 = v9; /*0x8c9b7c*/
  if ( v10 >= v2->capacity ) /*0x8c9b86*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8c9b91*/
  NiTArray_SetAt(v2, v10, &a2); /*0x8c9b9e*/
  v11 = sub_711A50(v17, (char *)&off_A97270); /*0x8c9bac*/
  v12 = v2->end; /*0x8c9bb1*/
  a2 = v11; /*0x8c9bb5*/
  if ( v12 >= v2->capacity ) /*0x8c9bbf*/
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x8c9bca*/
  result = NiTArray_SetAt(v2, v12, &a2); /*0x8c9bd7*/
  if ( this && (v14 = (int)*(this + 2)) != 0 && (v15 = *(_DWORD *)(v14 + 0x10)) != 0 ) /*0x8c9bec*/
    v16 = *(_DWORD *)(v15 + 8); /*0x8c9bee*/
  else
    v16 = 0; /*0x8c9bf3*/
  if ( v16 ) /*0x8c9bf7*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v16 + 0x30))(v16, v2); /*0x8c9bff*/
  return result; /*0x8c9c01*/
}
