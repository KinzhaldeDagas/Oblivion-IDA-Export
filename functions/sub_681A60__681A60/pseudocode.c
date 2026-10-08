char __cdecl sub_681A60(TESObjectREFR *a1, int a2)
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
  NiNode *v17; // edi
  NiAVObject *ChildAtIndex; // eax
  NiControllerManager *v19; // eax
  char v20; // [esp+17h] [ebp-9h]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = a1; /*0x681a64*/
  result = 0; /*0x681a68*/
  v20 = 0; /*0x681a6c*/
  if ( a1 ) /*0x681a70*/
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x681a78*/
    if ( CharProxy ) /*0x681a7f*/
    {
      v5 = *((_DWORD *)CharProxy + 0xDA); /*0x681a85*/
      if ( v5 ) /*0x681a8d*/
      {
        v6 = *(_DWORD *)(v5 + 8); /*0x681a93*/
        v22 = v6; /*0x681a98*/
        if ( v6 ) /*0x681a9c*/
        {
          v7 = *(_DWORD *)(v6 + 0xA4); /*0x681aa2*/
          if ( v7 ) /*0x681aaa*/
          {
            v21 = 0; /*0x681ab0*/
            if ( v7 > 0 ) /*0x681ab8*/
            {
              do /*0x681acb*/
              {
                v8 = *(_DWORD *)(*(_DWORD *)(v6 + 0x90) + 4 * v21); /*0x681acb*/
                sub_4806E0(v8); /*0x681acf*/
                v10 = sub_4DC270(v9); /*0x681ad5*/
                v11 = v10; /*0x681ada*/
                v12 = 0; /*0x681adf*/
                if ( v10 ) /*0x681ae3*/
                {
                  if ( v10->vtbl->super.super.super.IsActor((TESObjectREFR *)v10) ) /*0x681aef*/
                  {
                    v12 = v11; /*0x681afb*/
                    if ( v11 == reference ) /*0x681afd*/
                      goto LABEL_49; /*0x681afd*/
                  }
                }
                if ( v8 /*0x681b3a*/
                  && (!v11
                   || ((*(_DWORD *)(v8 + 0x1C) & 0x3F) == 0xC
                    || (*(_DWORD *)(v8 + 0x1C) & 0x3F) == 0xE
                    || (*(_DWORD *)(v8 + 0x1C) & 0x3F) == 0x10)
                   && !((unsigned __int8 (__thiscall *)(PlayerCharacter *))v11->vtbl->super.super.super.super.Unk_22)(v11))
                  || !v11 )
                {
                  goto LABEL_49; /*0x681b3a*/
                }
                v13 = a2; /*0x681b40*/
                if ( *(_DWORD *)a2 /*0x681b59*/
                  || v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)->member.type != kFormType_Door )
                {
                  if ( !*(_DWORD *)(v13 + 4) && v12 ) /*0x681b63*/
                    goto LABEL_24; /*0x681b63*/
                  if ( v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)->member.type != kFormType_Activator /*0x681b85*/
                    || !((unsigned __int8 (__thiscall *)(PlayerCharacter *))v11->vtbl->super.super.super.super.Unk_22)(v11) )
                  {
                    goto LABEL_49; /*0x681b89*/
                  }
                }
                if ( !v12 ) /*0x681b91*/
                {
                  type = v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)->member.type; /*0x681bfe*/
                  if ( type == 0x12 ) /*0x681c05*/
                  {
                    if ( !sub_6814B0(v2, v11, flt_A41304) /*0x681d58*/
                      && !sub_6814B0(v2, v11, kHeadBodyNormalMatchRadius)
                      && !sub_6814B0(v2, v11, 1.0) )
                    {
                      goto LABEL_49; /*0x681d58*/
                    }
                    *(_BYTE *)(v13 + 8) = 1; /*0x681d5a*/
                  }
                  else
                  {
                    if ( type != 0x18 ) /*0x681c0e*/
                      goto LABEL_49; /*0x681c0e*/
                    if ( !sub_6814B0(v2, v11, kHeadBodyNormalMatchRadius) ) /*0x681c20*/
                      goto LABEL_49; /*0x681c20*/
                    if ( TESObjectREFR_GetTeleportData((TESObjectREFR *)v11) ) /*0x681c32*/
                      goto LABEL_49; /*0x681c32*/
                    v15 = v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11); /*0x681c49*/
                    if ( !v15 ) /*0x681c4d*/
                      goto LABEL_49; /*0x681c4d*/
                    if ( TESObjectDOOR_HasRandomTeleportSpaces(v15) ) /*0x681c55*/
                      goto LABEL_49;            // Verified actor-door interaction branch: when the candidate is a door with no ExtraTeleport, a nonempty TESObjectDOOR.randomTeleport list causes this routine to reject it as a normal actor-openable door. /*0x681c55*/
                    v16 = (NiObject *)v11->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v11); /*0x681c6c*/
                    v17 = (NiNode *)NiRTTI_Cast((BSStringT *)&parent, v16); /*0x681c7c*/
                    if ( !NiNode_GetChildAtIndex(v17, 0) ) /*0x681c82*/
                      goto LABEL_49; /*0x681c82*/
                    if ( !NiNode_GetChildAtIndex(v17, 0)->members.super.m_controller ) /*0x681c98*/
                      goto LABEL_49; /*0x681c98*/
                    ChildAtIndex = NiNode_GetChildAtIndex(v17, 0); /*0x681ca6*/
                    v19 = (NiControllerManager *)NiRTTI_Cast( /*0x681cb4*/
                                                   (BSStringT *)&stru_B3CAC0,
                                                   (NiObject *)ChildAtIndex->members.super.m_controller);
                    if ( !v19 || !NiControllerManager_FindSequenceByName(v19, "Open") ) /*0x681ccb*/
                      goto LABEL_49; /*0x681cd2*/
                    LOBYTE(a1) = 0; /*0x681cdf*/
                    if ( sub_4B7490((TESObjectREFR *)v11, (Actor *)v2, &a1) /*0x681cf8*/
                      && !(_BYTE)a1
                      && Actor::CanUSeDoor_((Actor *)v2) )
                    {
                      *(_DWORD *)a2 = v11; /*0x681d08*/
                    }
                    else
                    {
                      *(_BYTE *)(a2 + 8) = 1; /*0x681d10*/
                    }
                  }
                  goto LABEL_48; /*0x681d0a*/
                }
LABEL_24:
                if ( !sub_6814B0(v2, v12, kHeadBodyNormalMatchRadius) /*0x681bda*/
                  && (!sub_5E3290(v12) || !sub_6814B0(v2, v11, flt_A41304) && !sub_6814B0(v2, v11, 1.0)) )
                {
                  goto LABEL_49; /*0x681be4*/
                }
                *(_DWORD *)(v13 + 4) = v12; /*0x681bea*/
LABEL_48:
                v20 = 1; /*0x681d5e*/
LABEL_49:
                v6 = v22; /*0x681d63*/
                ++v21; /*0x681d74*/
              }
              while ( v21 < *(_DWORD *)(v22 + 0xA4) ); /*0x681acb*/
            }
          }
        }
      }
    }
    return v20; /*0x681d81*/
  }
  return result; /*0x681d85*/
}
