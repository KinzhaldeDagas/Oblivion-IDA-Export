DWORD __thiscall sub_945A50(void *this)
{
  LARGE_INTEGER v1; // rax
  __int64 v3; // kr00_8
  int v4; // eax
  __int64 v5; // kr08_8
  LONG HighPart; // ecx
  int v8; // [esp+10h] [ebp-48h]
  int v9; // [esp+14h] [ebp-44h]
  double v10; // [esp+18h] [ebp-40h]
  LARGE_INTEGER v11; // [esp+30h] [ebp-28h] BYREF
  LARGE_INTEGER PerformanceCount; // [esp+38h] [ebp-20h] BYREF
  DWORD v13; // [esp+40h] [ebp-18h]
  int v14; // [esp+44h] [ebp-14h]
  unsigned __int64 v15; // [esp+48h] [ebp-10h]
  unsigned int v16; // [esp+54h] [ebp-4h]

  v1.LowPart = stru_BA94F0.LowPart;
  if ( !stru_BA94F0.QuadPart )
  {
    v9 = 0xA;
    v10 = dbl_A47CA8;
    do
    {
      v3 = ((__int64 (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 8))(this);
      v16 = HIDWORD(v3);
      QueryPerformanceCounter(&PerformanceCount);
      v8 = 1;
      v4 = 0x1388;
      do
      {
        --v4;
        v8 += v8 * v8;
      }
      while ( v4 );
      v5 = ((__int64 (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 8))(this);
      QueryPerformanceCounter(&v11);
      QueryPerformanceFrequency(&stru_BA94F0);
      v13 = v11.LowPart - PerformanceCount.LowPart;
      v14 = ((unsigned __int64)(v11.QuadPart - PerformanceCount.QuadPart) >> 0x20) & 0x7FFFFFFF;
      v15 = (v11.QuadPart - PerformanceCount.QuadPart) & 0x8000000000000000uLL;
      if ( (double)(v5 - __PAIR64__(v16, v3)) / (double)(unsigned __int64)(v11.QuadPart - PerformanceCount.QuadPart) < v10 )
        v10 = (double)(v5 - __PAIR64__(v16, v3)) / (double)(unsigned __int64)(v11.QuadPart - PerformanceCount.QuadPart);
      --v9;
    }
    while ( v9 );
    HighPart = stru_BA94F0.HighPart;
    LODWORD(v15) = stru_BA94F0.LowPart;
    v1.QuadPart = (unsigned __int64)((double)__PAIR64__(HighPart, v15) * v10);
    stru_BA94F0 = v1;
  }
  return v1.LowPart;
}
