void __userpurge sub_656C90(
        int *ecx0@<ecx>,
        int ebp0@<ebp>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        int a8,
        PlayerCharacter *a9)
{
  TESObjectREFR *v9; // ebx
  PlayerCharacter *v11; // edi
  int v12; // eax
  char v13; // cl
  void (__stdcall *v14)(int, _DWORD); // eax
  int v15; // ebp
  int v16; // eax
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // ebp
  int v21; // eax
  int v22; // eax
  NiNode *PlayerNode; // eax
  TESObjectCELL *ParentCell; // ebp
  void *v25; // eax
  BSFurnitureMarker *v26; // ebp
  NiObjectNET *v27; // eax
  BSFurnitureMarker *BSFornitureMarker; // eax
  char v29; // bl
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  PlayerCharacter *v34; // ecx
  PlayerCharacter *v35; // ecx
  unsigned __int8 v36; // al
  int v37; // eax
  float v38; // ecx
  float v39; // ebx
  float v40; // ebp
  int v41; // ecx
  int (__thiscall *v42)(int); // eax
  float v43; // eax
  float v44; // edx
  int v45; // ebp
  NiTransform *v46; // eax
  double v47; // st7
  float v48; // edx
  PlayerCharacterVtbl *vtbl; // eax
  double v50; // st7
  void (__thiscall *Unk_73)(MobileObject *); // edx
  char v52; // bl
  double v53; // st7
  bhkCharacterProxy *CharProxy; // eax
  char v55; // al
  __int64 v56; // [esp+28h] [ebp-ACh]
  void *a2; // [esp+34h] [ebp-A0h]
  PlayerCharacter *v58; // [esp+38h] [ebp-9Ch]
  float v59; // [esp+38h] [ebp-9Ch]
  float v60; // [esp+38h] [ebp-9Ch]
  int v61; // [esp+3Ch] [ebp-98h]
  void *AnimData; // [esp+40h] [ebp-94h]
  float v63; // [esp+4Ch] [ebp-88h]
  float v64; // [esp+4Ch] [ebp-88h]
  float v65; // [esp+4Ch] [ebp-88h]
  float v66; // [esp+4Ch] [ebp-88h]
  void *v67; // [esp+50h] [ebp-84h]
  NiNode *a1; // [esp+54h] [ebp-80h]
  NiTransform v69; // [esp+58h] [ebp-7Ch] BYREF
  NiTransform v70; // [esp+8Ch] [ebp-48h] BYREF

  v9 = (TESObjectREFR *)a9;
  sub_60CF80((int)ecx0, (int)a9, ebp0, a3, a4, a5, a6, a7, a8, a9);
  v11 = (PlayerCharacter *)OblivionDynamicCast(
                             a9,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v12 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl->Unk_4F)(v9, 0);
  if ( v12 )
  {
    v13 = *((_BYTE *)ecx0 + 0x11C);
    if ( v13 )
    {
      v14 = *(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v12 + 0x9C);
      if ( (unsigned __int8)(v13 - 1) > 3u )
        v14(0, 0);
      else
        v14(1, 0);
    }
  }
  v61 = ebp0;
  if ( v11 )
  {
    v15 = *ecx0;
    if ( v11 == TESDataHandler_g_PlayerRef )
    {
      v58 = TESDataHandler_g_PlayerRef;
      a2 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
      v16 = sub_6600D0(TESDataHandler_g_PlayerRef, 1);
      (*(void (__thiscall **)(int *, _DWORD, int, void *, PlayerCharacter *, int))(v15 + 0x150))(
        ecx0,
        *((unsigned __int8 *)ecx0 + 0x115),
        v16,
        a2,
        v58,
        v61);
      v17 = *ecx0;
      AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
      v18 = sub_6600D0(TESDataHandler_g_PlayerRef, 0);
LABEL_12:
      v61 = v18;
      (*(void (__thiscall **)(int *, _DWORD))(v17 + 0x150))(ecx0, *((unsigned __int8 *)ecx0 + 0x115));
      goto LABEL_13;
    }
    v19 = ((int (__thiscall *)(PlayerCharacter *))v11->vtbl->super.super.super.Unk_5A)(v11);
    if ( (*(int (__thiscall **)(int *, int))(v15 + 0x118))(ecx0, v19) )
    {
      v20 = *ecx0;
      v21 = ((int (__thiscall *)(PlayerCharacter *))v11->vtbl->super.super.super.Unk_5A)(v11);
      if ( (*(int (__thiscall **)(int *, int))(v20 + 0x124))(ecx0, v21) )
      {
        v17 = *ecx0;
        v22 = ((int (__thiscall *)(PlayerCharacter *, PlayerCharacter *, int))v11->vtbl->super.super.super.GetAnimData)(
                v11,
                v11,
                v61);
        v18 = ((int (__thiscall *)(PlayerCharacter *, int))v11->vtbl->super.super.super.Unk_5A)(v11, v22);
        goto LABEL_12;
      }
    }
  }
LABEL_13:
  if ( a9 == TESDataHandler_g_PlayerRef )
    PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
  else
    PlayerNode = (NiNode *)a9->super.super.super.super.niNode;
  a1 = PlayerNode;
  if ( v11 )
  {
    if ( v11->super.super.super.super.niNode )
    {
      if ( ecx0[0x48] )
      {
        if ( !v11->vtbl->super.super.super.IsDead((TESObjectREFR *)v11, 0) )
        {
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)ecx0[0x48]);
          if ( TESObjectREFR_GetParentCell((TESObjectREFR *)v11) != ParentCell
            || (*(unsigned __int16 (__thiscall **)(int *))(*ecx0 + 0x2C0))(ecx0)
            || (v25 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0x48] + 0x170))(ecx0[0x48]),
                v26 = 0,
                (v67 = OblivionDynamicCast(
                         v25,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &TESFurniture `RTTI Type Descriptor',
                         0)) != 0)
            && ((v27 = (NiObjectNET *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0x48] + 0x154))(ecx0[0x48]),
                 BSFornitureMarker = NiObjectNET::GetBSFornitureMarker(v27),
                 (v26 = BSFornitureMarker) == 0)
             || *((unsigned __int8 *)ecx0 + 0x124) >= (unsigned int)BSFornitureMarker->markers.numObjs) )
          {
            ecx0[0x48] = 0;
            *((_BYTE *)ecx0 + 0x11D) = 0;
            if ( v11 == TESDataHandler_g_PlayerRef )
              TESDataHandler_g_PlayerRef->unk61C = 0.0;
          }
          else
          {
            v29 = *((_BYTE *)ecx0 + 0x11D);
            switch ( v29 )
            {
              case 1:
              case 2:
              case 3:
              case 4:
                v30 = ecx0[0x5F];
                if ( v30 )
                {
                  v31 = (*(int (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)(*(_DWORD *)(v30 + 0x98) + 0x7C) + 0x4C))(
                          *(_DWORD *)(*(_DWORD *)(v30 + 0x98) + 0x7C),
                          off_B06560[0],
                          v61);
                  if ( v31 )
                    *(_WORD *)(v31 + 0x18) |= 1u;
                  v32 = *(_DWORD *)(*(_DWORD *)(ecx0[0x5F] + 0x98) + 0x7C);
                  v33 = (*(int (__thiscall **)(int, char *, void *))(*(_DWORD *)v32 + 0x4C))(
                          v32,
                          off_B06568[0],
                          AnimData);
                  if ( v33 )
                    *(_WORD *)(v33 + 0x18) |= 1u;
                }
                *((_BYTE *)ecx0 + 0x11D) = 1;
                break;
              case 6:
              case 7:
              case 8:
              case 9:
                *((_BYTE *)ecx0 + 0x11D) = 6;
                break;
              default:
                break;
            }
            if ( *((_BYTE *)ecx0 + 0x11D) )
            {
              sub_4D7300((_BYTE *)ecx0[0x48], *((unsigned __int8 *)ecx0 + 0x124), 1);
              v34 = TESDataHandler_g_PlayerRef;
              if ( v11 == TESDataHandler_g_PlayerRef )
              {
                if ( v34->isThirdPerson )
                {
                  (*(void (__thiscall **)(int *, PlayerCharacter *))(*ecx0 + 0x384))(ecx0, TESDataHandler_g_PlayerRef);
                  v34 = TESDataHandler_g_PlayerRef;
                }
                TogglePOV(v34, v34->isThirdPerson);
                v35 = TESDataHandler_g_PlayerRef;
                if ( TESDataHandler_g_PlayerRef->isThirdPerson )
                {
                  (*(void (__thiscall **)(int *, PlayerCharacter *))(*ecx0 + 0x384))(ecx0, TESDataHandler_g_PlayerRef);
                  v35 = TESDataHandler_g_PlayerRef;
                }
                TogglePOV(v35, v35->isThirdPerson);
              }
              else
              {
                (*(void (__thiscall **)(int *, PlayerCharacter *))(*ecx0 + 0x384))(ecx0, v11);
              }
            }
            *((_BYTE *)ecx0 + 0x11D) = v29;
            if ( v29 == 4 || v29 == 9 )
            {
              if ( v67 )
              {
                if ( v26 )
                {
                  v36 = *((_BYTE *)ecx0 + 0x124);
                  if ( v36 < (unsigned int)v26->markers.numObjs )
                  {
                    v37 = (int)&v26->markers.data[v36];
                    v38 = *(float *)v37;
                    v39 = *(float *)(v37 + 0xC);
                    v40 = *(float *)(v37 + 8);
                    v69.rot.data[2][1] = *(float *)(v37 + 4);
                    v69.rot.data[2][0] = v38;
                    v41 = ecx0[0x48];
                    v69.rot.data[2][2] = v40;
                    v42 = *(int (__thiscall **)(int))(*(_DWORD *)v41 + 0x174);
                    v69.scale = v39;
                    HIDWORD(v56) = v42(v41);
                    LODWORD(v56) = sub_4D7AF0((float *)ecx0[0x48], &v70.pos.x);
                    sub_710580(v56, 1, (int)v69.rot.data[2], (int)&v69);
                    v43 = v69.rot.data[0][0];
                    *((_BYTE *)ecx0 + 0x136) = BYTE2(v69.scale);
                    v44 = v69.rot.data[0][1];
                    *((float *)ecx0 + 0x4A) = v43;
                    *(_QWORD *)(ecx0 + 0x4B) = __PAIR64__(LODWORD(v69.rot.data[0][2]), LODWORD(v44));
                    v63 = (double)LOWORD(v39) / dbl_A2FC70;
                    v64 = v63 + *(float *)(ecx0[0x48] + 0x28);
                    sub_6FAEE0((Unk128 *)(ecx0 + 0x4A), v64);
                  }
                }
                v45 = *((unsigned __int8 *)ecx0 + 0x136);
                v59 = v11->vtbl->super.super.super.GetScale((TESObjectREFR *)v11);
                sub_4AEB40((int)v69.rot.data[1], v45, v59);
                v65 = (double)*((unsigned __int16 *)ecx0 + 0x9A) / dbl_A2FC70;
                NiMatrix33_InitRotationTransform((float *)&v70, v65);
                v46 = sub_7101F0(&v70, &v69, (NiPoint3 *)v69.rot.data[1]);
                v47 = *((float *)ecx0 + 0x4A);
                *(_QWORD *)&v69.rot.data[1][0] = *(_QWORD *)&v46->rot.data[0][0];
                v48 = v46->rot.data[0][2];
                v69.rot.data[0][0] = v47 + v69.rot.data[1][0];
                vtbl = v11->vtbl;
                v50 = *((float *)ecx0 + 0x4B) + v69.rot.data[1][1];
                v69.rot.data[1][2] = v48;
                Unk_73 = vtbl->super.super.Unk_73;
                v69.rot.data[0][1] = v50;
                v69.rot.data[0][2] = *((float *)ecx0 + 0x4C) + v69.rot.data[1][2];
                ((void (__thiscall *)(PlayerCharacter *, NiTransform *))Unk_73)(v11, &v69);
                v52 = *((_BYTE *)ecx0 + 0x11D);
                *((_BYTE *)ecx0 + 0x11D) = 0;
                if ( v11 != TESDataHandler_g_PlayerRef )
                {
                  v66 = (double)*((unsigned __int16 *)ecx0 + 0x9A) / dbl_A2FC70;
                  ((void (__thiscall *)(PlayerCharacter *, _DWORD))v11->vtbl->super.super.Unk_7A)(v11, LODWORD(v66));
                  v53 = sub_4AEBE0(*((unsigned __int8 *)ecx0 + 0x136));
                  v60 = v53;
                  sub_659B90((int *)v11, v53, v60);
                }
                *((_BYTE *)ecx0 + 0x11D) = v52;
                if ( MobileObject_GetCharProxy((MobileObject *)v11) )
                {
                  CharProxy = MobileObject_GetCharProxy((MobileObject *)v11);
                  sub_452A10(CharProxy, (NiPoint3 *)(ecx0 + 0x4A));
                }
              }
            }
            if ( !(*(int (__thiscall **)(int *))(*ecx0 + 8))(ecx0) )
            {
              v55 = *((_BYTE *)ecx0 + 0x11D);
              if ( (v55 == 9 || v55 == 4) && !v11->vtbl->super.GetMountedHorse((Actor *)v11) )
                sub_88CE30(a1, 1, 1, 0);
            }
            v9 = (TESObjectREFR *)a9;
          }
        }
      }
    }
    if ( *((_BYTE *)ecx0 + 0x11D) )
    {
      if ( !v11->vtbl->super.GetMountedHorse((Actor *)v11) && !ecx0[0x48] )
      {
        *((_BYTE *)ecx0 + 0x11D) = 0;
        if ( v11 == TESDataHandler_g_PlayerRef )
          TESDataHandler_g_PlayerRef->unk61C = 0.0;
      }
    }
  }
  if ( a1 && *((_BYTE *)ecx0 + 0x11C) == 2 || *((_BYTE *)ecx0 + 0x11C) == 1 )
  {
    sub_88D070(a1, 1, 1, 0);
    NiAVObject_UpdateNiAVObject((NiAVObject *)a1, 0.0, 0);
  }
  ActiveEffect_Base_PostLinkAEList((_DWORD *)ecx0[0x5D], (int)v11);
  *((_BYTE *)ecx0 + 0x161) = 1;
  if ( v11 )
    (*(void (__thiscall **)(int *, PlayerCharacter *, int, _DWORD, _DWORD))(*ecx0 + 0x42C))(ecx0, v11, 1, 0, 0);
  if ( *((_BYTE *)ecx0 + 0x16B) )
  {
    if ( !ecx0[0x4F] )
      sub_453910(SaveLoad_CurrentSavegame, (int)v9);
  }
}
