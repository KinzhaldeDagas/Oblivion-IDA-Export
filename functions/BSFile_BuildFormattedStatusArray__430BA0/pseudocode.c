unsigned int __thiscall BSFile_BuildFormattedStatusArray(void *this, unsigned __int16 *a2)
{
  char *v4; // eax
  NiTArray_NiTexturingPropertyMap *v5; // esi
  unsigned int v6; // ebx
  unsigned __int16 *v7; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // ecx
  char *v22; // [esp+Ch] [ebp-4h] BYREF

  v4 = TESOutput_PrintString("BSFile"); /*0x430bab*/
  v5 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x430bb0*/
  v6 = a2[5]; /*0x430bb4*/
  v22 = v4; /*0x430bb8*/
  if ( v6 >= a2[4] ) /*0x430bc5*/
    NiTArray_SetSize(a2, v6 + a2[7]); /*0x430bd0*/
  NiTArray_SetAt(v5, v6, &v22); /*0x430bdd*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString("Name", (const char *)this + 0x3C); /*0x430beb*/
  end = v5->end; /*0x430bf0*/
  capacity = v5->capacity; /*0x430bf4*/
  a2 = v7; /*0x430bfd*/
  if ( end >= capacity ) /*0x430c01*/
    NiTArray_SetSize((unsigned __int16 *)v5, end + v5->growSize); /*0x430c0c*/
  NiTArray_SetAt(v5, end, &a2); /*0x430c19*/
  LOBYTE(a2) = *((_BYTE *)this + 0x24); /*0x430c21*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Good", (char)a2); /*0x430c2f*/
  v11 = v5->end; /*0x430c34*/
  a2 = v10; /*0x430c38*/
  if ( v11 >= v5->capacity ) /*0x430c45*/
    NiTArray_SetSize((unsigned __int16 *)v5, v11 + v5->growSize); /*0x430c50*/
  NiTArray_SetAt(v5, v11, &a2); /*0x430c5d*/
  v12 = *((_DWORD *)this + 0xC); /*0x430c62*/
  if ( v12 == 0xFFFFFFFF ) /*0x430c68*/
    v12 = *((_DWORD *)this + 0x52); /*0x430c6a*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Position", v12); /*0x430c76*/
  v14 = v5->end; /*0x430c7b*/
  a2 = v13; /*0x430c7f*/
  if ( v14 >= v5->capacity ) /*0x430c8c*/
    NiTArray_SetSize((unsigned __int16 *)v5, v14 + v5->growSize); /*0x430c97*/
  NiTArray_SetAt(v5, v14, &a2); /*0x430ca4*/
  v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x1C))(this); /*0x430cb0*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Size", v15); /*0x430cb8*/
  v17 = v5->end; /*0x430cbd*/
  a2 = v16; /*0x430cc1*/
  if ( v17 >= v5->capacity ) /*0x430cce*/
    NiTArray_SetSize((unsigned __int16 *)v5, v17 + v5->growSize); /*0x430cd9*/
  NiTArray_SetAt(v5, v17, &a2); /*0x430ce6*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("BufferSize", *((_DWORD *)this + 3)); /*0x430cf4*/
  v19 = v5->end; /*0x430cf9*/
  v20 = v5->capacity; /*0x430cfd*/
  a2 = v18; /*0x430d06*/
  if ( v19 >= v20 ) /*0x430d0a*/
    NiTArray_SetSize((unsigned __int16 *)v5, v19 + v5->growSize); /*0x430d15*/
  return NiTArray_SetAt(v5, v19, &a2); /*0x430d27*/
}
