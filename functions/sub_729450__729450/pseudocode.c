int __thiscall sub_729450(NiTriBasedGeomData *this, unsigned int *a2)
{
  unsigned int *v3; // edi
  void (__cdecl *v4)(unsigned int, int *, int, int *, int); // eax
  UInt16 *p_m_usVertices; // ebx
  void (__cdecl *v6)(unsigned int, UInt16 *, int, int *, int); // eax
  void (__cdecl *v7)(unsigned int, UInt8 *, int, int *, int); // eax
  void (__cdecl *v8)(unsigned int, UInt8 *, int, int *, int); // eax
  unsigned int v9; // eax
  void (__cdecl *v10)(unsigned int, NiPoint3 **, int, int *, int); // edx
  void (__cdecl *v11)(unsigned int, unsigned int **, int, int *, int); // eax
  int v12; // ebx
  int v13; // eax
  NiPoint3 *v14; // ecx
  void (__cdecl *v15)(unsigned int, NiPoint3 *, int, int *, int); // eax
  unsigned int m_usVertices; // ebp
  void (__cdecl *v17)(unsigned int, UInt16 *, int, int *, int); // edx
  unsigned int v18; // eax
  void (__cdecl *v19)(unsigned int, NiPoint3 **, int, int *, int); // edx
  void (__cdecl *v20)(unsigned int, bool *, int, int *, int); // eax
  int v21; // eax
  NiPoint3 *v22; // ecx
  void (__cdecl *v23)(unsigned int, NiPoint3 *, int, int *, int); // eax
  unsigned int v24; // eax
  void (__cdecl *v25)(unsigned int, NiColorAlpha **, int, int *, int); // edx
  void (__cdecl *v26)(unsigned int, bool *, int, int *, int); // eax
  int v27; // ebp
  int v28; // eax
  NiColorAlpha *v29; // ecx
  int v30; // ebx
  NiColorAlpha *v31; // eax
  NiColorAlpha *v32; // ebp
  void (__cdecl *v33)(unsigned int, NiColorAlpha *, int, int *, int); // edx
  unsigned int v34; // eax
  void (__cdecl *v35)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v36)(unsigned int, UInt16 *, int, int *, int); // edx
  void (__cdecl *v37)(unsigned int, void **, int, int *, int); // eax
  int result; // eax
  unsigned int v39; // ebp
  int v40; // eax
  char *v41; // ecx
  int (__cdecl *v42)(unsigned int, void *, unsigned int, int *, int); // edx
  int (__cdecl *v43)(unsigned int, UInt16 *, int, int *, int); // edx
  unsigned int v44; // [esp-28h] [ebp-58h]
  unsigned int v45; // [esp-14h] [ebp-44h]
  unsigned int v46; // [esp-14h] [ebp-44h]
  unsigned int v47; // [esp-14h] [ebp-44h]
  unsigned int v48; // [esp-14h] [ebp-44h]
  unsigned int v49; // [esp-14h] [ebp-44h]
  unsigned int v50; // [esp-14h] [ebp-44h]
  unsigned int v51; // [esp-14h] [ebp-44h]
  unsigned int v52; // [esp-14h] [ebp-44h]
  unsigned int v53; // [esp-14h] [ebp-44h]
  unsigned int v54; // [esp-14h] [ebp-44h]
  unsigned int v55; // [esp-14h] [ebp-44h]
  unsigned int v56; // [esp-14h] [ebp-44h]
  unsigned int v57; // [esp-14h] [ebp-44h]
  unsigned int v58; // [esp-14h] [ebp-44h]
  unsigned int v59; // [esp-14h] [ebp-44h]
  NiPoint3 *m_pkVertex; // [esp-10h] [ebp-40h]
  NiPoint3 *m_pkNormal; // [esp-10h] [ebp-40h]
  NiColorAlpha *m_pkColor; // [esp-10h] [ebp-40h]
  void *m_pkTexture; // [esp-10h] [ebp-40h]
  int v64; // [esp-Ch] [ebp-3Ch]
  int v65; // [esp-Ch] [ebp-3Ch]
  bool v66; // [esp+16h] [ebp-1Ah] BYREF
  bool v67; // [esp+17h] [ebp-19h] BYREF
  int v68; // [esp+18h] [ebp-18h] BYREF
  int v69; // [esp+1Ch] [ebp-14h] BYREF
  int v70; // [esp+20h] [ebp-10h] BYREF
  unsigned int v71; // [esp+2Ch] [ebp-4h]

  v3 = a2; /*0x729479*/
  sub_7008A0((NiRenderer *)this, (signed int)a2); /*0x72947e*/
  if ( v3[0x36] >= 0xA010072 ) /*0x72948e*/
  {
    v45 = v3[0x87]; /*0x7294a4*/
    v4 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v45 + 4); /*0x7294a5*/
    v68 = 4; /*0x7294a8*/
    v4(v45, &v69, 4, &v68, 1); /*0x7294b0*/
    unk_B3FE00 = sub_712550(v3, v69); /*0x7294c1*/
  }
  p_m_usVertices = &this->members.super.m_usVertices; /*0x7294d9*/
  v46 = v3[0x87]; /*0x7294dd*/
  v6 = *(void (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v46 + 4); /*0x7294de*/
  v69 = 2; /*0x7294e1*/
  v6(v46, &this->members.super.m_usVertices, 2, &v69, 1); /*0x7294e9*/
  if ( v3[0x36] >= 0xA000110 ) /*0x7294f8*/
  {
    v47 = v3[0x87]; /*0x72950b*/
    v7 = *(void (__cdecl **)(unsigned int, UInt8 *, int, int *, int))(v47 + 4); /*0x72950c*/
    v69 = 1; /*0x72950f*/
    v7(v47, &this->members.super.m_ucKeepFlags, 1, &v69, 1); /*0x729513*/
    v44 = v3[0x87]; /*0x729526*/
    v8 = *(void (__cdecl **)(unsigned int, UInt8 *, int, int *, int))(v44 + 4); /*0x729527*/
    v69 = 1; /*0x72952a*/
    v8(v44, &this->members.super.m_ucCompressFlags, 1, &v69, 1); /*0x72952e*/
  }
  v9 = v3[0x87]; /*0x72953e*/
  if ( v3[0x36] >= 0x4010000 ) /*0x729548*/
  {
    v48 = v3[0x87]; /*0x729577*/
    v11 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v9 + 4); /*0x729578*/
    v69 = 1; /*0x72957b*/
    v11(v48, &a2, 1, &v69, 1); /*0x72957f*/
  }
  else
  {
    v10 = *(void (__cdecl **)(unsigned int, NiPoint3 **, int, int *, int))(v9 + 4); /*0x72954a*/
    v69 = 4; /*0x729557*/
    v10(v9, &this->members.super.m_pkVertex, 4, &v69, 1); /*0x72955f*/
    LOBYTE(a2) = this->members.super.m_pkVertex != 0; /*0x729568*/
  }
  if ( (_BYTE)a2 )
  {
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v12 = *p_m_usVertices; /*0x7295a7*/
      v13 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this); /*0x7295a9*/
      v14 = *(NiPoint3 **)(v13 + 8); /*0x7295ab*/
      ++*(_DWORD *)(v13 + 0xC); /*0x7295ae*/
      *(_DWORD *)(v13 + 8) = &v14[v12]; /*0x7295b5*/
      this->members.super.m_pkVertex = v14; /*0x7295b8*/
    }
    else
    {
      this->members.super.m_pkVertex = (NiPoint3 *)FormHeapAlloc(
                                                     (0xC * (unsigned __int64)*p_m_usVertices) >> 0x20 != 0
                                                   ? 0xFFFFFFFF
                                                   : 0xC * *p_m_usVertices);
    }
    v64 = 0xC * this->members.super.m_usVertices; /*0x7295f7*/
    v15 = *(void (__cdecl **)(unsigned int, NiPoint3 *, int, int *, int))(v3[0x87] + 4); /*0x7295f8*/
    m_pkVertex = this->members.super.m_pkVertex; /*0x7295fb*/
    v49 = v3[0x87]; /*0x7295fc*/
    v69 = 4; /*0x7295fd*/
    v15(v49, m_pkVertex, v64, &v69, 1); /*0x729605*/
  }
  m_usVertices = this->members.super.m_usVertices; /*0x729615*/
  if ( v3[0x36] >= 0xA000002 ) /*0x729619*/
  {
    v17 = *(void (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v3[0x87] + 4); /*0x729621*/
    v50 = v3[0x87]; /*0x729631*/
    v69 = 2; /*0x729632*/
    v17(v50, &this->members.super.format, 2, &v69, 1); /*0x72963a*/
    if ( (this->members.super.format & 0xF000) != 0 ) /*0x729644*/
      m_usVertices *= 3; /*0x729646*/
  }
  v18 = v3[0x87]; /*0x729654*/
  if ( v3[0x36] >= 0x4010000 ) /*0x72965e*/
  {
    v51 = v3[0x87]; /*0x729696*/
    v20 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v18 + 4); /*0x729697*/
    v69 = 1; /*0x72969a*/
    v20(v51, &v66, 1, &v69, 1); /*0x72969e*/
  }
  else
  {
    v19 = *(void (__cdecl **)(unsigned int, NiPoint3 **, int, int *, int))(v18 + 4); /*0x729660*/
    v69 = 4; /*0x72966d*/
    v19(v18, &this->members.super.m_pkNormal, 4, &v69, 1); /*0x729675*/
    v66 = this->members.super.m_pkNormal != 0; /*0x729682*/
  }
  if ( v66 )
  {
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v21 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this); /*0x7296be*/
      v22 = *(NiPoint3 **)(v21 + 8); /*0x7296c0*/
      ++*(_DWORD *)(v21 + 0xC); /*0x7296c3*/
      *(_DWORD *)(v21 + 8) = &v22[m_usVertices]; /*0x7296cd*/
      this->members.super.m_pkNormal = v22; /*0x7296d0*/
    }
    else
    {
      this->members.super.m_pkNormal = (NiPoint3 *)FormHeapAlloc(
                                                     (0xC * (unsigned __int64)m_usVertices) >> 0x20 != 0
                                                   ? 0xFFFFFFFF
                                                   : 0xC * m_usVertices);
    }
    v23 = *(void (__cdecl **)(unsigned int, NiPoint3 *, int, int *, int))(v3[0x87] + 4); /*0x72970b*/
    m_pkNormal = this->members.super.m_pkNormal; /*0x72970e*/
    v52 = v3[0x87]; /*0x72970f*/
    v69 = 4; /*0x729710*/
    v23(v52, m_pkNormal, 0xC * m_usVertices, &v69, 1); /*0x729718*/
  }
  sub_716EA0((char *)&this->members.super.m_kBound, (signed int)v3); /*0x729721*/
  v24 = v3[0x87]; /*0x729730*/
  if ( v3[0x36] >= 0x4010000 ) /*0x72973c*/
  {
    v53 = v3[0x87]; /*0x729766*/
    v26 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v24 + 4); /*0x729767*/
    v69 = 1; /*0x72976a*/
    v26(v53, &v67, 1, &v69, 1); /*0x72976e*/
  }
  else
  {
    v25 = *(void (__cdecl **)(unsigned int, NiColorAlpha **, int, int *, int))(v24 + 4); /*0x72973e*/
    v69 = 4; /*0x729748*/
    v25(v24, &this->members.super.m_pkColor, 4, &v69, 1); /*0x729750*/
    v67 = this->members.super.m_pkColor != 0; /*0x729759*/
  }
  if ( v67 )
  {
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v27 = 0x10 * this->members.super.m_usVertices; /*0x729796*/
      v28 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this); /*0x729799*/
      v29 = *(NiColorAlpha **)(v28 + 8); /*0x72979b*/
      ++*(_DWORD *)(v28 + 0xC); /*0x72979e*/
      *(_DWORD *)(v28 + 8) = (char *)v29 + v27; /*0x7297a4*/
      this->members.super.m_pkColor = v29; /*0x7297a7*/
    }
    else
    {
      v30 = this->members.super.m_usVertices; /*0x7297ac*/
      v31 = (NiColorAlpha *)FormHeapAlloc((unsigned __int64)this->members.super.m_usVertices >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v30);
      v32 = v31; /*0x7297c8*/
      v70 = (int)v31; /*0x7297cd*/
      v71 = 0; /*0x7297d3*/
      if ( v31 ) /*0x7297db*/
        sub_401080(v31, 0x10, v30, (void *(__thiscall *)(void *))sub_47EA50); /*0x7297e6*/
      else
        v32 = 0; /*0x7297ed*/
      v71 = 0xFFFFFFFF; /*0x7297ef*/
      this->members.super.m_pkColor = v32; /*0x7297f7*/
    }
    v65 = 0x10 * this->members.super.m_usVertices; /*0x729815*/
    v33 = *(void (__cdecl **)(unsigned int, NiColorAlpha *, int, int *, int))(v3[0x87] + 4); /*0x729816*/
    m_pkColor = this->members.super.m_pkColor; /*0x729819*/
    v54 = v3[0x87]; /*0x72981a*/
    v69 = 4; /*0x72981b*/
    v33(v54, m_pkColor, v65, &v69, 1); /*0x729823*/
  }
  v34 = v3[0x36]; /*0x729828*/
  if ( v34 >= 0x500000A ) /*0x729833*/
  {
    if ( v34 < 0xA000002 ) /*0x72986f*/
    {
      v36 = *(void (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v3[0x87] + 4); /*0x72987d*/
      v56 = v3[0x87]; /*0x729886*/
      v69 = 2; /*0x729887*/
      v36(v56, &this->members.super.format, 2, &v69, 1); /*0x72988f*/
    }
  }
  else
  {
    v55 = v3[0x87]; /*0x729848*/
    v35 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v55 + 4); /*0x729849*/
    v69 = 2; /*0x72984c*/
    v35(v55, &v68, 2, &v69, 1); /*0x729854*/
    this->members.super.format ^= ((unsigned __int8)v68 ^ LOBYTE(this->members.super.format)) & 0x3F; /*0x729864*/
  }
  if ( v3[0x36] < 0x4010000 ) /*0x72989e*/
  {
    v57 = v3[0x87]; /*0x7298b2*/
    v37 = *(void (__cdecl **)(unsigned int, void **, int, int *, int))(v57 + 4); /*0x7298b3*/
    v69 = 4; /*0x7298b6*/
    v37(v57, &this->members.super.m_pkTexture, 4, &v69, 1); /*0x7298be*/
  }
  result = this->members.super.format; /*0x7298c3*/
  if ( (result & 0x3F) != 0 )
  {
    v39 = this->members.super.m_usVertices * (result & 0x3F); /*0x7298d7*/
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v40 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this); /*0x7298eb*/
      v41 = *(char **)(v40 + 8); /*0x7298ed*/
      ++*(_DWORD *)(v40 + 0xC); /*0x7298f0*/
      *(_DWORD *)(v40 + 8) = &v41[8 * v39]; /*0x7298f6*/
      this->members.super.m_pkTexture = v41; /*0x7298f9*/
    }
    else
    {
      this->members.super.m_pkTexture = (void *)FormHeapAlloc(v39 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v39);
    }
    v42 = *(int (__cdecl **)(unsigned int, void *, unsigned int, int *, int))(v3[0x87] + 4); /*0x729933*/
    m_pkTexture = this->members.super.m_pkTexture; /*0x729936*/
    v58 = v3[0x87]; /*0x729937*/
    v69 = 4; /*0x729938*/
    result = v42(v58, m_pkTexture, 8 * v39, &v69, 1); /*0x729940*/
  }
  if ( v3[0x36] >= 0x500000A ) /*0x72994f*/
  {
    v43 = *(int (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v3[0x87] + 4); /*0x729957*/
    v59 = v3[0x87]; /*0x729966*/
    v70 = 2; /*0x729967*/
    result = v43(v59, &this->members.super.m_usDirtyFlags, 2, &v70, 1); /*0x72996f*/
  }
  if ( v3[0x36] >= 0xA030007 ) /*0x72997e*/
    return sub_712A20(v3); /*0x729982*/
  return result; /*0x729987*/
}
