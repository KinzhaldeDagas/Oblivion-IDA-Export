// OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::DeleteIndexData frees every owned unsigned-short strip buffer, nulls the pointer slots, clears each inner pointer vector, then empties the per-LOD strip container.
//
// [2026-10-03 index ownership closure] Native DeleteIndexData frees every strip allocation and nulls/clears pointer containers; CombineStrips subsequently deep-assigns replacement length/pointer/triangle vectors. The plugin bounded frond combiner follows equivalent ownership using FormHeap allocations and retains outer vector objects/allocator words while replacing validated inner POD spans. No strip buffers are reference-counted or shared by design.
void __thiscall OB_CIndexedGeometry_DeleteIndexData_010201A0(OB_CIndexedGeometry_010201A0 *this)
{
  unsigned int v1; // edi
  int v2; // ebp
  OB_stVectorUShortPtr_010201A0 *begin; // ecx
  unsigned int i; // ebx
  OB_stVectorUShortPtr_010201A0 *v6; // ecx
  OB_stVectorUShortPtr_010201A0 *v7; // eax
  int v8; // ecx
  char *v9; // eax
  OB_stVectorUShortPtr_010201A0 *v10; // ecx
  OB_stVectorUShortPtr_010201A0 *v11; // edi
  int v12; // ecx
  char *v13; // edi
  OB_stVectorUShortPtr_010201A0 *v14; // ecx
  OB_stVectorUShortPtr_010201A0 *v15; // edi
  int v16; // ecx
  char *v17; // edi
  int v18; // edx
  OB_stVectorUShortPtr_010201A0 *v19; // ecx
  OB_stVectorUShortPtr_010201A0 *v20; // edi
  char *v21; // ebx
  char *v22; // edi
  char *v23; // ebp
  int v24; // eax
  OB_stVectorUShortPtr_010201A0 *end; // edi
  OB_stVectorUShortPtr_010201A0 *v26; // ebx
  OB_stVectorUShortPtr_010201A0 *v27; // ebp
  OB_stVectorUShortPtr_010201A0 *v28; // ebx
  int v29; // eax
  OB_stVectorUShortPtr_010201A0 *v30; // ebp
  unsigned int *p_begin; // edi
  rsize_t v32; // [esp-Ch] [ebp-28h]
  rsize_t v33; // [esp+0h] [ebp-1Ch]
  unsigned int v34; // [esp+10h] [ebp-Ch]
  int v35; // [esp+14h] [ebp-8h]
  char *v36; // [esp+18h] [ebp-4h]
  OB_stVectorUShortPtr_010201A0 *v37; // [esp+18h] [ebp-4h]
  int j; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x7969b7*/
  v2 = 0; /*0x7969b9*/
  v34 = 0; /*0x7969bd*/
  v35 = 0; /*0x7969c1*/
  while ( 1 ) /*0x7969c5*/
  {
    begin = this->perLodStrips.begin; /*0x7969c5*/
    if ( !begin || v1 >= this->perLodStrips.end - begin ) /*0x7969da*/
      break; /*0x7969da*/
    for ( i = 0; ; ++i ) /*0x7969e0*/
    {
      v6 = this->perLodStrips.begin; /*0x7969e2*/
      if ( !v6 || v1 >= this->perLodStrips.end - v6 ) /*0x7969f3*/
        _invalid_parameter_noinfo(); /*0x7969f5*/
      v7 = this->perLodStrips.begin; /*0x7969fa*/
      v8 = *(int *)((char *)&v7->begin + v2); /*0x7969fd*/
      v9 = (char *)v7 + v2; /*0x796a01*/
      if ( !v8 || i >= (*((_DWORD *)v9 + 2) - v8) >> 2 ) /*0x796a15*/
        break; /*0x796a15*/
      v10 = this->perLodStrips.begin; /*0x796a1b*/
      if ( !v10 || v1 >= this->perLodStrips.end - v10 ) /*0x796a2c*/
        _invalid_parameter_noinfo(); /*0x796a2e*/
      v11 = this->perLodStrips.begin; /*0x796a33*/
      v12 = *(int *)((char *)&v11->begin + v2); /*0x796a36*/
      v13 = (char *)v11 + v2; /*0x796a3a*/
      if ( !v12 || i >= (*((_DWORD *)v13 + 2) - v12) >> 2 ) /*0x796a4a*/
        _invalid_parameter_noinfo(); /*0x796a4c*/
      FormHeapFree(*(_DWORD *)(*((_DWORD *)v13 + 1) + 4 * i)); /*0x796a58*/
      v14 = this->perLodStrips.begin; /*0x796a5d*/
      if ( !v14 || v34 >= this->perLodStrips.end - v14 ) /*0x796a73*/
        _invalid_parameter_noinfo(); /*0x796a75*/
      v15 = this->perLodStrips.begin; /*0x796a7a*/
      v16 = *(int *)((char *)&v15->begin + v2); /*0x796a7d*/
      v17 = (char *)v15 + v2; /*0x796a81*/
      if ( !v16 || i >= (*((_DWORD *)v17 + 2) - v16) >> 2 ) /*0x796a91*/
        _invalid_parameter_noinfo(); /*0x796a93*/
      v18 = *((_DWORD *)v17 + 1); /*0x796a98*/
      v1 = v34; /*0x796a9b*/
      *(_DWORD *)(v18 + 4 * i) = 0; /*0x796a9f*/
    }
    v19 = this->perLodStrips.begin; /*0x796aae*/
    if ( !v19 || v1 >= this->perLodStrips.end - v19 ) /*0x796abf*/
      _invalid_parameter_noinfo(); /*0x796ac1*/
    v20 = this->perLodStrips.begin; /*0x796ac6*/
    v21 = *(char **)((char *)&v20->end + v2); /*0x796ac9*/
    v22 = (char *)v20 + v2; /*0x796acd*/
    if ( *((_DWORD *)v22 + 1) > (unsigned int)v21 ) /*0x796ad2*/
      _invalid_parameter_noinfo(); /*0x796ad4*/
    v23 = *((char **)v22 + 1); /*0x796ad9*/
    if ( (unsigned int)v23 > *((_DWORD *)v22 + 2) ) /*0x796adf*/
      _invalid_parameter_noinfo(); /*0x796ae1*/
    if ( v23 != v21 ) /*0x796ae8*/
    {
      v24 = (*((_DWORD *)v22 + 2) - (int)v21) >> 2; /*0x796aef*/
      v36 = &v23[4 * v24]; /*0x796afe*/
      if ( v24 > 0 ) /*0x796b02*/
      {
        HIDWORD(v32) = v21; /*0x796b05*/
        LODWORD(v32) = 4 * v24; /*0x796b06*/
        memmove_s(v23, v32, (const void *)(4 * v24), v33); /*0x796b08*/
      }
      *((_DWORD *)v22 + 2) = v36; /*0x796b14*/
    }
    ++v34; /*0x796b17*/
    v35 += 0x10; /*0x796b1c*/
    v2 = v35; /*0x796b21*/
    v1 = v34; /*0x796b25*/
  }
  end = this->perLodStrips.end; /*0x796b2e*/
  if ( begin > end ) /*0x796b33*/
    _invalid_parameter_noinfo(); /*0x796b35*/
  v26 = this->perLodStrips.begin; /*0x796b3a*/
  v37 = v26; /*0x796b40*/
  if ( v26 > this->perLodStrips.end ) /*0x796b44*/
    _invalid_parameter_noinfo(); /*0x796b46*/
  if ( v26 != end ) /*0x796b4d*/
  {
    v27 = this->perLodStrips.end; /*0x796b4f*/
    v28 = &v26[v27 - end]; /*0x796b60*/
    if ( end != v27 ) /*0x796b64*/
    {
      v29 = (char *)v37 - (char *)end; /*0x796b66*/
      for ( j = (char *)v37 - (char *)end; ; v29 = j ) /*0x796b68*/
      {
        OB_stVector4_CopyAssign_010201A0( /*0x796b78*/
          (OB_stVector4_010201A0 *)((char *)end + v29),
          (const OB_stVector4_010201A0 *)end);
        if ( ++end == v27 ) /*0x796b82*/
          break; /*0x796b82*/
      }
    }
    v30 = this->perLodStrips.end; /*0x796b84*/
    if ( v28 != v30 ) /*0x796b89*/
    {
      p_begin = (unsigned int *)&v28->begin; /*0x796b8b*/
      do /*0x796bb1*/
      {
        if ( *p_begin ) /*0x796b90*/
          FormHeapFree(*p_begin); /*0x796b97*/
        *p_begin = 0; /*0x796ba1*/
        p_begin[1] = 0; /*0x796ba3*/
        p_begin[2] = 0; /*0x796ba6*/
        p_begin += 4; /*0x796ba9*/
      }
      while ( p_begin + 0xFFFFFFFF != (unsigned int *)v30 ); /*0x796bb1*/
    }
    this->perLodStrips.end = v28; /*0x796bb3*/
  }
}
