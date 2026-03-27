char __thiscall sub_5222D0(TESForm *this, char a2)
{
  int v3; // eax
  int v4; // esi
  void *AVFromGroupOffset; // ebx
  int v6; // eax
  double v7; // st7
  double v8; // st7
  int v9; // ebp
  int k; // esi
  int v11; // eax
  char GroupOffsetFromAV; // al
  double v13; // st7
  int v14; // ebx
  int v15; // ebp
  int i; // esi
  double v17; // st7
  double v18; // st7
  TESObjectREFR *v19; // esi
  TESObjectCELL *v20; // ebp
  int v21; // edx
  char *v22; // eax
  int v23; // ecx
  _BYTE *v24; // ecx
  unsigned __int8 AVi; // bl
  unsigned __int8 v26; // al
  UInt32 v27; // eax
  TESObjectREFR *v28; // ebp
  unsigned __int8 v29; // bl
  TESObjectCELL *ParentCell; // eax
  unsigned __int8 v31; // al
  __int16 v32; // ax
  unsigned __int8 v33; // bl
  unsigned __int8 v34; // al
  __int16 v35; // ax
  int v36; // eax
  int v37; // eax
  char v38; // al
  bool v40; // [esp+6h] [ebp-1Ah]
  bool v41; // [esp+7h] [ebp-19h]
  unsigned __int8 v42; // [esp+7h] [ebp-19h]
  unsigned __int8 v43; // [esp+7h] [ebp-19h]
  float v44; // [esp+8h] [ebp-18h]
  float v45; // [esp+8h] [ebp-18h]
  int v46; // [esp+Ch] [ebp-14h]
  char j; // [esp+10h] [ebp-10h]
  float v48; // [esp+10h] [ebp-10h]
  int v49; // [esp+14h] [ebp-Ch]
  float v50; // [esp+14h] [ebp-Ch]
  int v51; // [esp+1Ch] [ebp-4h]
  int v52; // [esp+1Ch] [ebp-4h]
  unsigned __int8 v53; // [esp+24h] [ebp+4h]

  v3 = TESActorBaseData_GetLevel((TESActorBaseData *)((char *)this + 0x24)) - 1;
  v46 = v3;
  if ( *((_DWORD *)this + 0x3A) )
  {
    v3 = *((_DWORD *)this + 0x41);
    if ( v3 )
    {
      v41 = this->member.refID == 7;
      v40 = 1;
      if ( this->member.refID == 7 )
        v40 = iClassCharactergenClass != *(_DWORD *)(v3 + 0xC);
      v4 = 0;
      v51 = 0;
      while ( 1 )
      {
        AVFromGroupOffset = (void *)ActorValue_GetAVFromGroupOffset(0, v4);
        if ( AVFromGroupOffset == (void *)6 && !v41 )
          goto LABEL_32;
        v6 = *((_DWORD *)this + 0x3A);
        v7 = (*((_BYTE *)this + 0x28) & 1) != 0
           ? (double)(unsigned __int8)TESAttributes_GetAVi((_BYTE *)(v6 + 0x80), (char)AVFromGroupOffset)
           : (double)(unsigned __int8)TESAttributes_GetAVi((_BYTE *)(v6 + 0x74), (char)AVFromGroupOffset);
        v44 = v7;
        if ( v40 )
          break;
LABEL_29:
        if ( v44 > fCostant_100 )
          v44 = flt_A2FE7C;
        TESAttributes_SetAVi((_BYTE *)this + 0x88, (char)AVFromGroupOffset, (int)v44);
LABEL_32:
        v51 = ++v4;
        if ( v4 >= 8 )
        {
          v14 = 0;
          v48 = (float)v46;
          do
          {
            v15 = 0xFFFFFFFF;
            v52 = ActorValue_GetAVFromGroupOffset(2, v14);
            if ( v40 )
            {
              for ( i = 0; i < 7; ++i )
              {
                if ( sub_51BF00(*((_DWORD **)this + 0x41), i) == v52 )
                  v15 = 1;
              }
            }
            v17 = v48;
            if ( v15 == 1 )
              v18 = v17 + dbl_A492B0;
            else
              v18 = v17 * dbl_A2FC80 + dbl_A3F3F0;
            v45 = v18;
            if ( v40 )
            {
              v19 = *((TESObjectREFR **)this + 0x41);
              v20 = *((TESObjectCELL **)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, v14) + 0xD);
              if ( TESObjectREFR_GetParentCell(v19) == v20 )
              {
                v50 = v45 + dbl_A3F3F0;
                v45 = v50 + v48 * dbl_A2FAA0;
              }
            }
            v21 = v52;
            v22 = (char *)(*((_DWORD *)this + 0x3A) + 0x50);
            v23 = 7;
            do
            {
              if ( *v22 == v21 )
              {
                v52 = v22[1];
                v45 = (double)v52 + v45;
              }
              v22 += 2;
              --v23;
            }
            while ( v23 );
            if ( v45 > fCostant_100 )
              v45 = flt_A2FE7C;
            *((_BYTE *)this + v14++ + 0xEC) = (int)v45;
          }
          while ( v14 < 0x15 );
          TESForm_MarkAsModified(this, 0x200);
          LOBYTE(v52) = 0;
          if ( ValueModifierEffect_GetAV(*((HighProcess **)this + 0x41)) == 5
            || TESObjectREFR_GetNiNode(*((TESObjectREFR **)this + 0x41)) == (void *)5 )
          {
            LOBYTE(v52) = 1;
          }
          v24 = (char *)this + 0x88;
          if ( v41 )
          {
            AVi = TESAttributes_GetAVi(v24, 5);
            v26 = TESAttributes_GetAVi((_BYTE *)this + 0x88, 0);
            Calc_ActorBaseHealth(v26, AVi);
          }
          else
          {
            v28 = *((TESObjectREFR **)this + 0x41);
            v29 = TESAttributes_GetAVi(v24, 5);
            v42 = TESAttributes_GetAVi((_BYTE *)this + 0x88, 0);
            ParentCell = TESObjectREFR_GetParentCell(v28);
            sub_547F80(v42, v29, v46, *(float *)&v52, (int)ParentCell);
          }
          if ( !a2 )
          {
            TESActorBase_SetHealth(this, v27);
            v31 = TESAttributes_GetAVi((_BYTE *)this + 0x88, 1);
            Calc_ActorBaseMagicka(v31, 0.0);
            TESActorBaseData_SetMagicka((_WORD *)this + 0x12, v32);
            v33 = TESAttributes_GetAVi((_BYTE *)this + 0x88, 2);
            v53 = TESAttributes_GetAVi((_BYTE *)this + 0x88, 3);
            v43 = TESAttributes_GetAVi((_BYTE *)this + 0x88, 5);
            v34 = TESAttributes_GetAVi((_BYTE *)this + 0x88, 0);
            v35 = Calc_ActorBaseFatigue(v34, v43, v53, v33);
            TESActorBaseData_SetFatigue((_WORD *)this + 0x12, v35);
          }
          v36 = *((_DWORD *)this + 0x41);
          if ( v36 )
          {
            TESAIForm_SetServiceFlags((_DWORD *)this + 0x1A, *(_DWORD *)(v36 + 0x64));
            v37 = sub_51BEB0(*((unsigned __int8 **)this + 0x41));
            TESAIForm_SetTrainingSkill((_BYTE *)this + 0x68, v37);
            v38 = sub_4A9700(*((_BYTE **)this + 0x41));
            LOBYTE(v3) = TESAIForm_SetTrainingLevel((_BYTE *)this + 0x68, v38);
          }
          else
          {
            LOBYTE(v3) = TESAIForm_SetServiceFlags((_DWORD *)this + 0x1A, 0);
          }
          return v3;
        }
      }
      if ( AVFromGroupOffset == (void *)ValueModifierEffect_GetAV(*((HighProcess **)this + 0x41)) )
      {
        v8 = fAttributeClassPrimaryBonus;
      }
      else
      {
        if ( AVFromGroupOffset != TESObjectREFR_GetNiNode(*((TESObjectREFR **)this + 0x41)) )
          goto LABEL_17;
        v8 = fAttributeClassSecondaryBonus;
      }
      v44 = v8 + v44;
LABEL_17:
      for ( j = 0; j < 0x15; ++j )
      {
        if ( *((void **)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, j) + 0xC) == AVFromGroupOffset )
        {
          v9 = ActorValue_GetAVFromGroupOffset(2, j);
          v49 = 0xFFFFFFFF;
          for ( k = 0; k < 7; ++k )
          {
            v11 = sub_51BF00(*((_DWORD **)this + 0x41), k);
            if ( v11 == v9 )
            {
              GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, v11);
              if ( *((void **)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV) + 0xC) == AVFromGroupOffset )
                v49 = 1;
            }
          }
          v13 = (double)v46;
          if ( v49 != 1 )
            v13 = v13 * dbl_A38538;
          v44 = v13 + v44;
        }
      }
      v4 = v51;
      goto LABEL_29;
    }
  }
  return v3;
}
