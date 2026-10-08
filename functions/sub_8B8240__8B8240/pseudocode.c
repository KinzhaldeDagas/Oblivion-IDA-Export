unsigned int __thiscall sub_8B8240(__m128 **this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  __m128 *v7; // edi
  __m128 *v8; // eax
  float *v9; // eax
  char *v10; // eax
  unsigned int v11; // edi
  float v13[3]; // [esp+Ch] [ebp-18h] BYREF
  float v14[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8b8245*/
  sub_8AEAC0(this, *(float *)&a2); /*0x8b824d*/
  v4 = TESOutput_PrintString((char *)stru_BA7FF8.name); /*0x8b8258*/
  end = v2->end; /*0x8b825d*/
  capacity = v2->capacity; /*0x8b8261*/
  a2 = v4; /*0x8b826a*/
  if ( end >= capacity ) /*0x8b826e*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8b8279*/
  NiTArray_SetAt(v2, end, &a2); /*0x8b8286*/
  if ( !this || (v7 = *(this + 2), v8 = v7 + 1, !v7) ) /*0x8b8297*/
    v8 = (__m128 *)&unk_BA7A40; /*0x8b8299*/
  v9 = HavokVector_ToWorldVector(v14, v8); /*0x8b82a4*/
  v13[0] = *v9; /*0x8b82ab*/
  v13[1] = v9[1]; /*0x8b82b2*/
  v13[2] = v9[2]; /*0x8b82c5*/
  v10 = sub_707280(v13, "Half Extent"); /*0x8b82c9*/
  v11 = v2->end; /*0x8b82ce*/
  a2 = v10; /*0x8b82d2*/
  if ( v11 >= v2->capacity ) /*0x8b82dc*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x8b82e7*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x8b82f9*/
}
