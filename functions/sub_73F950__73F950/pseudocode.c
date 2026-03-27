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

  v2 = a2;
  sub_7299A0(this, a2);
  LOBYTE(a2) = *((_DWORD *)this + 0x11) != 0;
  v22 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v22 + 8);
  v38 = 1;
  v4(v22, &a2, 1, &v38, 1);
  if ( (_BYTE)a2 )
  {
    v32 = 4 * this->members.super.m_usVertices;
    v5 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
    v29 = *((_DWORD *)this + 0x11);
    v23 = v2[0x88];
    v38 = 4;
    v5(v23, v29, v32, &v38, 1);
  }
  v24 = v2[0x88];
  v6 = *(void (__cdecl **)(int, char *, int, int *, int))(v24 + 8);
  v38 = 2;
  v6(v24, (char *)this + 0x48, 2, &v38, 1);
  v7 = v2[0x88];
  v34 = *((_DWORD *)this + 0x13) != 0;
  v8 = *(void (__cdecl **)(int, bool *, int, int *, int))(v7 + 8);
  v38 = 1;
  v8(v7, &v34, 1, &v38, 1);
  if ( v34 )
  {
    v33 = 4 * this->members.super.m_usVertices;
    v9 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
    v30 = *((_DWORD *)this + 0x13);
    v25 = v2[0x88];
    v38 = 4;
    v9(v25, v30, v33, &v38, 1);
  }
  v35 = *((_DWORD *)this + 0x14) != 0;
  v26 = v2[0x88];
  v10 = *(void (__cdecl **)(int, bool *, int, int *, int))(v26 + 8);
  v38 = 1;
  v10(v26, &v35, 1, &v38, 1);
  if ( v35 )
  {
    v11 = 0;
    if ( this->members.super.m_usVertices )
    {
      v12 = 0;
      do
      {
        sub_7154B0((float *)(v12 + *((_DWORD *)this + 0x14)), (signed int)v2);
        ++v11;
        v12 += 0x10;
      }
      while ( v11 < this->members.super.m_usVertices );
    }
  }
  v13 = v2[0x88];
  v36 = *((_DWORD *)this + 0x15) != 0;
  v27 = v13;
  v14 = *(void (__cdecl **)(int, bool *, int, int *, int))(v13 + 8);
  v38 = 1;
  v14(v27, &v36, 1, &v38, 1);
  if ( v36 )
  {
    for ( i = 0; i < this->members.super.m_usVertices; ++i )
    {
      v16 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
      v31 = *((_DWORD *)this + 0x15) + 4 * i;
      v28 = v2[0x88];
      v38 = 4;
      v16(v28, v31, 4, &v38, 1);
    }
  }
  v17 = v2[0x88];
  v37 = *((_DWORD *)this + 0x16) != 0;
  v18 = *(int (__cdecl **)(int, bool *, int, int *, int))(v17 + 8);
  v38 = 1;
  result = v18(v17, &v37, 1, &v38, 1);
  if ( v37 )
  {
    v20 = 0;
    if ( this->members.super.m_usVertices )
    {
      v21 = 0;
      do
      {
        sub_7094A0((char *)(v21 + *((_DWORD *)this + 0x16)), (signed int)v2);
        result = this->members.super.m_usVertices;
        ++v20;
        v21 += 0xC;
      }
      while ( v20 < result );
    }
  }
  return result;
}
