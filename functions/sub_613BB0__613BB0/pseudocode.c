char __thiscall sub_613BB0(_DWORD *this, int *a2, int a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // [esp-8h] [ebp-28h]
  double v11; // [esp+4h] [ebp-1Ch]
  char v12; // [esp+14h] [ebp-Ch]
  char v13; // [esp+18h] [ebp-8h]

  if ( !a2 /*0x613be1*/
    || !*a2
    || !CombatController_GetCurrentTarget((int)this)
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(this + 0xF) + 0x5C) + 0x1C))(
          *(this + 0xF) + 0x5C,
          *a2,
          0,
          0,
          0) )
  {
    return sub_613BE7((int)a2, a3, a4); /*0x613be5*/
  }
  if ( !EffectItemList_HasHostile((_DWORD *)(*a2 + 0xC)) )// Spell viability first accepts non-hostile effects; hostile spells receive target-specific duplicate/control/area/projectile checks. /*0x613bf6*/
    return 1; /*0x613c00*/
  if ( EffectItemList_HasEffect((_DWORD *)(*a2 + 0xC), 0x41524150, 0x48) )// PARA (0x41524150): reject redundant paralysis when the current target is already paralyzed. /*0x613c15*/
  {
    v6 = CombatController_GetCurrentTarget((int)this); /*0x613c20*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x1A0))(v6) ) /*0x613c2f*/
      return sub_613BE7((int)a2, a3, a4); /*0x613c2f*/
  }
  if ( EffectItemList_HasEffect((_DWORD *)(*a2 + 0xC), 0x434E4C53, 0x48) )// SLNC (0x434E4C53): reject redundant silence when target actor value 0x31 is already positive. /*0x613c41*/
  {
    v7 = CombatController_GetCurrentTarget((int)this); /*0x613c4c*/
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x284))(v7, 0x31) > 0 ) /*0x613c61*/
      return sub_613BE7((int)a2, a3, a4); /*0x613c61*/
  }
  v10 = *a2; /*0x613c65*/
  v8 = CombatController_GetCurrentTarget((int)this); /*0x613c68*/
  if ( (unsigned __int8)MagicTarget_HasMagicItem((void *)(v8 + 0x68), v10) ) /*0x613c72*/
    return sub_613BE7((int)a2, a3, a4); /*0x613c72*/
  if ( v12 && EffectItemList_HasAreaEffect((_DWORD *)(*a2 + 0xC)) ) /*0x613c8a*/
    return sub_613BE7((int)a2, a3, a4);         // Area-effect presence is a distinct combat spell viability condition, separate from raw magicka cost. /*0x613c8a*/
  if ( EffectItemList_HasOnTarget(*a2 + 0xC) ) /*0x613c9c*/
  {
    if ( !v13 ) /*0x613caa*/
    {
      v11 = qword_B3BB2C[0x169]; /*0x613cb2*/
      if ( GetMagicTrackingLimitForScene() <= v11 ) /*0x613cc4*/
        return sub_613BE7((int)a2, a3, a4); /*0x613cc4*/
    }
    if ( Actor_IsSwimming((_DWORD *)*(this + 0xF)) ) /*0x613ccd*/
      return sub_613BE7((int)a2, a3, a4); /*0x613be6*/
  }
  v9 = *a2; /*0x613cda*/
  if ( !*a2 || v9 == 0xFFFFFFF4 ) /*0x613ce6*/
    JUMPOUT(0x613D3F); /*0x613d3f*/
  return sub_613CE8((int)this, v9 + 0xC, (int)a2, a3, a4); /*0x613bff*/
}
