unsigned int __thiscall sub_8A7E30(__m128 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  float v13[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8a7e35*/
  sub_88BF40(this, a2); /*0x8a7e3d*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7DA4.name); /*0x8a7e48*/
  end = v2->end; /*0x8a7e4d*/
  capacity = v2->capacity; /*0x8a7e51*/
  a2 = v4; /*0x8a7e5a*/
  if ( end >= capacity ) /*0x8a7e5e*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8a7e69*/
  NiTArray_SetAt(v2, end, &a2); /*0x8a7e76*/
  HavokVector_ToWorldVector(v13, this + 8); /*0x8a7e87*/
  v7 = (unsigned __int16 *)sub_707280(v13, "WorldTotalSize"); /*0x8a7e98*/
  v8 = v2->end; /*0x8a7e9d*/
  a2 = v7; /*0x8a7ea1*/
  if ( v8 >= v2->capacity ) /*0x8a7eab*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x8a7eb6*/
  NiTArray_SetAt(v2, v8, &a2); /*0x8a7ec3*/
  HavokVector_ToWorldVector(v13, this + 9); /*0x8a7ed4*/
  v9 = (unsigned __int16 *)sub_707280(v13, "BorderSize"); /*0x8a7ee5*/
  v10 = v2->end; /*0x8a7eea*/
  v11 = v2->capacity; /*0x8a7eee*/
  a2 = v9; /*0x8a7ef4*/
  if ( v10 >= v11 ) /*0x8a7ef8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8a7f03*/
  return NiTArray_SetAt(v2, v10, &a2); /*0x8a7f15*/
}
