unsigned int __thiscall sub_564D20(float *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  char *v6; // eax
  bool v7; // zf
  unsigned int v8; // ebx
  char *v9; // eax
  unsigned int v10; // edi
  int v12; // [esp-8h] [ebp-14h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_70BAE0(this, (int)a2);
  v4 = TESOutput_PrintString((int)"BSTreeNode");
  end = v2->end;
  a2 = v4;
  if ( end >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( *((_DWORD *)this + 0x37) )
  {
    v6 = (char *)FormHeapAlloc(0x20u);
    v7 = *(_DWORD *)(*((_DWORD *)this + 0x37) + 8) == 2;
    a2 = v6;
    if ( v7 )
      _sprintf(v6, "Type = Instance");
    else
      _sprintf(v6, "Type = Base");
    v8 = v2->end;
    if ( v8 >= v2->capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
    NiTArray_SetAt(v2, v8, &a2);
    v9 = (char *)FormHeapAlloc(0x20u);
    v12 = *(_DWORD *)(*((_DWORD *)this + 0x37) + 0x48);
    a2 = v9;
    _sprintf(v9, "Seed = %d", v12);
  }
  else
  {
    a2 = (char *)FormHeapAlloc(0x20u);
    _sprintf(a2, "-No Model-");
  }
  v10 = v2->end;
  if ( v10 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  return NiTArray_SetAt(v2, v10, &a2);
}
