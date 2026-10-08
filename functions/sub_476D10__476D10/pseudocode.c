// Oblivion ActorAnimData scheduler with exact native ABI: this in ECX plus three 4-byte stack arguments, retn 0x0C. ownerActor is at [EBP+8]; all surveyed callers pass the owning Actor/Player, but the native body never dereferences it, so an interior hook's use of that value is a caller-derived contract. deltaTime at [EBP+0x0C] advances ActorAnimData time +0x94 and sequence offsets. explicitTimeOrMinusOne at [EBP+0x10] uses -1.0 for normal ticking; any other value drives an explicit-time scene update/early return. The function drains deferred KF models, maintains power/idle state, samples five slots, and advances required-note templates (class 4 terminal index 3; class 7 terminal index 4).
void __thiscall ActorAnimData_Update(
        ActorAnimData *this,
        Actor *ownerActor,
        float deltaTime,
        float explicitTimeOrMinusOne)
{
  int v4; // edi
  double v5; // st5
  double v6; // st6
  double v7; // st7
  void **modelB8; // eax
  UInt32 v10; // eax
  int v11; // ecx
  TESObjectREFR *v12; // ebx
  char **p_unkD4; // ebx
  int v14; // edi
  char *v15; // eax
  int v16; // ecx
  NiAVObject *RootNode; // ecx
  bool v18; // zf
  double unk94; // st7
  int i; // edi
  int GroupID; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  BSAnimGroupSequence *v24; // eax
  BSAnimGroupSequence *v25; // ecx
  BSAnimGroupSequence *v26; // edi
  double v27; // st7
  int v28; // eax
  CAS_TESAnimGroup_Decoded *v29; // ecx
  double v30; // st7
  CAS_TESAnimGroup_Decoded *v31; // ecx
  double v32; // st7
  double v33; // st7
  bool v34; // c0
  bool v35; // c3
  int v36; // eax
  CAS_TESAnimGroup_Decoded *v37; // ecx
  double v38; // st7
  CAS_TESAnimGroup_Decoded *v39; // ecx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  CAS_TESAnimGroup_Decoded *v43; // ecx
  double v44; // st7
  CAS_TESAnimGroup_Decoded *v45; // ecx
  double v46; // st7
  CAS_TESAnimGroup_Decoded *v47; // ecx
  double v48; // st7
  CAS_TESAnimGroup_Decoded *v49; // ecx
  double v50; // st7
  double v51; // st7
  double v52; // st7
  UInt32 unk5C; // eax
  CAS_TESAnimGroup_Decoded *v54; // ecx
  double v55; // st7
  CAS_TESAnimGroup_Decoded *v56; // ecx
  double RequiredNoteTime; // st7
  double v58; // st7
  double v59; // st7
  UInt16 a2a; // [esp+4h] [ebp-90h]
  int a2; // [esp+4h] [ebp-90h]
  int a2b; // [esp+4h] [ebp-90h]
  int v63; // [esp+1Ch] [ebp-78h]
  int v64; // [esp+20h] [ebp-74h]
  float v65; // [esp+24h] [ebp-70h]
  double v66[10]; // [esp+28h] [ebp-6Ch] BYREF
  int v67[6]; // [esp+7Ch] [ebp-18h]
  int savedregs; // [esp+94h] [ebp+0h] BYREF
  float v69; // [esp+A8h] [ebp+14h]
  float v70; // [esp+ACh] [ebp+18h]
  float v71; // [esp+B0h] [ebp+1Ch]
  float v72; // [esp+B4h] [ebp+20h]
  float v73; // [esp+B8h] [ebp+24h]
  float v74; // [esp+BCh] [ebp+28h]
  float v75; // [esp+C0h] [ebp+2Ch]
  float v76; // [esp+C4h] [ebp+30h]
  float v77; // [esp+C8h] [ebp+34h]
  float v78; // [esp+CCh] [ebp+38h]
  float v79; // [esp+D0h] [ebp+3Ch]
  float v80; // [esp+D4h] [ebp+40h]
  float v81; // [esp+D8h] [ebp+44h]
  float v82; // [esp+DCh] [ebp+48h]
  float v83; // [esp+E0h] [ebp+4Ch]
  float v84; // [esp+E4h] [ebp+50h]
  float v85; // [esp+E8h] [ebp+54h]
  int v86; // [esp+ECh] [ebp+58h]
  int v87; // [esp+F0h] [ebp+5Ch]
  int v88; // [esp+F4h] [ebp+60h]
  int v89; // [esp+F8h] [ebp+64h]
  int v90; // [esp+FCh] [ebp+68h]

  if ( this->modelB8 || this->modelB4 ) /*0x476d27*/
  {
    while ( unk_B33C28 < (unsigned int)dword_B06548 ) /*0x476d30*/
    {
      ActorAnimData_InstallKFModel((AnimSequenceSingle *)this, (int)this->modelB4, 0); /*0x476d4c*/
      modelB8 = (void **)this->modelB8; /*0x476d51*/
      if ( modelB8 ) /*0x476d59*/
      {
        this->modelB8 = modelB8[1]; /*0x476d5e*/
        this->modelB4 = *modelB8; /*0x476d67*/
        FormHeapFree((unsigned int)modelB8); /*0x476d6d*/
      }
      else
      {
        this->modelB4 = 0; /*0x476d77*/
      }
      if ( !ActorAnimData_HasPendingKFModels(this) ) /*0x476d83*/
        break; /*0x476d83*/
      ++unk_B33C28; /*0x476d8c*/
    }
  }
  else
  {
    v10 = this->unkC8[0]; /*0x476d95*/
    if ( v10 ) /*0x476d9d*/
    {
      v11 = *(_DWORD *)(v10 + 0x58); /*0x476d9f*/
      if ( v11 ) /*0x476da4*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x2D0))(v11) == 0xFFFFFFFF && !this->animSequences[3] ) /*0x476db5*/
        {
          v12 = (TESObjectREFR *)this->unkC8[0]; /*0x476dbe*/
          this->unkC8[0] = 0; /*0x476dc6*/
          ActorAnimData_RemovePowerAttackGroups(this); /*0x476dd0*/
          ActorAnimData_RebuildPowerAttackKFList(this, v4, v5, v6, v7, v12, 1); /*0x476dda*/
        }
      }
    }
  }
  p_unkD4 = (char **)&this->unkD4; /*0x476ddf*/
  v14 = 2; /*0x476de5*/
  do /*0x476e18*/
  {
    v15 = *p_unkD4; /*0x476df0*/
    if ( !*p_unkD4 ) /*0x476df4*/
      goto LABEL_21; /*0x476df4*/
    v16 = *((_DWORD *)v15 + 4); /*0x476df6*/
    if ( v16 ) /*0x476dfb*/
    {
      if ( *(_DWORD *)(v16 + 0x44) ) /*0x476dfd*/
        goto LABEL_21; /*0x476e01*/
    }
    else if ( !*(_DWORD *)v15 ) /*0x476e08*/
    {
      goto LABEL_21; /*0x476e08*/
    }
    AnimIdle_DestroyAndRelease(this, p_unkD4); /*0x476e0d*/
LABEL_21:
    ++p_unkD4; /*0x476e12*/
    --v14; /*0x476e15*/
  }
  while ( v14 ); /*0x476e18*/
  RootNode = (NiAVObject *)this->RootNode; /*0x476e1a*/
  if ( !RootNode ) /*0x476e1f*/
    JUMPOUT(0x477B2E); /*0x477b2e*/
  v18 = this->unk90 == 5; /*0x476e25*/
  this->unk00 = 1; /*0x476e2c*/
  this->unk0C = LODWORD(g_zeroNiPoint3.x); /*0x476e38*/
  this->unk10 = LODWORD(g_zeroNiPoint3.y); /*0x476e40*/
  this->unk14 = LODWORD(g_zeroNiPoint3.z); /*0x476e49*/
  if ( !v18 ) /*0x476e4c*/
  {
    for ( i = 0; i < 5; ++i ) /*0x476e86*/
    {
      GroupID = AnimKey_GetGroupID(this->animsMapKey[i]); /*0x476ea1*/
      v22 = AnimKey_GetGroupID(*((_WORD *)&this->unk70 + i)); /*0x476ea3*/
      if ( GroupID == 0xFF && v22 != 0xFF ) /*0x476eb5*/
      {
        this->unk48State[i + 5] = *(_DWORD *)&this->pad78[4 * i + 2]; /*0x476ebb*/
        v23 = *((unsigned __int16 *)&this->unk70 + i); /*0x476ebf*/
        if ( (_WORD)v23 != 0xFF ) /*0x476ec9*/
        {
          if ( ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, v23, (_DWORD *)v66 + 1) ) /*0x476ed7*/
          {
            v24 = (BSAnimGroupSequence *)(*(int (__thiscall **)(_DWORD, unsigned int))(*(_DWORD *)HIDWORD(v66[0]) + 0x10))( /*0x476eeb*/
                                           HIDWORD(v66[0]),
                                           0xFFFFFFFF);
            ActorAnimData_PlaySequence(this, v24, v23, 0xFFFFFFFF); /*0x476ef3*/
          }
        }
        a2a = this->animsMapKey[i]; /*0x476efd*/
        *((_WORD *)&this->unk70 + i) = 0xFF; /*0x476efe*/
        GroupID = AnimKey_GetGroupID(a2a); /*0x476f0d*/
      }
      v25 = this->animSequences[i]; /*0x476f2e*/
      *((float *)&v66[8] + i) = 0.0; /*0x476f35*/
      v67[i] = (int)v25; /*0x476f39*/
      if ( GroupID != 0xFF ) /*0x476f3d*/
      {
        if ( v25 ) /*0x476f41*/
          *((float *)&v66[8] + i) = BSAnimGroupSequence_SampleUpdate((int)v25, this->unk94); /*0x476f52*/
      }
    }
    if ( explicitTimeOrMinusOne != kTerrainLODQuadRayDirectionZ ) /*0x476f74*/
    {
      this->unk94 = explicitTimeOrMinusOne; /*0x476f78*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)this->RootNode, explicitTimeOrMinusOne, 1); /*0x476f85*/
      return; /*0x476f90*/
    }
    this->unk94 = this->unk94 + deltaTime; /*0x476fa0*/
    v26 = this->animSequences[0]; /*0x476fc2*/
    v64 = AnimKey_GetGroupID(this->animsMapKey[0]); /*0x476fcf*/
    v63 = AnimKey_GetGroupID(this->unk70); /*0x476fe9*/
    if ( v64 == 0xFF || !v26 ) /*0x476ff5*/
      goto LABEL_96; /*0x476ff5*/
    if ( this->unk90 == 5 || this->unk90 != 6 && !this->unk90 ) /*0x476ffb*/
    {
      *(float *)v66 = *((float *)v26 + 0x12) - *((float *)v26 + 0xB); /*0x477060*/
      *(float *)v66 = *(float *)v66 - deltaTime; /*0x47706b*/
      *((float *)v26 + 0x12) = *(float *)v66 + *((float *)v26 + 0xB); /*0x477076*/
      def_4770CD( /*0x477079*/
        0,
        (int)&savedregs,
        (unsigned int)this,
        (int)ownerActor,
        SLODWORD(deltaTime),
        SLODWORD(explicitTimeOrMinusOne),
        v69,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      return; /*0x477079*/
    }
    if ( *((_DWORD *)v26 + 0x11) != 1 ) /*0x47701c*/
      goto LABEL_96; /*0x47701c*/
    if ( (unsigned int)(v64 - 3) > 0xD ) /*0x477028*/
    {
      if ( (unsigned int)(v64 - 0x11) > 9 ) /*0x477084*/
      {
LABEL_53:
        switch ( *(_DWORD *)(0x24 * v64 + 0xB102EC) ) /*0x4770cd*/
        {
          case 0: /*0x4770cd*/
          case 1: /*0x4770cd*/
            if ( *((_DWORD *)v26 + 9) ) /*0x4772c6*/
            {
              if ( !this->unk48State[0] ) /*0x477414*/
              {
                v56 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x47741e*/
                *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x477429*/
                v66[0] = *(float *)v66; /*0x477431*/
                RequiredNoteTime = TESAnimGroup_GetRequiredNoteTime(v56, 0); /*0x477435*/
                if ( RequiredNoteTime < v66[0] ) /*0x477443*/
                  this->unk48State[0] = 1; /*0x477445*/
              }
              v45 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x47745e*/
              a2 = 1; /*0x477461*/
              *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x477463*/
              if ( v63 != 0xFF ) /*0x47746b*/
              {
LABEL_91:
                v66[0] = *(float *)v66; /*0x47746d*/
                v58 = TESAnimGroup_GetRequiredNoteTime(v45, a2); /*0x477471*/
                if ( v58 > v66[0] ) /*0x47747f*/
                  goto LABEL_96; /*0x47747f*/
LABEL_92:
                this->unk5C = this->unk7C; /*0x477481*/
                ActorAnimData_PlayEncodedGroup(this, (_DWORD *)LOWORD(this->unk70), 0xFFFFFFFF); /*0x477493*/
                LOWORD(this->unk70) = 0xFF; /*0x477498*/
                def_4770CD( /*0x47749f*/
                  0,
                  (int)&savedregs,
                  (unsigned int)this,
                  (int)ownerActor,
                  SLODWORD(deltaTime),
                  SLODWORD(explicitTimeOrMinusOne),
                  v69,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74,
                  v75,
                  v76,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83,
                  v84,
                  v85,
                  v86,
                  v87,
                  v88,
                  v89,
                  v90);
                return; /*0x47749f*/
              }
              v66[0] = *(float *)v66; /*0x4774a1*/
              v59 = TESAnimGroup_GetRequiredNoteTime(v45, 1); /*0x4774a5*/
              v34 = v59 < v66[0]; /*0x4774aa*/
              v35 = v59 == v66[0]; /*0x4774aa*/
            }
            else
            {
              while ( this->unk48State[0] < 1 ) /*0x4772d5*/
              {
                v47 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x4772ed*/
                a2b = this->unk48State[0]; /*0x4772f0*/
                *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x4772f1*/
                v66[0] = *(float *)v66; /*0x4772f9*/
                v48 = TESAnimGroup_GetRequiredNoteTime(v47, a2b); /*0x4772fd*/
                if ( v48 >= v66[0] ) /*0x47730b*/
                  break; /*0x47730b*/
                if ( this->unk48State[0] <= 1u ) /*0x477319*/
                  this->unk48State[0] = 1; /*0x47731f*/
              }
              v49 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x47733a*/
              *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x47733f*/
              if ( v63 != 0xFF ) /*0x477347*/
              {
                v66[0] = *(float *)v66; /*0x477349*/
                v50 = TESAnimGroup_GetRequiredNoteTime(v49, 1); /*0x47734d*/
                if ( v50 <= v66[0] ) /*0x47735b*/
                  goto LABEL_92; /*0x47735b*/
LABEL_96:
                JUMPOUT(0x4774BD); /*0x4774bd*/
              }
              v66[0] = *(float *)v66; /*0x477384*/
              v51 = TESAnimGroup_GetRequiredNoteTime(v49, 1); /*0x477388*/
              if ( v51 <= v66[0] && this->unk5C ) /*0x477398*/
              {
                this->unk48State[0] = 0; /*0x47739f*/
                *(float *)v66 = -(*((float *)v26 + 0xC) - *((float *)v26 + 0xB)); /*0x4773af*/
                v52 = *(float *)v66; /*0x4773b3*/
                *(float *)v66 = *((float *)v26 + 0x12) - *((float *)v26 + 0xB); /*0x4773bd*/
                *(float *)v66 = v52 + *(float *)v66; /*0x4773c5*/
                *((float *)v26 + 0x12) = *(float *)v66 + *((float *)v26 + 0xB); /*0x4773d0*/
                unk5C = this->unk5C; /*0x4773d3*/
                if ( unk5C != 0xFFFFFFFF ) /*0x4773da*/
                {
                  this->unk5C = unk5C - 1; /*0x4773e3*/
                  def_4770CD( /*0x4773e7*/
                    0,
                    (int)&savedregs,
                    (unsigned int)this,
                    (int)ownerActor,
                    SLODWORD(deltaTime),
                    SLODWORD(explicitTimeOrMinusOne),
                    v69,
                    v70,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76,
                    v77,
                    v78,
                    v79,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84,
                    v85,
                    v86,
                    v87,
                    v88,
                    v89,
                    v90);
                  return; /*0x4773e7*/
                }
                goto LABEL_96; /*0x4773da*/
              }
              v54 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x4773ef*/
              *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x4773fa*/
              v66[0] = *(float *)v66; /*0x477402*/
              v55 = TESAnimGroup_GetRequiredNoteTime(v54, 1); /*0x477406*/
              v34 = v55 < v66[0]; /*0x47740b*/
              v35 = v55 == v66[0]; /*0x47740b*/
            }
LABEL_94:
            if ( v34 || v35 ) /*0x4774b0*/
            {
              ActorAnimData_StopSlotWithBlendNote((int)this, 0); /*0x4774b8*/
              def_4770CD( /*0x4774b9*/
                0,
                (int)&savedregs,
                (unsigned int)this,
                (int)ownerActor,
                SLODWORD(deltaTime),
                SLODWORD(explicitTimeOrMinusOne),
                v69,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76,
                v77,
                v78,
                v79,
                v80,
                v81,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87,
                v88,
                v89,
                v90);
              return; /*0x4774b9*/
            }
            goto LABEL_96; /*0x4774b3*/
          case 2: /*0x4770cd*/
          case 3: /*0x4770cd*/
          case 5: /*0x4770cd*/
          case 6: /*0x4770cd*/
            v42 = this->unk48State[0]; /*0x477248*/
            if ( v42 < 2 ) /*0x47724f*/
            {
              v43 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x477254*/
              *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x477261*/
              v66[0] = *(float *)v66; /*0x477269*/
              v44 = TESAnimGroup_GetRequiredNoteTime(v43, v42 + 1); /*0x47726d*/
              if ( v44 < v66[0] ) /*0x47727b*/
                ++this->unk48State[0]; /*0x47727d*/
            }
            v45 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x477293*/
            a2 = 2; /*0x477296*/
            *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x477298*/
            if ( v63 != 0xFF ) /*0x4772a0*/
              goto LABEL_91; /*0x4772a0*/
            v66[0] = *(float *)v66; /*0x4772b4*/
            v46 = TESAnimGroup_GetRequiredNoteTime(v45, 2); /*0x4772b8*/
            v34 = v46 < v66[0]; /*0x4772bd*/
            v35 = v46 == v66[0]; /*0x4772bd*/
            goto LABEL_94; /*0x4772c1*/
          case 4: /*0x4770cd*/
            v28 = this->unk48State[0]; /*0x4770d4*/
            if ( v28 < 3 ) /*0x4770db*/
            {
              v29 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x4770e0*/
              *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x4770ed*/
              v66[0] = *(float *)v66; /*0x4770f5*/
              v30 = TESAnimGroup_GetRequiredNoteTime(v29, v28 + 1); /*0x4770f9*/
              if ( v30 < v66[0] ) /*0x477107*/
                ++this->unk48State[0];          // Class-4 required-note scheduler post-increment. For native AttackLeft/AttackRight in normalized slot 3, state progresses -1/0/1/2/3 as before Start / after Start / after Hit / after a: / after End; post-increment state 1 therefore identifies the authored Hit boundary. ESI is ActorAnimData and EBX is the normalized slot. External StarShooting contrast after the native decode: its hybrids map TES3 Shoot Release to Hit. Current authored Hit times are TP Left 0.200000286102, TP Right 0.333333253860, FP Left 0.199999928474, FP Right 0.333333343267. These are asset values, not engine constants, and this is not class-7 AttackBow Release/state 3. /*0x477109*/
            }
            v31 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x47711f*/
            *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x477124*/
            if ( v63 == 0xFF ) /*0x47712c*/
            {
              v66[0] = *(float *)v66; /*0x477169*/
              v33 = TESAnimGroup_GetRequiredNoteTime(v31, 3); /*0x47716d*/
              v34 = v33 < v66[0]; /*0x477172*/
              v35 = v33 == v66[0]; /*0x477172*/
              goto LABEL_94; /*0x477176*/
            }
            v66[0] = *(float *)v66; /*0x47712e*/
            v32 = TESAnimGroup_GetRequiredNoteTime(v31, 3); /*0x477132*/
            if ( v32 > v66[0] ) /*0x477140*/
              goto LABEL_96; /*0x477140*/
            goto LABEL_92; /*0x477140*/
          case 7: /*0x4770cd*/
            v36 = this->unk48State[0];          // ActorAnimData_Update class-7 scheduler used by AttackBow. effectiveTime = sequence+0x48 + ActorAnimData+0x94. Per update it advances at most one phase, and only when effectiveTime is strictly greater than requiredNote[state+1]; equality or unordered comparison does not advance. Slot-3 states -1/0/1/2/3/4 map before Start / Start / Attach / Hold / Release / End. /*0x47717b*/
            if ( v36 < 4 ) /*0x477182*/
            {
              v37 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x477187*/
              *(float *)v66 = *((float *)v26 + 0x12) + this->unk94; /*0x477194*/
              v66[0] = *(float *)v66; /*0x47719c*/
              v38 = TESAnimGroup_GetRequiredNoteTime(v37, v36 + 1); /*0x4771a0*/
              if ( v38 < v66[0] ) /*0x4771ae*/
                ++this->unk48State[0]; /*0x4771b0*/
            }
            v39 = *((CAS_TESAnimGroup_Decoded **)v26 + 0x1A); /*0x4771ec*/
            *(float *)v66 = *((float *)v26 + 0x12) + this->unk94;// AttackBow End handling. Once requiredNote[4] is reached, native code either starts a queued encoded group or routes to slot stop/blend handling. End does not construct/register a projectile, reload/nock, or change process current action. /*0x4771f1*/
            if ( v63 == 0xFF ) /*0x4771f9*/
            {
              v66[0] = *(float *)v66; /*0x477236*/
              v41 = TESAnimGroup_GetRequiredNoteTime(v39, 4); /*0x47723a*/
              v34 = v41 < v66[0]; /*0x47723f*/
              v35 = v41 == v66[0]; /*0x47723f*/
              goto LABEL_94; /*0x477243*/
            }
            v66[0] = *(float *)v66; /*0x4771fb*/
            v40 = TESAnimGroup_GetRequiredNoteTime(v39, 4); /*0x4771ff*/
            if ( v40 > v66[0] ) /*0x47720d*/
              goto LABEL_96; /*0x47720d*/
            goto LABEL_92; /*0x47720d*/
          default:
            goto LABEL_96;
        }
      }
      *(float *)v66 = *((float *)v26 + 0x12) - *((float *)v26 + 0xB); /*0x47709b*/
      *(float *)v66 = this->unkC0 * deltaTime - deltaTime + *(float *)v66; /*0x4770a3*/
      v27 = *(float *)v66; /*0x4770a7*/
    }
    else
    {
      *(float *)v66 = *((float *)v26 + 0x12) - *((float *)v26 + 0xB); /*0x47703f*/
      *(float *)v66 = this->unkBC * deltaTime - deltaTime + *(float *)v66; /*0x477047*/
      v27 = *(float *)v66; /*0x47704b*/
    }
    *((float *)v26 + 0x12) = v27 + *((float *)v26 + 0xB); /*0x4770ae*/
    goto LABEL_53; /*0x4770ae*/
  }
  unk94 = explicitTimeOrMinusOne; /*0x476e5b*/
  if ( explicitTimeOrMinusOne == kTerrainLODQuadRayDirectionZ ) /*0x476e60*/
    unk94 = this->unk94; /*0x476e64*/
  v65 = unk94; /*0x476e6a*/
  NiAVObject_UpdateNiAVObject(RootNode, v65, 1); /*0x476e78*/
}
