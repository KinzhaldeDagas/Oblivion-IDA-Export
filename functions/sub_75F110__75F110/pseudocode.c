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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75f112*/
  sub_7009A0(this, a2); /*0x75f11a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41ECC.name); /*0x75f125*/
  end = v2->end; /*0x75f12a*/
  capacity = v2->capacity; /*0x75f12e*/
  a2 = v4; /*0x75f137*/
  if ( end >= capacity ) /*0x75f13b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75f146*/
  NiTArray_SetAt(v2, end, &a2); /*0x75f153*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Bounce", *((float *)this + 2)); /*0x75f164*/
  v8 = v2->end; /*0x75f169*/
  v9 = v2->capacity; /*0x75f16d*/
  a2 = v7; /*0x75f176*/
  if ( v8 >= v9 ) /*0x75f17a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x75f185*/
  NiTArray_SetAt(v2, v8, &a2); /*0x75f192*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Spawn on Collide", *((_BYTE *)this + 0xC)); /*0x75f1a1*/
  v11 = v2->end; /*0x75f1a6*/
  v12 = v2->capacity; /*0x75f1aa*/
  a2 = v10; /*0x75f1b3*/
  if ( v11 >= v12 ) /*0x75f1b7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x75f1c2*/
  NiTArray_SetAt(v2, v11, &a2); /*0x75f1cf*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Die on Collide", *((_BYTE *)this + 0xD)); /*0x75f1de*/
  v14 = v2->end; /*0x75f1e3*/
  a2 = v13; /*0x75f1e7*/
  if ( v14 >= v2->capacity ) /*0x75f1f4*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x75f1ff*/
  NiTArray_SetAt(v2, v14, &a2); /*0x75f20c*/
  v15 = *((_DWORD *)this + 4); /*0x75f211*/
  if ( v15 ) /*0x75f216*/
    v16 = *(const char **)(v15 + 8); /*0x75f218*/
  else
    v16 = "None"; /*0x75f21d*/
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledString("Spawn Modifier", v16); /*0x75f228*/
  v18 = v2->end; /*0x75f22d*/
  a2 = v17; /*0x75f231*/
  if ( v18 >= v2->capacity ) /*0x75f23e*/
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x75f249*/
  NiTArray_SetAt(v2, v18, &a2); /*0x75f256*/
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("Manager", *((_DWORD *)this + 9)); /*0x75f264*/
  v20 = v2->end; /*0x75f269*/
  v21 = v2->capacity; /*0x75f26d*/
  a2 = v19; /*0x75f276*/
  if ( v20 >= v21 ) /*0x75f27a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize); /*0x75f285*/
  result = NiTArray_SetAt(v2, v20, &a2); /*0x75f292*/
  v23 = *((_DWORD *)this + 0xA); /*0x75f297*/
  if ( v23 ) /*0x75f29c*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v23 + 0x30))(v23, v2); /*0x75f2a4*/
  return result; /*0x75f2a6*/
}
