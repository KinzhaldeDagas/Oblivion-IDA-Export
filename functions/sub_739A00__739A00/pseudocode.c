unsigned int __thiscall sub_739A00(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v2; // esi
  NiTriBasedGeomData *v3; // ebx
  void (__cdecl *v4)(int, char *, int, int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, unsigned int *, int, int *, int); // edx
  unsigned int result; // eax
  int v8; // edi
  void (__cdecl *v9)(int, int *, int, int *, int); // eax
  char *v10; // ecx
  char *v11; // ebx
  int v12; // eax
  void (__cdecl *v13)(int, int *, int, int *, int); // edx
  unsigned int v14; // ebp
  char *v15; // edi
  int v16; // eax
  void (__cdecl *v17)(int, bool *, int, int *, int); // edx
  unsigned int v18; // ebp
  char *v19; // edi
  void (__cdecl *v20)(int, int *, int, int *, int); // eax
  char *v21; // edi
  int v22; // ebx
  int v23; // [esp-1Ch] [ebp-48h]
  int v24; // [esp-1Ch] [ebp-48h]
  int v25; // [esp-1Ch] [ebp-48h]
  int v26; // [esp-14h] [ebp-40h]
  bool v27; // [esp+Ah] [ebp-22h] BYREF
  char z_low; // [esp+Bh] [ebp-21h] BYREF
  int v29; // [esp+Ch] [ebp-20h] BYREF
  unsigned int m_pkColor_high; // [esp+10h] [ebp-1Ch] BYREF
  char *v31; // [esp+14h] [ebp-18h]
  int v32; // [esp+18h] [ebp-14h] BYREF
  NiTriBasedGeomData *v33; // [esp+1Ch] [ebp-10h]
  unsigned int i; // [esp+20h] [ebp-Ch]
  int v35; // [esp+24h] [ebp-8h] BYREF
  char *v36; // [esp+28h] [ebp-4h]

  v2 = (_DWORD *)a2;
  v3 = this;
  v33 = this;
  sub_7201B0(this, (_DWORD *)a2);
  z_low = LOBYTE(v3[1].members.super.m_kBound.Center.z);
  v26 = v2[0x88];
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v26 + 8);
  a2 = 1;
  v4(v26, &z_low, 1, &a2, 1);
  v5 = v2[0x88];
  m_pkColor_high = HIWORD(v3[1].members.super.m_pkColor);
  v6 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 8);
  a2 = 4;
  v6(v5, &m_pkColor_high, 4, &a2, 1);
  result = 0;
  for ( i = 0; i < m_pkColor_high; ++i )
  {
    v8 = *((_DWORD *)&v3[1].members.super.m_pkNormal->x + result);
    if ( v8 )
      v29 = *(unsigned __int16 *)(v8 + 4);
    else
      v29 = 0;
    v23 = v2[0x88];
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v23 + 8);
    a2 = 2;
    v9(v23, &v29, 2, &a2, 1);
    if ( (_WORD)v29 )
    {
      v10 = *(char **)(v8 + 0xC);
      v11 = *(char **)(v8 + 8);
      v12 = *(unsigned __int16 *)(v8 + 6);
      v36 = *(char **)(v8 + 0x10);
      v31 = v10;
      LOBYTE(a2) = v11 != 0;
      v32 = v12;
      v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v2[0x88] + 8);
      v24 = v2[0x88];
      v35 = 1;
      v13(v24, &a2, 1, &v35, 1);
      if ( (_BYTE)a2 )
      {
        v14 = 0;
        if ( (_WORD)v29 )
        {
          v15 = v11;
          do
          {
            sub_714BF0(v15, (signed int)v2);
            ++v14;
            v15 += 8;
          }
          while ( v14 < (unsigned __int16)v29 );
        }
      }
      v16 = v2[0x88];
      v27 = v31 != 0;
      v17 = *(void (__cdecl **)(int, bool *, int, int *, int))(v16 + 8);
      v35 = 1;
      v17(v16, &v27, 1, &v35, 1);
      if ( v27 )
      {
        v18 = 0;
        if ( (_WORD)v29 )
        {
          v19 = v31;
          do
          {
            sub_709510(v19, (signed int)v2);
            ++v18;
            v19 += 0x10;
          }
          while ( v18 < (unsigned __int16)v29 );
        }
      }
      v25 = v2[0x88];
      v20 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 8);
      v35 = 2;
      v20(v25, &v32, 2, &v35, 1);
      if ( (_WORD)v32 )
      {
        if ( (unsigned __int16)v29 * (unsigned __int16)v32 )
        {
          v21 = v36;
          v22 = (unsigned __int16)v29 * (unsigned __int16)v32;
          do
          {
            sub_714BF0(v21, (signed int)v2);
            v21 += 8;
            --v22;
          }
          while ( v22 );
        }
      }
      v3 = v33;
    }
    result = i + 1;
  }
  return result;
}
