int __cdecl unknown_libname_70(int a1)
{
  bool v1; // zf
  void *v2; // eax
  int i; // eax
  BYTE *v4; // eax
  int v5; // ecx
  int v6; // edi
  bool v7; // cc
  char *v8; // eax
  _BYTE *v9; // edi
  _BYTE *v10; // edx
  char *v11; // ecx
  BYTE *v12; // ecx
  BYTE v13; // dl
  int v14; // ecx
  char *j; // edx
  _DWORD *v16; // eax
  size_t v18; // [esp-1Ch] [ebp-70h]
  size_t v19; // [esp-10h] [ebp-64h]
  UINT v20; // [esp-Ch] [ebp-60h]
  size_t v21; // [esp-4h] [ebp-58h]
  _DWORD v22[2]; // [esp+Ch] [ebp-48h] BYREF
  _BYTE *v23; // [esp+14h] [ebp-40h]
  char *v24; // [esp+18h] [ebp-3Ch]
  char *v25; // [esp+1Ch] [ebp-38h]
  char *v26; // [esp+20h] [ebp-34h]
  int MaxCharSize_low; // [esp+24h] [ebp-30h]
  _DWORD *v28; // [esp+28h] [ebp-2Ch]
  void *v29; // [esp+2Ch] [ebp-28h]
  void *Dst; // [esp+30h] [ebp-24h]
  void *Memory; // [esp+34h] [ebp-20h]
  void *v32; // [esp+38h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+3Ch] [ebp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 0x14) == 0;
  v28 = 0;
  Dst = 0;
  v32 = 0;
  v29 = 0;
  Memory = 0;
  v22[0] = a1;
  v22[1] = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(a1 + 0xC0) )
      InterlockedDecrement(*(volatile LONG **)(a1 + 0xC0));
    *(_DWORD *)(a1 + 0xC0) = 0;
    *(_DWORD *)(a1 + 0xC4) = 0;
    *(_DWORD *)(a1 + 0xC8) = asc_AA4118;
    *(_DWORD *)(a1 + 0xCC) = &unk_AA45A0;
    *(_DWORD *)(a1 + 0xD0) = &unk_AA4720;
    *(_DWORD *)(a1 + 0xAC) = 1;
    return 0;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 4) && unknown_libname_90(v22, 0, *(unsigned __int16 *)(a1 + 0x30), 0x1004, a1 + 4) )
      return unknown_libname_70_::unknown_libname_71();
    v28 = (_DWORD *)unknown_libname_72(4);
    Dst = (void *)unknown_libname_74(0x180, 2);
    v32 = (void *)unknown_libname_74(0x180, 1);
    v29 = (void *)unknown_libname_74(0x180, 1);
    v2 = (void *)unknown_libname_74(0x101, 1);
    Memory = v2;
    if ( !v28 )
      return unknown_libname_70_::unknown_libname_71();
    if ( !Dst )
      return unknown_libname_70_::unknown_libname_71();
    if ( !v2 )
      return unknown_libname_70_::unknown_libname_71();
    if ( !v32 )
      return unknown_libname_70_::unknown_libname_71();
    if ( !v29 )
      return unknown_libname_70_::unknown_libname_71();
    *v28 = 0;
    for ( i = 0; i < 0x100; ++i )
      *((_BYTE *)Memory + i) = i;
    if ( !GetCPInfo(*(_DWORD *)(a1 + 4), (LPCPINFO)&CPInfo) )
      return unknown_libname_70_::unknown_libname_71();
    if ( CPInfo.MaxCharSize > 5 )
      return unknown_libname_70_::unknown_libname_71();
    MaxCharSize_low = LOWORD(CPInfo.MaxCharSize);
    if ( LOWORD(CPInfo.MaxCharSize) > 1u )
    {
      if ( CPInfo.LeadByte[0] )
      {
        v4 = &CPInfo.LeadByte[1];
        do
        {
          LOBYTE(v5) = *v4;
          if ( !*v4 )
            break;
          v6 = v4[0xFFFFFFFF];
          v5 = (unsigned __int8)v5;
          while ( v6 <= v5 )
          {
            *((_BYTE *)Memory + v6) = 0x20;
            v5 = *v4;
            ++v6;
          }
          v4 += 2;
        }
        while ( v4[0xFFFFFFFF] );
      }
    }
    v20 = *(_DWORD *)(a1 + 4);
    v24 = (char *)Dst + 0x100;
    if ( __crtGetStringTypeA(0, 1u, (LPCSTR)Memory, (char *)0x100, (LPWORD)Dst + 0x80, v20, 0, 0)
      && __crtLCMapStringA(
           0,
           *(_DWORD *)(a1 + 0x14),
           0x100u,
           (_BYTE *)Memory + 1,
           0xFF,
           (int)v32 + 0x81,
           0xFF,
           *(_DWORD *)(a1 + 4))
      && __crtLCMapStringA(
           0,
           *(_DWORD *)(a1 + 0x14),
           0x200u,
           (_BYTE *)Memory + 1,
           0xFF,
           (int)v29 + 0x81,
           0xFF,
           *(_DWORD *)(a1 + 4)) )
    {
      v7 = MaxCharSize_low <= 1;
      v8 = (char *)Dst;
      v9 = v32;
      v10 = v29;
      v11 = (char *)Dst + 0xFE;
      *((_WORD *)Dst + 0x7F) = 0;
      v25 = v11;
      v9[0x7F] = 0;
      v10[0x7F] = 0;
      v9[0x80] = 0;
      v23 = v9 + 0x80;
      v26 = v10 + 0x80;
      v10[0x80] = 0;
      if ( !v7 )
      {
        if ( CPInfo.LeadByte[0] )
        {
          v12 = &CPInfo.LeadByte[1];
          v32 = &CPInfo.LeadByte[1];
          do
          {
            v13 = *v12;
            if ( !*v12 )
              break;
            v14 = v12[0xFFFFFFFF];
            if ( v14 <= v13 )
            {
              for ( j = &v8[2 * v14 + 0x100]; ; j = (char *)Dst )
              {
                *(_WORD *)j = 0x8000;
                ++v14;
                Dst = j + 2;
                if ( v14 > *(unsigned __int8 *)v32 )
                  break;
              }
            }
            v12 = (BYTE *)v32 + 2;
            v1 = *((_BYTE *)v32 + 1) == 0;
            v32 = (char *)v32 + 2;
          }
          while ( !v1 );
        }
      }
      LODWORD(v21) = 0xFE;
      memcpy(v8, v8 + 0x200, v21);
      LODWORD(v19) = 0x7F;
      memcpy(v9, v9 + 0x100, v19);
      LODWORD(v18) = 0x7F;
      memcpy(v29, (char *)v29 + 0x100, v18);
      if ( *(_DWORD *)(a1 + 0xC0) )
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a1 + 0xC0)) )
        {
          free((void *)(*(_DWORD *)(a1 + 0xC4) - 0xFE));
          free((void *)(*(_DWORD *)(a1 + 0xCC) - 0x80));
          free((void *)(*(_DWORD *)(a1 + 0xD0) - 0x80));
          free(*(void **)(a1 + 0xC0));
        }
      }
      v16 = v28;
      *v28 = 1;
      *(_DWORD *)(a1 + 0xC0) = v16;
      *(_DWORD *)(a1 + 0xC8) = v24;
      *(_DWORD *)(a1 + 0xC4) = v25;
      *(_DWORD *)(a1 + 0xCC) = v23;
      *(_DWORD *)(a1 + 0xD0) = v26;
      *(_DWORD *)(a1 + 0xAC) = MaxCharSize_low;
      free(Memory);
      return 0;
    }
    else
    {
      return unknown_libname_70_::unknown_libname_71();
    }
  }
}
