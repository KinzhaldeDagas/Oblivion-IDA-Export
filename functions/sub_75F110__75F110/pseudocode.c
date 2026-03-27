unsigned int __thiscall sub_75F110(void *this, unsigned __int16 *a2)
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
  unsigned int v12; // edx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  const char *v16; // eax
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned int result; // eax
  int v23; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7009A0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B41ECC);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Bounce", *((float *)this + 2));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Spawn on Collide", *((_BYTE *)this + 0xC));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Die on Collide", *((_BYTE *)this + 0xD));
  v14 = v2->end;
  a2 = v13;
  if ( v14 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  v15 = *((_DWORD *)this + 4);
  if ( v15 )
    v16 = *(const char **)(v15 + 8);
  else
    v16 = "None";
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledString("Spawn Modifier", v16);
  v18 = v2->end;
  a2 = v17;
  if ( v18 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
  NiTArray_SetAt(v2, v18, &a2);
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("Manager", *((_DWORD *)this + 9));
  v20 = v2->end;
  v21 = v2->capacity;
  a2 = v19;
  if ( v20 >= v21 )
    NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize);
  result = NiTArray_SetAt(v2, v20, &a2);
  v23 = *((_DWORD *)this + 0xA);
  if ( v23 )
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v23 + 0x30))(v23, v2);
  return result;
}
