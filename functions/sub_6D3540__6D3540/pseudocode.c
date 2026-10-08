// Guarantees authored keys at both requested boundaries using the registered content/type insertion function. For Euler rotation type 4, recursively updates all three scalar axes and refreshes axis stride/cursor metadata. Unlike range cloning, this operation may synthesize evaluated boundary keys.
void __cdecl NiAnimationKey_GuaranteeTimeRange(int a1, int a2, float **a3, _DWORD *a4, float a5, float a6)
{
  int v6; // ecx
  float *v7; // edi
  unsigned int i; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // edi
  float **v13; // ebx
  void (__cdecl *v14)(_DWORD, float **, _DWORD *); // esi
  int v15; // [esp+18h] [ebp-4h] BYREF

  v15 = v6; /*0x6d3540*/
  if ( a2 == 4 ) /*0x6d354b*/
  {
    v7 = *a3; /*0x6d3551*/
    for ( i = 0; i < 3; ++i ) /*0x6d3553*/
    {
      v9 = (unsigned __int8)i; /*0x6d3556*/
      v10 = LODWORD(v7[(unsigned __int8)i + 5]); /*0x6d3559*/
      v11 = LODWORD(v7[(unsigned __int8)i + 8]); /*0x6d3563*/
      v15 = LODWORD(v7[(unsigned __int8)i + 0xC]); /*0x6d3567*/
      a2 = v10; /*0x6d356b*/
      if ( v10 ) /*0x6d356f*/
      {
        NiAnimationKey_GuaranteeTimeRange(0, v11, (float **)&v15, &a2, a5, a6); /*0x6d3590*/
        v10 = a2; /*0x6d3595*/
      }
      LODWORD(v7[(unsigned __int8)i + 0xC]) = v15; /*0x6d35a0*/
      LODWORD(v7[(unsigned __int8)i + 5]) = v10; /*0x6d35a4*/
      LODWORD(v7[(unsigned __int8)i + 8]) = v11; /*0x6d35a8*/
      v7[(unsigned __int8)i + 0xF] = 0.0; /*0x6d35ac*/
      *((_BYTE *)v7 + v9 + 0x2C) = byte_B3D3E8[v11]; /*0x6d35c0*/
    }
  }
  else
  {
    v12 = a4; /*0x6d35d4*/
    v13 = a3; /*0x6d35db*/
    v14 = *(void (__cdecl **)(_DWORD, float **, _DWORD *))(4 * (a2 + 6 * a1) + 0xB3D1A8); /*0x6d35e5*/
    if ( *a4 != 1 || a5 != **a3 ) /*0x6d35fb*/
    {
      v14(LODWORD(a5), a3, a4); /*0x6d3603*/
      v14(LODWORD(a6), v13, v12); /*0x6d3612*/
    }
  }
}
