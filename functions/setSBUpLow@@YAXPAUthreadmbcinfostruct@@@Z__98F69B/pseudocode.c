void __usercall setSBUpLow(int a1@<esi>)
{
  unsigned int i; // eax
  BYTE v2; // al
  BYTE *v3; // ebx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  BYTE *v6; // ebx
  int v7; // eax
  unsigned __int16 v8; // cx
  CHAR v9; // cl
  unsigned int v10; // ecx
  _BYTE *v11; // eax
  char v12; // dl
  unsigned int v13; // [esp+8h] [ebp-80h]
  struct _cpinfo CPInfo; // [esp+Ch] [ebp-7Ch] BYREF
  unsigned __int16 CharType[256]; // [esp+20h] [ebp-68h] BYREF
  CHAR v16[256]; // [esp+220h] [ebp+198h] BYREF
  CHAR v17[256]; // [esp+320h] [ebp+298h] BYREF
  CHAR MultiByteStr[256]; // [esp+420h] [ebp+398h] BYREF

  if ( GetCPInfo(*(_DWORD *)(a1 + 4), (LPCPINFO)&CPInfo) ) /*0x98f6bf*/
  {
    for ( i = 0; i < 0x100; ++i ) /*0x98f6d2*/
      MultiByteStr[i] = i; /*0x98f6d4*/
    v2 = CPInfo.LeadByte[0]; /*0x98f6e0*/
    MultiByteStr[0] = 0x20; /*0x98f6e5*/
    if ( CPInfo.LeadByte[0] ) /*0x98f6ec*/
    {
      v3 = &CPInfo.LeadByte[1]; /*0x98f6ee*/
      do /*0x98f717*/
      {
        v4 = v2; /*0x98f6f1*/
        v5 = *v3; /*0x98f6f4*/
        if ( v4 <= v5 ) /*0x98f6f9*/
          _memset((int)&MultiByteStr[v4], 0x20, v5 - v4 + 1); /*0x98f709*/
        v6 = v3 + 1; /*0x98f711*/
        v2 = *v6; /*0x98f712*/
        v3 = v6 + 1; /*0x98f714*/
      }
      while ( v2 ); /*0x98f717*/
    }
    __crtGetStringTypeA(0, 1u, MultiByteStr, (char *)0x100, CharType, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 0xC), 0); /*0x98f731*/
    __crtLCMapStringA(0, *(_DWORD *)(a1 + 0xC), 0x100u, MultiByteStr, 0x100, v17, 0x100, *(_DWORD *)(a1 + 4)); /*0x98f751*/
    __crtLCMapStringA(0, *(_DWORD *)(a1 + 0xC), 0x200u, MultiByteStr, 0x100, v16, 0x100, *(_DWORD *)(a1 + 4)); /*0x98f776*/
    v7 = 0; /*0x98f77e*/
    while ( 1 ) /*0x98f780*/
    {
      v8 = CharType[v7]; /*0x98f780*/
      if ( (v8 & 1) != 0 ) /*0x98f788*/
      {
        *(_BYTE *)(a1 + v7 + 0x1D) |= 0x10u; /*0x98f78a*/
        v9 = v17[v7]; /*0x98f78f*/
      }
      else
      {
        if ( (v8 & 2) == 0 ) /*0x98f79b*/
        {
          *(_BYTE *)(a1 + v7 + 0x11D) = 0; /*0x98f7b2*/
          goto LABEL_16; /*0x98f7b2*/
        }
        *(_BYTE *)(a1 + v7 + 0x1D) |= 0x20u; /*0x98f79d*/
        v9 = v16[v7]; /*0x98f7a2*/
      }
      *(_BYTE *)(a1 + v7 + 0x11D) = v9; /*0x98f7a9*/
LABEL_16:
      if ( (unsigned int)++v7 >= 0x100 ) /*0x98f7bd*/
        return; /*0x98f7bd*/
    }
  }
  v10 = 0; /*0x98f7ce*/
  v13 = 0xFFFFFF9F - (a1 + 0x11D); /*0x98f7d0*/
  do /*0x98f80c*/
  {
    v11 = (_BYTE *)(a1 + v10 + 0x11D); /*0x98f7d6*/
    if ( (unsigned int)&v11[v13 + 0x20] <= 0x19 ) /*0x98f7e5*/
    {
      *(_BYTE *)(a1 + v10 + 0x1D) |= 0x10u; /*0x98f7e7*/
      v12 = v10 + 0x20; /*0x98f7ee*/
LABEL_23:
      *v11 = v12; /*0x98f802*/
      goto LABEL_25; /*0x98f804*/
    }
    if ( (unsigned int)&v11[v13] <= 0x19 ) /*0x98f7f6*/
    {
      *(_BYTE *)(a1 + v10 + 0x1D) |= 0x20u; /*0x98f7f8*/
      v12 = v10 - 0x20; /*0x98f7ff*/
      goto LABEL_23; /*0x98f7ff*/
    }
    *v11 = 0; /*0x98f806*/
LABEL_25:
    ++v10; /*0x98f809*/
  }
  while ( v10 < 0x100 ); /*0x98f80c*/
}
