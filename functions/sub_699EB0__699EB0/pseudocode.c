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
  float a; // [esp+0h] [ebp-24h]
  float a2; // [esp+4h] [ebp-20h]
  float a2a; // [esp+4h] [ebp-20h]
  float v19; // [esp+18h] [ebp-Ch]
  Actor *a3; // [esp+1Ch] [ebp-8h]
  float Health; // [esp+20h] [ebp-4h]
  float v22; // [esp+28h] [ebp+4h]

  if ( !arg0 ) /*0x699ebe*/
    return 0; /*0x699ebe*/
  if ( !arg4 ) /*0x699eca*/
    return 0; /*0x699eca*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0) ) /*0x699ed7*/
    return 0; /*0x699ed7*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0); /*0x699ee8*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x190))(v4) ) /*0x699ef4*/
    return 0; /*0x699ef4*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0); /*0x699f05*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x154))(v5) ) /*0x699f11*/
    return 0; /*0x699f11*/
  if ( !EffectItemList_HasHostile((_DWORD *)(arg4 + 0xC)) ) /*0x699f1e*/
    return 0; /*0x699f1e*/
  a3 = MagicCaster_GetParentActor(this); /*0x699f34*/
  v6 = (TESChildCELL *)(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0); /*0x699f3f*/
  Health = TESObjectREFR_GetHealth(v6); /*0x699f48*/
  v7 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 8))(arg0); /*0x699f53*/
  v8 = 0.0; /*0x699f55*/
  v19 = 0.0; /*0x699f59*/
  if ( v7 ) /*0x699f5d*/
  {
    do /*0x69a00e*/
    {
      v9 = (int *)v7[1]; /*0x699f64*/
      if ( !v9 && !*v7 ) /*0x699f6b*/
        break; /*0x699f6d*/
      v10 = *v7; /*0x699f73*/
      if ( *v7 ) /*0x699f73*/
      {
        if ( *(_DWORD *)(v10 + 8) == arg4 ) /*0x699f84*/
        {
          v11 = *(_DWORD *)(v10 + 0xC); /*0x699f8a*/
          v12 = *(_DWORD *)(v11 + 0x1C); /*0x699f8d*/
          v13 = *(_DWORD *)(v12 + 0x58); /*0x699f90*/
          if ( (v13 & 0x1000000) != 0 ) /*0x699f9b*/
            v14 = *(_DWORD *)(v12 + 0x60); /*0x699f9d*/
          else
            v14 = *(_DWORD *)(v11 + 0x14); /*0x699fa2*/
          if ( v14 == 8 && (v13 & 4) != 0 && (v13 & 2) == 0 ) /*0x699fba*/
          {
            v22 = *(float *)(v10 + 0x18); /*0x699fbf*/
            if ( v8 < *(float *)(v10 + 0x1C) ) /*0x699fcb*/
            {
              a = v8; /*0x699fd7*/
              a2 = Min_Float(a, *(float *)(v10 + 0x1C)); /*0x699fdf*/
              v22 = Float_Min(flt_A46B10, a2) * v22; /*0x699ff8*/
              v8 = 0.0; /*0x699ffc*/
            }
            v19 = v22 + v19; /*0x69a006*/
          }
        }
      }
      v7 = v9; /*0x69a00a*/
    }
    while ( v9 ); /*0x69a00e*/
  }
  a2a = -v19; /*0x69a025*/
  return Health <= -Actor_AdjustDmgByDifficulty((Actor *)v6, a2a, a3); /*0x69a03e*/
}
