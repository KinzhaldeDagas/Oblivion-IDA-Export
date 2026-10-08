unsigned int __thiscall sub_73F950(NiTriBasedGeomData *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  void (__cdecl *v5)(int, int, int, int *, int); // edx
  void (__cdecl *v6)(int, char *, int, int *, int); // eax
  int v7; // eax
  void (__cdecl *v8)(int, bool *, int, int *, int); // edx
  void (__cdecl *v9)(int, int, int, int *, int); // edx
  void (__cdecl *v10)(int, bool *, int, int *, int); // eax
  unsigned int v11; // ebx
  int v12; // ebp
  int v13; // eax
  void (__cdecl *v14)(int, bool *, int, int *, int); // eax
  unsigned int i; // ebx
  void (__cdecl *v16)(int, int, int, int *, int); // edx
  int v17; // eax
  int (__cdecl *v18)(int, bool *, int, int *, int); // edx
  unsigned int result; // eax
  unsigned int v20; // ebx
  int v21; // ebp
  int v22; // [esp-14h] [ebp-2Ch]
  int v23; // [esp-14h] [ebp-2Ch]
  int v24; // [esp-14h] [ebp-2Ch]
  int v25; // [esp-14h] [ebp-2Ch]
  int v26; // [esp-14h] [ebp-2Ch]
  int v27; // [esp-14h] [ebp-2Ch]
  int v28; // [esp-14h] [ebp-2Ch]
  int v29; // [esp-10h] [ebp-28h]
  int v30; // [esp-10h] [ebp-28h]
  int v31; // [esp-10h] [ebp-28h]
  int v32; // [esp-Ch] [ebp-24h]
  int v33; // [esp-Ch] [ebp-24h]
  bool v34; // [esp+10h] [ebp-8h] BYREF
  bool v35; // [esp+11h] [ebp-7h] BYREF
  bool v36; // [esp+12h] [ebp-6h] BYREF
  bool v37; // [esp+13h] [ebp-5h] BYREF
  int v38; // [esp+14h] [ebp-4h] BYREF

  v2 = a2; /*0x73f957*/
  sub_7299A0(this, a2); /*0x73f95e*/
  LOBYTE(a2) = *((_DWORD *)this + 0x11) != 0; /*0x73f975*/
  v22 = v2[0x88]; /*0x73f985*/
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v22 + 8); /*0x73f986*/
  v38 = 1; /*0x73f989*/
  v4(v22, &a2, 1, &v38, 1); /*0x73f98d*/
  if ( (_BYTE)a2 ) /*0x73f997*/
  {
    v32 = 4 * this->members.super.m_usVertices; /*0x73f9b0*/
    v5 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8); /*0x73f9b1*/
    v29 = *((_DWORD *)this + 0x11); /*0x73f9b4*/
    v23 = v2[0x88]; /*0x73f9b5*/
    v38 = 4; /*0x73f9b6*/
    v5(v23, v29, v32, &v38, 1); /*0x73f9be*/
  }
  v24 = v2[0x88]; /*0x73f9d5*/
  v6 = *(void (__cdecl **)(int, char *, int, int *, int))(v24 + 8); /*0x73f9d6*/
  v38 = 2; /*0x73f9d9*/
  v6(v24, (char *)this + 0x48, 2, &v38, 1); /*0x73f9e1*/
  v7 = v2[0x88]; /*0x73f9e7*/
  v34 = *((_DWORD *)this + 0x13) != 0; /*0x73f9f6*/
  v8 = *(void (__cdecl **)(int, bool *, int, int *, int))(v7 + 8); /*0x73f9fa*/
  v38 = 1; /*0x73fa04*/
  v8(v7, &v34, 1, &v38, 1); /*0x73fa08*/
  if ( v34 ) /*0x73fa12*/
  {
    v33 = 4 * this->members.super.m_usVertices; /*0x73fa2b*/
    v9 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8); /*0x73fa2c*/
    v30 = *((_DWORD *)this + 0x13); /*0x73fa2f*/
    v25 = v2[0x88]; /*0x73fa30*/
    v38 = 4; /*0x73fa31*/
    v9(v25, v30, v33, &v38, 1); /*0x73fa39*/
  }
  v35 = *((_DWORD *)this + 0x14) != 0; /*0x73fa4b*/
  v26 = v2[0x88]; /*0x73fa5b*/
  v10 = *(void (__cdecl **)(int, bool *, int, int *, int))(v26 + 8); /*0x73fa5c*/
  v38 = 1; /*0x73fa5f*/
  v10(v26, &v35, 1, &v38, 1); /*0x73fa63*/
  if ( v35 ) /*0x73fa6d*/
  {
    v11 = 0; /*0x73fa6f*/
    if ( this->members.super.m_usVertices ) /*0x73fa71*/
    {
      v12 = 0; /*0x73fa77*/
      do /*0x73fa97*/
      {
        sub_7154B0((float *)(v12 + *((_DWORD *)this + 0x14)), (signed int)v2); /*0x73fa86*/
        ++v11; /*0x73fa8f*/
        v12 += 0x10; /*0x73fa92*/
      }
      while ( v11 < this->members.super.m_usVertices ); /*0x73fa97*/
    }
  }
  v13 = v2[0x88]; /*0x73faa2*/
  v36 = *((_DWORD *)this + 0x15) != 0; /*0x73fab1*/
  v27 = v13; /*0x73fabb*/
  v14 = *(void (__cdecl **)(int, bool *, int, int *, int))(v13 + 8); /*0x73fabc*/
  v38 = 1; /*0x73fabf*/
  v14(v27, &v36, 1, &v38, 1); /*0x73fac3*/
  if ( v36 ) /*0x73facd*/
  {
    for ( i = 0; i < this->members.super.m_usVertices; ++i ) /*0x73fad1*/
    {
      v16 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8); /*0x73faf2*/
      v31 = *((_DWORD *)this + 0x15) + 4 * i; /*0x73faf7*/
      v28 = v2[0x88]; /*0x73faf8*/
      v38 = 4; /*0x73faf9*/
      v16(v28, v31, 4, &v38, 1); /*0x73fb01*/
    }
  }
  v17 = v2[0x88]; /*0x73fb14*/
  v37 = *((_DWORD *)this + 0x16) != 0; /*0x73fb23*/
  v18 = *(int (__cdecl **)(int, bool *, int, int *, int))(v17 + 8); /*0x73fb27*/
  v38 = 1; /*0x73fb31*/
  result = v18(v17, &v37, 1, &v38, 1); /*0x73fb35*/
  if ( v37 ) /*0x73fb3f*/
  {
    v20 = 0; /*0x73fb41*/
    if ( this->members.super.m_usVertices ) /*0x73fb43*/
    {
      v21 = 0; /*0x73fb49*/
      do /*0x73fb67*/
      {
        sub_7094A0((char *)(v21 + *((_DWORD *)this + 0x16)), (signed int)v2); /*0x73fb56*/
        result = this->members.super.m_usVertices; /*0x73fb5b*/
        ++v20; /*0x73fb5f*/
        v21 += 0xC; /*0x73fb62*/
      }
      while ( v20 < result ); /*0x73fb67*/
    }
  }
  return result; /*0x73fb69*/
}
