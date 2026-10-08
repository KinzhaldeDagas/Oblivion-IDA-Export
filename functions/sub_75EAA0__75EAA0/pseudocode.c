unsigned int __thiscall sub_75EAA0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // eax
  const char *v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned __int16 *v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75eaa2*/
  sub_752EC0(this, a2); /*0x75eaaa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41E68.name); /*0x75eab5*/
  end = v2->end; /*0x75eaba*/
  capacity = v2->capacity; /*0x75eabe*/
  a2 = v4; /*0x75eac7*/
  if ( end >= capacity ) /*0x75eacb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75ead6*/
  NiTArray_SetAt(v2, end, &a2); /*0x75eae3*/
  v7 = *((_DWORD *)this + 6); /*0x75eae8*/
  if ( v7 ) /*0x75eaed*/
    v8 = *(const char **)(v7 + 8); /*0x75eaef*/
  else
    v8 = "None"; /*0x75eaf4*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Field Object", v8); /*0x75eaff*/
  v10 = v2->end; /*0x75eb04*/
  v11 = v2->capacity; /*0x75eb08*/
  a2 = v9; /*0x75eb11*/
  if ( v10 >= v11 ) /*0x75eb15*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x75eb20*/
  NiTArray_SetAt(v2, v10, &a2); /*0x75eb2d*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Magnitude", *((float *)this + 7)); /*0x75eb3e*/
  v13 = v2->end; /*0x75eb43*/
  v14 = v2->capacity; /*0x75eb47*/
  a2 = v12; /*0x75eb50*/
  if ( v13 >= v14 ) /*0x75eb54*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x75eb5f*/
  NiTArray_SetAt(v2, v13, &a2); /*0x75eb6c*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Attenuation", *((float *)this + 8)); /*0x75eb7d*/
  v16 = v2->end; /*0x75eb82*/
  v17 = v2->capacity; /*0x75eb86*/
  a2 = v15; /*0x75eb8f*/
  if ( v16 >= v17 ) /*0x75eb93*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x75eb9e*/
  NiTArray_SetAt(v2, v16, &a2); /*0x75ebab*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Use Max Distance", *((_BYTE *)this + 0x24)); /*0x75ebba*/
  v19 = v2->end; /*0x75ebbf*/
  v20 = v2->capacity; /*0x75ebc3*/
  a2 = v18; /*0x75ebcc*/
  if ( v19 >= v20 ) /*0x75ebd0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x75ebdb*/
  NiTArray_SetAt(v2, v19, &a2); /*0x75ebe8*/
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Max Distance", *((float *)this + 0xA)); /*0x75ebf9*/
  v22 = v2->end; /*0x75ebfe*/
  v23 = v2->capacity; /*0x75ec02*/
  a2 = v21; /*0x75ec0b*/
  if ( v22 >= v23 ) /*0x75ec0f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x75ec1a*/
  return NiTArray_SetAt(v2, v22, &a2); /*0x75ec2c*/
}
