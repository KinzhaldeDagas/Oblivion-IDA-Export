void __userpurge sub_62CA80(
        HighProcess *this@<ecx>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        float a4,
        float a5,
        float a6,
        int a7)
{
  int v8; // eax
  TESPackage *v9; // ebx
  UInt32 v10; // edi
  int v11; // eax
  Actor *follow; // ecx
  float *v13; // eax
  Actor *v14; // ecx
  TESForm::FormFlags flags; // ebp
  Actor *v16; // ecx
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  float v18; // ebp
  PathLow *v19; // eax
  TESPackage *editorPackage; // eax
  TESObjectCELL *ParentCell; // eax
  double Distance; // st7
  PathLow *pathing; // ecx
  TESWorldSpace *WorldSpace; // ebp
  float *v25; // eax
  TargetData *target; // ecx
  char *location; // ecx
  char v28; // al
  float *v29; // eax
  float *v30; // eax
  double v31; // st7
  float *v32; // eax
  Actor *v33; // ecx
  double v34; // rt0
  float *v35; // eax
  double v36; // st7
  float *v37; // eax
  double v38; // st7
  PathLow *v39; // eax
  int v40; // ebp
  double v41; // st7
  bool v42; // bl
  PathLow *v43; // eax
  int **v44; // ebp
  float *v45; // eax
  Actor *v46; // ecx
  Actor *v47; // ecx
  float *v48; // eax
  int *v49; // ebp
  float *v50; // eax
  MiddleHighProcess_vtbl *v51; // ebp
  TESObjectCELL *v52; // eax
  float *v53; // eax
  UInt8 type; // al
  TESPackage *v55; // ebx
  int v56; // ebp
  TESPackage *v57; // eax
  TESObjectCELL *v58; // eax
  char v59; // al
  int v60; // eax
  double v61; // st7
  MiddleHighProcess_vtbl *v62; // ebp
  TESObjectCELL *v63; // eax
  void *v64; // eax
  char v65; // al
  Actor *v66; // eax
  int v67; // ebp
  Actor *v68; // eax
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  int v72; // ecx
  float *v73; // eax
  double v74; // st7
  float v75; // [esp+30h] [ebp-64h]
  float v76; // [esp+34h] [ebp-60h]
  float *v77; // [esp+38h] [ebp-5Ch]
  TESWorldSpace *v78; // [esp+38h] [ebp-5Ch]
  float *v79; // [esp+3Ch] [ebp-58h]
  float v80; // [esp+3Ch] [ebp-58h]
  TESWorldSpace *v81; // [esp+3Ch] [ebp-58h]
  float v82; // [esp+3Ch] [ebp-58h]
  float *v83; // [esp+3Ch] [ebp-58h]
  char v84; // [esp+53h] [ebp-41h]
  int v85; // [esp+54h] [ebp-40h]
  float v86; // [esp+58h] [ebp-3Ch]
  float v87; // [esp+58h] [ebp-3Ch]
  float *v88; // [esp+5Ch] [ebp-38h]
  float v89; // [esp+5Ch] [ebp-38h]
  float v90; // [esp+60h] [ebp-34h]
  TESPackage *v91; // [esp+64h] [ebp-30h]
  float v92; // [esp+68h] [ebp-2Ch]
  float v93; // [esp+68h] [ebp-2Ch]
  TESObjectREFR *v94; // [esp+6Ch] [ebp-28h]
  NiPoint3 v95; // [esp+70h] [ebp-24h] BYREF
  float v96; // [esp+7Ch] [ebp-18h] BYREF
  float v97; // [esp+80h] [ebp-14h]
  float v98; // [esp+84h] [ebp-10h]
  float v99; // [esp+88h] [ebp-Ch] BYREF
  float v100; // [esp+8Ch] [ebp-8h]
  float v101; // [esp+90h] [ebp-4h]

  v8 = ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>))this->GetCurrentPackage)( /*0x62ca91*/
         this,
         st7_0,
         st6_0);
  v9 = (TESPackage *)v8; /*0x62ca93*/
  v91 = (TESPackage *)v8; /*0x62ca97*/
  if ( v8 && (*(_BYTE *)(v8 + 0x1E) & 1) != 0 ) /*0x62caa1*/
    return; /*0x62caa1*/
  v10 = LODWORD(a4); /*0x62caa7*/
  if ( sub_660E90((Concurrency::details::SchedulerBase *)LODWORD(a4)) && reference->unk115 ) /*0x62cac0*/
    goto LABEL_5; /*0x62cac7*/
  if ( !this->follow ) /*0x62cae0*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1) /*0x62cb02*/
      && (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10) )
    {
      v11 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10); /*0x62cb12*/
      this->follow = (Actor *)CombatController_GetCurrentTarget(v11); /*0x62cb1b*/
    }
    else
    {
      this->Unk_155(this, (TESChildCELL *)v10); /*0x62cb2b*/
    }
    follow = this->follow; /*0x62cb2d*/
    if ( follow ) /*0x62cb32*/
    {
      v13 = follow->vtbl->super.super.GetPos((TESObjectREFR *)follow); /*0x62cb3c*/
      this->positionOfFollowedActor[0] = *v13; /*0x62cb40*/
      this->positionOfFollowedActor[1] = v13[1]; /*0x62cb49*/
      this->positionOfFollowedActor[2] = v13[2]; /*0x62cb52*/
    }
  }
  v14 = this->follow; /*0x62cb58*/
  if ( !v14 ) /*0x62cb5d*/
  {
    if ( !LOBYTE(a5) ) /*0x62cb63*/
      return; /*0x62cb63*/
    goto LABEL_176; /*0x62cb63*/
  }
  flags = v14->members.super.super.super.flags; /*0x62cb82*/
  if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 ) /*0x62cb9a*/
  {
    if ( v14->vtbl->super.super.IsDead((TESObjectREFR *)v14, 1) ) /*0x62cbaa*/
    {
      sub_566870((TargetData **)v9, (TESForm *)this->follow, 1); /*0x62cbb8*/
      (*(void (__thiscall **)(UInt32, Actor *))(*(_DWORD *)v10 + 0x2F8))(v10, this->follow); /*0x62cbcb*/
      return; /*0x62cbd4*/
    }
    v16 = this->follow; /*0x62cbd7*/
    IsActor = v16->vtbl->super.super.IsActor; /*0x62cbdc*/
    v18 = 0.0; /*0x62cbe2*/
    a4 = 0.0; /*0x62cbe4*/
    if ( IsActor((TESObjectREFR *)v16) ) /*0x62cbe8*/
    {
      a4 = *(float *)&this->follow; /*0x62cbf3*/
      v18 = a4; /*0x62cbee*/
      if ( a4 != 0.0 ) /*0x62cbf7*/
      {
        v19 = this->GetCurrentPath(this); /*0x62cc03*/
        if ( v19 ) /*0x62cc07*/
        {
          if ( sub_683AA0((int)v19) ) /*0x62cc0b*/
          {
            if ( Actor_IsSwimming((_DWORD *)LODWORD(v18)) ) /*0x62cc16*/
            {
              if ( !Actor_CanSwim((Actor *)v10) || !sub_5E3400((Actor *)v10) ) /*0x62cc2c*/
                goto LABEL_5; /*0x62cc33*/
            }
            else if ( sub_5E1E90((void *)v10) ) /*0x62cc4c*/
            {
LABEL_5:
              ((void (__thiscall *)(HighProcess *, UInt32))this->Unk_64)(this, v10); /*0x62cac9*/
              return; /*0x62cadd*/
            }
          }
        }
      }
    }
    v84 = 0; /*0x62cc57*/
    if ( TESPackage_IsRuntimePackage(v9) ) /*0x62cc5c*/
    {
      editorPackage = this->editorPackage; /*0x62cc65*/
      if ( editorPackage ) /*0x62cc6a*/
      {
        if ( (editorPackage->members.packageFlags & 0x200) != 0 && (editorPackage->members.packageFlags & 1) != 0 ) /*0x62cc7b*/
        {
          if ( Shared_GetDwordAtOffset40((TESObjectREFR *)v10) ) /*0x62cc7f*/
          {
            ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)v10); /*0x62cc8b*/
            if ( TESObjectCELL_IsOwnedByActor((ExtraDataList *)ParentCell, (Actor *)v10) ) /*0x62cc92*/
            {
              if ( Actor_LineOfSight((Actor *)v10, st7_0, 0, (TESObjectREFR *)this->follow, 1, 0, 0) /*0x62ccc4*/
                || !this->GetDetectionState(this, this->follow) )
              {
                if ( !this->unk0D0 ) /*0x62ced5*/
                  ((void (__thiscall *)(HighProcess *, UInt32))this->Unk_64)(this, v10); /*0x62cee9*/
                v79 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x174))(v10); /*0x62ceff*/
                v37 = reference->vtbl->super.super.super.GetPos(reference); /*0x62cf0b*/
                sub_4121A0(v37, &v99, v79); /*0x62cf0f*/
                *(float *)&a7 = Vector3_CalculateHeadingRadiansXY(&v99); /*0x62cf1e*/
                a4 = 0.0; /*0x62cf2b*/
                v38 = *(float *)&a7; /*0x62cf2f*/
                sub_683D80(v10, *(float *)&a7, &a4); /*0x62cf39*/
                a6 = v38; /*0x62cf3e*/
                a5 = (double)MEMORY[0xB36C10] * dbl_A31C78; /*0x62cf53*/
                if ( sub_5E0590((_DWORD *)v10) ) /*0x62cf57*/
                  a5 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x62cf6c*/
                goto LABEL_170; /*0x62cf6c*/
              }
              v84 = 1; /*0x62ccce*/
            }
          }
        }
      }
    }
    v88 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10); /*0x62ccdf*/
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)v10, (TESObjectREFR *)this->follow, 0); /*0x62cceb*/
    v86 = Distance; /*0x62ccf0*/
    pathing = this->pathing; /*0x62ccf4*/
    if ( pathing ) /*0x62ccf9*/
    {
      if ( !sub_6899E0(pathing) ) /*0x62ccfb*/
      {
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v10); /*0x62cd0e*/
        if ( WorldSpace != TESObjectREFR_GetWorldSpace((TESObjectREFR *)this->follow) ) /*0x62cd17*/
        {
          sub_68A160((float ***)this->pathing); /*0x62cd1c*/
          Distance = TESObjectREFR::GetDistanceToPoint((float *)v10, v25); /*0x62cd24*/
          v86 = Distance; /*0x62cd29*/
        }
        v18 = a4; /*0x62cd2d*/
      }
    }
    LOBYTE(a4) = 0; /*0x62cd33*/
    if ( v18 != 0.0 /*0x62cd4f*/
      && (PlayerCharacter *)LODWORD(v18) != reference
      && sub_5E05B0((_DWORD *)LODWORD(v18))
      && sub_5E05B0((_DWORD *)v10) )
    {
      LOBYTE(a4) = 1; /*0x62cd58*/
    }
    v94 = (TESObjectREFR *)this->follow; /*0x62cd60*/
    target = v9->members.target; /*0x62cd64*/
    if ( target && TargetData::GetTargetType(target) && (PlayerCharacter *)this->follow != reference /*0x62cd95*/
      || (Distance = sub_5677B0(v9, Distance, (TESObjectREFR *)v10, 2), v85 = Double_To_SInt32(Distance), v85 < 1) )
    {
      v85 = stru_B36B28; /*0x62cd9c*/
    }
    if ( !this->follow /*0x62cdd7*/
      || v9->members.type == 1
      && (location = (char *)v9->members.location) != 0
      && sub_569740(location) < 2
      && (Distance = sub_566DC0(v9, kTerrainLODQuadRayDirectionZ, st6_0, (Actor *)v10, 0, kTerrainLODQuadRayDirectionZ),
          v28) )
    {
      if ( LOBYTE(a5) ) /*0x62d428*/
      {
        ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_61)(this, v10, 1); /*0x62d43b*/
        if ( TESPackage_IsRuntimePackage(v9) ) /*0x62d43f*/
        {
          if ( this->currentPackage ) /*0x62d44c*/
            this->currentPackage = 0; /*0x62d454*/
          else
            this->editorPackage = 0; /*0x62d45c*/
          v9->__vftable->super.Destroy((TESForm *)v9, 1); /*0x62d468*/
          (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x44))(v10, 0x30000); /*0x62d476*/
          this->Unk_06(this, v10, 0); /*0x62d481*/
          if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x380))(v10) ) /*0x62d48d*/
          {
            if ( (this->editorPackage->members.packageFlags & 0x800000) == 0 ) /*0x62d4a3*/
            {
              v64 = (void *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x380))(v10); /*0x62d4b3*/
              sub_5E9A60(v64, Distance); /*0x62d4b7*/
              if ( !v65 ) /*0x62d4be*/
              {
                v66 = (Actor *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x380))(v10); /*0x62d4ca*/
                sub_5F80D0(v66); /*0x62d4ce*/
                this->conversationScanCooldown = 0.0; /*0x62d4d5*/
              }
              (*(void (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x230))(v10); /*0x62d4e5*/
            }
          }
          return; /*0x62d4ee*/
        }
        if ( !this->unk0D0 ) /*0x62d4f1*/
          ((void (__thiscall *)(HighProcess *, UInt32))this->Unk_64)(this, v10); /*0x62d505*/
      }
      goto LABEL_144; /*0x62d505*/
    }
    v29 = this->follow->vtbl->super.super.GetPos(this->follow); /*0x62cdee*/
    v30 = sub_4121A0(this->positionOfFollowedActor, &v99, v29); /*0x62cdf8*/
    v31 = NiPoint3_Length(v30); /*0x62cdff*/
    v92 = v31; /*0x62ce04*/
    v32 = this->follow->vtbl->super.super.GetPos(this->follow); /*0x62ce13*/
    v96 = *v32; /*0x62ce1c*/
    v97 = v32[1]; /*0x62ce23*/
    v98 = v32[2]; /*0x62ce2a*/
    if ( v88 ) /*0x62ce2e*/
    {
      a5 = sub_628E90(v88); /*0x62ce3d*/
      v31 = a5; /*0x62ce4b*/
      if ( a5 > 0.0 ) /*0x62ce50*/
      {
        sub_4DD070((TESObjectREFR *)this->follow, &v95, a5); /*0x62ce62*/
        v33 = this->follow; /*0x62ce71*/
        v34 = dbl_A529C0; /*0x62ce76*/
        v95.x = v95.x * v34; /*0x62ce78*/
        v95.y = v95.y * v34; /*0x62ce82*/
        v95.z = v34 * v95.z; /*0x62ce8a*/
        v35 = v33->vtbl->super.super.GetPos((TESObjectREFR *)v33); /*0x62ce96*/
        v99 = *v35 + v95.x; /*0x62ce9e*/
        v100 = v35[1] + v95.y; /*0x62cead*/
        v36 = v35[2]; /*0x62ceb5*/
        v96 = v99; /*0x62ceb8*/
        v31 = v36 + v95.z; /*0x62cebc*/
        v97 = v100; /*0x62cec0*/
        v101 = v31; /*0x62cec4*/
        v98 = v101; /*0x62cecc*/
      }
    }
    LOBYTE(a5) = 0; /*0x62cf8a*/
    if ( v88 ) /*0x62cf8f*/
    {
      v31 = v86; /*0x62cf9b*/
      if ( *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B36A88) > (double)v86 ) /*0x62cfa8*/
      {
        v39 = this->GetCurrentPath(this); /*0x62cfb4*/
        v40 = (int)v39; /*0x62cfb6*/
        if ( (!v39 || (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)v39 + 0xC))(v39) || sub_683AA0(v40)) /*0x62cfe6*/
          && (sub_6163A0((int)v88, v10) || !sub_612550(v88)) )
        {
          LOBYTE(a5) = 1; /*0x62cfef*/
          v85 = 0; /*0x62cff4*/
        }
      }
    }
    v90 = sub_5677B0(v9, v31, (TESObjectREFR *)v10, 1) * dbl_A31C70; /*0x62d011*/
    if ( v90 > (double)*(float *)GameSetting_GetSafeFloatPointer((int *)flt_B36A88) ) /*0x62d027*/
      v90 = *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B36A88); /*0x62d035*/
    if ( v88 ) /*0x62d03e*/
      v41 = 0.0; /*0x62d040*/
    else
      v41 = v90; /*0x62d044*/
    v89 = v41; /*0x62d04a*/
    v42 = 0; /*0x62d056*/
    v43 = this->GetCurrentPath(this); /*0x62d058*/
    v44 = (int **)v43; /*0x62d05a*/
    if ( v43 ) /*0x62d05e*/
      v42 = sub_683A70(v43) != 0; /*0x62d06b*/
    if ( v84 ) /*0x62d072*/
      goto LABEL_87; /*0x62d072*/
    if ( LOBYTE(a5) ) /*0x62d079*/
      goto LABEL_87; /*0x62d079*/
    v41 = v92; /*0x62d07b*/
    if ( v90 < (double)v92 ) /*0x62d08a*/
      goto LABEL_87; /*0x62d08a*/
    v93 = (double)v85 + v89; /*0x62d0a2*/
    v41 = v93; /*0x62d0a6*/
    v45 = (float *)((int (*)(void))this->follow->vtbl->super.super.GetPos)(); /*0x62d0ad*/
    if ( !sub_684B30((MobileObject *)v10, v45, v93, 0) ) /*0x62d0b1*/
    {
      if ( !this->unk0D0 ) /*0x62d0c7*/
        goto LABEL_113; /*0x62d0c7*/
      if ( !v42 ) /*0x62d0cf*/
      {
LABEL_87:
        if ( v44 ) /*0x62d0d7*/
        {
          if ( v42 ) /*0x62d0db*/
            sub_684EC0(v44); /*0x62d0df*/
        }
        if ( (_BYTE)a7 ) /*0x62d0e9*/
        {
          if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88[2]) >= (double)v86 /*0x62d11a*/
            || Actor_LineOfSight((Actor *)v10, v86, 0, (TESObjectREFR *)this->follow, 1, 0, 0) )
          {
            v41 = 0.0; /*0x62d1bc*/
            *(float *)&this->unk0B8 = 0.0; /*0x62d1be*/
          }
          else
          {
            *(float *)&a7 = *(float *)&this->unk0B8 + dbl_A2F928; /*0x62d133*/
            v41 = *(float *)&a7; /*0x62d137*/
            this->unk0B8 = a7; /*0x62d13b*/
            if ( v41 >= dbl_A3AA50 ) /*0x62d14c*/
            {
              if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1) ) /*0x62d15a*/
              {
                v46 = this->follow; /*0x62d160*/
                if ( v46 && v46->vtbl->super.super.IsActor((TESObjectREFR *)v46) && this->follow ) /*0x62d175*/
                {
                  (*(void (__thiscall **)(UInt32, Actor *))(*(_DWORD *)v10 + 0x340))(v10, this->follow); /*0x62d187*/
                  *(float *)&this->unk0B8 = 0.0; /*0x62d18b*/
                  return; /*0x62d198*/
                }
              }
              else
              {
                ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_61)(this, v10, 2); /*0x62d1a8*/
              }
              *(float *)&this->unk0B8 = 0.0; /*0x62d1ac*/
              return; /*0x62d1b9*/
            }
          }
        }
        if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1) /*0x62d225*/
          && (v47 = this->follow, v47 != (Actor *)reference)
          && (v41 = flt_A57A64,
              v80 = flt_A57A64,
              v77 = (float *)((int (*)(void))v47->vtbl->super.super.GetPos)(),
              v48 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x174))(v10),
              sub_480520(v48, v77, v80) < 0)
          && Actor_LineOfSight((Actor *)v10, v41, 0, (TESObjectREFR *)this->follow, 1, 0, 0) )
        {
          if ( !this->pathing ) /*0x62d22e*/
            this->Unk_101(this); /*0x62d23e*/
          v49 = (int *)this->GetCurrentPath(this); /*0x62d24c*/
          if ( v49 ) /*0x62d250*/
          {
            v50 = this->follow->vtbl->super.super.GetPos(this->follow); /*0x62d25d*/
            sub_6862C0(v49, v50); /*0x62d262*/
            this->unk0D0 = 0; /*0x62d267*/
          }
        }
        else
        {
          v51 = this->__vftable; /*0x62d273*/
          v81 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)this->follow); /*0x62d27d*/
          v52 = Shared_GetDwordAtOffset40((TESObjectREFR *)this->follow); /*0x62d27e*/
          if ( !((unsigned __int8 (__thiscall *)(HighProcess *, UInt32, _DWORD, _DWORD, float, TESObjectCELL *, TESWorldSpace *))v51->Unk_F6)( /*0x62d2aa*/
                  this,
                  v10,
                  LODWORD(v96),
                  LODWORD(v97),
                  COERCE_FLOAT(LODWORD(v98)),
                  v52,
                  v81) )
            return; /*0x62d2aa*/
        }
        v53 = this->follow->vtbl->super.super.GetPos(this->follow); /*0x62d2bb*/
        this->positionOfFollowedActor[0] = *v53; /*0x62d2bf*/
        this->positionOfFollowedActor[1] = v53[1]; /*0x62d2c8*/
        this->positionOfFollowedActor[2] = v53[2]; /*0x62d2d1*/
      }
    }
    if ( this->unk0D0 ) /*0x62d2d7*/
    {
LABEL_144:
      v67 = 0; /*0x62d507*/
      v87 = TesObjectREF_GetDistance((TESObjectREFR *)v10, v94, 0); /*0x62d516*/
      if ( LOBYTE(a4) ) /*0x62d51f*/
      {
        v85 -= 0x32; /*0x62d521*/
        if ( v85 < 0 ) /*0x62d526*/
          v85 = 0; /*0x62d528*/
      }
      if ( (double)v85 < v87 ) /*0x62d53b*/
        return; /*0x62d53b*/
      v68 = this->follow; /*0x62d541*/
      if ( v68 == (Actor *)reference && !Actor_LineOfSight((Actor *)v10, v87, 0, (TESObjectREFR *)v68, 1, 0, 0) ) /*0x62d554*/
        return; /*0x62d554*/
      if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1) ) /*0x62d56d*/
      {
        if ( !(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10) ) /*0x62d57d*/
          return; /*0x62d57d*/
        v69 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10); /*0x62d591*/
        if ( sub_6163A0(v69, v10) ) /*0x62d595*/
          return; /*0x62d595*/
      }
      if ( !this->unk0D0 ) /*0x62d5a2*/
      {
        v70 = *(_DWORD *)(v10 + 0x58); /*0x62d5ab*/
        if ( v70 ) /*0x62d5b0*/
        {
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v70 + 8))(v70) ) /*0x62d5b7*/
            v67 = *(_DWORD *)(v10 + 0x58); /*0x62d5bd*/
        }
        if ( sub_5E0E80((_DWORD **)v10) ) /*0x62d5c2*/
        {
          if ( v67 ) /*0x62d5cd*/
          {
            v71 = TESTopic::GetTopic(6, 4);     // Hardcoded miscellaneous topic bucket 6 index 4: stock 0000011C / TimeToGo. Null suppresses this ambient SayTopic branch. /*0x62d5d3*/
            *(_DWORD *)(v10 + 0xE4) = reference; /*0x62d5e3*/
            if ( v71 ) /*0x62d5e9*/
            {
              (*(void (__thiscall **)(int, UInt32, int, _DWORD, _DWORD, int))(*(_DWORD *)v67 + 0x1A4))( /*0x62d5f2*/
                v67,
                v10,
                v71,
                0,
                0,
                1);
            }
            else if ( ((unsigned __int8 (__thiscall *)(HighProcess *))this->Unk_7F)(this) ) /*0x62d5fe*/
            {
              (*(void (__thiscall **)(int, UInt32, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v67 + 0x1A4))( /*0x62d618*/
                v67,
                v10,
                0,
                0,
                0,
                1);
            }
          }
        }
        sub_5E02B0((_DWORD **)v10); /*0x62d61c*/
      }
      if ( !v94 ) /*0x62d623*/
        return; /*0x62d623*/
      if ( !this->unk23C ) /*0x62d629*/
        return; /*0x62d629*/
      v72 = *(_DWORD *)(v10 + 0x58); /*0x62d636*/
      if ( v72 ) /*0x62d63b*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x36C))(v72) ) /*0x62d645*/
          return; /*0x62d649*/
      }
      v83 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x174))(v10); /*0x62d65d*/
      v73 = v94->vtbl->GetPos(v94); /*0x62d66b*/
      sub_4121A0(v73, &v99, v83); /*0x62d66f*/
      *(float *)&a7 = Vector3_CalculateHeadingRadiansXY(&v99); /*0x62d67e*/
      a4 = 0.0; /*0x62d68b*/
      v74 = *(float *)&a7; /*0x62d68f*/
      sub_683D80(v10, *(float *)&a7, &a4); /*0x62d699*/
      a6 = v74; /*0x62d69e*/
      a5 = (double)MEMORY[0xB36C10] * dbl_A31C78; /*0x62d6b3*/
      if ( sub_5E0590((_DWORD *)v10) ) /*0x62d6b7*/
        a5 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x62d6cc*/
LABEL_170:
      a6 = fabs(a6); /*0x62d6d0*/
      if ( a5 >= (double)a6 ) /*0x62d6e9*/
        sub_5E05F0((Actor *)v10, 0x30); /*0x62d70c*/
      else
        sub_685530((Actor *)v10, *(float *)&a7, 1); /*0x62d6f6*/
      return; /*0x62d705*/
    }
LABEL_113:
    if ( a6 == NAN ) /*0x62d2eb*/
    {
      type = v91->members.type; /*0x62d2f5*/
      LOBYTE(a7) = 0; /*0x62d2fa*/
      if ( type == 0xF || type == 0xC ) /*0x62d303*/
        LOBYTE(a7) = 1; /*0x62d305*/
      v55 = v91; /*0x62d30d*/
      v41 = sub_5677B0(v91, v41, (TESObjectREFR *)v10, 2); /*0x62d30f*/
      *(float *)&v56 = COERCE_FLOAT(Double_To_SInt32(v41)); /*0x62d319*/
      a6 = *(float *)&v56; /*0x62d31d*/
      if ( TESPackage_IsRuntimePackage(v91) /*0x62d357*/
        && (v57 = this->editorPackage) != 0
        && (v57->members.packageFlags & 0x200) != 0
        && (v57->members.packageFlags & 1) != 0
        && Shared_GetDwordAtOffset40((TESObjectREFR *)v10)
        && (v58 = Shared_GetDwordAtOffset40((TESObjectREFR *)v10),
            TESObjectCELL_IsOwnedByActor((ExtraDataList *)v58, (Actor *)v10)) )
      {
        ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_8D)(this, v10, 0x101); /*0x62d371*/
      }
      else
      {
        v59 = a7; /*0x62d375*/
        a7 = 2 * v56; /*0x62d37f*/
        v76 = (float)(2 * v56); /*0x62d38d*/
        v75 = (float)SLODWORD(a6); /*0x62d395*/
        v41 = v86; /*0x62d399*/
        v60 = sub_629F40(this, (Concurrency::details::SchedulerBase *)v10, v86, v75, v76, v59, 0); /*0x62d3a1*/
        ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_8D)(this, v10, v60); /*0x62d3b2*/
      }
    }
    else
    {
      ((void (__thiscall *)(HighProcess *, UInt32, _DWORD))this->Unk_8D)(this, v10, LODWORD(a6)); /*0x62d3c2*/
      v55 = v91; /*0x62d3c4*/
    }
    if ( LOBYTE(a4) ) /*0x62d3cd*/
    {
      v61 = flt_A31C80; /*0x62d3cf*/
    }
    else if ( LOBYTE(a5) ) /*0x62d3dc*/
    {
      v61 = (double)v85; /*0x62d3de*/
    }
    else
    {
      v61 = sub_5677B0(v55, v41, (TESObjectREFR *)v10, 2); /*0x62d3e9*/
    }
    v62 = this->__vftable; /*0x62d3ee*/
    a5 = v61; /*0x62d3f0*/
    v82 = a5; /*0x62d3fc*/
    v78 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)this->follow); /*0x62d407*/
    v63 = Shared_GetDwordAtOffset40((TESObjectREFR *)this->follow); /*0x62d408*/
    ((void (__thiscall *)(HighProcess *, UInt32, float *, TESObjectCELL *, TESWorldSpace *, _DWORD))v62->Unk_104)( /*0x62d41c*/
      this,
      v10,
      &v96,
      v63,
      v78,
      LODWORD(v82));
    goto LABEL_144; /*0x62d41e*/
  }
  if ( (v14->members.super.super.super.flags & 0x20) != 0 ) /*0x62d71d*/
    sub_566870((TargetData **)v9, (TESForm *)v14, 1); /*0x62d724*/
  if ( LOBYTE(a5) ) /*0x62d72e*/
LABEL_176:
    ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_61)(this, v10, 1); /*0x62d730*/
}
