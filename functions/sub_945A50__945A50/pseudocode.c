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

  v1.LowPart = stru_BA94F0[0].LowPart; /*0x945a59*/
  if ( !stru_BA94F0[0].QuadPart ) /*0x945a68*/
  {
    v9 = 0xA; /*0x945a7a*/
    v10 = kTerrainLODQuadRayStartZOffset; /*0x945a82*/
    do /*0x945b6c*/
    {
      v3 = ((__int64 (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 8))(this); /*0x945a94*/
      v16 = HIDWORD(v3); /*0x945a94*/
      QueryPerformanceCounter(&PerformanceCount); /*0x945a98*/
      v8 = 1; /*0x945a9e*/
      v4 = 0x1388; /*0x945aa6*/
      do /*0x945ac4*/
      {
        --v4; /*0x945abf*/
        v8 += v8 * v8; /*0x945ac0*/
      }
      while ( v4 ); /*0x945ac4*/
      v5 = ((__int64 (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 8))(this); /*0x945ad4*/
      QueryPerformanceCounter(&v11); /*0x945ad6*/
      QueryPerformanceFrequency(stru_BA94F0); /*0x945ae1*/
      v13 = v11.LowPart - PerformanceCount.LowPart; /*0x945b26*/
      v14 = ((unsigned __int64)(v11.QuadPart - PerformanceCount.QuadPart) >> 0x20) & 0x7FFFFFFF; /*0x945b3b*/
      v15 = (v11.QuadPart - PerformanceCount.QuadPart) & 0x8000000000000000uLL; /*0x945b43*/
      if ( (double)(v5 - __PAIR64__(v16, v3)) / (double)(unsigned __int64)(v11.QuadPart - PerformanceCount.QuadPart) < v10 ) /*0x945b5e*/
        v10 = (double)(v5 - __PAIR64__(v16, v3)) / (double)(unsigned __int64)(v11.QuadPart - PerformanceCount.QuadPart); /*0x945b60*/
      --v9; /*0x945b68*/
    }
    while ( v9 ); /*0x945b6c*/
    HighPart = stru_BA94F0[0].HighPart; /*0x945b7d*/
    LODWORD(v15) = stru_BA94F0[0].LowPart; /*0x945b7f*/
    v1.QuadPart = (unsigned __int64)((double)__PAIR64__(HighPart, v15) * v10); /*0x945bae*/
    stru_BA94F0[0] = v1; /*0x945bb3*/
  }
  return v1.LowPart; /*0x945bbe*/
}
