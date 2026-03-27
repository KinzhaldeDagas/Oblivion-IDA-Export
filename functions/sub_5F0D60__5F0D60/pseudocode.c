char __thiscall sub_5F0D60(TESObjectREFR *this)
{
  char v2; // bl
  TESForm *v4; // ebp
  TESForm *v5; // edi
  NiCamera *camera; // edi
  NiObject *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // [esp+8h] [ebp-28h]
  float v11; // [esp+18h] [ebp-18h]
  float v12; // [esp+18h] [ebp-18h]
  double Health; // [esp+1Ch] [ebp-14h] BYREF
  float v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v2 = 0;
  if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    return 0;
  if ( !bHealthBarShowing_Gameplay )
    return 0;
  v4 = 0;
  v5 = this->vtbl->GetBaseForm(this);
  if ( v5 )
  {
    if ( this->vtbl->IsActor(this) )
      v4 = v5;
  }
  Health = TESObjectREFR_GetHealth((TESChildCELL *)this);
  if ( (double)TESActorBase_GetHealth(v4) <= Health )
    return 0;
  if ( !this->vtbl->IsDead(this, 0) )
  {
    if ( *((_DWORD *)this + 0x16) )
    {
      if ( !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) )
      {
        camera = g_worldScenegraph->camera;
        v7 = (NiObject *)this->vtbl->GetNiNode(this);
        v8 = (float *)NiRTTI_Cast((BSStringT *)dword_B3FAB0, v7);
        if ( sub_47F7B0(v8, (int)camera) )
        {
          if ( TesObjectREF_GetDistance(this, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) <= flt_A6E748 )
          {
            v10 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
            v9 = this->vtbl->GetPos(this);
            sub_4121A0(v9, v14, v10);
            v11 = sub_683CB0(v14);
            sub_683D80((int)TESDataHandler_g_PlayerRef, v11, (int)&Health);
            v12 = fabs(v11);
            if ( v12 < dbl_A6E740 )
              return 1;
          }
        }
      }
    }
  }
  return v2;
}
