bool __thiscall sub_699EB0(MagicCaster *this, int arg0, int arg4)
{
  int v4; // eax
  int v5; // eax
  TESChildCELL *v6; // ebx
  int *v7; // eax
  double v8; // st7
  int *v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  float v16; // [esp+0h] [ebp-24h]
  float a2; // [esp+4h] [ebp-20h]
  float a2a; // [esp+4h] [ebp-20h]
  float v19; // [esp+18h] [ebp-Ch]
  Actor *a3; // [esp+1Ch] [ebp-8h]
  float Health; // [esp+20h] [ebp-4h]
  float v22; // [esp+28h] [ebp+4h]

  if ( !arg0 )
    return 0;
  if ( !arg4 )
    return 0;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0) )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x190))(v4) )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x154))(v5) )
    return 0;
  if ( !EffectItemList_HasHostile((_DWORD *)(arg4 + 0xC)) )
    return 0;
  a3 = MagicCaster_GetParentActor(this);
  v6 = (TESChildCELL *)(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0);
  Health = TESObjectREFR_GetHealth(v6);
  v7 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 8))(arg0);
  v8 = 0.0;
  v19 = 0.0;
  if ( v7 )
  {
    do
    {
      v9 = (int *)v7[1];
      if ( !v9 && !*v7 )
        break;
      v10 = *v7;
      if ( *v7 )
      {
        if ( *(_DWORD *)(v10 + 8) == arg4 )
        {
          v11 = *(_DWORD *)(v10 + 0xC);
          v12 = *(_DWORD *)(v11 + 0x1C);
          v13 = *(_DWORD *)(v12 + 0x58);
          if ( (v13 & 0x1000000) != 0 )
            v14 = *(_DWORD *)(v12 + 0x60);
          else
            v14 = *(_DWORD *)(v11 + 0x14);
          if ( v14 == 8 && (v13 & 4) != 0 && (v13 & 2) == 0 )
          {
            v22 = *(float *)(v10 + 0x18);
            if ( v8 < *(float *)(v10 + 0x1C) )
            {
              v16 = v8;
              a2 = Min_Float(v16, *(float *)(v10 + 0x1C));
              v22 = sub_4AC760(flt_A46B10, a2) * v22;
              v8 = 0.0;
            }
            v19 = v22 + v19;
          }
        }
      }
      v7 = v9;
    }
    while ( v9 );
  }
  a2a = -v19;
  return Health <= -Actor_AdjustDmgByDifficulty((Actor *)v6, a2a, a3);
}
