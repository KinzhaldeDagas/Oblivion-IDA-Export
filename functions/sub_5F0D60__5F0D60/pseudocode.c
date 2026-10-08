// Health Bars plugin analysis: native predicate for actor 3D HealthBar visibility. Vanilla excludes player, requires bHealthBarShowing, actor alive/loaded/visible/in range/in view, and hides when base health <= current health. Plugin changes the equality case so full-health actors can show the native bar while still hiding current > base.
char __thiscall sub_5F0D60(TESObjectREFR *this)
{
  char v2; // bl
  TESForm *v4; // ebp
  TESForm *v5; // edi
  int v6; // edi
  NiObject *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // [esp+8h] [ebp-28h]
  float v11; // [esp+18h] [ebp-18h]
  float v12; // [esp+18h] [ebp-18h]
  double Health; // [esp+1Ch] [ebp-14h] BYREF
  float v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v2 = 0; /*0x5f0d67*/
  if ( this == (TESObjectREFR *)reference ) /*0x5f0d6f*/
    return 0; /*0x5f0d72*/
  if ( !bHealthBarShowing_Gameplay ) /*0x5f0d79*/
    return 0;                                   // Health Bars plugin patch site for no-bars issue: vanilla returns false when bHealthBarShowing:GamePlay is 0. Plugin NOPs this branch so the setting cannot suppress actor-head bars after startup/INI load. /*0x5f0d79*/
  v4 = 0; /*0x5f0d90*/
  v5 = this->vtbl->GetBaseForm(this); /*0x5f0d94*/
  if ( v5 ) /*0x5f0d98*/
  {
    if ( this->vtbl->IsActor(this) ) /*0x5f0da4*/
      v4 = v5; /*0x5f0daa*/
  }
  Health = TESObjectREFR_GetHealth((TESChildCELL *)this); /*0x5f0db3*/
  if ( (double)TESActorBase_GetHealth(v4) <= Health )// Health Bars plugin patch site for no-bars issue: vanilla returns false when TESActorBase health <= current health. Leveled/modified actors can have current health above base-form health, so plugin NOPs this branch and clamps the visual ratio in the 0x640080 call hook. /*0x5f0dd0*/
    return 0; /*0x5f0ed2*/
  if ( !this->vtbl->IsDead(this, 0) ) /*0x5f0de2*/
  {
    if ( *((_DWORD *)this + 0x16) ) /*0x5f0dec*/
    {
      if ( !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) ) /*0x5f0dfe*/
      {
        v6 = *((_DWORD *)g_WorldSceneReceiverRoot + 0x37); /*0x5f0e0f*/
        v7 = (NiObject *)this->vtbl->GetNiNode(this); /*0x5f0e1d*/
        v8 = (float *)NiRTTI_Cast((BSStringT *)&parent, v7); /*0x5f0e25*/
        if ( sub_47F7B0(v8, v6) ) /*0x5f0e2c*/
        {
          if ( TesObjectREF_GetDistance(this, (TESObjectREFR *)reference, 0) <= flt_A6E748 ) /*0x5f0e57*/
          {
            v10 = reference->vtbl->super.super.super.GetPos(reference); /*0x5f0e6b*/
            v9 = this->vtbl->GetPos(this); /*0x5f0e79*/
            sub_4121A0(v9, v14, v10); /*0x5f0e7d*/
            v11 = Vector3_CalculateHeadingRadiansXY(v14); /*0x5f0e8c*/
            sub_683D80((int)reference, v11, (float *)&Health); /*0x5f0ea6*/
            v12 = fabs(v11); /*0x5f0ead*/
            if ( v12 < dbl_A6E740 ) /*0x5f0ec3*/
              return 1; /*0x5f0ec5*/
          }
        }
      }
    }
  }
  return v2; /*0x5f0d71*/
}
