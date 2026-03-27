unsigned int __thiscall sub_96E320(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_711E60((int *)this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA9AC8);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)sub_96DA10("m_ePropagationMode", *((_DWORD *)this + 9));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)sub_96D930("m_eCollisionMode", *((_DWORD *)this + 0xA));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  if ( *((_DWORD *)this + 0xB) )
    (*(void (__thiscall **)(_DWORD, const char *, NiTArray_NiTexturingPropertyMap *))(**((_DWORD **)this + 0xB) + 0x2C))(
      *((_DWORD *)this + 0xB),
      "m_pkModelABV->Type",
      v2);
  v13 = (unsigned __int16 *)sub_707280(this + 3, "m_kLocalVelocity");
  v14 = v2->end;
  v15 = v2->capacity;
  a2 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  v16 = (unsigned __int16 *)sub_707280(this + 6, "m_kWorldVelocity");
  v17 = v2->end;
  v18 = v2->capacity;
  a2 = v16;
  if ( v17 >= v18 )
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
  return NiTArray_SetAt(v2, v17, &a2);
}
