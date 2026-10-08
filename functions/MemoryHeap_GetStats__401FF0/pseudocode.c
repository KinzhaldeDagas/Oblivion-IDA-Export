_DWORD *__thiscall MemoryHeap_GetStats(_DWORD *this, _DWORD *a2, char a3)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  DWORD dwAvailPhys; // ecx
  DWORD dwTotalPhys; // edx
  DWORD v19; // eax
  bool v20; // zf
  unsigned int i; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  struct _MEMORYSTATUS Buffer; // [esp+8h] [ebp-20h] BYREF

  _memset((int)a2, 0, 0x54u); /*0x402000*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)&aMemoryheapGets); /*0x402012*/
  if ( a3 ) /*0x40201c*/
  {
    v4 = *(this + 8); /*0x40201e*/
    if ( v4 ) /*0x402023*/
    {
      v5 = *(this + 9); /*0x402026*/
      do /*0x40206c*/
      {
        v6 = *(_DWORD *)(v4 + 4) & 0xFFFFFFF; /*0x402038*/
        v7 = v6 + 8; /*0x40203f*/
        if ( (*(_DWORD *)(v4 + 4) & 0x40000000) != 0 ) /*0x402042*/
        {
          a2[9] += v7; /*0x402044*/
          if ( v6 > a2[0xB] ) /*0x40204a*/
            a2[0xB] = v6; /*0x40204c*/
          ++a2[4]; /*0x40204f*/
        }
        else
        {
          a2[0xA] += v7; /*0x402054*/
          if ( v6 > a2[0xC] ) /*0x40205a*/
            a2[0xC] = v6; /*0x40205c*/
        }
        ++a2[3]; /*0x40205f*/
        if ( v4 == v5 ) /*0x402064*/
          break; /*0x402064*/
        v4 += v6 + 8; /*0x402066*/
      }
      while ( v4 ); /*0x40206c*/
    }
    a2[0xF] = 0; /*0x402070*/
  }
  else
  {
    v8 = *(this + 7); /*0x40207c*/
    a2[4] = *(this + 0xA); /*0x40207f*/
    a2[3] = v8; /*0x402082*/
  }
  v9 = *(this + 3); /*0x40208b*/
  v10 = 4 * a2[3]; /*0x402090*/
  a2[5] = *(this + 0xB); /*0x402092*/
  v11 = *(this + 4); /*0x402095*/
  *a2 = v9; /*0x40209a*/
  v12 = *(this + 0x13); /*0x40209c*/
  a2[0xD] = 2 * v10; /*0x40209f*/
  v13 = *(this + 5); /*0x4020a2*/
  a2[1] = v11; /*0x4020a5*/
  v14 = *(this + 0x14); /*0x4020a8*/
  a2[7] = v12; /*0x4020ab*/
  v15 = *(this + 0xC); /*0x4020ae*/
  a2[2] = v13; /*0x4020b1*/
  v16 = *(this + 0x12); /*0x4020b4*/
  a2[8] = v14; /*0x4020b7*/
  a2[6] = v16; /*0x4020c6*/
  a2[0xE] = 8 * v15 + 0x80; /*0x4020c9*/
  NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x4020cc*/
  GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer); /*0x4020d6*/
  dwAvailPhys = Buffer.dwAvailPhys; /*0x4020dc*/
  if ( Buffer.dwAvailPhys < *(this + 0x15) ) /*0x4020e3*/
    *(this + 0x15) = Buffer.dwAvailPhys; /*0x4020e5*/
  dwTotalPhys = Buffer.dwTotalPhys; /*0x4020ec*/
  a2[0x11] = Buffer.dwTotalPhys; /*0x4020ee*/
  v19 = dwTotalPhys - *(this + 0x15); /*0x4020f1*/
  v20 = *((_BYTE *)this + 0x16C) == 0; /*0x4020f6*/
  a2[0x10] = dwTotalPhys - dwAvailPhys; /*0x4020fd*/
  a2[0x12] = v19; /*0x402100*/
  if ( v20 ) /*0x402103*/
  {
    for ( i = 0; i < 0x81; i += 3 ) /*0x402105*/
    {
      v22 = MEMORY[0xB33080][i]; /*0x402110*/
      if ( v22 ) /*0x402118*/
        a2[0x13] += *(_DWORD *)(v22 + 0x118) << 0xC; /*0x402123*/
      v23 = unk_B33084[i]; /*0x402126*/
      if ( v23 ) /*0x40212e*/
        a2[0x13] += *(_DWORD *)(v23 + 0x118) << 0xC; /*0x402139*/
      v24 = unk_B33088[i]; /*0x40213c*/
      if ( v24 ) /*0x402144*/
        a2[0x13] += *(_DWORD *)(v24 + 0x118) << 0xC; /*0x40214f*/
    }
  }
  return a2; /*0x40215c*/
}
