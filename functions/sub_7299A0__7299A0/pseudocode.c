int __thiscall sub_7299A0(NiTriBasedGeomData *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v5)(int, UInt16 *, int, int *, int); // edx
  UInt16 *p_m_usVertices; // ebx
  void (__cdecl *v7)(int, UInt8 *, int, int *, int); // eax
  void (__cdecl *v8)(int, UInt8 *, int, int *, int); // eax
  int v9; // eax
  void (__cdecl *v10)(int, _DWORD **, int, int *, int); // edx
  void (__cdecl *v11)(int, NiPoint3 *, int, int *, int); // edx
  void (__cdecl *v12)(int, UInt16 *, int, int *, int); // eax
  int v13; // ebp
  int v14; // eax
  void (__cdecl *v15)(int, bool *, int, int *, int); // edx
  void (__cdecl *v16)(int, NiPoint3 *, int, int *, int); // edx
  void (__cdecl *v17)(int, bool *, int, int *, int); // eax
  void (__cdecl *v18)(int, NiColorAlpha *, int, int *, int); // edx
  int v19; // ecx
  void (__cdecl *v20)(int, void *, int, int *, int); // eax
  int v21; // eax
  void (__cdecl *v22)(int, int *, int, int *, int); // eax
  int v24; // [esp-50h] [ebp-70h]
  int v25; // [esp-3Ch] [ebp-5Ch]
  int v26; // [esp-28h] [ebp-48h]
  int v27; // [esp-14h] [ebp-34h]
  int v28; // [esp-14h] [ebp-34h]
  int v29; // [esp-14h] [ebp-34h]
  int v30; // [esp-14h] [ebp-34h]
  int v31; // [esp-14h] [ebp-34h]
  int v32; // [esp-14h] [ebp-34h]
  int v33; // [esp-14h] [ebp-34h]
  int v34; // [esp-14h] [ebp-34h]
  NiPoint3 *m_pkVertex; // [esp-10h] [ebp-30h]
  NiPoint3 *m_pkNormal; // [esp-10h] [ebp-30h]
  NiColorAlpha *m_pkColor; // [esp-10h] [ebp-30h]
  void *m_pkTexture; // [esp-10h] [ebp-30h]
  int v39; // [esp-Ch] [ebp-2Ch]
  int v40; // [esp-Ch] [ebp-2Ch]
  bool v41; // [esp+12h] [ebp-Eh] BYREF
  bool v42; // [esp+13h] [ebp-Dh] BYREF
  int v43; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v44; // [esp+18h] [ebp-8h] BYREF
  int v45; // [esp+1Ch] [ebp-4h] BYREF

  v2 = a2; /*0x7299a6*/
  nullsub_returnvVoid_1arg((int)a2); /*0x7299ae*/
  v44 = sub_712560((int)v2, unk_B3FE00); /*0x7299cb*/
  v27 = v2[0x88]; /*0x7299dc*/
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v27 + 8); /*0x7299dd*/
  v43 = 4; /*0x7299e0*/
  v4(v27, &v44, 4, &v43, 1); /*0x7299e8*/
  v5 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(v2[0x88] + 8); /*0x7299f0*/
  p_m_usVertices = &this->members.super.m_usVertices; /*0x7299fb*/
  v26 = v2[0x88]; /*0x7299ff*/
  v43 = 2; /*0x729a00*/
  v5(v26, &this->members.super.m_usVertices, 2, &v43, 1); /*0x729a08*/
  v25 = v2[0x88]; /*0x729a1b*/
  v7 = *(void (__cdecl **)(int, UInt8 *, int, int *, int))(v25 + 8); /*0x729a1c*/
  v43 = 1; /*0x729a1f*/
  v7(v25, &this->members.super.m_ucKeepFlags, 1, &v43, 1); /*0x729a23*/
  v24 = v2[0x88]; /*0x729a36*/
  v8 = *(void (__cdecl **)(int, UInt8 *, int, int *, int))(v24 + 8); /*0x729a37*/
  v43 = 1; /*0x729a3a*/
  v8(v24, &this->members.super.m_ucCompressFlags, 1, &v43, 1); /*0x729a3e*/
  v9 = v2[0x88]; /*0x729a40*/
  LOBYTE(a2) = this->members.super.m_pkVertex != 0; /*0x729a56*/
  v10 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v9 + 8); /*0x729a5a*/
  v43 = 1; /*0x729a64*/
  v10(v9, &a2, 1, &v43, 1); /*0x729a68*/
  if ( (_BYTE)a2 ) /*0x729a72*/
  {
    v39 = 0xC * *p_m_usVertices; /*0x729a8d*/
    v11 = *(void (__cdecl **)(int, NiPoint3 *, int, int *, int))(v2[0x88] + 8); /*0x729a8e*/
    m_pkVertex = this->members.super.m_pkVertex; /*0x729a91*/
    v28 = v2[0x88]; /*0x729a92*/
    v43 = 4; /*0x729a93*/
    v11(v28, m_pkVertex, v39, &v43, 1); /*0x729a9b*/
  }
  v29 = v2[0x88]; /*0x729ab2*/
  v12 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(v29 + 8); /*0x729ab3*/
  v43 = 2; /*0x729ab6*/
  v12(v29, &this->members.super.format, 2, &v43, 1); /*0x729abe*/
  v13 = *p_m_usVertices; /*0x729ac0*/
  if ( (this->members.super.format & 0xF000) != 0 ) /*0x729acc*/
    v13 *= 3; /*0x729ace*/
  v14 = v2[0x88]; /*0x729ad6*/
  v41 = this->members.super.m_pkNormal != 0; /*0x729ae6*/
  v15 = *(void (__cdecl **)(int, bool *, int, int *, int))(v14 + 8); /*0x729aea*/
  v43 = 1; /*0x729af5*/
  v15(v14, &v41, 1, &v43, 1); /*0x729afd*/
  if ( v41 ) /*0x729b07*/
  {
    v16 = *(void (__cdecl **)(int, NiPoint3 *, int, int *, int))(v2[0x88] + 8); /*0x729b22*/
    m_pkNormal = this->members.super.m_pkNormal; /*0x729b25*/
    v30 = v2[0x88]; /*0x729b26*/
    v43 = 4; /*0x729b27*/
    v16(v30, m_pkNormal, 0xC * v13, &v43, 1); /*0x729b2f*/
  }
  sub_716EE0((char *)&this->members.super.m_kBound, (signed int)v2); /*0x729b38*/
  v42 = this->members.super.m_pkColor != 0; /*0x729b4b*/
  v31 = v2[0x88]; /*0x729b5c*/
  v17 = *(void (__cdecl **)(int, bool *, int, int *, int))(v31 + 8); /*0x729b5d*/
  v43 = 1; /*0x729b60*/
  v17(v31, &v42, 1, &v43, 1); /*0x729b68*/
  if ( v42 ) /*0x729b72*/
  {
    v40 = 0x10 * *p_m_usVertices; /*0x729b8a*/
    v18 = *(void (__cdecl **)(int, NiColorAlpha *, int, int *, int))(v2[0x88] + 8); /*0x729b8b*/
    m_pkColor = this->members.super.m_pkColor; /*0x729b8e*/
    v32 = v2[0x88]; /*0x729b8f*/
    v43 = 4; /*0x729b90*/
    v18(v32, m_pkColor, v40, &v43, 1); /*0x729b98*/
  }
  v19 = *p_m_usVertices * (this->members.super.format & 0x3F); /*0x729ba7*/
  if ( v19 ) /*0x729bac*/
  {
    m_pkTexture = this->members.super.m_pkTexture; /*0x729bc5*/
    v33 = v2[0x88]; /*0x729bc6*/
    v20 = *(void (__cdecl **)(int, void *, int, int *, int))(v33 + 8); /*0x729bc7*/
    v43 = 4; /*0x729bca*/
    v20(v33, m_pkTexture, 8 * v19, &v43, 1); /*0x729bd2*/
  }
  v21 = v2[0x88]; /*0x729bdb*/
  v45 = this->members.super.m_usDirtyFlags & 0xF000; /*0x729bf0*/
  v34 = v21; /*0x729bfb*/
  v22 = *(void (__cdecl **)(int, int *, int, int *, int))(v21 + 8); /*0x729bfc*/
  v43 = 2; /*0x729bff*/
  v22(v34, &v45, 2, &v43, 1); /*0x729c07*/
  return (*(int (__thiscall **)(_DWORD *, NiAdditionalGeometryData *))(*v2 + 0x2C))( /*0x729c19*/
           v2,
           this->members.super.m_spAdditionalGeomData);
}
