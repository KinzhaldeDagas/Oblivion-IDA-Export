int __thiscall sub_6D07B0(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // edi
  _DWORD *v6; // ecx
  float **v7; // eax
  float v8; // eax
  unsigned int v9; // ecx
  float v10; // edx
  int result; // eax
  unsigned __int64 v12; // [esp+Ch] [ebp-20h] BYREF
  float v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+18h] [ebp-14h]
  float v15[4]; // [esp+1Ch] [ebp-10h] BYREF

  v2 = *(this + 0x14); /*0x6d07b7*/
  v3 = *(_DWORD *)(v2 + 8); /*0x6d07ba*/
  if ( v3 ) /*0x6d07c0*/
  {
    NiSphere_ComputeFromVertices((float *)&v12, *(_DWORD *)(v2 + 0xC), **(float ***)(v2 + 0x10)); /*0x6d07d6*/
    v4 = 1; /*0x6d07db*/
    if ( v3 > 1 ) /*0x6d07e2*/
    {
      v5 = 0xC; /*0x6d07e5*/
      do /*0x6d0827*/
      {
        v6 = (_DWORD *)*(this + 0x14); /*0x6d07f0*/
        if ( v4 >= v6[2] ) /*0x6d07f6*/
          v7 = 0; /*0x6d07ff*/
        else
          v7 = (float **)(v5 + v6[4]); /*0x6d07fb*/
        NiSphere_ComputeFromVertices(v15, v6[3], *v7); /*0x6d080c*/
        NiSphere_Merge((float *)&v12, v15); /*0x6d081a*/
        ++v4; /*0x6d081f*/
        v5 += 0xC; /*0x6d0822*/
      }
      while ( v4 < v3 ); /*0x6d0827*/
    }
  }
  else
  {
    v8 = g_zeroNiPoint3; /*0x6d082e*/
    v9 = *((_DWORD *)&g_zeroNiPoint3 + 1); /*0x6d0833*/
    v14 = 0.0; /*0x6d0839*/
    v10 = MEMORY[0xB3F9B0][0]; /*0x6d083d*/
    v12 = __PAIR64__(v9, LODWORD(v8)); /*0x6d0843*/
    v13 = v10; /*0x6d084b*/
  }
  result = *(_DWORD *)(*(this + 0xC) + 0xB4) + 0xC; /*0x6d085c*/
  *(_QWORD *)result = v12; /*0x6d085f*/
  *(float *)(result + 8) = v13; /*0x6d086d*/
  *(float *)(result + 0xC) = v14; /*0x6d0875*/
  return result; /*0x6d086c*/
}
