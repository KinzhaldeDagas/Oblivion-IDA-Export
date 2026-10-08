void __cdecl unknown_libname_70(int a1)
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
  UINT v17; // [esp-Ch] [ebp-60h]
  struct localeinfo_struct v18; // [esp+Ch] [ebp-48h] BYREF
  _BYTE *v19; // [esp+14h] [ebp-40h]
  char *v20; // [esp+18h] [ebp-3Ch]
  char *v21; // [esp+1Ch] [ebp-38h]
  char *v22; // [esp+20h] [ebp-34h]
  int MaxCharSize_low; // [esp+24h] [ebp-30h]
  _DWORD *v24; // [esp+28h] [ebp-2Ch]
  void *v25; // [esp+2Ch] [ebp-28h]
  void *Dst; // [esp+30h] [ebp-24h]
  void *Memory; // [esp+34h] [ebp-20h]
  void *destination; // [esp+38h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+3Ch] [ebp-18h] BYREF
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  v1 = *(_DWORD *)(a1 + 0x14) == 0; /*0x989a18*/
  v24 = 0; /*0x989a1c*/
  Dst = 0; /*0x989a1f*/
  destination = 0; /*0x989a22*/
  v25 = 0; /*0x989a25*/
  Memory = 0; /*0x989a28*/
  v18.locinfo = (pthreadlocinfo)a1; /*0x989a2b*/
  v18.mbcinfo = 0; /*0x989a2e*/
  if ( v1 ) /*0x989a31*/
  {
    if ( *(_DWORD *)(a1 + 0xC0) ) /*0x989d48*/
      InterlockedDecrement(*(volatile LONG **)(a1 + 0xC0)); /*0x989d4f*/
    *(_DWORD *)(a1 + 0xC0) = 0; /*0x989d55*/
    *(_DWORD *)(a1 + 0xC4) = 0; /*0x989d57*/
    *(_DWORD *)(a1 + 0xC8) = asc_AA4118; /*0x989d5d*/
    *(_DWORD *)(a1 + 0xCC) = &unk_AA45A0; /*0x989d67*/
    *(_DWORD *)(a1 + 0xD0) = &unk_AA4720; /*0x989d71*/
    *(_DWORD *)(a1 + 0xAC) = 1; /*0x989d7b*/
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 4) /*0x989a4e*/
      && unknown_libname_90(&v18, 0, *(unsigned __int16 *)(a1 + 0x30), 0x1004u, (_BYTE *)(a1 + 4)) )
    {
      goto LABEL_3; /*0x989a4e*/
    }
    v24 = (_DWORD *)unknown_libname_72(); /*0x989a6d*/
    Dst = (void *)unknown_libname_74(); /*0x989a78*/
    destination = (void *)unknown_libname_74(); /*0x989a83*/
    v25 = (void *)unknown_libname_74(); /*0x989a92*/
    v2 = (void *)unknown_libname_74(); /*0x989a95*/
    Memory = v2; /*0x989aa0*/
    if ( !v24 ) /*0x989aa3*/
      goto LABEL_3; /*0x989aa3*/
    if ( !Dst ) /*0x989aac*/
      goto LABEL_3; /*0x989aac*/
    if ( !v2 ) /*0x989ab4*/
      goto LABEL_3; /*0x989ab4*/
    if ( !destination ) /*0x989abd*/
      goto LABEL_3; /*0x989abd*/
    if ( !v25 ) /*0x989ac6*/
      goto LABEL_3; /*0x989ac6*/
    *v24 = 0; /*0x989acf*/
    for ( i = 0; i < 0x100; ++i ) /*0x989ad1*/
      *((_BYTE *)Memory + i) = i; /*0x989ad6*/
    if ( !GetCPInfo(*(_DWORD *)(a1 + 4), (LPCPINFO)&CPInfo) ) /*0x989ae8*/
      goto LABEL_3; /*0x989ae8*/
    if ( CPInfo.MaxCharSize > 5 ) /*0x989afa*/
      goto LABEL_3; /*0x989afa*/
    MaxCharSize_low = LOWORD(CPInfo.MaxCharSize); /*0x989b07*/
    if ( LOWORD(CPInfo.MaxCharSize) > 1u ) /*0x989b0a*/
    {
      if ( CPInfo.LeadByte[0] ) /*0x989b0f*/
      {
        v4 = &CPInfo.LeadByte[1]; /*0x989b11*/
        do /*0x989b34*/
        {
          LOBYTE(v5) = *v4; /*0x989b14*/
          if ( !*v4 ) /*0x989b14*/
            break; /*0x989b18*/
          v6 = v4[0xFFFFFFFF]; /*0x989b1a*/
          v5 = (unsigned __int8)v5; /*0x989b1e*/
          while ( v6 <= v5 ) /*0x989b30*/
          {
            *((_BYTE *)Memory + v6) = 0x20; /*0x989b26*/
            v5 = *v4; /*0x989b2a*/
            ++v6; /*0x989b2d*/
          }
          v4 += 2; /*0x989b33*/
        }
        while ( v4[0xFFFFFFFF] ); /*0x989b34*/
      }
    }
    v17 = *(_DWORD *)(a1 + 4); /*0x989b3e*/
    v20 = (char *)Dst + 0x100; /*0x989b4f*/
    if ( __crtGetStringTypeA(0, 1u, (CHAR *)Memory, (char *)0x100, (LPWORD)Dst + 0x80, v17, 0, 0) /*0x989bb5*/
      && __crtLCMapStringA(
           0,
           *(_DWORD *)(a1 + 0x14),
           0x100u,
           (char *)Memory + 1,
           0xFF,
           (CHAR *)destination + 0x81,
           0xFF,
           *(_DWORD *)(a1 + 4))
      && __crtLCMapStringA(
           0,
           *(_DWORD *)(a1 + 0x14),
           0x200u,
           (char *)Memory + 1,
           0xFF,
           (CHAR *)v25 + 0x81,
           0xFF,
           *(_DWORD *)(a1 + 4)) )
    {
      v7 = MaxCharSize_low <= 1; /*0x989bc5*/
      v8 = (char *)Dst; /*0x989bc9*/
      v9 = destination; /*0x989bcc*/
      v10 = v25; /*0x989bcf*/
      v11 = (char *)Dst + 0xFE; /*0x989bd2*/
      *((_WORD *)Dst + 0x7F) = 0; /*0x989bd8*/
      v21 = v11; /*0x989bdb*/
      v9[0x7F] = 0; /*0x989be4*/
      v10[0x7F] = 0; /*0x989be7*/
      v9[0x80] = 0; /*0x989bea*/
      v19 = v9 + 0x80; /*0x989bec*/
      v22 = v10 + 0x80; /*0x989bf5*/
      v10[0x80] = 0; /*0x989bf8*/
      if ( !v7 ) /*0x989bfa*/
      {
        if ( CPInfo.LeadByte[0] ) /*0x989bff*/
        {
          v12 = &CPInfo.LeadByte[1]; /*0x989c01*/
          destination = &CPInfo.LeadByte[1]; /*0x989c04*/
          do /*0x989c44*/
          {
            v13 = *v12; /*0x989c07*/
            if ( !*v12 ) /*0x989c07*/
              break; /*0x989c0b*/
            v14 = v12[0xFFFFFFFF]; /*0x989c0d*/
            if ( v14 <= v13 ) /*0x989c16*/
            {
              for ( j = &v8[2 * v14 + 0x100]; ; j = (char *)Dst ) /*0x989c18*/
              {
                *(_WORD *)j = 0x8000; /*0x989c24*/
                ++v14; /*0x989c29*/
                Dst = j + 2; /*0x989c2c*/
                if ( v14 > *(unsigned __int8 *)destination ) /*0x989c37*/
                  break; /*0x989c37*/
              }
            }
            v12 = (BYTE *)destination + 2; /*0x989c3d*/
            v1 = *((_BYTE *)destination + 1) == 0; /*0x989c3e*/
            destination = (char *)destination + 2; /*0x989c41*/
          }
          while ( !v1 ); /*0x989c44*/
        }
      }
      memcpy(v8, v8 + 0x200, 0xFEu); /*0x989c53*/
      memcpy(v9, v9 + 0x100, 0x7Fu); /*0x989c62*/
      memcpy(v25, (char *)v25 + 0x100, 0x7Fu); /*0x989c74*/
      if ( *(_DWORD *)(a1 + 0xC0) ) /*0x989c79*/
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a1 + 0xC0)) ) /*0x989c87*/
        {
          free((void *)(*(_DWORD *)(a1 + 0xC4) - 0xFE)); /*0x989c9d*/
          free((void *)(*(_DWORD *)(a1 + 0xCC) - 0x80)); /*0x989cb0*/
          free((void *)(*(_DWORD *)(a1 + 0xD0) - 0x80)); /*0x989cbe*/
          free(*(void **)(a1 + 0xC0)); /*0x989cc9*/
        }
      }
      v16 = v24; /*0x989cd1*/
      *v24 = 1; /*0x989cd4*/
      *(_DWORD *)(a1 + 0xC0) = v16; /*0x989cda*/
      *(_DWORD *)(a1 + 0xC8) = v20; /*0x989ce3*/
      *(_DWORD *)(a1 + 0xC4) = v21; /*0x989cec*/
      *(_DWORD *)(a1 + 0xCC) = v19; /*0x989cf5*/
      *(_DWORD *)(a1 + 0xD0) = v22; /*0x989cfe*/
      *(_DWORD *)(a1 + 0xAC) = MaxCharSize_low; /*0x989d07*/
      free(Memory); /*0x989d10*/
    }
    else
    {
LABEL_3:
      unknown_libname_70_::unknown_libname_71((int)&savedregs); /*0x989a58*/
    }
  }
}
