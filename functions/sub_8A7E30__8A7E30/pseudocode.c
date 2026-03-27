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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_88BF40(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA7DA4);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  sub_43F3E0(v13, this + 8);
  v7 = (unsigned __int16 *)sub_707280(v13, "WorldTotalSize");
  v8 = v2->end;
  a2 = v7;
  if ( v8 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  sub_43F3E0(v13, this + 9);
  v9 = (unsigned __int16 *)sub_707280(v13, "BorderSize");
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  return NiTArray_SetAt(v2, v10, &a2);
}
