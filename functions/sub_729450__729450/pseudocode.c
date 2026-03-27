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

  v3 = a2;
  sub_7008A0((NiRenderer *)this, (signed int)a2);
  if ( v3[0x36] >= 0xA010072 )
  {
    v45 = v3[0x87];
    v4 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v45 + 4);
    v68 = 4;
    v4(v45, &v69, 4, &v68, 1);
    dword_B3FE00 = sub_712550(v3, v69);
  }
  p_m_usVertices = &this->members.super.m_usVertices;
  v46 = v3[0x87];
  v6 = *(void (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v46 + 4);
  v69 = 2;
  v6(v46, &this->members.super.m_usVertices, 2, &v69, 1);
  if ( v3[0x36] >= 0xA000110 )
  {
    v47 = v3[0x87];
    v7 = *(void (__cdecl **)(unsigned int, UInt8 *, int, int *, int))(v47 + 4);
    v69 = 1;
    v7(v47, &this->members.super.m_ucKeepFlags, 1, &v69, 1);
    v44 = v3[0x87];
    v8 = *(void (__cdecl **)(unsigned int, UInt8 *, int, int *, int))(v44 + 4);
    v69 = 1;
    v8(v44, &this->members.super.m_ucCompressFlags, 1, &v69, 1);
  }
  v9 = v3[0x87];
  if ( v3[0x36] >= 0x4010000 )
  {
    v48 = v3[0x87];
    v11 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v9 + 4);
    v69 = 1;
    v11(v48, &a2, 1, &v69, 1);
  }
  else
  {
    v10 = *(void (__cdecl **)(unsigned int, NiPoint3 **, int, int *, int))(v9 + 4);
    v69 = 4;
    v10(v9, &this->members.super.m_pkVertex, 4, &v69, 1);
    LOBYTE(a2) = this->members.super.m_pkVertex != 0;
  }
  if ( (_BYTE)a2 )
  {
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v12 = *p_m_usVertices;
      v13 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this);
      v14 = *(NiPoint3 **)(v13 + 8);
      ++*(_DWORD *)(v13 + 0xC);
      *(_DWORD *)(v13 + 8) = &v14[v12];
      this->members.super.m_pkVertex = v14;
    }
    else
    {
      this->members.super.m_pkVertex = (NiPoint3 *)FormHeapAlloc(
                                                     (0xC * (unsigned __int64)*p_m_usVertices) >> 0x20 != 0
                                                   ? 0xFFFFFFFF
                                                   : 0xC * *p_m_usVertices);
    }
    v64 = 0xC * this->members.super.m_usVertices;
    v15 = *(void (__cdecl **)(unsigned int, NiPoint3 *, int, int *, int))(v3[0x87] + 4);
    m_pkVertex = this->members.super.m_pkVertex;
    v49 = v3[0x87];
    v69 = 4;
    v15(v49, m_pkVertex, v64, &v69, 1);
  }
  m_usVertices = this->members.super.m_usVertices;
  if ( v3[0x36] >= 0xA000002 )
  {
    v17 = *(void (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v3[0x87] + 4);
    v50 = v3[0x87];
    v69 = 2;
    v17(v50, &this->members.super.format, 2, &v69, 1);
    if ( (this->members.super.format & 0xF000) != 0 )
      m_usVertices *= 3;
  }
  v18 = v3[0x87];
  if ( v3[0x36] >= 0x4010000 )
  {
    v51 = v3[0x87];
    v20 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v18 + 4);
    v69 = 1;
    v20(v51, &v66, 1, &v69, 1);
  }
  else
  {
    v19 = *(void (__cdecl **)(unsigned int, NiPoint3 **, int, int *, int))(v18 + 4);
    v69 = 4;
    v19(v18, &this->members.super.m_pkNormal, 4, &v69, 1);
    v66 = this->members.super.m_pkNormal != 0;
  }
  if ( v66 )
  {
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v21 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this);
      v22 = *(NiPoint3 **)(v21 + 8);
      ++*(_DWORD *)(v21 + 0xC);
      *(_DWORD *)(v21 + 8) = &v22[m_usVertices];
      this->members.super.m_pkNormal = v22;
    }
    else
    {
      this->members.super.m_pkNormal = (NiPoint3 *)FormHeapAlloc(
                                                     (0xC * (unsigned __int64)m_usVertices) >> 0x20 != 0
                                                   ? 0xFFFFFFFF
                                                   : 0xC * m_usVertices);
    }
    v23 = *(void (__cdecl **)(unsigned int, NiPoint3 *, int, int *, int))(v3[0x87] + 4);
    m_pkNormal = this->members.super.m_pkNormal;
    v52 = v3[0x87];
    v69 = 4;
    v23(v52, m_pkNormal, 0xC * m_usVertices, &v69, 1);
  }
  sub_716EA0((char *)&this->members.super.m_kBound, (signed int)v3);
  v24 = v3[0x87];
  if ( v3[0x36] >= 0x4010000 )
  {
    v53 = v3[0x87];
    v26 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v24 + 4);
    v69 = 1;
    v26(v53, &v67, 1, &v69, 1);
  }
  else
  {
    v25 = *(void (__cdecl **)(unsigned int, NiColorAlpha **, int, int *, int))(v24 + 4);
    v69 = 4;
    v25(v24, &this->members.super.m_pkColor, 4, &v69, 1);
    v67 = this->members.super.m_pkColor != 0;
  }
  if ( v67 )
  {
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v27 = 0x10 * this->members.super.m_usVertices;
      v28 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this);
      v29 = *(NiColorAlpha **)(v28 + 8);
      ++*(_DWORD *)(v28 + 0xC);
      *(_DWORD *)(v28 + 8) = (char *)v29 + v27;
      this->members.super.m_pkColor = v29;
    }
    else
    {
      v30 = this->members.super.m_usVertices;
      v31 = (NiColorAlpha *)FormHeapAlloc((unsigned __int64)this->members.super.m_usVertices >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v30);
      v32 = v31;
      v70 = (int)v31;
      v71 = 0;
      if ( v31 )
        sub_401080(v31, 0x10, v30, (void *(__thiscall *)(void *))sub_47EA50);
      else
        v32 = 0;
      v71 = 0xFFFFFFFF;
      this->members.super.m_pkColor = v32;
    }
    v65 = 0x10 * this->members.super.m_usVertices;
    v33 = *(void (__cdecl **)(unsigned int, NiColorAlpha *, int, int *, int))(v3[0x87] + 4);
    m_pkColor = this->members.super.m_pkColor;
    v54 = v3[0x87];
    v69 = 4;
    v33(v54, m_pkColor, v65, &v69, 1);
  }
  v34 = v3[0x36];
  if ( v34 >= 0x500000A )
  {
    if ( v34 < 0xA000002 )
    {
      v36 = *(void (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v3[0x87] + 4);
      v56 = v3[0x87];
      v69 = 2;
      v36(v56, &this->members.super.format, 2, &v69, 1);
    }
  }
  else
  {
    v55 = v3[0x87];
    v35 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v55 + 4);
    v69 = 2;
    v35(v55, &v68, 2, &v69, 1);
    this->members.super.format ^= ((unsigned __int8)v68 ^ LOBYTE(this->members.super.format)) & 0x3F;
  }
  if ( v3[0x36] < 0x4010000 )
  {
    v57 = v3[0x87];
    v37 = *(void (__cdecl **)(unsigned int, void **, int, int *, int))(v57 + 4);
    v69 = 4;
    v37(v57, &this->members.super.m_pkTexture, 4, &v69, 1);
  }
  result = this->members.super.format;
  if ( (result & 0x3F) != 0 )
  {
    v39 = this->members.super.m_usVertices * (result & 0x3F);
    if ( ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this) )
    {
      v40 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable->super.super.Unk_11)(this);
      v41 = *(char **)(v40 + 8);
      ++*(_DWORD *)(v40 + 0xC);
      *(_DWORD *)(v40 + 8) = &v41[8 * v39];
      this->members.super.m_pkTexture = v41;
    }
    else
    {
      this->members.super.m_pkTexture = (void *)FormHeapAlloc(v39 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v39);
    }
    v42 = *(int (__cdecl **)(unsigned int, void *, unsigned int, int *, int))(v3[0x87] + 4);
    m_pkTexture = this->members.super.m_pkTexture;
    v58 = v3[0x87];
    v69 = 4;
    result = v42(v58, m_pkTexture, 8 * v39, &v69, 1);
  }
  if ( v3[0x36] >= 0x500000A )
  {
    v43 = *(int (__cdecl **)(unsigned int, UInt16 *, int, int *, int))(v3[0x87] + 4);
    v59 = v3[0x87];
    v70 = 2;
    result = v43(v59, &this->members.super.m_usDirtyFlags, 2, &v70, 1);
  }
  if ( v3[0x36] >= 0xA030007 )
    return sub_712A20(v3);
  return result;
}
