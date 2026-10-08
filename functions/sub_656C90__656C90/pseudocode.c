void __userpurge sub_656C90(
        int *ecx0@<ecx>,
        ActorSkinInfo *ebp0@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        unsigned int changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  TESForm *v9; // ebx
  PlayerCharacter *v11; // edi
  int v12; // eax
  char v13; // cl
  void (__stdcall *v14)(int, _DWORD); // eax
  int v15; // ebp
  ActorSkinInfo *SkinInfoByPerspective; // eax
  int v17; // ebp
  ActorSkinInfo *v18; // eax
  int v19; // eax
  int v20; // ebp
  int v21; // eax
  int v22; // eax
  NiNode *NodeByPerspective; // eax
  UInt32 DwordAtOffset40; // ebp
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
  int v43; // eax
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
  ActorAnimData *a2; // [esp+34h] [ebp-A0h]
  PlayerCharacter *angleZ; // [esp+38h] [ebp-9Ch]
  float angleZa; // [esp+38h] [ebp-9Ch]
  float angleZb; // [esp+38h] [ebp-9Ch]
  ActorAnimData *AnimDataByPerspective; // [esp+40h] [ebp-94h]
  float v63; // [esp+4Ch] [ebp-88h]
  float v64; // [esp+4Ch] [ebp-88h]
  float v65; // [esp+4Ch] [ebp-88h]
  float v66; // [esp+4Ch] [ebp-88h]
  void *v67; // [esp+50h] [ebp-84h]
  NiNode *a1; // [esp+54h] [ebp-80h]
  NiTransform v69; // [esp+58h] [ebp-7Ch] BYREF
  NiTransform v70; // [esp+8Ch] [ebp-48h] BYREF

  v9 = (TESForm *)owner; /*0x656c9b*/
  BaseProcess_FinishInitLoadGame((BaseProcess *)ecx0, changeMask, currentFlags, owner); /*0x656cb2*/
  v11 = (PlayerCharacter *)OblivionDynamicCast( /*0x656cd0*/
                             owner,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v12 = ((int (__usercall *)@<eax>(TESForm *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))v9->vtbl[1].Unk_18)( /*0x656cdc*/
          v9,
          0,
          a5,
          a4,
          a3);
  if ( v12 ) /*0x656ce0*/
  {
    v13 = *((_BYTE *)ecx0 + 0x11C); /*0x656ce2*/
    if ( v13 ) /*0x656cea*/
    {
      v14 = *(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v12 + 0x9C); /*0x656cf6*/
      if ( (unsigned __int8)(v13 - 1) > 3u ) /*0x656cfe*/
        v14(0, 0); /*0x656d06*/
      else
        v14(1, 0); /*0x656d02*/
    }
  }
  if ( v11 ) /*0x656d0b*/
  {
    v15 = *ecx0; /*0x656d19*/
    if ( v11 == reference ) /*0x656d1b*/
    {
      angleZ = reference; /*0x656d1d*/
      a2 = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x656d2b*/
      SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)reference, 1); /*0x656d2e*/
      (*(void (__thiscall **)(int *, _DWORD, ActorSkinInfo *, ActorAnimData *, PlayerCharacter *, ActorSkinInfo *))(v15 + 0x150))( /*0x656d44*/
        ecx0,
        *((unsigned __int8 *)ecx0 + 0x115),
        SkinInfoByPerspective,
        a2,
        angleZ,
        ebp0);
      v17 = *ecx0; /*0x656d4c*/
      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x656d5c*/
      v18 = Actor_GetSkinInfoByPerspective((Actor *)reference, 0); /*0x656d5f*/
LABEL_12:
      ebp0 = v18; /*0x656dba*/
      (*(void (__thiscall **)(int *, _DWORD))(v17 + 0x150))(ecx0, *((unsigned __int8 *)ecx0 + 0x115)); /*0x656dcb*/
      goto LABEL_13; /*0x656dcb*/
    }
    v19 = (int)v11->vtbl->super.super.super.GetActiveSkinInfo((TESObjectREFR *)v11); /*0x656d70*/
    if ( (*(int (__thiscall **)(int *, int))(v15 + 0x118))(ecx0, v19) ) /*0x656d7b*/
    {
      v20 = *ecx0; /*0x656d89*/
      v21 = (int)v11->vtbl->super.super.super.GetActiveSkinInfo((TESObjectREFR *)v11); /*0x656d8d*/
      if ( (*(int (__thiscall **)(int *, int))(v20 + 0x124))(ecx0, v21) ) /*0x656d98*/
      {
        v17 = *ecx0; /*0x656da6*/
        v22 = ((int (__thiscall *)(PlayerCharacter *, PlayerCharacter *, ActorSkinInfo *))v11->vtbl->super.super.super.GetAnimData)( /*0x656dab*/
                v11,
                v11,
                ebp0);
        v18 = (ActorSkinInfo *)((int (__thiscall *)(PlayerCharacter *, int))v11->vtbl->super.super.super.GetActiveSkinInfo)( /*0x656db8*/
                                 v11,
                                 v22);
        goto LABEL_12; /*0x656db8*/
      }
    }
  }
LABEL_13:
  if ( owner == (MobileObject *)reference ) /*0x656dd5*/
    NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x656dd9*/
  else
    NodeByPerspective = (NiNode *)owner->super.niNode; /*0x656de0*/
  a1 = NodeByPerspective; /*0x656de5*/
  if ( v11 ) /*0x656de9*/
  {
    if ( v11->super.super.super.super.niNode ) /*0x656def*/
    {
      if ( ecx0[0x48] ) /*0x656df9*/
      {
        if ( !v11->vtbl->super.super.super.IsDead((TESObjectREFR *)v11, 0) ) /*0x656e12*/
        {
          DwordAtOffset40 = Shared_GetDwordAtOffset40((void *)ecx0[0x48]); /*0x656e29*/
          if ( Shared_GetDwordAtOffset40(v11) != DwordAtOffset40 /*0x656ead*/
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
            ecx0[0x48] = 0; /*0x6572ee*/
            *((_BYTE *)ecx0 + 0x11D) = 0; /*0x6572f8*/
            if ( v11 == reference ) /*0x657306*/
              reference->unk61C = 0.0; /*0x65730e*/
          }
          else
          {
            v29 = *((_BYTE *)ecx0 + 0x11D); /*0x656eb3*/
            switch ( v29 ) /*0x656ecb*/
            {
              case 1: /*0x656ecb*/
              case 2: /*0x656ecb*/
              case 3: /*0x656ecb*/
              case 4: /*0x656ecb*/
                v30 = ecx0[0x5F]; /*0x656ed2*/
                if ( v30 ) /*0x656eda*/
                {
                  v31 = (*(int (__thiscall **)(_DWORD, char *, ActorSkinInfo *))(**(_DWORD **)(*(_DWORD *)(v30 + 0x98) /*0x656ef0*/
                                                                                             + 0x7C)
                                                                               + 0x4C))(
                          *(_DWORD *)(*(_DWORD *)(v30 + 0x98) + 0x7C),
                          off_B06560[0],
                          ebp0);
                  if ( v31 ) /*0x656ef4*/
                    *(_WORD *)(v31 + 0x18) |= 1u; /*0x656ef6*/
                  v32 = *(_DWORD *)(*(_DWORD *)(ecx0[0x5F] + 0x98) + 0x7C); /*0x656f07*/
                  v33 = (*(int (__thiscall **)(int, char *, ActorAnimData *))(*(_DWORD *)v32 + 0x4C))( /*0x656f15*/
                          v32,
                          off_B06568[0],
                          AnimDataByPerspective);
                  if ( v33 ) /*0x656f19*/
                    *(_WORD *)(v33 + 0x18) |= 1u; /*0x656f1b*/
                }
                *((_BYTE *)ecx0 + 0x11D) = 1; /*0x656f20*/
                break; /*0x656f27*/
              case 6: /*0x656ecb*/
              case 7: /*0x656ecb*/
              case 8: /*0x656ecb*/
              case 9: /*0x656ecb*/
                *((_BYTE *)ecx0 + 0x11D) = 6; /*0x656f29*/
                break; /*0x656f29*/
              default:
                break;
            }
            if ( *((_BYTE *)ecx0 + 0x11D) ) /*0x656f30*/
            {
              sub_4D7300((_BYTE *)ecx0[0x48], *((unsigned __int8 *)ecx0 + 0x124), 1); /*0x656f4d*/
              v34 = reference; /*0x656f52*/
              if ( v11 == reference ) /*0x656f5a*/
              {
                if ( v34->isThirdPerson ) /*0x656f5c*/
                {
                  (*(void (__thiscall **)(int *, PlayerCharacter *))(*ecx0 + 0x384))(ecx0, reference); /*0x656f70*/
                  v34 = reference; /*0x656f72*/
                }
                TogglePOV(v34, v34->isThirdPerson); /*0x656f80*/
                v35 = reference; /*0x656f85*/
                if ( reference->isThirdPerson ) /*0x656f8b*/
                {
                  (*(void (__thiscall **)(int *, PlayerCharacter *))(*ecx0 + 0x384))(ecx0, reference); /*0x656f9f*/
                  v35 = reference; /*0x656fa1*/
                }
                TogglePOV(v35, v35->isThirdPerson); /*0x656faf*/
              }
              else
              {
                (*(void (__thiscall **)(int *, PlayerCharacter *))(*ecx0 + 0x384))(ecx0, v11); /*0x656fc1*/
              }
            }
            *((_BYTE *)ecx0 + 0x11D) = v29; /*0x656fc6*/
            if ( v29 == 4 || v29 == 9 ) /*0x656fd1*/
            {
              if ( v67 ) /*0x656fdc*/
              {
                if ( v26 ) /*0x656fe4*/
                {
                  v36 = *((_BYTE *)ecx0 + 0x124); /*0x656fea*/
                  if ( v36 < (unsigned int)v26->markers.numObjs ) /*0x656ff8*/
                  {
                    v37 = (int)&v26->markers.data[v36]; /*0x657004*/
                    v38 = *(float *)v37; /*0x65700a*/
                    v39 = *(float *)(v37 + 0xC); /*0x65700c*/
                    v40 = *(float *)(v37 + 8); /*0x65700f*/
                    v69.rot.data[2][1] = *(float *)(v37 + 4); /*0x657012*/
                    v69.rot.data[2][0] = v38; /*0x657016*/
                    v41 = ecx0[0x48]; /*0x65701a*/
                    v69.rot.data[2][2] = v40; /*0x657029*/
                    v42 = *(int (__thiscall **)(int))(*(_DWORD *)v41 + 0x174); /*0x657030*/
                    v69.scale = v39; /*0x657038*/
                    HIDWORD(v56) = v42(v41); /*0x65703e*/
                    LODWORD(v56) = sub_4D7AF0((float *)ecx0[0x48], (NiMatrix33 *)&v70.pos); /*0x657052*/
                    sub_710580(v56, 1u, (int)v69.rot.data[2], (int)&v69); /*0x657053*/
                    v43 = LODWORD(v69.rot.data[0][0]); /*0x65705c*/
                    *((_BYTE *)ecx0 + 0x136) = BYTE2(v69.scale); /*0x657060*/
                    v44 = v69.rot.data[0][1]; /*0x657066*/
                    ecx0[0x4A] = v43; /*0x657070*/
                    *(_QWORD *)(ecx0 + 0x4B) = __PAIR64__(LODWORD(v69.rot.data[0][2]), LODWORD(v44)); /*0x657072*/
                    v63 = (double)LOWORD(v39) / dbl_A2FC70; /*0x657096*/
                    v64 = v63 + *(float *)(ecx0[0x48] + 0x28); /*0x6570a1*/
                    sub_6FAEE0((Unk128 *)(ecx0 + 0x4A), v64); /*0x6570ac*/
                  }
                }
                v45 = *((unsigned __int8 *)ecx0 + 0x136); /*0x6570b9*/
                angleZa = v11->vtbl->super.super.super.GetScale((TESObjectREFR *)v11); /*0x6570c9*/
                sub_4AEB40(v69.rot.data[1], v45, angleZa); /*0x6570d2*/
                v65 = (double)*((unsigned __int16 *)ecx0 + 0x9A) / dbl_A2FC70; /*0x6570f1*/
                NiMatrix33_InitRotationZ(&v70.rot, v65); /*0x6570fc*/
                v46 = sub_7101F0(&v70, &v69, (NiPoint3 *)v69.rot.data[1]); /*0x65710f*/
                v47 = *((float *)ecx0 + 0x4A); /*0x657114*/
                *(_QWORD *)&v69.rot.data[1][0] = *(_QWORD *)&v46->rot.data[0][0]; /*0x657122*/
                v48 = v46->rot.data[0][2]; /*0x657131*/
                v69.rot.data[0][0] = v47 + v69.rot.data[1][0]; /*0x657134*/
                vtbl = v11->vtbl; /*0x65713b*/
                v50 = *((float *)ecx0 + 0x4B) + v69.rot.data[1][1]; /*0x65713d*/
                v69.rot.data[1][2] = v48; /*0x657141*/
                Unk_73 = vtbl->super.super.Unk_73; /*0x657145*/
                v69.rot.data[0][1] = v50; /*0x65714f*/
                v69.rot.data[0][2] = *((float *)ecx0 + 0x4C) + v69.rot.data[1][2]; /*0x65715d*/
                ((void (__thiscall *)(PlayerCharacter *, NiTransform *))Unk_73)(v11, &v69); /*0x657161*/
                v52 = *((_BYTE *)ecx0 + 0x11D); /*0x657163*/
                *((_BYTE *)ecx0 + 0x11D) = 0; /*0x657169*/
                if ( v11 != reference ) /*0x657176*/
                {
                  v66 = (double)*((unsigned __int16 *)ecx0 + 0x9A) / dbl_A2FC70; /*0x657198*/
                  ((void (__thiscall *)(PlayerCharacter *, _DWORD))v11->vtbl->super.super.Unk_7A)(v11, LODWORD(v66)); /*0x6571a3*/
                  v53 = sub_4AEBE0(*((unsigned __int8 *)ecx0 + 0x136)); /*0x6571b1*/
                  angleZb = v53; /*0x6571b9*/
                  sub_659B90((int *)v11, v53, angleZb); /*0x6571bc*/
                }
                *((_BYTE *)ecx0 + 0x11D) = v52; /*0x6571c3*/
                if ( MobileObject_GetCharProxy((MobileObject *)v11) ) /*0x6571c9*/
                {
                  CharProxy = MobileObject_GetCharProxy((MobileObject *)v11); /*0x6571d5*/
                  sub_452A10(CharProxy, (NiPoint3 *)(ecx0 + 0x4A)); /*0x6571dc*/
                }
              }
            }
            if ( !(*(int (__thiscall **)(int *))(*ecx0 + 8))(ecx0) ) /*0x6571e8*/
            {
              v55 = *((_BYTE *)ecx0 + 0x11D); /*0x6571ee*/
              if ( (v55 == 9 || v55 == 4) && !v11->vtbl->super.GetMountedHorse((Actor *)v11) ) /*0x657206*/
                sub_88CE30(a1, 1, 1, 0); /*0x657216*/
            }
            v9 = (TESForm *)owner; /*0x65721e*/
          }
        }
      }
    }
    if ( *((_BYTE *)ecx0 + 0x11D) ) /*0x657225*/
    {
      if ( !v11->vtbl->super.GetMountedHorse((Actor *)v11) && !ecx0[0x48] ) /*0x65723e*/
      {
        *((_BYTE *)ecx0 + 0x11D) = 0; /*0x657246*/
        if ( v11 == reference ) /*0x657253*/
          reference->unk61C = 0.0; /*0x657257*/
      }
    }
  }
  if ( a1 && *((_BYTE *)ecx0 + 0x11C) == 2 || *((_BYTE *)ecx0 + 0x11C) == 1 ) /*0x657275*/
  {
    sub_88D070(a1, 1, 1, 0); /*0x65727e*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)a1, 0.0, 0); /*0x657290*/
  }
  ActiveEffect_Base_PostLinkAEList((EffectNode *)ecx0[0x5D], (TESObjectREFR *)v11); /*0x65729d*/
  *((_BYTE *)ecx0 + 0x161) = 1; /*0x6572a7*/
  if ( v11 ) /*0x6572af*/
    (*(void (__thiscall **)(int *, PlayerCharacter *, int, _DWORD, _DWORD))(*ecx0 + 0x42C))(ecx0, v11, 1, 0, 0); /*0x6572c2*/
  if ( *((_BYTE *)ecx0 + 0x16B) ) /*0x6572c4*/
  {
    if ( !ecx0[0x4F] ) /*0x6572cd*/
      TESSaveLoadGame_QueueDeferredDeletion(g_TESSaveLoadGame, v9); /*0x6572dd*/
  }
}
