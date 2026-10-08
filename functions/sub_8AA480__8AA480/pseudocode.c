void __thiscall sub_8AA480(unsigned int *this, unsigned int a2)
{
  double v4; // st7
  unsigned int v5; // edx
  unsigned int v6; // ebx
  float *v7; // ecx
  unsigned int v8; // ebp
  void *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  bool v12; // zf
  int v13; // ecx
  _DWORD *v14; // eax
  unsigned int v15; // ecx
  float v16; // ebp
  int v17; // edx
  float *v18; // eax
  float v19; // [esp+18h] [ebp-24h]
  float v20; // [esp+20h] [ebp-1Ch]
  float v21; // [esp+40h] [ebp+4h]
  unsigned int v22; // [esp+40h] [ebp+4h]

  if ( a2 != *(this + 2) )
  {
    v4 = kTerrainLODQuadRayDirectionZ; /*0x8aa4b9*/
    if ( a2 < *(this + 3) ) /*0x8aa4bf*/
    {
      v5 = 0xC * a2; /*0x8aa4d2*/
      v6 = a2; /*0x8aa4d4*/
      v21 = 0.0 / fCostant_100; /*0x8aa4d9*/
      do /*0x8aa54e*/
      {
        v7 = (float *)(v5 + *(this + 1)); /*0x8aa4e8*/
        if ( v4 != *v7 || v21 != v7[1] || v7[2] != v21 ) /*0x8aa514*/
        {
          v19 = v4; /*0x8aa51c*/
          *v7 = v19; /*0x8aa526*/
          v7[1] = v21; /*0x8aa538*/
          v7[2] = v21; /*0x8aa53f*/
          --*(this + 4); /*0x8aa542*/
        }
        ++v6; /*0x8aa545*/
        v5 += 0xC; /*0x8aa548*/
      }
      while ( v6 < *(this + 3) ); /*0x8aa54e*/
      *(this + 3) = a2; /*0x8aa552*/
    }
    v8 = *(this + 1); /*0x8aa559*/
    v22 = v8; /*0x8aa55c*/
    *(this + 2) = a2; /*0x8aa560*/
    if ( a2 )
    {
      v9 = (void *)FormHeapAlloc((0xC * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a2);
      v10 = (unsigned int)v9; /*0x8aa581*/
      if ( v9 ) /*0x8aa594*/
        sub_401080(v9, 0xC, a2, (void *(__thiscall *)(void *))sub_8AA460); /*0x8aa59f*/
      else
        v10 = 0; /*0x8aa5a6*/
      v11 = 0; /*0x8aa5a8*/
      v12 = *(this + 3) == 0; /*0x8aa5aa*/
      *(this + 1) = v10; /*0x8aa5ad*/
      if ( !v12 ) /*0x8aa5b0*/
      {
        v13 = 0; /*0x8aa5b2*/
        do /*0x8aa5d5*/
        {
          v14 = (_DWORD *)(v13 + *(this + 1)); /*0x8aa5ba*/
          *v14 = *(_DWORD *)(v13 + v8); /*0x8aa5bc*/
          v14[1] = *(_DWORD *)(v13 + v8 + 4); /*0x8aa5c2*/
          ++v11; /*0x8aa5c9*/
          v14[2] = *(_DWORD *)(v13 + v8 + 8); /*0x8aa5cc*/
          v13 += 0xC; /*0x8aa5cf*/
        }
        while ( v11 < *(this + 3) ); /*0x8aa5d5*/
      }
      v15 = *(this + 3); /*0x8aa5d7*/
      if ( v15 < *(this + 2) ) /*0x8aa5dd*/
      {
        v16 = kTerrainLODQuadRayDirectionZ; /*0x8aa5ec*/
        v17 = 0xC * v15; /*0x8aa5fa*/
        v20 = 0.0 / fCostant_100; /*0x8aa5fc*/
        do /*0x8aa626*/
        {
          v18 = (float *)(v17 + *(this + 1)); /*0x8aa613*/
          *v18 = v16; /*0x8aa615*/
          v18[1] = v20; /*0x8aa617*/
          ++v15; /*0x8aa61a*/
          v18[2] = v20; /*0x8aa61d*/
          v17 += 0xC; /*0x8aa620*/
        }
        while ( v15 < *(this + 2) ); /*0x8aa626*/
        v8 = v22; /*0x8aa628*/
      }
    }
    else
    {
      *(this + 1) = 0; /*0x8aa62e*/
    }
    FormHeapFree(v8); /*0x8aa636*/
  }
}
