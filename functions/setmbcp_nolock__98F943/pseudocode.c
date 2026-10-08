unsigned int __cdecl _setmbcp_nolock(int a1, int a2)
{
  UINT SystemCP; // edi
  unsigned int i; // eax
  bool v5; // cc
  BYTE *v6; // esi
  BYTE v7; // cl
  unsigned int j; // eax
  _BYTE *v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // edi
  _WORD *v12; // eax
  int v13; // ecx
  _WORD *v14; // ecx
  int v15; // edx
  _BYTE *v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // [esp+Ch] [ebp-20h]
  int v20; // [esp+10h] [ebp-1Ch]
  _BYTE *v21; // [esp+10h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+14h] [ebp-18h] BYREF
  UINT v23; // [esp+34h] [ebp+8h]

  SystemCP = getSystemCP(a1); /*0x98f961*/
  v23 = SystemCP; /*0x98f967*/
  if ( SystemCP ) /*0x98f96a*/
  {
    v20 = 0; /*0x98f97a*/
    for ( i = 0; i < 0x3C; i += 0xC ) /*0x98f97d*/
    {
      if ( dword_B317C0[i] == SystemCP ) /*0x98f985*/
      {
        _memset(a2 + 0x1C, 0, 0x101u); /*0x98f9f8*/
        v19 = 0; /*0x98fa06*/
        v9 = (char *)&unk_B317D0 + 0x30 * v20; /*0x98fa09*/
        v21 = v9; /*0x98fa0f*/
        do /*0x98fa53*/
        {
          while ( *v9 ) /*0x98fa3e*/
          {
            LOBYTE(v10) = v9[1]; /*0x98fa14*/
            if ( !(_BYTE)v10 ) /*0x98fa19*/
              break; /*0x98fa19*/
            v11 = (unsigned __int8)*v9; /*0x98fa1b*/
            v10 = (unsigned __int8)v10; /*0x98fa1e*/
            while ( v11 <= v10 ) /*0x98fa37*/
            {
              *(_BYTE *)(a2 + v11 + 0x1D) |= byte_B317BC[v19]; /*0x98fa2c*/
              v10 = (unsigned __int8)v9[1]; /*0x98fa30*/
              ++v11; /*0x98fa34*/
            }
            SystemCP = v23; /*0x98fa39*/
            v9 += 2; /*0x98fa3d*/
          }
          ++v19; /*0x98fa46*/
          v9 = v21 + 8; /*0x98fa49*/
          v21 += 8; /*0x98fa50*/
        }
        while ( v19 < 4 ); /*0x98fa53*/
        *(_DWORD *)(a2 + 4) = SystemCP; /*0x98fa57*/
        *(_DWORD *)(a2 + 8) = 1; /*0x98fa5a*/
        *(_DWORD *)(a2 + 0xC) = CPtoLCID(SystemCP); /*0x98fa68*/
        v12 = (_WORD *)(a2 + 0x10); /*0x98fa6b*/
        v14 = (_WORD *)((char *)&unk_B317C4 + v13); /*0x98fa6e*/
        v15 = 6; /*0x98fa74*/
        do /*0x98fa80*/
        {
          *v12++ = *v14++; /*0x98fa79*/
          --v15; /*0x98fa7f*/
        }
        while ( v15 ); /*0x98fa80*/
        goto LABEL_23; /*0x98fa80*/
      }
      ++v20; /*0x98f987*/
    }
    if ( GetCPInfo(SystemCP, (LPCPINFO)&CPInfo) ) /*0x98f999*/
    {
      _memset(a2 + 0x1C, 0, 0x101u); /*0x98f9b1*/
      v5 = CPInfo.MaxCharSize <= 1; /*0x98f9bc*/
      *(_DWORD *)(a2 + 4) = SystemCP; /*0x98f9bf*/
      *(_DWORD *)(a2 + 0xC) = 0; /*0x98f9c2*/
      if ( v5 ) /*0x98f9c5*/
      {
        *(_DWORD *)(a2 + 8) = 0; /*0x98fac3*/
      }
      else
      {
        if ( CPInfo.LeadByte[0] ) /*0x98f9cf*/
        {
          v6 = &CPInfo.LeadByte[1]; /*0x98f9d5*/
          do /*0x98fa9a*/
          {
            v7 = *v6; /*0x98f9d8*/
            if ( !*v6 ) /*0x98f9d8*/
              break; /*0x98f9dc*/
            for ( j = v6[0xFFFFFFFF]; j <= v7; ++j ) /*0x98f9e2*/
              *(_BYTE *)(a2 + j + 0x1D) |= 4u; /*0x98fa8e*/
            v6 += 2; /*0x98fa99*/
          }
          while ( v6[0xFFFFFFFF] ); /*0x98fa9a*/
        }
        v16 = (_BYTE *)(a2 + 0x1E); /*0x98faa4*/
        v17 = 0xFE; /*0x98faa7*/
        do /*0x98fab1*/
        {
          *v16++ |= 8u; /*0x98faac*/
          --v17; /*0x98fab0*/
        }
        while ( v17 ); /*0x98fab1*/
        *(_DWORD *)(a2 + 0xC) = CPtoLCID(*(_DWORD *)(a2 + 4)); /*0x98fabb*/
        *(_DWORD *)(a2 + 8) = v18; /*0x98fabe*/
      }
      *(_DWORD *)(a2 + 0x10) = 0; /*0x98facb*/
      *(_DWORD *)(a2 + 0x14) = 0; /*0x98facc*/
      *(_DWORD *)(a2 + 0x18) = 0; /*0x98facd*/
LABEL_23:
      setSBUpLow(a2); /*0x98fa82*/
      return 0; /*0x98fa89*/
    }
    if ( !dword_BA9E10[0x1FD] ) /*0x98fad6*/
      return 0xFFFFFFFF; /*0x98fadc*/
  }
  setSBCS((char *)a2); /*0x98f96e*/
  return 0; /*0x98fadf*/
}
