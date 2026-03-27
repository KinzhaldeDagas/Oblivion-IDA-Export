unsigned int __thiscall sub_4A1050(float *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // ebx
  char *v9; // eax
  unsigned int v10; // ebx
  char *v11; // eax
  unsigned int v12; // edi
  double v14; // [esp+0h] [ebp-14h]
  double v15; // [esp+0h] [ebp-14h]
  int v16; // [esp+0h] [ebp-14h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_70BAE0(this, (int)a2);
  v4 = TESOutput_PrintString(*(_DWORD *)dword_B35288);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (char *)FormHeapAlloc(0x20u);
  v14 = *(this + 0x38);
  a2 = v7;
  _sprintf(v7, "fNearDistSqr = %.2f", v14);
  v8 = v2->end;
  if ( v8 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v9 = (char *)FormHeapAlloc(0x20u);
  v15 = *(this + 0x39);
  a2 = v9;
  _sprintf(v9, "fFarDistSqr = %.2f", v15);
  v10 = v2->end;
  if ( v10 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v11 = (char *)FormHeapAlloc(0x20u);
  v16 = *((unsigned __int8 *)this + 0xEC);
  a2 = v11;
  _sprintf(v11, "cMultType = %d", v16);
  v12 = v2->end;
  if ( v12 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
  return NiTArray_SetAt(v2, v12, &a2);
}
