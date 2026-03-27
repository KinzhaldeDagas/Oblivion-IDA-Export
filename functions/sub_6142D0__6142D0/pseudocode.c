void __thiscall sub_6142D0(_DWORD *this, float a2, float a3)
{
  float *v3; // ebx
  float *v4; // edi
  double v6; // st7
  bool v7; // zf
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *FXEffect; // eax
  int ProjectileType; // eax
  _DWORD **v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int *v16; // eax
  int *v17; // eax
  double v18; // st7
  double v19; // st5
  double v20; // st5
  float v21; // [esp+Ch] [ebp-10h] BYREF
  float v22; // [esp+10h] [ebp-Ch] BYREF
  float v23; // [esp+14h] [ebp-8h]
  float v24; // [esp+18h] [ebp-4h]

  v3 = (float *)LODWORD(a3);
  v4 = (float *)LODWORD(a2);
  *(float *)LODWORD(a2) = flt_A342A4;
  v6 = flt_A342A0;
  *v3 = flt_A342A0;
  v7 = *(this + 0x1C) == 2;
  v21 = *v4;
  v22 = v6;
  a2 = *v4;
  a3 = v6;
  if ( v7 )
  {
    v8 = *(this + 0xF);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 0x58);
      if ( v9 )
      {
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1) )
        {
          if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 0xF) + 0x58) + 0xEC))(
                             *(_DWORD *)(*(this + 0xF) + 0x58),
                             1)
                         + 8) )
          {
            if ( *(_BYTE *)(sub_612D60(this) + 0x90) == 4 )
              v10 = *(_DWORD *)(sub_612D60(this) + 0x64);
            else
              v10 = 0;
            if ( v10 )
            {
              FXEffect = (_DWORD *)MagicItem_GetFXEffect((_DWORD *)(v10 + 0x18), 2);
              if ( FXEffect )
              {
                ProjectileType = EffectSetting_GetProjectileType(FXEffect);
                Magic_GetProjectileDistances(ProjectileType, &a2, &a3);
              }
            }
            else
            {
              a2 = fArrowOptimalDistance;
              a3 = fArrowMaxDistance;
            }
          }
        }
      }
    }
  }
  v13 = (_DWORD **)*(this + 0x20);
  if ( v13 && *v13 )
  {
    v14 = (_DWORD *)MagicItem_GetFXEffect(*v13, 2);
    if ( v14 )
    {
      v15 = EffectSetting_GetProjectileType(v14);
      Magic_GetProjectileDistances(v15, &v21, &v22);
    }
  }
  else
  {
    v21 = a2;
    v22 = a3;
  }
  v16 = sub_5E0F50((void *)*(this + 0xF));
  v23 = ((double (__thiscall *)(int *))*(_DWORD *)(*v16 + 0x144))(v16);
  v17 = sub_5E0F50((void *)*(this + 0xF));
  v24 = ((double (__thiscall *)(int *))*(_DWORD *)(*v17 + 0x148))(v17);
  v18 = a2;
  if ( v21 <= (double)a2 )
    v18 = v21;
  v21 = v18;
  v19 = 1.0;
  if ( v23 != 0.0 )
    v19 = v23;
  a2 = v19;
  *v4 = a2 * v21;
  v20 = a3;
  if ( v22 <= (double)a3 )
    v20 = v22;
  a3 = v20;
  if ( v24 == 0.0 )
    a2 = 1.0;
  else
    a2 = v24;
  *v3 = a2 * a3;
}
