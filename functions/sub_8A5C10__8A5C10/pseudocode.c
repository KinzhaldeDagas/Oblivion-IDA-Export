int __thiscall sub_8A5C10(char *this, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v2; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  NodeVoid *v5; // ebx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  char *v12; // eax
  unsigned int v13; // edi
  char *v14; // eax
  unsigned int v15; // edi
  char *v16; // eax
  unsigned int v17; // edi
  char *v18; // eax
  unsigned int v19; // edi
  char *v20; // eax
  unsigned int v21; // edi
  char *v22; // eax
  unsigned int v23; // edi
  char *v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // ecx
  char *v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ecx
  char *v30; // eax
  unsigned int v31; // edi
  char *v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // edx
  char *v35; // eax
  unsigned int v36; // edi
  unsigned int v37; // edx
  const char *v38; // eax
  char *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // edx
  int v42; // eax
  char *v43; // eax
  unsigned int v44; // edi
  unsigned int v45; // edx
  NodeVoid *v46; // ebx
  void **DataAddRef; // eax
  bool v48; // zf
  void (__thiscall ***v49)(void *, int); // edi
  void *v50; // edi
  void (__thiscall ***v51)(void *, int); // ebx
  const char **v52; // eax
  char *v53; // eax
  unsigned int v54; // edi
  char *v55; // ebx
  NodeVoid *v56; // edx
  int result; // eax
  int v58; // ecx
  void *outData; // [esp+18h] [ebp-1B0h] BYREF
  char v60; // [esp+1Fh] [ebp-1A9h]
  NodeVoid *i; // [esp+20h] [ebp-1A8h] BYREF
  int v62; // [esp+24h] [ebp-1A4h]
  float v63[3]; // [esp+28h] [ebp-1A0h] BYREF
  void *v64; // [esp+34h] [ebp-194h] BYREF
  float v65[4]; // [esp+38h] [ebp-190h] BYREF
  float v66[5]; // [esp+48h] [ebp-180h] BYREF
  int v67; // [esp+5Ch] [ebp-16Ch]
  __m128 v68; // [esp+78h] [ebp-150h] BYREF
  float v69; // [esp+88h] [ebp-140h]
  float v70; // [esp+8Ch] [ebp-13Ch]
  float v71; // [esp+90h] [ebp-138h]
  float v72; // [esp+94h] [ebp-134h]
  __m128 v73; // [esp+98h] [ebp-130h] BYREF
  __m128 v74[4]; // [esp+A8h] [ebp-120h] BYREF
  __m128 v75; // [esp+E8h] [ebp-E0h] BYREF
  float v76; // [esp+F8h] [ebp-D0h]
  float v77; // [esp+FCh] [ebp-CCh]
  float v78; // [esp+100h] [ebp-C8h]
  float v79; // [esp+104h] [ebp-C4h]
  float v80; // [esp+108h] [ebp-C0h]
  float v81; // [esp+10Ch] [ebp-BCh]
  float v82; // [esp+110h] [ebp-B8h]
  float v83; // [esp+114h] [ebp-B4h]
  char v84; // [esp+118h] [ebp-B0h]
  char v85[132]; // [esp+130h] [ebp-98h] BYREF
  unsigned int v86; // [esp+1C4h] [ebp-4h]

  outData = this; /*0x8a5c56*/
  v62 = 0; /*0x8a5c5a*/
  sub_8B0080(this, (unsigned __int16 *)a2); /*0x8a5c5e*/
  v2 = TESOutput_PrintString((char *)stru_BA7D84.name); /*0x8a5c69*/
  end = a2->end; /*0x8a5c6e*/
  capacity = a2->capacity; /*0x8a5c72*/
  i = (NodeVoid *)v2; /*0x8a5c7b*/
  if ( end >= capacity ) /*0x8a5c7f*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x8a5c8a*/
  NiTArray_SetAt(a2, end, &i); /*0x8a5c97*/
  sub_8A5790(v66); /*0x8a5ca0*/
  v86 = 0; /*0x8a5ca5*/
  v5 = (NodeVoid *)outData; /*0x8a5cac*/
  sub_8A2DE0((int *)outData, (int)v66); /*0x8a5cb7*/
  HavokVector_ToWorldVector(v63, &v68); /*0x8a5cc6*/
  v65[1] = v69; /*0x8a5cd2*/
  v65[2] = v70; /*0x8a5ce5*/
  v65[3] = v71; /*0x8a5cf4*/
  v65[0] = v72; /*0x8a5cff*/
  v6 = sub_707280(v63, "Position"); /*0x8a5d03*/
  v7 = a2->end; /*0x8a5d08*/
  v8 = a2->capacity; /*0x8a5d0c*/
  outData = v6; /*0x8a5d12*/
  if ( v7 >= v8 ) /*0x8a5d16*/
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize); /*0x8a5d21*/
  NiTArray_SetAt(a2, v7, &outData); /*0x8a5d2e*/
  v9 = sub_7153C0(v65, "Rotation"); /*0x8a5d3c*/
  v10 = a2->end; /*0x8a5d41*/
  v11 = a2->capacity; /*0x8a5d45*/
  outData = v9; /*0x8a5d4b*/
  if ( v10 >= v11 ) /*0x8a5d4f*/
    NiTArray_SetSize((unsigned __int16 *)a2, v10 + a2->growSize); /*0x8a5d5a*/
  NiTArray_SetAt(a2, v10, &outData); /*0x8a5d67*/
  HavokVector_ToWorldVector(v63, &v75); /*0x8a5d79*/
  v12 = sub_707280(v63, (char *)&off_A97548); /*0x8a5d8a*/
  v13 = a2->end; /*0x8a5d8f*/
  outData = v12; /*0x8a5d93*/
  if ( v13 >= a2->capacity ) /*0x8a5d9d*/
    NiTArray_SetSize((unsigned __int16 *)a2, v13 + a2->growSize); /*0x8a5da8*/
  NiTArray_SetAt(a2, v13, &outData); /*0x8a5db5*/
  v14 = TESOutput_PrintLabeledFloat("MASS", v76); /*0x8a5dca*/
  v15 = a2->end; /*0x8a5dcf*/
  outData = v14; /*0x8a5dd3*/
  if ( v15 >= a2->capacity ) /*0x8a5de0*/
    NiTArray_SetSize((unsigned __int16 *)a2, v15 + a2->growSize); /*0x8a5deb*/
  NiTArray_SetAt(a2, v15, &outData); /*0x8a5df8*/
  v16 = TESOutput_PrintLabeledFloat("LINDAMP", v77); /*0x8a5e0d*/
  v17 = a2->end; /*0x8a5e12*/
  outData = v16; /*0x8a5e16*/
  if ( v17 >= a2->capacity ) /*0x8a5e23*/
    NiTArray_SetSize((unsigned __int16 *)a2, v17 + a2->growSize); /*0x8a5e2e*/
  NiTArray_SetAt(a2, v17, &outData); /*0x8a5e3b*/
  v18 = TESOutput_PrintLabeledFloat("ANGDAMP", v78); /*0x8a5e50*/
  v19 = a2->end; /*0x8a5e55*/
  outData = v18; /*0x8a5e59*/
  if ( v19 >= a2->capacity ) /*0x8a5e66*/
    NiTArray_SetSize((unsigned __int16 *)a2, v19 + a2->growSize); /*0x8a5e71*/
  NiTArray_SetAt(a2, v19, &outData); /*0x8a5e7e*/
  v20 = TESOutput_PrintLabeledFloat("FRICTION", v79); /*0x8a5e93*/
  v21 = a2->end; /*0x8a5e98*/
  outData = v20; /*0x8a5e9c*/
  if ( v21 >= a2->capacity ) /*0x8a5ea9*/
    NiTArray_SetSize((unsigned __int16 *)a2, v21 + a2->growSize); /*0x8a5eb4*/
  NiTArray_SetAt(a2, v21, &outData); /*0x8a5ec1*/
  v22 = TESOutput_PrintLabeledFloat("REST", v80); /*0x8a5ed6*/
  v23 = a2->end; /*0x8a5edb*/
  outData = v22; /*0x8a5edf*/
  if ( v23 >= a2->capacity ) /*0x8a5eec*/
    NiTArray_SetSize((unsigned __int16 *)a2, v23 + a2->growSize); /*0x8a5ef7*/
  NiTArray_SetAt(a2, v23, &outData); /*0x8a5f04*/
  sub_8A5280((unsigned __int16 *)a2, (char *)v84); /*0x8a5f13*/
  v24 = TESOutput_PrintLabeledFloat("MAXLINVEL", v81); /*0x8a5f2a*/
  v25 = a2->end; /*0x8a5f2f*/
  v26 = a2->capacity; /*0x8a5f33*/
  outData = v24; /*0x8a5f3c*/
  if ( v25 >= v26 ) /*0x8a5f40*/
    NiTArray_SetSize((unsigned __int16 *)a2, v25 + a2->growSize); /*0x8a5f4b*/
  NiTArray_SetAt(a2, v25, &outData); /*0x8a5f58*/
  v27 = TESOutput_PrintLabeledFloat("MAXANGVEL", v82); /*0x8a5f6d*/
  v28 = a2->end; /*0x8a5f72*/
  v29 = a2->capacity; /*0x8a5f76*/
  outData = v27; /*0x8a5f7f*/
  if ( v28 >= v29 ) /*0x8a5f83*/
    NiTArray_SetSize((unsigned __int16 *)a2, v28 + a2->growSize); /*0x8a5f8e*/
  NiTArray_SetAt(a2, v28, &outData); /*0x8a5f9b*/
  HavokVector_ToWorldVector(v63, &v73); /*0x8a5fad*/
  v30 = sub_707280(v63, "LinVel"); /*0x8a5fbe*/
  v31 = a2->end; /*0x8a5fc3*/
  outData = v30; /*0x8a5fc7*/
  if ( v31 >= a2->capacity ) /*0x8a5fd1*/
    NiTArray_SetSize((unsigned __int16 *)a2, v31 + a2->growSize); /*0x8a5fdc*/
  NiTArray_SetAt(a2, v31, &outData); /*0x8a5fe9*/
  HavokVector_ToWorldVector(v63, v74); /*0x8a5ffb*/
  v32 = sub_707280(v63, "AngVel"); /*0x8a600c*/
  v33 = a2->end; /*0x8a6011*/
  v34 = a2->capacity; /*0x8a6015*/
  outData = v32; /*0x8a601b*/
  if ( v33 >= v34 ) /*0x8a601f*/
    NiTArray_SetSize((unsigned __int16 *)a2, v33 + a2->growSize); /*0x8a602a*/
  NiTArray_SetAt(a2, v33, &outData); /*0x8a6037*/
  v35 = TESOutput_PrintLabeledFloat("PENDEPTH", v83); /*0x8a604c*/
  v36 = a2->end; /*0x8a6051*/
  v37 = a2->capacity; /*0x8a6055*/
  outData = v35; /*0x8a605e*/
  if ( v36 >= v37 ) /*0x8a6062*/
    NiTArray_SetSize((unsigned __int16 *)a2, v36 + a2->growSize); /*0x8a606d*/
  NiTArray_SetAt(a2, v36, &outData); /*0x8a607a*/
  sub_8A3200((char *)v66); /*0x8a6083*/
  v39 = TESOutput_PrintLabeledString("QUALITYTYPE", v38); /*0x8a608e*/
  v40 = a2->end; /*0x8a6093*/
  v41 = a2->capacity; /*0x8a6097*/
  outData = v39; /*0x8a60a0*/
  if ( v40 >= v41 ) /*0x8a60a4*/
    NiTArray_SetSize((unsigned __int16 *)a2, v40 + a2->growSize); /*0x8a60af*/
  NiTArray_SetAt(a2, v40, &outData); /*0x8a60bc*/
  v42 = sub_8A4740(v5); /*0x8a60c3*/
  v43 = TESOutput_PrintLabeledUnsignedInt("ACTCONCOUNT", v42); /*0x8a60ce*/
  v44 = a2->end; /*0x8a60d3*/
  v45 = a2->capacity; /*0x8a60d7*/
  outData = v43; /*0x8a60e0*/
  if ( v44 >= v45 ) /*0x8a60e4*/
    NiTArray_SetSize((unsigned __int16 *)a2, v44 + a2->growSize); /*0x8a60ef*/
  NiTArray_SetAt(a2, v44, &outData); /*0x8a60fc*/
  v46 = v5 + 2; /*0x8a6101*/
  for ( i = v46; ; v46 = i )
  {
    if ( !v46 || (DataAddRef = NodeVoid_GetDataAddRef(v46, &outData), v62 |= 1u, v48 = *DataAddRef == 0, v60 = 1, v48) ) /*0x8a6125*/
      v60 = 0; /*0x8a6127*/
    if ( (v62 & 1) != 0 ) /*0x8a6131*/
    {
      v49 = (void (__thiscall ***)(void *, int))outData; /*0x8a6133*/
      v62 &= ~1u; /*0x8a6137*/
      if ( outData ) /*0x8a613e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a6144*/
        {
          if ( v49 ) /*0x8a6150*/
            (**v49)(v49, 1); /*0x8a615a*/
        }
      }
    }
    if ( !v60 ) /*0x8a6161*/
      break; /*0x8a6161*/
    v50 = *NodeVoid_GetDataAddRef(v46, &v64); /*0x8a6173*/
    if ( v64 ) /*0x8a617b*/
    {
      v51 = (void (__thiscall ***)(void *, int))v64; /*0x8a617d*/
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) ) /*0x8a6183*/
        (**v51)(v51, 1); /*0x8a6199*/
    }
    v52 = (const char **)(*(int (__thiscall **)(void *))(*(_DWORD *)v50 + 4))(v50); /*0x8a61a2*/
    _sprintf(v85, "%s: 0x%8X", *v52, v50);
    v53 = TESOutput_PrintLabeledString("ACTCON", v85); /*0x8a61c7*/
    v54 = a2->end; /*0x8a61cc*/
    v55 = v53; /*0x8a61d9*/
    if ( v54 >= a2->capacity ) /*0x8a61db*/
      NiTArray_SetSize((unsigned __int16 *)a2, v54 + a2->growSize); /*0x8a61e6*/
    if ( v54 < a2->end ) /*0x8a61f1*/
    {
      if ( v55 ) /*0x8a6207*/
      {
        if ( !*((_DWORD *)&a2->data->vtbl + v54) ) /*0x8a620c*/
          ++a2->numObjs; /*0x8a6212*/
      }
      else if ( *((_DWORD *)&a2->data->vtbl + v54) ) /*0x8a621c*/
      {
        --a2->numObjs; /*0x8a6222*/
      }
    }
    else
    {
      a2->end = v54 + 1; /*0x8a61f8*/
      if ( v55 ) /*0x8a61fc*/
        ++a2->numObjs; /*0x8a61fe*/
    }
    v56 = i; /*0x8a622b*/
    *((_DWORD *)&a2->data->vtbl + v54) = v55; /*0x8a622f*/
    i = v56->next; /*0x8a6235*/
  }
  result = v67; /*0x8a6240*/
  v86 = 0xFFFFFFFF; /*0x8a6246*/
  if ( v67 >= 0 ) /*0x8a6251*/
  {
    v58 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a6263*/
    if ( !v58 ) /*0x8a626b*/
      v58 = unk_BA7D9C; /*0x8a626d*/
    return sub_8A75D0(v58, (_DWORD *)LODWORD(v66[3]), 8 * v67, 0x14); /*0x8a6286*/
  }
  return result; /*0x8a628b*/
}
