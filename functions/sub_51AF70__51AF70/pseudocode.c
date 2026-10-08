// Dispatches parsed TESAnimGroup events whose timestamps are crossed between previous and current sequence time, including wrap-around. Sound records have a non-null +0x0C sound entry; Enum records use the +0x04 ID and packed source-text position at +0x08. This is reached from ActorAnimData's sampled-slot update.
unsigned int __userpurge TESAnimGroup_DispatchTextKeyEvents@<eax>(
        int a1@<ecx>,
        unsigned int a2@<esi>,
        TESObjectREFR *a3,
        float a4,
        float a5,
        int a6)
{
  double v6; // st7
  double v7; // st6
  unsigned int result; // eax
  unsigned int v9; // edx
  int v11; // ebp
  double v12; // st5
  int v13; // eax
  int *sound; // ebx
  float *v15; // eax
  int v16; // eax
  void *v17; // eax
  unsigned int v18; // eax
  void *v19; // eax
  Actor *v20; // eax
  TESForm *v21; // eax
  _DWORD *v22; // eax
  int *v23; // ebx
  int v24; // eax
  float *v25; // eax
  NiNode *inventoryPC; // eax
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // ebp
  int v30; // [esp+20h] [ebp-30h]
  unsigned int v31; // [esp+24h] [ebp-2Ch]
  int v32; // [esp+28h] [ebp-28h]
  float v33; // [esp+54h] [ebp+4h]
  float v34; // [esp+54h] [ebp+4h]

  v6 = a5; /*0x51af73*/
  v32 = a1; /*0x51af77*/
  v7 = a4; /*0x51af7b*/
  result = *(_DWORD *)(a1 + 0x24); /*0x51af92*/
  v9 = 0; /*0x51af95*/
  v31 = 0; /*0x51af99*/
  if ( result )
  {
    v30 = 0; /*0x51afab*/
    while ( 1 )
    {
      v11 = v9 >= result ? 0 : v30 + *(_DWORD *)(a1 + 0x28);
      v12 = *(float *)v11; /*0x51afd4*/
      if ( a4 > (double)a5 && (v12 > v7 || v12 <= v6) || v12 > v7 && v12 <= v6 ) /*0x51b002*/
      {
        v13 = *(_DWORD *)(v11 + 0xC); /*0x51b010*/
        if ( v13 ) /*0x51b015*/
        {
          sound = (int *)MEMORY[0xB33398]->sound; /*0x51b021*/
          if ( sound ) /*0x51b026*/
          {
            a2 = (unsigned int)OSGLobals_PlaySound( /*0x51b05e*/
                                 sound,
                                 *(void **)(v13 + 0xC),
                                 (2 - ((*(_DWORD *)(v13 + 0x3C) & 0x40) != 0)) | 0x100,
                                 1);
            if ( a2 ) /*0x51b062*/
            {
              v15 = a3->vtbl->GetPos(a3); /*0x51b072*/
              sub_6B7360((int *)a2, *v15, v15[1], v15[2]); /*0x51b0a4*/
              v33 = (double)*(unsigned __int8 *)(v11 + 4) / dbl_A3DDD8; /*0x51b0be*/
              sub_6B7280((int *)a2, v33); /*0x51b0c9*/
              sub_6B7310((int *)a2, *(float *)(v11 + 8)); /*0x51b0d7*/
              sub_6AC3E0((_DWORD **)sound, *(_DWORD *)a2, (LONG)a3); /*0x51b0e2*/
              sub_6B7190((int *)a2, (*(_DWORD *)(*(_DWORD *)(v11 + 0xC) + 0x3C) & 0x10) != 0); /*0x51b106*/
LABEL_26:
              sub_6B73E0((_DWORD *)a2); /*0x51b1f2*/
              FormHeapFree(a2); /*0x51b1fa*/
            }
          }
        }
        else
        {
          switch ( *(_BYTE *)(v11 + 4) ) /*0x51b11d*/
          {
            case 0: /*0x51b11d*/
            case 1: /*0x51b11d*/
            case 2: /*0x51b11d*/
            case 3: /*0x51b11d*/
              SoundManager_PlayFootstepAnimEvent(a3, *(unsigned __int8 *)(v11 + 4)); /*0x51b262*/
              break; /*0x51b26a*/
            case 4: /*0x51b11d*/
            case 5: /*0x51b11d*/
            case 6: /*0x51b11d*/
              if ( a3->vtbl->IsActor(a3) ) /*0x51b279*/
              {
                v20 = (Actor *)OblivionDynamicCast( /*0x51b292*/
                                 a3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
                if ( v20 ) /*0x51b29c*/
                {
                  if ( Actor_IsCreature(v20) ) /*0x51b2a4*/
                  {
                    v21 = a3->vtbl->GetBaseForm(a3); /*0x51b2c9*/
                    v22 = OblivionDynamicCast( /*0x51b2cc*/
                            v21,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESCreature `RTTI Type Descriptor',
                            0);
                    v23 = (int *)MEMORY[0xB33398]->sound; /*0x51b2db*/
                    v24 = TESCreature_SelectSoundForAnimEnum(v22, *(unsigned __int8 *)(v11 + 4)); /*0x51b2e4*/
                    if ( v24 ) /*0x51b2eb*/
                    {
                      if ( v23 ) /*0x51b2f3*/
                      {
                        a2 = (unsigned int)OSGLobals_PlaySound(v23, *(void **)(v24 + 0xC), 0x102, 1); /*0x51b30b*/
                        if ( a2 ) /*0x51b30f*/
                        {
                          v25 = a3->vtbl->GetPos(a3); /*0x51b31f*/
                          sub_6B7360((int *)a2, *v25, v25[1], v25[2]); /*0x51b351*/
                          sub_6AC3E0((_DWORD **)v23, *(_DWORD *)a2, (LONG)a3); /*0x51b35c*/
                          sub_6B7280((int *)a2, flt_A52A74); /*0x51b36d*/
                          sub_6B7310((int *)a2, 1.0); /*0x51b37a*/
                          sub_6B71C0((int *)a2, 0); /*0x51b383*/
                          goto LABEL_26; /*0x51b388*/
                        }
                      }
                    }
                  }
                }
              }
              break; /*0x51b388*/
            case 9: /*0x51b11d*/
            case 0xA: /*0x51b11d*/
              SoundManager_PlayWeaponEquipAnimEvent(a2, a3); /*0x51b390*/
              break; /*0x51b398*/
            case 0xB: /*0x51b11d*/
              if ( a6 ) /*0x51b3ac*/
              {
                if ( a3 && a3 == (TESObjectREFR *)reference ) /*0x51b3b9*/
                  inventoryPC = reference->inventoryPC; /*0x51b3bb*/
                else
                  inventoryPC = 0; /*0x51b3c3*/
                v27 = ((int (__thiscall *)(TESObjectREFR *, NiNode *))a3->vtbl->Unk_4F)(a3, inventoryPC); /*0x51b3d0*/
                if ( v27 ) /*0x51b3d4*/
                {
                  v28 = *(_DWORD *)(a6 + 0x20); /*0x51b3da*/
                  if ( *(_DWORD *)(v28 + 0xC) ) /*0x51b3dd*/
                  {
                    v29 = *(_DWORD *)(v11 + 8); /*0x51b3e3*/
                    a2 = (unsigned __int8)v29; /*0x51b3f3*/
                    (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v27 + 0xD8))( /*0x51b407*/
                      v27,
                      *(_DWORD *)(*(_DWORD *)(v28 + 0x10) + 8 * (unsigned __int8)v29 + 4) + (v29 >> 8) + 0xB);
                  }
                }
              }
              break; /*0x51b407*/
            case 0xC: /*0x51b11d*/
              v16 = *(_DWORD *)(a6 + 0x20); /*0x51b13b*/
              v34 = 1.0; /*0x51b13e*/
              if ( *(_DWORD *)(v16 + 0xC) ) /*0x51b142*/
                v34 = atof((const char *)(*(_DWORD *)(*(_DWORD *)(v16 + 0x10) /*0x51b167*/
                                                    + 8 * (unsigned __int8)*(_DWORD *)(v11 + 8)
                                                    + 4)
                                        + (*(_DWORD *)(v11 + 8) >> 8)
                                        + 0x11));
              SoundManager_StopRefLoopingSoundsWithFade((unsigned int **)MEMORY[0xB33398]->sound, (LONG)a3, v34); /*0x51b180*/
              break; /*0x51b185*/
            case 0xD: /*0x51b11d*/
              Player_UpdateSoundDistanceFromRef(reference, (int)a3); /*0x51b12b*/
              break; /*0x51b130*/
            case 0xE: /*0x51b11d*/
              if ( a3->vtbl->IsActor(a3) ) /*0x51b194*/
              {
                v17 = OblivionDynamicCast( /*0x51b1ad*/
                        a3,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Creature `RTTI Type Descriptor',
                        0);
                a2 = (unsigned int)v17; /*0x51b1b2*/
                if ( v17 ) /*0x51b1b9*/
                {
                  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v17 + 0x388))(v17) ) /*0x51b1c9*/
                  {
                    TESObjectREFR_PlayResolvedAnimSoundNote((void *)a2, "FSTHorseSoft", 0, 0x102, 1); /*0x51b1e3*/
                    goto LABEL_25; /*0x51b1e3*/
                  }
                }
              }
              break; /*0x51b1e3*/
            case 0xF: /*0x51b11d*/
              if ( a3->vtbl->IsActor(a3) ) /*0x51b211*/
              {
                v19 = OblivionDynamicCast( /*0x51b22a*/
                        a3,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Creature `RTTI Type Descriptor',
                        0);
                a2 = (unsigned int)v19; /*0x51b22f*/
                if ( v19 ) /*0x51b236*/
                {
                  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v19 + 0x388))(v19) ) /*0x51b246*/
                  {
                    TESObjectREFR_PlayResolvedAnimSoundNote((void *)a2, "FSTHorseRide", 0, 0x102, 1); /*0x51b25e*/
LABEL_25:
                    a2 = v18; /*0x51b1e8*/
                    if ( v18 ) /*0x51b1ec*/
                      goto LABEL_26; /*0x51b1ec*/
                  }
                }
              }
              break; /*0x51b1ec*/
            default:
              break;
          }
        }
      }
      a1 = v32; /*0x51b413*/
      result = *(_DWORD *)(v32 + 0x24); /*0x51b417*/
      v30 += 0x10; /*0x51b41a*/
      v9 = ++v31; /*0x51b41f*/
      if ( v31 >= result ) /*0x51b428*/
        break; /*0x51b428*/
      v6 = a5; /*0x51afb1*/
      v7 = a4; /*0x51afb5*/
    }
  }
  return result; /*0x51b432*/
}
