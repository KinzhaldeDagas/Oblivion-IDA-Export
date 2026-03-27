TESObjectREFR **__thiscall sub_6753F0(ActorProcessManager *this, TESObjectREFR *a2, int a3)
{
  ActorProcessManager *v3; // edi
  TESObjectREFR **v4; // eax
  TESObjectREFR **v5; // ebx
  int v6; // eax
  int v7; // esi
  Actor *v8; // eax
  Actor *v9; // edi
  Actor *v10; // eax
  TESObjectREFR *vtbl; // esi
  TESObjectCELL *v12; // ebp
  TESWorldSpace *v13; // edi
  TESObjectREFR **v14; // eax
  int v15; // ebx
  ExtraTeleport *TeleportExtraData; // eax
  TESObjectREFR *v17; // edi
  TESWorldSpace *v18; // ebp
  bool v19; // zf
  TESObjectREFR **v20; // eax
  Actor *v22; // [esp+30h] [ebp-24h]
  TESObjectREFR **v23; // [esp+34h] [ebp-20h]
  float Distance; // [esp+38h] [ebp-1Ch]
  float v25; // [esp+38h] [ebp-1Ch]
  int v26; // [esp+3Ch] [ebp-18h]
  TESObjectCELL *ParentCell; // [esp+40h] [ebp-14h]
  TESObjectCELL *v28; // [esp+44h] [ebp-10h]
  TESWorldSpace *WorldSpace; // [esp+50h] [ebp-4h]

  v3 = this;
  v4 = (TESObjectREFR **)FormHeapAlloc(8u);
  if ( v4 )
  {
    v5 = v4;
    *v4 = 0;
    v4[1] = 0;
    v23 = v4;
  }
  else
  {
    v23 = 0;
    v5 = 0;
  }
  ParentCell = TESObjectREFR_GetParentCell(a2);
  WorldSpace = TESObjectREFR_GetWorldSpace(a2);
  if ( a2 )
  {
    v6 = ((int (__thiscall *)(LowProcess *))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_110)(TESDataHandler_g_PlayerRef->super.super.super.process);
    ((void (__thiscall *)(LowProcess *, int))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_111)(
      TESDataHandler_g_PlayerRef->super.super.super.process,
      1 - v6);
    v7 = 0;
    v26 = 0;
    while ( 1 )
    {
      if ( v7 )
      {
        if ( v7 == 1 )
          v10 = sub_673A50(v3, 1);
        else
          v10 = v7 == 2 ? sub_673A50(v3, 2) : sub_673A50(v3, 3);
        v9 = sub_7616D0((ActorList *)v10);
      }
      else
      {
        v8 = sub_673A50(v3, 0);
        v9 = sub_7616D0((ActorList *)v8);
      }
      if ( v9 )
        break;
LABEL_55:
      v26 = ++v7;
      if ( v7 >= 4 )
        return v5;
      v3 = this;
    }
    while ( 1 )
    {
      if ( !v9->vtbl )
        goto LABEL_55;
      vtbl = 0;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v9->vtbl->super.super.super.super.InitializeComponent + 0x64))(v9->vtbl) )
        vtbl = (TESObjectREFR *)v9->vtbl;
      v22 = *(Actor **)&v9->members.super.super.super.type;
      if ( vtbl )
      {
        v12 = TESObjectREFR_GetParentCell(vtbl);
        v28 = v12;
        v13 = TESObjectREFR_GetWorldSpace(vtbl);
        if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))vtbl->vtbl[1].GetSleepState)(vtbl, 1)
          && sub_5E6C60((Actor *)vtbl) )
        {
          if ( v12 && TESObjectCELL_IsInterior(v12) && v12 == ParentCell
            || WorldSpace == v13
            && (v12 && !TESObjectCELL_IsInterior(v12) || ParentCell && !TESObjectCELL_IsInterior(ParentCell)) )
          {
            Distance = TesObjectREF_GetDistance(vtbl, a2, 0);
            if ( (double)dword_B36A50 < Distance )
              goto LABEL_54;
            (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))vtbl[1].vtbl->super.super.InitializeComponent
             + 0x8A))(
              vtbl[1].vtbl,
              vtbl,
              a2,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              1);
            if ( *v5 )
            {
              v14 = (TESObjectREFR **)FormHeapAlloc(8u);
              if ( v14 )
              {
                *v14 = *v5;
                v14[1] = 0;
                v14[1] = v5[1];
                v5[1] = (TESObjectREFR *)v14;
                *v5 = vtbl;
                goto LABEL_54;
              }
              *(_DWORD *)4 = v5[1];
              v5[1] = 0;
            }
            *v5 = vtbl;
          }
          else
          {
            v15 = a3;
            if ( a3 )
            {
              while ( *(_DWORD *)v15 )
              {
                TeleportExtraData = GetTeleportExtraData(*(_BYTE **)v15);
                if ( TeleportExtraData )
                {
                  v17 = (TESObjectREFR *)sub_42B410(&TeleportExtraData->super);
                  if ( TESObjectREFR_GetParentCell(v17) == v12
                    || !TESObjectREFR_GetParentCell(v17)
                    && (v18 = TESObjectREFR_GetWorldSpace(v17),
                        v19 = v18 == TESObjectREFR_GetWorldSpace(vtbl),
                        v12 = v28,
                        v19) )
                  {
                    v25 = TesObjectREF_GetDistance(vtbl, v17, 0);
                    if ( (double)dword_B36A50 >= v25 )
                    {
                      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))vtbl[1].vtbl->super.super.InitializeComponent
                       + 0x8A))(
                        vtbl[1].vtbl,
                        vtbl,
                        a2,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        1);
                      if ( *v23 )
                      {
                        v20 = (TESObjectREFR **)FormHeapAlloc(8u);
                        if ( v20 )
                        {
                          *v20 = *v23;
                          v20[1] = 0;
                        }
                        else
                        {
                          v20 = 0;
                        }
                        v20[1] = v23[1];
                        v23[1] = (TESObjectREFR *)v20;
                      }
                      *v23 = vtbl;
                      break;
                    }
                  }
                }
                v15 = *(_DWORD *)(v15 + 4);
                if ( !v15 )
                  break;
              }
            }
            v5 = v23;
          }
        }
      }
LABEL_54:
      v7 = v26;
      if ( !v22 )
        goto LABEL_55;
      v9 = v22;
    }
  }
  return v5;
}
