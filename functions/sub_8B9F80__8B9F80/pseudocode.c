unsigned int __thiscall sub_8B9F80(char **this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  _DWORD *v7; // ecx
  hkVector4 *v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  char *v12; // ecx
  __m128 *v13; // eax
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  float v17[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_89D820(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA8024);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( this && (v7 = *(this + 2)) != 0 )
    v8 = (hkVector4 *)sub_8AC070(v7);
  else
    v8 = &stru_BA7A40;
  sub_43F3E0(v17, (__m128 *)v8);
  v9 = (unsigned __int16 *)sub_707280(v17, (char *)&off_A981C4);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  if ( this )
  {
    v12 = *(this + 2);
    if ( v12 )
    {
      v13 = (__m128 *)sub_8AC0A0(v12);
      sub_43F3E0(v17, v13);
    }
  }
  v14 = (unsigned __int16 *)sub_707280(v17, (char *)&off_A981C0);
  v15 = v2->end;
  a2 = v14;
  if ( v15 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
  return NiTArray_SetAt(v2, v15, &a2);
}
