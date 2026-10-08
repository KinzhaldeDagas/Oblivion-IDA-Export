unsigned int __thiscall sub_739A00(NiTriBasedGeomData *this, int stream)
{
  signed int v2; // esi
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

  v2 = stream; /*0x739a05*/
  v3 = this; /*0x739a09*/
  v33 = this; /*0x739a0c*/
  NiTriShapeData_Save((NiTriShapeData *)this, (NiStream *)stream); /*0x739a10*/
  z_low = LOBYTE(v3[1].members.super.m_kBound.Center.z); /*0x739a1f*/
  v26 = *(_DWORD *)(v2 + 0x220); /*0x739a30*/
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v26 + 8); /*0x739a31*/
  stream = 1; /*0x739a34*/
  v4(v26, &z_low, 1, &stream, 1); /*0x739a3c*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x739a42*/
  m_pkColor_high = HIWORD(v3[1].members.super.m_pkColor); /*0x739a4f*/
  v6 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 8); /*0x739a53*/
  stream = 4; /*0x739a5e*/
  v6(v5, &m_pkColor_high, 4, &stream, 1); /*0x739a66*/
  result = 0; /*0x739a68*/
  for ( i = 0; i < m_pkColor_high; ++i ) /*0x739a75*/
  {
    v8 = *((_DWORD *)&v3[1].members.super.m_pkNormal->x + result); /*0x739a83*/
    if ( v8 ) /*0x739a88*/
      v29 = *(unsigned __int16 *)(v8 + 4); /*0x739a8e*/
    else
      v29 = 0; /*0x739a94*/
    v23 = *(_DWORD *)(v2 + 0x220); /*0x739ab0*/
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v23 + 8); /*0x739ab1*/
    stream = 2; /*0x739ab4*/
    v9(v23, &v29, 2, &stream, 1); /*0x739abc*/
    if ( (_WORD)v29 ) /*0x739ac7*/
    {
      v10 = *(char **)(v8 + 0xC); /*0x739acd*/
      v11 = *(char **)(v8 + 8); /*0x739ad3*/
      v12 = *(unsigned __int16 *)(v8 + 6); /*0x739ad6*/
      v36 = *(char **)(v8 + 0x10); /*0x739ada*/
      v31 = v10; /*0x739ae0*/
      LOBYTE(stream) = v11 != 0; /*0x739aee*/
      v32 = v12; /*0x739af2*/
      v13 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x739afc*/
      v24 = *(_DWORD *)(v2 + 0x220); /*0x739b06*/
      v35 = 1; /*0x739b07*/
      v13(v24, &stream, 1, &v35, 1); /*0x739b0f*/
      if ( (_BYTE)stream ) /*0x739b19*/
      {
        v14 = 0; /*0x739b1b*/
        if ( (_WORD)v29 ) /*0x739b22*/
        {
          v15 = v11; /*0x739b24*/
          do /*0x739b3b*/
          {
            sub_714BF0(v15, v2); /*0x739b29*/
            ++v14; /*0x739b33*/
            v15 += 8; /*0x739b36*/
          }
          while ( v14 < (unsigned __int16)v29 ); /*0x739b3b*/
        }
      }
      v16 = *(_DWORD *)(v2 + 0x220); /*0x739b42*/
      v27 = v31 != 0; /*0x739b52*/
      v17 = *(void (__cdecl **)(int, bool *, int, int *, int))(v16 + 8); /*0x739b56*/
      v35 = 1; /*0x739b61*/
      v17(v16, &v27, 1, &v35, 1); /*0x739b69*/
      if ( v27 ) /*0x739b73*/
      {
        v18 = 0; /*0x739b75*/
        if ( (_WORD)v29 ) /*0x739b7c*/
        {
          v19 = v31; /*0x739b7e*/
          do /*0x739b97*/
          {
            sub_709510(v19, v2); /*0x739b85*/
            ++v18; /*0x739b8f*/
            v19 += 0x10; /*0x739b92*/
          }
          while ( v18 < (unsigned __int16)v29 ); /*0x739b97*/
        }
      }
      v25 = *(_DWORD *)(v2 + 0x220); /*0x739bad*/
      v20 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 8); /*0x739bae*/
      v35 = 2; /*0x739bb1*/
      v20(v25, &v32, 2, &v35, 1); /*0x739bb9*/
      if ( (_WORD)v32 ) /*0x739bc5*/
      {
        if ( (unsigned __int16)v29 * (unsigned __int16)v32 ) /*0x739bcf*/
        {
          v21 = v36; /*0x739bd6*/
          v22 = (unsigned __int16)v29 * (unsigned __int16)v32; /*0x739bda*/
          do /*0x739bee*/
          {
            sub_714BF0(v21, v2); /*0x739be3*/
            v21 += 8; /*0x739be8*/
            --v22; /*0x739beb*/
          }
          while ( v22 ); /*0x739bee*/
        }
      }
      v3 = v33; /*0x739bf0*/
    }
    result = i + 1; /*0x739bf8*/
  }
  return result; /*0x739c0b*/
}
