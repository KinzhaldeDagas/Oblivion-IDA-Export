unsigned int __thiscall sub_6FA9A0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6fa9a2*/
  sub_730AD0(this, a2); /*0x6fa9aa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F484.name); /*0x6fa9b5*/
  end = v2->end; /*0x6fa9ba*/
  capacity = v2->capacity; /*0x6fa9be*/
  a2 = v4; /*0x6fa9c7*/
  if ( end >= capacity ) /*0x6fa9cb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6fa9d6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6fa9e3*/
  LOBYTE(a2) = *(_BYTE *)(this + 3) & 1; /*0x6fa9ee*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("bAnimated", (char)a2); /*0x6fa9fc*/
  v8 = v2->end; /*0x6faa01*/
  a2 = v7; /*0x6faa05*/
  if ( v8 >= v2->capacity ) /*0x6faa12*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6faa1d*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6faa2a*/
  LOBYTE(a2) = (*(this + 3) & 2) != 0; /*0x6faa36*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledBool("bHavok", (char)a2); /*0x6faa44*/
  v10 = v2->end; /*0x6faa49*/
  v11 = v2->capacity; /*0x6faa4d*/
  a2 = v9; /*0x6faa56*/
  if ( v10 >= v11 ) /*0x6faa5a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x6faa65*/
  NiTArray_SetAt(v2, v10, &a2); /*0x6faa72*/
  LOBYTE(a2) = (*(this + 3) & 4) != 0; /*0x6faa80*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledBool("bRagDoll", (char)a2); /*0x6faa8e*/
  v13 = v2->end; /*0x6faa93*/
  v14 = v2->capacity; /*0x6faa97*/
  a2 = v12; /*0x6faaa0*/
  if ( v13 >= v14 ) /*0x6faaa4*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6faaaf*/
  NiTArray_SetAt(v2, v13, &a2); /*0x6faabc*/
  LOBYTE(a2) = (*(this + 3) & 8) != 0; /*0x6faaca*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledBool("bComplex", (char)a2); /*0x6faad8*/
  v16 = v2->end; /*0x6faadd*/
  a2 = v15; /*0x6faae1*/
  if ( v16 >= v2->capacity ) /*0x6faaee*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x6faaf9*/
  NiTArray_SetAt(v2, v16, &a2); /*0x6fab06*/
  LOBYTE(a2) = (*(this + 3) & 0x10) != 0; /*0x6fab13*/
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledBool("bFlame", (char)a2); /*0x6fab21*/
  v18 = v2->end; /*0x6fab26*/
  v19 = v2->capacity; /*0x6fab2a*/
  a2 = v17; /*0x6fab33*/
  if ( v18 >= v19 ) /*0x6fab37*/
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x6fab42*/
  return NiTArray_SetAt(v2, v18, &a2); /*0x6fab54*/
}
