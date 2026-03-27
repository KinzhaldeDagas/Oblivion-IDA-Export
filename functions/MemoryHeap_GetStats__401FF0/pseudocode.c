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

  _memset(a2, 0, 0x54);
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)&aMemoryheapGets);
  if ( a3 )
  {
    v4 = *(this + 8);
    if ( v4 )
    {
      v5 = *(this + 9);
      do
      {
        v6 = *(_DWORD *)(v4 + 4) & 0xFFFFFFF;
        v7 = v6 + 8;
        if ( (*(_DWORD *)(v4 + 4) & 0x40000000) != 0 )
        {
          a2[9] += v7;
          if ( v6 > a2[0xB] )
            a2[0xB] = v6;
          ++a2[4];
        }
        else
        {
          a2[0xA] += v7;
          if ( v6 > a2[0xC] )
            a2[0xC] = v6;
        }
        ++a2[3];
        if ( v4 == v5 )
          break;
        v4 += v6 + 8;
      }
      while ( v4 );
    }
    a2[0xF] = 0;
  }
  else
  {
    v8 = *(this + 7);
    a2[4] = *(this + 0xA);
    a2[3] = v8;
  }
  v9 = *(this + 3);
  v10 = 4 * a2[3];
  a2[5] = *(this + 0xB);
  v11 = *(this + 4);
  *a2 = v9;
  v12 = *(this + 0x13);
  a2[0xD] = 2 * v10;
  v13 = *(this + 5);
  a2[1] = v11;
  v14 = *(this + 0x14);
  a2[7] = v12;
  v15 = *(this + 0xC);
  a2[2] = v13;
  v16 = *(this + 0x12);
  a2[8] = v14;
  a2[6] = v16;
  a2[0xE] = 8 * v15 + 0x80;
  NiLeaveCriticalSection_0(&HeapCriticalSection);
  GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer);
  dwAvailPhys = Buffer.dwAvailPhys;
  if ( Buffer.dwAvailPhys < *(this + 0x15) )
    *(this + 0x15) = Buffer.dwAvailPhys;
  dwTotalPhys = Buffer.dwTotalPhys;
  a2[0x11] = Buffer.dwTotalPhys;
  v19 = dwTotalPhys - *(this + 0x15);
  v20 = *((_BYTE *)this + 0x16C) == 0;
  a2[0x10] = dwTotalPhys - dwAvailPhys;
  a2[0x12] = v19;
  if ( v20 )
  {
    for ( i = 0; i < 0x81; i += 3 )
    {
      v22 = g_HeapPoolsBySize[i];
      if ( v22 )
        a2[0x13] += *(_DWORD *)(v22 + 0x118) << 0xC;
      v23 = dword_B33084[i];
      if ( v23 )
        a2[0x13] += *(_DWORD *)(v23 + 0x118) << 0xC;
      v24 = dword_B33088[i];
      if ( v24 )
        a2[0x13] += *(_DWORD *)(v24 + 0x118) << 0xC;
    }
  }
  return a2;
}
