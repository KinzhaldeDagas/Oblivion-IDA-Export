int __cdecl MagicTarget_ActiveEffectComparisonFunc(int a1, int a2)
{
  double v2; // st7
  int *v3; // esi
  int v4; // eax
  char v5; // bl
  const char **Name; // eax
  int *v7; // esi
  int v8; // edx
  double v9; // st7
  double v10; // st7
  char v11; // bl
  const char **v12; // eax
  int v14; // [esp+18h] [ebp-220h]
  int v15; // [esp+18h] [ebp-220h]
  int v16; // [esp+1Ch] [ebp-21Ch]
  int v17; // [esp+1Ch] [ebp-21Ch]
  BSStringT v18; // [esp+20h] [ebp-218h]
  BSStringT v19; // [esp+20h] [ebp-218h]
  float v20; // [esp+24h] [ebp-214h]
  int v21; // [esp+28h] [ebp-210h]
  float v22; // [esp+28h] [ebp-210h]
  int v23; // [esp+28h] [ebp-210h]
  float v24; // [esp+28h] [ebp-210h]
  int v25; // [esp+2Ch] [ebp-20Ch] BYREF
  int v26; // [esp+30h] [ebp-208h]
  unsigned __int8 v27[4]; // [esp+34h] [ebp-204h] BYREF
  BSStringT *v28; // [esp+38h] [ebp-200h]
  unsigned __int8 v29[256]; // [esp+134h] [ebp-104h] BYREF

  v2 = flt_A342A4; /*0x6a25fb*/
  v3 = *(int **)(a1 + 0xC); /*0x6a2603*/
  v4 = *(_DWORD *)(v3[7] + 0x58); /*0x6a2609*/
  if ( (v4 & 0x80) != 0 ) /*0x6a261c*/
    *(float *)&v18.m_dataLen = flt_A342A4; /*0x6a261e*/
  else
    *(float *)&v18.m_dataLen = *(float *)(a1 + 0x1C); /*0x6a2627*/
  if ( (v4 & 0x100) == 0 ) /*0x6a2630*/
    v2 = *(float *)(a1 + 0x18); /*0x6a2634*/
  if ( EffectItem_GetSchool(v3) )
  {
    if ( EffectItem_GetSchool(v3) == 1 )
    {
      v5 = 0x45; /*0x6a2656*/
    }
    else if ( EffectItem_GetSchool(v3) == 2 )
    {
      v5 = 0x41; /*0x6a2666*/
    }
    else if ( EffectItem_GetSchool(v3) == 3 )
    {
      v5 = 0x44; /*0x6a2676*/
    }
    else if ( EffectItem_GetSchool(v3) == 4 )
    {
      v5 = 0x46; /*0x6a2686*/
    }
    else
    {
      v5 = EffectItem_GetSchool(v3) != 5 ? 0x5A : 0x42;
    }
  }
  else
  {
    v5 = 0x43; /*0x6a2646*/
  }
  *(float *)&v21 = v2; /*0x6a2639*/
  Name = (const char **)EffectItem_GetName(v3, (int)&v25, v14, v16, v18, v21, v25, v26, *(int *)v27, v28); /*0x6a26a7*/
  _sprintf((char *)v29, "%c%.30s%.1f%.1f", v5, *Name, v22, *(float *)&v19.m_dataLen); /*0x6a26d2*/
  FormHeapFree(v25); /*0x6a26dc*/
  v7 = *(int **)(a2 + 0xC); /*0x6a26e1*/
  v8 = v7[7]; /*0x6a26e4*/
  if ( (*(_DWORD *)(v8 + 0x58) & 0x80) != 0 ) /*0x6a26f5*/
    v9 = flt_A342A4; /*0x6a26f7*/
  else
    v9 = *(float *)(a2 + 0x1C); /*0x6a26ff*/
  *(float *)&v23 = v9; /*0x6a2705*/
  if ( (*(_DWORD *)(v8 + 0x58) & 0x100) != 0 ) /*0x6a270b*/
    v10 = flt_A342A4; /*0x6a270d*/
  else
    v10 = *(float *)(a2 + 0x18); /*0x6a2715*/
  if ( EffectItem_GetSchool(v7) )
  {
    if ( EffectItem_GetSchool(v7) == 1 )
    {
      v11 = 0x45; /*0x6a2737*/
    }
    else if ( EffectItem_GetSchool(v7) == 2 )
    {
      v11 = 0x41; /*0x6a2747*/
    }
    else if ( EffectItem_GetSchool(v7) == 3 )
    {
      v11 = 0x44; /*0x6a2757*/
    }
    else if ( EffectItem_GetSchool(v7) == 4 )
    {
      v11 = 0x46; /*0x6a2767*/
    }
    else
    {
      v11 = EffectItem_GetSchool(v7) != 5 ? 0x5A : 0x42;
    }
  }
  else
  {
    v11 = 0x43; /*0x6a2727*/
  }
  *(float *)&v19.m_dataLen = v10; /*0x6a271a*/
  v12 = (const char **)EffectItem_GetName(v7, (int)&v25, v15, v17, v19, v23, v25, v26, *(int *)v27, v28); /*0x6a2788*/
  _sprintf((char *)v27, "%c%.30s%.1f%.1f", v11, *v12, v20, v24); /*0x6a27b0*/
  FormHeapFree(v25); /*0x6a27ba*/
  return _mbsicmp(v29, v27); /*0x6a27db*/
}
