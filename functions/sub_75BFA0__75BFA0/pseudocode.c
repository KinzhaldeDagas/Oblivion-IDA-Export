unsigned int __thiscall sub_75BFA0(char *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  int v10; // ebx
  const char *v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_752EC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B41A58);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Spawn on Death", *(this + 0x18));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = *((_DWORD *)this + 7);
  if ( v10 )
    v11 = *(const char **)(v10 + 8);
  else
    v11 = "None";
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("Spawn Modifier", v11);
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  return NiTArray_SetAt(v2, v13, &a2);
}
