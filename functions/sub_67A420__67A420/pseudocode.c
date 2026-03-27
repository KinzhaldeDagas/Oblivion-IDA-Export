TESObjectREFR **__thiscall sub_67A420(ActorProcessManager *this, int a2, int a3)
{
  ActorProcessManager *v3; // ebx
  EntryData *v4; // eax
  EntryData *v5; // ebp
  TESObjectREFR *v6; // esi
  int v7; // esi
  Actor *v8; // eax
  Actor *v9; // edi
  ActorList *v10; // eax
  ActorVtbl *vtbl; // esi
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  TESObjectCELL *v13; // ebx
  TESWorldSpace *v14; // edi
  TESPackage *v15; // eax
  tListVoid **v16; // eax
  int v17; // ebp
  ExtraTeleport *TeleportExtraData; // eax
  TESObjectREFR *v19; // edi
  TESWorldSpace *v20; // ebx
  bool v21; // zf
  tListVoid **v22; // eax
  Actor *v24; // [esp+10h] [ebp-28h]
  EntryData *v25; // [esp+14h] [ebp-24h]
  float v26; // [esp+18h] [ebp-20h]
  float Distance; // [esp+18h] [ebp-20h]
  int v28; // [esp+1Ch] [ebp-1Ch]
  TESObjectCELL *ParentCell; // [esp+20h] [ebp-18h]
  TESObjectCELL *v30; // [esp+24h] [ebp-14h]
  TESWorldSpace *WorldSpace; // [esp+2Ch] [ebp-Ch]
  TESObjectREFR *v32; // [esp+30h] [ebp-8h]

  v3 = this;
  v4 = (EntryData *)FormHeapAlloc(8u);
  if ( v4 )
  {
    v5 = v4;
    v4->extendData = 0;
    v4->countDelta = 0;
    v25 = v4;
  }
  else
  {
    v25 = 0;
    v5 = 0;
  }
  v6 = *(TESObjectREFR **)(a2 + 0xC);
  v32 = v6;
  ParentCell = TESObjectREFR_GetParentCell(v6);
  WorldSpace = TESObjectREFR_GetWorldSpace(v6);
  *(_BYTE *)(a2 + 0x10) = 1;
  if ( v6 )
  {
    v7 = 0;
    v28 = 0;
    while ( 1 )
    {
      if ( v7 )
      {
        v10 = (ActorList *)(v7 == 1 ? sub_673A50(v3, 2) : sub_673A50(v3, v7 == 2));
        v9 = sub_7616D0(v10);
      }
      else
      {
        v8 = sub_673A50(v3, 3);
        v9 = sub_7616D0((ActorList *)v8);
      }
      if ( v9 )
        break;
LABEL_57:
      v28 = ++v7;
      if ( v7 >= 4 )
      {
        if ( v5 )
          sub_5B27A0(v5, (int (__cdecl *)(tListVoid *, tListVoid *))sub_673B70);
        return (TESObjectREFR **)v5;
      }
    }
    while ( 1 )
    {
      if ( !v9->vtbl )
        goto LABEL_57;
      vtbl = 0;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v9->vtbl->super.super.super.super.InitializeComponent + 0x64))(v9->vtbl) )
        vtbl = v9->vtbl;
      v24 = *(Actor **)&v9->members.super.super.super.type;
      if ( vtbl )
        break;
LABEL_56:
      v7 = v28;
      if ( !v24 )
        goto LABEL_57;
      v9 = v24;
    }
    if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent
           + 0x66))(
            vtbl,
            0) )
    {
      CopyFromBase = vtbl->super.super.super.super.CopyFromBase;
      if ( ((unsigned __int16)CopyFromBase & 0x800) == 0
        && ((unsigned __int8)CopyFromBase & 0x20) == 0
        && !(*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent
             + 0x66))(
              vtbl,
              0) )
      {
        v13 = TESObjectREFR_GetParentCell((TESObjectREFR *)vtbl);
        v30 = v13;
        v14 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)vtbl);
        v15 = sub_5E0380((Actor *)vtbl);
        if ( !v15 || v15->members.type != 0xF || !sub_606AD0(v15, a2) )
        {
          if ( (!v13 || v13 != ParentCell)
            && (WorldSpace != v14
             || (!v13 || TESObjectCELL_IsInterior(v13)) && (!ParentCell || TESObjectCELL_IsInterior(ParentCell))) )
          {
            v17 = a3;
            if ( a3 )
            {
              while ( *(_DWORD *)v17 )
              {
                TeleportExtraData = GetTeleportExtraData(*(_BYTE **)v17);
                if ( TeleportExtraData )
                {
                  v19 = (TESObjectREFR *)sub_42B410(&TeleportExtraData->super);
                  if ( TESObjectREFR_GetParentCell(v19) == v13
                    || !TESObjectREFR_GetParentCell(v19)
                    && (v20 = TESObjectREFR_GetWorldSpace(v19),
                        v21 = v20 == TESObjectREFR_GetWorldSpace((TESObjectREFR *)vtbl),
                        v13 = v30,
                        v21) )
                  {
                    Distance = TesObjectREF_GetDistance((TESObjectREFR *)vtbl, v19, 0);
                    if ( (double)dword_B36A50 >= Distance )
                    {
                      if ( v25->extendData )
                      {
                        v22 = (tListVoid **)FormHeapAlloc(8u);
                        if ( v22 )
                        {
                          *v22 = v25->extendData;
                          v22[1] = 0;
                        }
                        else
                        {
                          v22 = 0;
                        }
                        v22[1] = (tListVoid *)v25->countDelta;
                        v25->countDelta = (SInt32)v22;
                      }
                      v25->extendData = (tListVoid *)vtbl;
                      break;
                    }
                  }
                }
                v17 = *(_DWORD *)(v17 + 4);
                if ( !v17 )
                  break;
              }
            }
            v5 = v25;
            goto LABEL_55;
          }
          v26 = TesObjectREF_GetDistance((TESObjectREFR *)vtbl, v32, 0);
          if ( (double)dword_B36A50 >= v26 )
          {
            if ( v5->extendData )
            {
              v16 = (tListVoid **)FormHeapAlloc(8u);
              if ( v16 )
              {
                *v16 = v5->extendData;
                v16[1] = 0;
                v16[1] = (tListVoid *)v5->countDelta;
                v5->countDelta = (SInt32)v16;
                v5->extendData = (tListVoid *)vtbl;
                goto LABEL_55;
              }
              *(_DWORD *)4 = v5->countDelta;
              v5->countDelta = 0;
            }
            v5->extendData = (tListVoid *)vtbl;
          }
        }
      }
    }
LABEL_55:
    v3 = this;
    goto LABEL_56;
  }
  return (TESObjectREFR **)v5;
}
