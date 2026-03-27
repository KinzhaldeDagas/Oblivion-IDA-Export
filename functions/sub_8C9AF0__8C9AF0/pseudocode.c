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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_8AEAC0(this, *(float *)&a2);
  v4 = TESOutput_PrintString(*(char **)dword_BA815C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( !this || (v7 = *(this + 2), v8 = v7 + 2, !v7) )
    v8 = (__m128 *)xmmword_B2F090;
  sub_607740((int)v17, v8);
  sub_43F3E0(v18, v8 + 3);
  v9 = sub_707280(v18, "Trans");
  v10 = v2->end;
  a2 = v9;
  if ( v10 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v11 = sub_711A50(v17, (char *)&off_A97270);
  v12 = v2->end;
  a2 = v11;
  if ( v12 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
  result = NiTArray_SetAt(v2, v12, &a2);
  if ( this && (v14 = (int)*(this + 2)) != 0 && (v15 = *(_DWORD *)(v14 + 0x10)) != 0 )
    v16 = *(_DWORD *)(v15 + 8);
  else
    v16 = 0;
  if ( v16 )
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v16 + 0x30))(v16, v2);
  return result;
}
