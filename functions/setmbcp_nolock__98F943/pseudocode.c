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

  SystemCP = getSystemCP(a1);
  v23 = SystemCP;
  if ( SystemCP )
  {
    v20 = 0;
    for ( i = 0; i < 0x3C; i += 0xC )
    {
      if ( dword_B317C0[i] == SystemCP )
      {
        _memset(a2 + 0x1C, 0, 0x101u);
        v19 = 0;
        v9 = (char *)&unk_B317D0 + 0x30 * v20;
        v21 = v9;
        do
        {
          while ( *v9 )
          {
            LOBYTE(v10) = v9[1];
            if ( !(_BYTE)v10 )
              break;
            v11 = (unsigned __int8)*v9;
            v10 = (unsigned __int8)v10;
            while ( v11 <= v10 )
            {
              *(_BYTE *)(a2 + v11 + 0x1D) |= byte_B317BC[v19];
              v10 = (unsigned __int8)v9[1];
              ++v11;
            }
            SystemCP = v23;
            v9 += 2;
          }
          ++v19;
          v9 = v21 + 8;
          v21 += 8;
        }
        while ( v19 < 4 );
        *(_DWORD *)(a2 + 4) = SystemCP;
        *(_DWORD *)(a2 + 8) = 1;
        *(_DWORD *)(a2 + 0xC) = CPtoLCID(SystemCP);
        v12 = (_WORD *)(a2 + 0x10);
        v14 = (_WORD *)((char *)&unk_B317C4 + v13);
        v15 = 6;
        do
        {
          *v12++ = *v14++;
          --v15;
        }
        while ( v15 );
        goto LABEL_23;
      }
      ++v20;
    }
    if ( GetCPInfo(SystemCP, (LPCPINFO)&CPInfo) )
    {
      _memset(a2 + 0x1C, 0, 0x101u);
      v5 = CPInfo.MaxCharSize <= 1;
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_DWORD *)(a2 + 0xC) = 0;
      if ( v5 )
      {
        *(_DWORD *)(a2 + 8) = 0;
      }
      else
      {
        if ( CPInfo.LeadByte[0] )
        {
          v6 = &CPInfo.LeadByte[1];
          do
          {
            v7 = *v6;
            if ( !*v6 )
              break;
            for ( j = v6[0xFFFFFFFF]; j <= v7; ++j )
              *(_BYTE *)(a2 + j + 0x1D) |= 4u;
            v6 += 2;
          }
          while ( v6[0xFFFFFFFF] );
        }
        v16 = (_BYTE *)(a2 + 0x1E);
        v17 = 0xFE;
        do
        {
          *v16++ |= 8u;
          --v17;
        }
        while ( v17 );
        *(_DWORD *)(a2 + 0xC) = CPtoLCID(*(_DWORD *)(a2 + 4));
        *(_DWORD *)(a2 + 8) = v18;
      }
      *(_DWORD *)(a2 + 0x10) = 0;
      *(_DWORD *)(a2 + 0x14) = 0;
      *(_DWORD *)(a2 + 0x18) = 0;
LABEL_23:
      setSBUpLow(a2);
      return 0;
    }
    if ( !dword_BAA604 )
      return 0xFFFFFFFF;
  }
  setSBCS((char *)a2);
  return 0;
}
