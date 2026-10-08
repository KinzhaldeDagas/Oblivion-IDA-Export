// Authoritative Oblivion TESNPC auto-stat calculation. For each of 21 skills: major = 25+(level-1), non-major = 5+0.1*(level-1), then add 5+0.5*(level-1) for matching class specialization, then the signed race bonus, cap at 100, and store in TESNPC::baseSkills. The chargen placeholder class suppresses major/specialization contributions. Attributes start from sex-specific race values, add configured +5 class-primary bonuses, then add (level-1) per governed major skill or 0.2*(level-1) per governed non-major skill, capped at 100.
void __thiscall TESNPC_RecalculateAutoStats(TESNPC *this, bool skipDerivedStats)
{
  TESClass *npcClass; // eax
  int v4; // esi
  int AVFromGroupOffset; // ebx
  TESRace *race; // eax
  double v7; // st7
  double value; // st7
  int v9; // ebp
  signed int j; // esi
  SkillActorValue MajorSkillAV; // eax
  UInt8 GroupOffsetFromAV; // al
  double v13; // st7
  int v14; // ebx
  int v15; // ebp
  signed int i; // esi
  double v17; // st7
  double v18; // st7
  TESClass *v19; // esi
  SkillSpecialization specialization; // ebp
  int v21; // edx
  BonusSkillInfo *bonusSkills; // eax
  int v23; // ecx
  TESAttributes *p_attributes; // ecx
  unsigned __int8 AVi; // bl
  unsigned __int8 v26; // al
  UInt32 v27; // eax
  TESClass *v28; // ebp
  unsigned __int8 v29; // bl
  UInt32 DwordAtOffset40; // eax
  unsigned __int8 v31; // al
  __int16 v32; // ax
  unsigned __int8 v33; // bl
  unsigned __int8 v34; // al
  __int16 v35; // ax
  TESClass *v36; // eax
  SkillActorValue v37; // eax
  char v38; // al
  bool v39; // [esp+6h] [ebp-1Ah]
  bool v40; // [esp+7h] [ebp-19h]
  unsigned __int8 v41; // [esp+7h] [ebp-19h]
  unsigned __int8 v42; // [esp+7h] [ebp-19h]
  float v43; // [esp+8h] [ebp-18h]
  float v44; // [esp+8h] [ebp-18h]
  int v45; // [esp+Ch] [ebp-14h]
  char skillIndex; // [esp+10h] [ebp-10h]
  float skillIndexa; // [esp+10h] [ebp-10h]
  int v48; // [esp+14h] [ebp-Ch]
  float v49; // [esp+14h] [ebp-Ch]
  int v50; // [esp+1Ch] [ebp-4h]
  int bonus; // [esp+1Ch] [ebp-4h]
  unsigned __int8 skipDerivedStatsa; // [esp+24h] [ebp+4h]

  v45 = TESActorBaseData_GetLevel(&this->member.super.actorBaseData) - 1; /*0x5222eb*/
  if ( this->member.form.race )
  {
    npcClass = this->member.npcClass; /*0x5222f5*/
    if ( npcClass )
    {
      v40 = this->member.super.super.super.refID == 7; /*0x52230e*/
      v39 = 1; /*0x522318*/
      if ( this->member.super.super.super.refID == 7 ) /*0x52231d*/
        v39 = g_iClassCharactergenClass.value != npcClass->members.super.refID; /*0x52232a*/
      v4 = 0; /*0x522330*/
      v50 = 0; /*0x522333*/
      while ( 1 )
      {
        AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v4); /*0x522340*/
        if ( AVFromGroupOffset == 6 && !v40 ) /*0x52234f*/
          goto LABEL_32; /*0x52234f*/
        race = this->member.form.race; /*0x522359*/
        v7 = (this->member.super.actorBaseData.flags & 1) != 0
           ? (double)(unsigned __int8)TESAttributes_GetAVi(&race->femaleAttr, AVFromGroupOffset)
           : (double)(unsigned __int8)TESAttributes_GetAVi(&race->maleAttr, AVFromGroupOffset);
        v43 = v7; /*0x522392*/
        if ( v39 ) /*0x522396*/
          break; /*0x522396*/
LABEL_29:
        if ( v43 > fCostant_100 ) /*0x52247d*/
          v43 = flt_A2FE7C; /*0x522485*/
        TESAttributes_SetAVi(&this->member.super.attributes, AVFromGroupOffset, (int)v43); /*0x52249d*/
LABEL_32:
        v50 = ++v4; /*0x5224a8*/
        if ( v4 >= 8 ) /*0x5224ac*/
        {
          v14 = 0; /*0x5224b6*/
          skillIndexa = (float)v45; /*0x5224b8*/
          do /*0x5225d7*/
          {
            v15 = 0xFFFFFFFF; /*0x5224cb*/
            bonus = ActorValue_GetAVFromGroupOffset(2, v14); /*0x5224d3*/
            if ( v39 ) /*0x5224d7*/
            {
              for ( i = 0; i < 7; ++i ) /*0x5224d9*/
              {                                 // TESNPC auto-stat membership scan across exactly seven major slots. Failure is the non-major formula; no minor list or flag exists.
                if ( TESClass_GetMajorSkillAV(this->member.npcClass, i) == bonus ) /*0x5224f0*/
                  v15 = 1; /*0x5224f2*/
              }
            }
            v17 = skillIndexa; /*0x5224ff*/
            if ( v15 == 1 ) /*0x522508*/
              v18 = v17 + dbl_A492B0; /*0x522518*/
            else
              v18 = v17 * dbl_A2FC80 + dbl_A3F3F0; /*0x522510*/
            v44 = v18; /*0x522523*/
            if ( v39 ) /*0x522527*/
            {
              v19 = this->member.npcClass; /*0x52252f*/
              specialization = TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, v14)->data.specialization; /*0x52253b*/
              if ( Shared_GetDwordAtOffset40(v19) == specialization ) /*0x522547*/
              {
                v49 = v44 + dbl_A3F3F0;         // Executed specialization contribution begins by adding 5.0 to the current major/non-major base. /*0x522553*/
                v44 = v49 + skillIndexa * dbl_A2FAA0;// Executed specialization level scaling then adds 0.5*(actorLevel-1). /*0x522567*/
              }
            }
            v21 = bonus; /*0x522571*/
            bonusSkills = this->member.form.race->bonusSkills; /*0x522575*/
            v23 = 7; /*0x522578*/
            do /*0x5225a1*/
            {
              if ( (char)bonusSkills->skill == v21 ) /*0x522585*/
              {
                bonus = (char)bonusSkills->bonus; /*0x52258b*/
                v44 = (double)bonus + v44; /*0x522597*/
              }
              ++bonusSkills; /*0x52259b*/
              --v23; /*0x52259e*/
            }
            while ( v23 ); /*0x5225a1*/
            if ( v44 > fCostant_100 ) /*0x5225b2*/
              v44 = flt_A2FE7C; /*0x5225ba*/
            this->member.skillLevels[v14++] = (int)v44; /*0x5225ca*/
          }
          while ( v14 < 0x15 ); /*0x5225d7*/
          TESForm_MarkAsModified((TESForm *)this, 0x200); /*0x5225e4*/
          LOBYTE(bonus) = 0; /*0x5225ef*/
          if ( Shared_GetDwordAtOffset38(this->member.npcClass) == 5 /*0x52260c*/
            || Shared_GetDwordAtOffset3C(this->member.npcClass) == 5 )
          {
            LOBYTE(bonus) = 1; /*0x52260e*/
          }
          p_attributes = &this->member.super.attributes; /*0x522620*/
          if ( v40 ) /*0x522622*/
          {
            AVi = TESAttributes_GetAVi(p_attributes, 5); /*0x52262d*/
            v26 = TESAttributes_GetAVi(&this->member.super.attributes, 0); /*0x52262f*/
            Calc_ActorBaseHealth(v26, AVi); /*0x52263c*/
          }
          else
          {
            v28 = this->member.npcClass; /*0x522646*/
            v29 = TESAttributes_GetAVi(p_attributes, 5); /*0x522655*/
            v41 = TESAttributes_GetAVi(&this->member.super.attributes, 0); /*0x52265e*/
            DwordAtOffset40 = Shared_GetDwordAtOffset40(v28); /*0x522662*/
            sub_547F80(v41, v29, v45, *(float *)&bonus, DwordAtOffset40); /*0x52267c*/
          }
          if ( !skipDerivedStats ) /*0x522689*/
          {
            TESActorBase_SetHealth((TESForm *)this, v27); /*0x52268e*/
            v31 = TESAttributes_GetAVi(&this->member.super.attributes, 1); /*0x522697*/
            Calc_ActorBaseMagicka(v31, 0.0); /*0x5226a2*/
            TESActorBaseData_SetMagicka(&this->member.super.actorBaseData, v32); /*0x5226ae*/
            v33 = TESAttributes_GetAVi(&this->member.super.attributes, 2); /*0x5226c0*/
            skipDerivedStatsa = TESAttributes_GetAVi(&this->member.super.attributes, 3); /*0x5226cb*/
            v42 = TESAttributes_GetAVi(&this->member.super.attributes, 5); /*0x5226d8*/
            v34 = TESAttributes_GetAVi(&this->member.super.attributes, 0); /*0x5226dc*/
            v35 = Calc_ActorBaseFatigue(v34, v42, skipDerivedStatsa, v33); /*0x5226f5*/
            TESActorBaseData_SetFatigue(&this->member.super.actorBaseData, v35); /*0x522701*/
          }
          v36 = this->member.npcClass; /*0x522706*/
          if ( v36 ) /*0x522710*/
          {
            TESAIForm_SetServiceFlags(&this->member.super.aiForm.vtbl, v36->members.buySellServices); /*0x52271b*/
            v37 = sub_51BEB0((unsigned __int8 *)this->member.npcClass); /*0x522726*/
            TESAIForm_SetTrainingSkill(&this->member.super.aiForm, v37); /*0x52272e*/
            v38 = sub_4A9700(this->member.npcClass); /*0x522739*/
            TESAIForm_SetTrainingLevel(&this->member.super.aiForm, v38); /*0x522741*/
          }
          else
          {
            TESAIForm_SetServiceFlags(&this->member.super.aiForm.vtbl, 0); /*0x522753*/
          }
          return; /*0x52274b*/
        }
      }
      if ( AVFromGroupOffset == Shared_GetDwordAtOffset38(this->member.npcClass) ) /*0x5223a9*/
      {
        value = g_fAttributeClassPrimaryBonus.value; /*0x5223ab*/
      }
      else
      {
        if ( AVFromGroupOffset != Shared_GetDwordAtOffset3C(this->member.npcClass) ) /*0x5223c0*/
          goto LABEL_17; /*0x5223c0*/
        value = g_fAttributeClassSecondaryBonus.value; /*0x5223c2*/
      }
      v43 = value + v43; /*0x5223cc*/
LABEL_17:
      for ( skillIndex = 0; skillIndex < 0x15; ++skillIndex ) /*0x5223d0*/
      {
        if ( TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, skillIndex)->data.governingAttribute == AVFromGroupOffset ) /*0x5223e8*/
        {
          v9 = ActorValue_GetAVFromGroupOffset(2, skillIndex); /*0x5223f5*/
          v48 = 0xFFFFFFFF; /*0x5223f7*/
          for ( j = 0; j < 7; ++j ) /*0x5223ff*/
          {
            MajorSkillAV = TESClass_GetMajorSkillAV(this->member.npcClass, j);// TESNPC auto-stat major branch: scan exactly seven class major AVs; a match selects the governed-major attribute contribution and major skill base formula. /*0x522408*/
            if ( MajorSkillAV == v9 ) /*0x52240f*/
            {
              GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, MajorSkillAV); /*0x522414*/
              if ( TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, GroupOffsetFromAV)->data.governingAttribute == AVFromGroupOffset ) /*0x52242b*/
                v48 = 1; /*0x52242d*/
            }
          }
          v13 = (double)v45; /*0x522441*/
          if ( v48 != 1 ) /*0x522448*/
            v13 = v13 * dbl_A38538; /*0x52244a*/
          v43 = v13 + v43; /*0x522454*/
        }
      }
      v4 = v50; /*0x52246a*/
      goto LABEL_29; /*0x52246a*/
    }
  }
}
