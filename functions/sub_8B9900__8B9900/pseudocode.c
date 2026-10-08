unsigned int __thiscall sub_8B9900(__m128 *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  __m128 *v7; // edi
  char *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edx
  float v15[3]; // [esp+Ch] [ebp-1Ch] BYREF
  float v16[4]; // [esp+18h] [ebp-10h] BYREF

  v2 = a2; /*0x8b9905*/
  sub_8A5C10((char *)this, a2); /*0x8b990d*/
  v4 = TESOutput_PrintString((char *)stru_BA8018.name); /*0x8b9918*/
  end = v2->end; /*0x8b991d*/
  capacity = v2->capacity; /*0x8b9921*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v4; /*0x8b992a*/
  if ( end >= capacity ) /*0x8b992e*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8b9939*/
  NiTArray_SetAt(v2, end, &a2); /*0x8b9946*/
  v16[1] = *((float *)this + 8); /*0x8b994e*/
  v7 = this + 3; /*0x8b9952*/
  v16[2] = v7[0xFFFFFFFF].m128_f32[1]; /*0x8b995c*/
  v16[3] = v7[0xFFFFFFFF].m128_f32[2]; /*0x8b9965*/
  v16[0] = v7[0xFFFFFFFF].m128_f32[3]; /*0x8b996c*/
  HavokVector_ToWorldVector(v15, v7); /*0x8b9970*/
  v8 = sub_7153C0(v16, "Local Rot"); /*0x8b9981*/
  v9 = v2->end; /*0x8b9986*/
  v10 = v2->capacity; /*0x8b998a*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x8b9990*/
  if ( v9 >= v10 ) /*0x8b9994*/
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize); /*0x8b999f*/
  NiTArray_SetAt(v2, v9, &a2); /*0x8b99ac*/
  v11 = sub_707280(v15, "Local Pos"); /*0x8b99ba*/
  v12 = v2->end; /*0x8b99bf*/
  v13 = v2->capacity; /*0x8b99c3*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x8b99c9*/
  if ( v12 >= v13 ) /*0x8b99cd*/
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x8b99d8*/
  return NiTArray_SetAt(v2, v12, &a2); /*0x8b99ea*/
}
