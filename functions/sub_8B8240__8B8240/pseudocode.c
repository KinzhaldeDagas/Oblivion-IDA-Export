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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_8AEAC0(this, *(float *)&a2);
  v4 = TESOutput_PrintString(*(char **)dword_BA7FF8);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( !this || (v7 = *(this + 2), v8 = v7 + 1, !v7) )
    v8 = (__m128 *)&stru_BA7A40;
  v9 = sub_43F3E0(v14, v8);
  v13[0] = *v9;
  v13[1] = v9[1];
  v13[2] = v9[2];
  v10 = sub_707280(v13, "Half Extent");
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  return NiTArray_SetAt(v2, v11, &a2);
}
