void __thiscall sub_61E980(_DWORD *this, TESObjectREFR *a2)
{
  TESObjectREFR *v2; // edi
  char v3; // bl
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  BOOL v14; // eax

  v2 = a2; /*0x61e983*/
  v3 = 0; /*0x61e987*/
  if ( a2 ) /*0x61e98d*/
  {
    v3 = 1; /*0x61e98f*/
  }
  else
  {
    v2 = (TESObjectREFR *)CombatController_GetCurrentTarget((int)this); /*0x61e998*/
    if ( !v2 ) /*0x61e99c*/
      return; /*0x61e99c*/
  }
  v5 = CombatController_GetCurrentTarget((int)this); /*0x61e9a4*/
  if ( !*((_BYTE *)CombatController_FindTargetInfo(this, v5) + 8) )// Finds current TargetInfo; nonzero byte +0x08 gates off vanilla tactical target updating. SmartAI treats this engine-owned special-target state as a do-not-reorder guard. /*0x61e9b1*/
  {
    v6 = *(this + 0x10); /*0x61e9be*/
    while ( v2 ) /*0x61e9c1*/
    {
      v7 = *(this + 0x10); /*0x61e9c7*/
      v8 = 0; /*0x61e9ca*/
      if ( v7 ) /*0x61e9ce*/
      {
        if ( *(_DWORD *)(v7 + 4) || *(_DWORD *)v7 ) /*0x61e9d5*/
        {
          if ( *(_DWORD *)v7 ) /*0x61e9d9*/
          {
            v8 = **(_DWORD **)v7; /*0x61e9df*/
          }
          else
          {
            v9 = *(_DWORD **)(v7 + 4); /*0x61e9e3*/
            if ( v9 ) /*0x61e9e8*/
            {
              *(_DWORD *)(v7 + 4) = v9[1]; /*0x61e9ed*/
              *(_DWORD *)v7 = *v9; /*0x61e9f3*/
              FormHeapFree((unsigned int)v9); /*0x61e9f5*/
            }
            else
            {
              *(_DWORD *)v7 = 0; /*0x61e9ff*/
            }
            v8 = CombatController_GetCurrentTarget((int)this); /*0x61ea07*/
          }
        }
      }
      if ( v2 == (TESObjectREFR *)v8 ) /*0x61ea0e*/
      {
        v10 = *(this + 0x10); /*0x61ea14*/
        if ( !v10 ) /*0x61ea19*/
          goto LABEL_30; /*0x61ea19*/
        if ( !*(_DWORD *)(v10 + 4) && !*(_DWORD *)v10 ) /*0x61ea21*/
          goto LABEL_30; /*0x61ea21*/
        if ( *(_DWORD *)v10 ) /*0x61ea26*/
        {
          v11 = **(_DWORD **)v10; /*0x61ea2c*/
        }
        else
        {
          v12 = *(_DWORD **)(v10 + 4); /*0x61ea30*/
          if ( v12 ) /*0x61ea35*/
          {
            *(_DWORD *)(v10 + 4) = v12[1]; /*0x61ea3a*/
            *(_DWORD *)v10 = *v12; /*0x61ea40*/
            FormHeapFree((unsigned int)v12); /*0x61ea42*/
          }
          else
          {
            *(_DWORD *)v10 = 0; /*0x61ea4c*/
          }
          v11 = CombatController_GetCurrentTarget((int)this); /*0x61ea54*/
        }
        if ( v11 /*0x61ea7e*/
          && (v13 = (_DWORD *)CombatController_GetCurrentTarget((int)this), Actor_IsSwimming(v13))
          && !Actor_IsSwimming((_DWORD *)*(this + 0xF))
          && !Actor_CanFightInWater((void *)*(this + 0xF)) )
        {
          v14 = 1; /*0x61ea8e*/
        }
        else
        {
LABEL_30:
          v14 = *((_BYTE *)this + 0x174) == 0; /*0x61ea9f*/
        }
      }
      else
      {
        v14 = 0; /*0x61eaa3*/
      }
      sub_619D40((int)this, v3, v2, v14, 0); /*0x61eaab*/
      if ( v3 ) /*0x61eab2*/
        break; /*0x61eab2*/
      if ( v6 ) /*0x61eab6*/
      {
        v6 = *(_DWORD *)(v6 + 4); /*0x61eab8*/
        if ( !v6 || !*(_DWORD *)v6 ) /*0x61eabf*/
          break; /*0x61eac4*/
        v2 = **(TESObjectREFR ***)v6; /*0x61eac6*/
      }
    }
  }
  CombatController_UpdateTargetRetentionAndSort(this); /*0x61ead1*/
}
