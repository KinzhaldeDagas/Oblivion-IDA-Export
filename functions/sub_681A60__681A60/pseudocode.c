char __cdecl sub_681A60(MobileObject *a1, int a2)
{
  TESObjectREFR *v2; // ebx
  char result; // al
  bhkCharacterProxy *CharProxy; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  PlayerCharacter *v10; // eax
  PlayerCharacter *v11; // esi
  PlayerCharacter *v12; // ebp
  int v13; // edi
  int type; // eax
  TESForm *v15; // eax
  NiObject *v16; // eax
  NiObject *v17; // edi
  int v18; // eax
  NiObject *v19; // eax
  char v20; // [esp+17h] [ebp-9h]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = (TESObjectREFR *)a1;
  result = 0;
  v20 = 0;
  if ( a1 )
  {
    CharProxy = MobileObject_GetCharProxy(a1);
    if ( CharProxy )
    {
      v5 = *((_DWORD *)CharProxy + 0xDA);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 8);
        v22 = v6;
        if ( v6 )
        {
          v7 = *(_DWORD *)(v6 + 0xA4);
          if ( v7 )
          {
            v21 = 0;
            if ( v7 > 0 )
            {
              do
              {
                v8 = *(_DWORD *)(*(_DWORD *)(v6 + 0x90) + 4 * v21);
                sub_4806E0(v8);
                v10 = sub_4DC270(v9);
                v11 = v10;
                v12 = 0;
                if ( v10 )
                {
                  if ( v10->vtbl->super.super.super.IsActor((TESObjectREFR *)v10) )
                  {
                    v12 = v11;
                    if ( v11 == TESDataHandler_g_PlayerRef )
                      goto LABEL_49;
                  }
                }
                if ( v8
                  && (!v11
                   || ((*(_DWORD *)(v8 + 0x1C) & 0x3F) == 0xC
                    || (*(_DWORD *)(v8 + 0x1C) & 0x3F) == 0xE
                    || (*(_DWORD *)(v8 + 0x1C) & 0x3F) == 0x10)
                   && !((unsigned __int8 (__thiscall *)(PlayerCharacter *))v11->vtbl->super.super.super.super.Unk_22)(v11))
                  || !v11 )
                {
                  goto LABEL_49;
                }
                v13 = a2;
                if ( *(_DWORD *)a2
                  || v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)->member.type != kFormType_Door )
                {
                  if ( !*(_DWORD *)(v13 + 4) && v12 )
                    goto LABEL_24;
                  if ( v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)->member.type != kFormType_Activator
                    || !((unsigned __int8 (__thiscall *)(PlayerCharacter *))v11->vtbl->super.super.super.super.Unk_22)(v11) )
                  {
                    goto LABEL_49;
                  }
                }
                if ( !v12 )
                {
                  type = v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)->member.type;
                  if ( type == 0x12 )
                  {
                    if ( !sub_6814B0(v2, v11, flt_A41304)
                      && !sub_6814B0(v2, v11, flt_A3D65C)
                      && !sub_6814B0(v2, v11, 1.0) )
                    {
                      goto LABEL_49;
                    }
                    *(_BYTE *)(v13 + 8) = 1;
                  }
                  else
                  {
                    if ( type != 0x18 )
                      goto LABEL_49;
                    if ( !sub_6814B0(v2, v11, flt_A3D65C) )
                      goto LABEL_49;
                    if ( GetTeleportExtraData(v11) )
                      goto LABEL_49;
                    v15 = v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11);
                    if ( !v15 )
                      goto LABEL_49;
                    if ( sub_4B78E0(v15) )
                      goto LABEL_49;
                    v16 = (NiObject *)v11->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v11);
                    v17 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, v16);
                    if ( !sub_405790((int)v17, 0) )
                      goto LABEL_49;
                    if ( !*(_DWORD *)(sub_405790((int)v17, 0) + 0xC) )
                      goto LABEL_49;
                    v18 = sub_405790((int)v17, 0);
                    v19 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v18 + 0xC));
                    if ( !v19 || !sub_4715A0(v19, (int)"Open") )
                      goto LABEL_49;
                    LOBYTE(a1) = 0;
                    if ( sub_4B7490((TESObjectREFR *)v11, v2, &a1) && !(_BYTE)a1 && Actor::CanUSeDoor_((Actor *)v2) )
                      *(_DWORD *)a2 = v11;
                    else
                      *(_BYTE *)(a2 + 8) = 1;
                  }
                  goto LABEL_48;
                }
LABEL_24:
                if ( !sub_6814B0(v2, v12, flt_A3D65C)
                  && (!sub_5E3290(v12) || !sub_6814B0(v2, v11, flt_A41304) && !sub_6814B0(v2, v11, 1.0)) )
                {
                  goto LABEL_49;
                }
                *(_DWORD *)(v13 + 4) = v12;
LABEL_48:
                v20 = 1;
LABEL_49:
                v6 = v22;
                ++v21;
              }
              while ( v21 < *(_DWORD *)(v22 + 0xA4) );
            }
          }
        }
      }
    }
    return v20;
  }
  return result;
}
