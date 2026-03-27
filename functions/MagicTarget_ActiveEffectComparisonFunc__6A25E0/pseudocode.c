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
  int v18; // [esp+20h] [ebp-218h]
  int v19; // [esp+20h] [ebp-218h]
  float v20; // [esp+24h] [ebp-214h]
  float v21; // [esp+24h] [ebp-214h]
  int v22; // [esp+24h] [ebp-214h]
  float v23; // [esp+24h] [ebp-214h]
  int v24; // [esp+28h] [ebp-210h]
  float v25; // [esp+28h] [ebp-210h]
  int v26; // [esp+28h] [ebp-210h]
  float v27; // [esp+28h] [ebp-210h]
  int v28; // [esp+2Ch] [ebp-20Ch] BYREF
  int v29; // [esp+30h] [ebp-208h]
  unsigned __int8 v30[4]; // [esp+34h] [ebp-204h] BYREF
  int v31; // [esp+38h] [ebp-200h]
  unsigned __int8 v32[256]; // [esp+134h] [ebp-104h] BYREF

  v2 = flt_A342A4;
  v3 = *(int **)(a1 + 0xC);
  v4 = *(_DWORD *)(v3[7] + 0x58);
  if ( (v4 & 0x80) != 0 )
    v20 = flt_A342A4;
  else
    v20 = *(float *)(a1 + 0x1C);
  if ( (v4 & 0x100) == 0 )
    v2 = *(float *)(a1 + 0x18);
  if ( EffectItem_GetSchool(v3) )
  {
    if ( EffectItem_GetSchool(v3) == 1 )
    {
      v5 = 0x45;
    }
    else if ( EffectItem_GetSchool(v3) == 2 )
    {
      v5 = 0x41;
    }
    else if ( EffectItem_GetSchool(v3) == 3 )
    {
      v5 = 0x44;
    }
    else if ( EffectItem_GetSchool(v3) == 4 )
    {
      v5 = 0x46;
    }
    else
    {
      v5 = EffectItem_GetSchool(v3) != 5 ? 0x5A : 0x42;
    }
  }
  else
  {
    v5 = 0x43;
  }
  *(float *)&v24 = v2;
  Name = (const char **)EffectItem_GetName(v3, (int)&v28, v14, v16, v18, SLODWORD(v20), v24, v28, v29, *(int *)v30, v31);
  _sprintf((char *)v32, "%c%.30s%.1f%.1f", v5, *Name, v25, v21);
  FormHeapFree(v28);
  v7 = *(int **)(a2 + 0xC);
  v8 = v7[7];
  if ( (*(_DWORD *)(v8 + 0x58) & 0x80) != 0 )
    v9 = flt_A342A4;
  else
    v9 = *(float *)(a2 + 0x1C);
  *(float *)&v26 = v9;
  if ( (*(_DWORD *)(v8 + 0x58) & 0x100) != 0 )
    v10 = flt_A342A4;
  else
    v10 = *(float *)(a2 + 0x18);
  if ( EffectItem_GetSchool(v7) )
  {
    if ( EffectItem_GetSchool(v7) == 1 )
    {
      v11 = 0x45;
    }
    else if ( EffectItem_GetSchool(v7) == 2 )
    {
      v11 = 0x41;
    }
    else if ( EffectItem_GetSchool(v7) == 3 )
    {
      v11 = 0x44;
    }
    else if ( EffectItem_GetSchool(v7) == 4 )
    {
      v11 = 0x46;
    }
    else
    {
      v11 = EffectItem_GetSchool(v7) != 5 ? 0x5A : 0x42;
    }
  }
  else
  {
    v11 = 0x43;
  }
  *(float *)&v22 = v10;
  v12 = (const char **)EffectItem_GetName(v7, (int)&v28, v15, v17, v19, v22, v26, v28, v29, *(int *)v30, v31);
  _sprintf((char *)v30, "%c%.30s%.1f%.1f", v11, *v12, v23, v27);
  FormHeapFree(v28);
  return _mbsicmp(v32, v30);
}
