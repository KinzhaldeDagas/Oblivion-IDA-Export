void __usercall setSBUpLow(int a1@<esi>)
{
  unsigned int i; // eax
  BYTE v2; // al
  BYTE *v3; // ebx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  BYTE *v6; // ebx
  int v7; // eax
  WORD v8; // cx
  char v9; // cl
  unsigned int v10; // ecx
  _BYTE *v11; // eax
  char v12; // dl
  unsigned int v13; // [esp+8h] [ebp-80h]
  struct _cpinfo CPInfo; // [esp+Ch] [ebp-7Ch] BYREF
  unsigned __int16 CharType[256]; // [esp+20h] [ebp-68h] BYREF
  _BYTE v16[256]; // [esp+220h] [ebp+198h] BYREF
  _BYTE v17[256]; // [esp+320h] [ebp+298h] BYREF
  CHAR MultiByteStr[256]; // [esp+420h] [ebp+398h] BYREF

  if ( GetCPInfo(*(_DWORD *)(a1 + 4), (LPCPINFO)&CPInfo) )
  {
    for ( i = 0; i < 0x100; ++i )
      MultiByteStr[i] = i;
    v2 = CPInfo.LeadByte[0];
    MultiByteStr[0] = 0x20;
    if ( CPInfo.LeadByte[0] )
    {
      v3 = &CPInfo.LeadByte[1];
      do
      {
        v4 = v2;
        v5 = *v3;
        if ( v4 <= v5 )
          _memset((int)&MultiByteStr[v4], 0x20, v5 - v4 + 1);
        v6 = v3 + 1;
        v2 = *v6;
        v3 = v6 + 1;
      }
      while ( v2 );
    }
    __crtGetStringTypeA(0, 1u, MultiByteStr, (char *)0x100, CharType, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 0xC), 0);
    __crtLCMapStringA(0, *(_DWORD *)(a1 + 0xC), 0x100u, MultiByteStr, 0x100, (int)v17, 0x100, *(_DWORD *)(a1 + 4));
    __crtLCMapStringA(0, *(_DWORD *)(a1 + 0xC), 0x200u, MultiByteStr, 0x100, (int)v16, 0x100, *(_DWORD *)(a1 + 4));
    v7 = 0;
    while ( 1 )
    {
      v8 = CharType[v7];
      if ( (v8 & 1) != 0 )
      {
        *(_BYTE *)(a1 + v7 + 0x1D) |= 0x10u;
        v9 = v17[v7];
      }
      else
      {
        if ( (v8 & 2) == 0 )
        {
          *(_BYTE *)(a1 + v7 + 0x11D) = 0;
          goto LABEL_16;
        }
        *(_BYTE *)(a1 + v7 + 0x1D) |= 0x20u;
        v9 = v16[v7];
      }
      *(_BYTE *)(a1 + v7 + 0x11D) = v9;
LABEL_16:
      if ( (unsigned int)++v7 >= 0x100 )
        return;
    }
  }
  v10 = 0;
  v13 = 0xFFFFFF9F - (a1 + 0x11D);
  do
  {
    v11 = (_BYTE *)(a1 + v10 + 0x11D);
    if ( (unsigned int)&v11[v13 + 0x20] <= 0x19 )
    {
      *(_BYTE *)(a1 + v10 + 0x1D) |= 0x10u;
      v12 = v10 + 0x20;
LABEL_23:
      *v11 = v12;
      goto LABEL_25;
    }
    if ( (unsigned int)&v11[v13] <= 0x19 )
    {
      *(_BYTE *)(a1 + v10 + 0x1D) |= 0x20u;
      v12 = v10 - 0x20;
      goto LABEL_23;
    }
    *v11 = 0;
LABEL_25:
    ++v10;
  }
  while ( v10 < 0x100 );
}
