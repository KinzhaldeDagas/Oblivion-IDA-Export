unsigned int __thiscall sub_749D70(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x749d72*/
  sub_7421B0(this, a2); /*0x749d7a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40864.name); /*0x749d85*/
  end = v3->end; /*0x749d8a*/
  capacity = v3->capacity; /*0x749d8e*/
  a2 = v5; /*0x749d97*/
  if ( end >= capacity ) /*0x749d9b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x749da6*/
  NiTArray_SetAt(v3, end, &a2); /*0x749db3*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("World Space", *((_BYTE *)this + 0xC0)); /*0x749dc5*/
  v9 = v3->end; /*0x749dca*/
  v10 = v3->capacity; /*0x749dce*/
  a2 = v8; /*0x749dd7*/
  if ( v9 >= v10 ) /*0x749ddb*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x749de6*/
  NiTArray_SetAt(v3, v9, &a2); /*0x749df3*/
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("NumMods", *((_DWORD *)this + 0x34)); /*0x749e04*/
  v12 = v3->end; /*0x749e09*/
  v13 = v3->capacity; /*0x749e0d*/
  a2 = v11; /*0x749e16*/
  if ( v12 >= v13 ) /*0x749e1a*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x749e25*/
  NiTArray_SetAt(v3, v12, &a2); /*0x749e32*/
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort( /*0x749e47*/
                              "NumParticles",
                              *(_WORD *)(*((_DWORD *)this + 0x2D) + 0x48));
  v15 = v3->end; /*0x749e4c*/
  a2 = v14; /*0x749e50*/
  if ( v15 >= v3->capacity ) /*0x749e5d*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x749e68*/
  NiTArray_SetAt(v3, v15, &a2); /*0x749e75*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort( /*0x749e8a*/
                              "MaxParticles",
                              *(_WORD *)(*((_DWORD *)this + 0x2D) + 8));
  v17 = v3->end; /*0x749e8f*/
  v18 = v3->capacity; /*0x749e93*/
  a2 = v16; /*0x749e9c*/
  if ( v17 >= v18 ) /*0x749ea0*/
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize); /*0x749eab*/
  return NiTArray_SetAt(v3, v17, &a2); /*0x749ebd*/
}
