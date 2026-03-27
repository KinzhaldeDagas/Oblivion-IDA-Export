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

  v2 = a2;
  sub_8A5C10((char *)this, a2);
  v4 = TESOutput_PrintString(*(char **)dword_BA8018);
  end = v2->end;
  capacity = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v16[1] = *((float *)this + 8);
  v7 = this + 3;
  v16[2] = v7[0xFFFFFFFF].m128_f32[1];
  v16[3] = v7[0xFFFFFFFF].m128_f32[2];
  v16[0] = v7[0xFFFFFFFF].m128_f32[3];
  sub_43F3E0(v15, v7);
  v8 = sub_7153C0(v16, "Local Rot");
  v9 = v2->end;
  v10 = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize);
  NiTArray_SetAt(v2, v9, &a2);
  v11 = sub_707280(v15, "Local Pos");
  v12 = v2->end;
  v13 = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
  return NiTArray_SetAt(v2, v12, &a2);
}
