void __userpurge sub_62CA80(
        HighProcess *this@<ecx>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        float a2,
        float a3,
        int a4,
        UInt32 a5)
{
  TESPackage *v8; // eax
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
  float *v44; // ebp
  int v45; // eax
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

  v8 = this->GetCurrentPackage(this);
  v9 = v8;
  v91 = v8;
  if ( v8 && (v8->members.packageFlags & 0x10000) != 0 )
    return;
  v10 = LODWORD(a2);
  if ( sub_660E90((Concurrency::details::SchedulerBase *)LODWORD(a2)) && TESDataHandler_g_PlayerRef->unk115 )
    goto LABEL_5;
  if ( !this->follow )
  {
    if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1)
      && (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10) )
    {
      v11 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10);
      this->follow = (Actor *)sub_6135F0(v11);
    }
    else
    {
      this->Unk_155(this, (TESChildCELL *)v10);
    }
    follow = this->follow;
    if ( follow )
    {
      v13 = follow->vtbl->super.super.GetPos((TESObjectREFR *)follow);
      this->positionOfFollowedActor[0] = *v13;
      this->positionOfFollowedActor[1] = v13[1];
      this->positionOfFollowedActor[2] = v13[2];
    }
  }
  v14 = this->follow;
  if ( !v14 )
  {
    if ( !LOBYTE(a3) )
      return;
    goto LABEL_176;
  }
  flags = v14->members.super.super.super.flags;
  if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 )
  {
    if ( v14->vtbl->super.super.IsDead((TESObjectREFR *)v14, 1) )
    {
      sub_566870((TargetData **)v9, (TESForm *)this->follow, 1);
      (*(void (__thiscall **)(UInt32, Actor *))(*(_DWORD *)v10 + 0x2F8))(v10, this->follow);
      return;
    }
    v16 = this->follow;
    IsActor = v16->vtbl->super.super.IsActor;
    v18 = 0.0;
    a2 = 0.0;
    if ( IsActor((TESObjectREFR *)v16) )
    {
      a2 = *(float *)&this->follow;
      v18 = a2;
      if ( a2 != 0.0 )
      {
        v19 = this->GetCurrentPath(this);
        if ( v19 )
        {
          if ( sub_683AA0((int)v19) )
          {
            if ( Actor_IsSwimming((_DWORD *)LODWORD(v18)) )
            {
              if ( !Actor_CanSwim((Actor *)v10) || !sub_5E3400((Actor *)v10) )
                goto LABEL_5;
            }
            else if ( sub_5E1E90((void *)v10) )
            {
LABEL_5:
              ((void (__thiscall *)(HighProcess *, UInt32))this->Unk_64)(this, v10);
              return;
            }
          }
        }
      }
    }
    v84 = 0;
    if ( sub_5660A0(v9) )
    {
      editorPackage = this->editorPackage;
      if ( editorPackage )
      {
        if ( (editorPackage->members.packageFlags & 0x200) != 0 && (editorPackage->members.packageFlags & 1) != 0 )
        {
          if ( TESObjectREFR_GetParentCell((TESObjectREFR *)v10) )
          {
            ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v10);
            if ( sub_4CAAC0((ExtraDataList *)ParentCell, (Actor *)v10) )
            {
              if ( sub_5F2820((Actor *)v10, st7_0, 0, (TESObjectREFR *)this->follow, 1, 0, 0)
                || !this->GetDetectionState(this, this->follow) )
              {
                if ( !this->unk0D0 )
                  ((void (__thiscall *)(HighProcess *, UInt32))this->Unk_64)(this, v10);
                v79 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x174))(v10);
                v37 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
                sub_4121A0(v37, &v99, v79);
                *(float *)&a5 = sub_683CB0(&v99);
                a2 = 0.0;
                v38 = *(float *)&a5;
                sub_683D80(v10, *(float *)&a5, (int)&a2);
                *(float *)&a4 = v38;
                a3 = (double)iActorTurnDegree * dbl_A31C78;
                if ( sub_5E0590((_DWORD *)v10) )
                  a3 = (double)iActorKeepTurnDegree * dbl_A31C78;
                goto LABEL_170;
              }
              v84 = 1;
            }
          }
        }
      }
    }
    v88 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10);
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)v10, (TESObjectREFR *)this->follow, 0);
    v86 = Distance;
    pathing = this->pathing;
    if ( pathing )
    {
      if ( !sub_6899E0(pathing) )
      {
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v10);
        if ( WorldSpace != TESObjectREFR_GetWorldSpace((TESObjectREFR *)this->follow) )
        {
          sub_68A160((_DWORD *)this->pathing);
          Distance = sub_4D7E30((float *)v10, v25);
          v86 = Distance;
        }
        v18 = a2;
      }
    }
    LOBYTE(a2) = 0;
    if ( v18 != 0.0
      && (PlayerCharacter *)LODWORD(v18) != TESDataHandler_g_PlayerRef
      && sub_5E05B0((_DWORD *)LODWORD(v18))
      && sub_5E05B0((_DWORD *)v10) )
    {
      LOBYTE(a2) = 1;
    }
    v94 = (TESObjectREFR *)this->follow;
    target = v9->members.target;
    if ( target && TargetData::GetTargetType(target) && (PlayerCharacter *)this->follow != TESDataHandler_g_PlayerRef
      || (Distance = sub_5677B0(v9, Distance, (TESObjectREFR *)v10, 2), v85 = Double_To_SInt32(Distance), v85 < 1) )
    {
      v85 = dword_B36B28;
    }
    if ( !this->follow
      || v9->members.type == 1
      && (location = (char *)v9->members.location) != 0
      && sub_569740(location) < 2
      && (Distance = sub_566DC0(v9, flt_A30634, st6_0, (Actor *)v10, 0, flt_A30634), v28) )
    {
      if ( LOBYTE(a3) )
      {
        ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_61)(this, v10, 1);
        if ( sub_5660A0(v9) )
        {
          if ( this->currentPackage )
            this->currentPackage = 0;
          else
            this->editorPackage = 0;
          v9->__vftable->super.Destroy((TESForm *)v9, 1);
          (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x44))(v10, 0x30000);
          this->Unk_06(this, v10, 0);
          if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x380))(v10) )
          {
            if ( (this->editorPackage->members.packageFlags & 0x800000) == 0 )
            {
              v64 = (void *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x380))(v10);
              sub_5E9A60(v64, Distance);
              if ( !v65 )
              {
                v66 = (Actor *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x380))(v10);
                sub_5F80D0(v66);
                this->unk1A8 = 0.0;
              }
              (*(void (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x230))(v10);
            }
          }
          return;
        }
        if ( !this->unk0D0 )
          ((void (__thiscall *)(HighProcess *, UInt32))this->Unk_64)(this, v10);
      }
      goto LABEL_144;
    }
    v29 = this->follow->vtbl->super.super.GetPos(this->follow);
    v30 = sub_4121A0(this->positionOfFollowedActor, &v99, v29);
    v31 = sub_404C90(v30);
    v92 = v31;
    v32 = this->follow->vtbl->super.super.GetPos(this->follow);
    v96 = *v32;
    v97 = v32[1];
    v98 = v32[2];
    if ( v88 )
    {
      a3 = sub_628E90(v88);
      v31 = a3;
      if ( a3 > 0.0 )
      {
        sub_4DD070((TESObjectREFR *)this->follow, &v95, a3);
        v33 = this->follow;
        v34 = dbl_A529C0;
        v95.x = v95.x * v34;
        v95.y = v95.y * v34;
        v95.z = v34 * v95.z;
        v35 = v33->vtbl->super.super.GetPos((TESObjectREFR *)v33);
        v99 = *v35 + v95.x;
        v100 = v35[1] + v95.y;
        v36 = v35[2];
        v96 = v99;
        v31 = v36 + v95.z;
        v97 = v100;
        v101 = v31;
        v98 = v101;
      }
    }
    LOBYTE(a3) = 0;
    if ( v88 )
    {
      v31 = v86;
      if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88) > (double)v86 )
      {
        v39 = this->GetCurrentPath(this);
        v40 = (int)v39;
        if ( (!v39 || (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)v39 + 0xC))(v39) || sub_683AA0(v40))
          && (sub_6163A0((int)v88, v10) || !sub_612550(v88)) )
        {
          LOBYTE(a3) = 1;
          v85 = 0;
        }
      }
    }
    v90 = sub_5677B0(v9, v31, (TESObjectREFR *)v10, 1) * dbl_A31C70;
    if ( v90 > (double)*(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88) )
      v90 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88);
    if ( v88 )
      v41 = 0.0;
    else
      v41 = v90;
    v89 = v41;
    v42 = 0;
    v43 = this->GetCurrentPath(this);
    v44 = (float *)v43;
    if ( v43 )
      v42 = sub_683A70(v43) != 0;
    if ( v84 )
      goto LABEL_87;
    if ( LOBYTE(a3) )
      goto LABEL_87;
    v41 = v92;
    if ( v90 < (double)v92 )
      goto LABEL_87;
    v93 = (double)v85 + v89;
    v41 = v93;
    v45 = ((int (*)(void))this->follow->vtbl->super.super.GetPos)();
    if ( !sub_684B30(v10, v45, v93, 0) )
    {
      if ( !this->unk0D0 )
        goto LABEL_113;
      if ( !v42 )
      {
LABEL_87:
        if ( v44 )
        {
          if ( v42 )
            sub_684EC0(v44);
        }
        if ( (_BYTE)a5 )
        {
          if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36A90) >= (double)v86
            || sub_5F2820((Actor *)v10, v86, 0, (TESObjectREFR *)this->follow, 1, 0, 0) )
          {
            v41 = 0.0;
            *(float *)&this->unk0B8 = 0.0;
          }
          else
          {
            *(float *)&a5 = *(float *)&this->unk0B8 + dbl_A2F928;
            v41 = *(float *)&a5;
            this->unk0B8 = a5;
            if ( v41 >= dbl_A3AA50 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1) )
              {
                v46 = this->follow;
                if ( v46 && v46->vtbl->super.super.IsActor((TESObjectREFR *)v46) && this->follow )
                {
                  (*(void (__thiscall **)(UInt32, Actor *))(*(_DWORD *)v10 + 0x340))(v10, this->follow);
                  *(float *)&this->unk0B8 = 0.0;
                  return;
                }
              }
              else
              {
                ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_61)(this, v10, 2);
              }
              *(float *)&this->unk0B8 = 0.0;
              return;
            }
          }
        }
        if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1)
          && (v47 = this->follow, v47 != (Actor *)TESDataHandler_g_PlayerRef)
          && (v41 = flt_A57A64,
              v80 = flt_A57A64,
              v77 = (float *)((int (*)(void))v47->vtbl->super.super.GetPos)(),
              v48 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x174))(v10),
              sub_480520(v48, v77, v80) < 0)
          && sub_5F2820((Actor *)v10, v41, 0, (TESObjectREFR *)this->follow, 1, 0, 0) )
        {
          if ( !this->pathing )
            this->Unk_101(this);
          v49 = (int *)this->GetCurrentPath(this);
          if ( v49 )
          {
            v50 = this->follow->vtbl->super.super.GetPos(this->follow);
            sub_6862C0(v49, v50);
            this->unk0D0 = 0;
          }
        }
        else
        {
          v51 = this->__vftable;
          v81 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)this->follow);
          v52 = TESObjectREFR_GetParentCell((TESObjectREFR *)this->follow);
          if ( !((unsigned __int8 (__thiscall *)(HighProcess *, UInt32, _DWORD, _DWORD, float, TESObjectCELL *, TESWorldSpace *))v51->Unk_F6)(
                  this,
                  v10,
                  LODWORD(v96),
                  LODWORD(v97),
                  COERCE_FLOAT(LODWORD(v98)),
                  v52,
                  v81) )
            return;
        }
        v53 = this->follow->vtbl->super.super.GetPos(this->follow);
        this->positionOfFollowedActor[0] = *v53;
        this->positionOfFollowedActor[1] = v53[1];
        this->positionOfFollowedActor[2] = v53[2];
      }
    }
    if ( this->unk0D0 )
    {
LABEL_144:
      v67 = 0;
      v87 = TesObjectREF_GetDistance((TESObjectREFR *)v10, v94, 0);
      if ( LOBYTE(a2) )
      {
        v85 -= 0x32;
        if ( v85 < 0 )
          v85 = 0;
      }
      if ( (double)v85 < v87 )
        return;
      v68 = this->follow;
      if ( v68 == (Actor *)TESDataHandler_g_PlayerRef
        && !sub_5F2820((Actor *)v10, v87, 0, (TESObjectREFR *)v68, 1, 0, 0) )
      {
        return;
      }
      if ( (*(unsigned __int8 (__thiscall **)(UInt32, int))(*(_DWORD *)v10 + 0x334))(v10, 1) )
      {
        if ( !(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10) )
          return;
        v69 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x330))(v10);
        if ( sub_6163A0(v69, v10) )
          return;
      }
      if ( !this->unk0D0 )
      {
        v70 = *(_DWORD *)(v10 + 0x58);
        if ( v70 )
        {
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v70 + 8))(v70) )
            v67 = *(_DWORD *)(v10 + 0x58);
        }
        if ( sub_5E0E80((_DWORD **)v10) )
        {
          if ( v67 )
          {
            v71 = TESTopic::GEtTopic(6, 4);
            *(_DWORD *)(v10 + 0xE4) = TESDataHandler_g_PlayerRef;
            if ( v71 )
            {
              (*(void (__thiscall **)(int, UInt32, int, _DWORD, _DWORD, int))(*(_DWORD *)v67 + 0x1A4))(
                v67,
                v10,
                v71,
                0,
                0,
                1);
            }
            else if ( ((unsigned __int8 (__thiscall *)(HighProcess *))this->Unk_7F)(this) )
            {
              (*(void (__thiscall **)(int, UInt32, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v67 + 0x1A4))(
                v67,
                v10,
                0,
                0,
                0,
                1);
            }
          }
        }
        sub_5E02B0((_DWORD **)v10);
      }
      if ( !v94 )
        return;
      if ( !this->unk23C )
        return;
      v72 = *(_DWORD *)(v10 + 0x58);
      if ( v72 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x36C))(v72) )
          return;
      }
      v83 = (float *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v10 + 0x174))(v10);
      v73 = v94->vtbl->GetPos(v94);
      sub_4121A0(v73, &v99, v83);
      *(float *)&a5 = sub_683CB0(&v99);
      a2 = 0.0;
      v74 = *(float *)&a5;
      sub_683D80(v10, *(float *)&a5, (int)&a2);
      *(float *)&a4 = v74;
      a3 = (double)iActorTurnDegree * dbl_A31C78;
      if ( sub_5E0590((_DWORD *)v10) )
        a3 = (double)iActorKeepTurnDegree * dbl_A31C78;
LABEL_170:
      *(float *)&a4 = fabs(*(float *)&a4);
      if ( a3 >= (double)*(float *)&a4 )
        sub_5E05F0((Actor *)v10, 0x30);
      else
        sub_685530((Actor *)v10, *(float *)&a5, 1);
      return;
    }
LABEL_113:
    if ( *(float *)&a4 == NAN )
    {
      type = v91->members.type;
      LOBYTE(a5) = 0;
      if ( type == 0xF || type == 0xC )
        LOBYTE(a5) = 1;
      v55 = v91;
      v41 = sub_5677B0(v91, v41, (TESObjectREFR *)v10, 2);
      *(float *)&v56 = COERCE_FLOAT(Double_To_SInt32(v41));
      a4 = v56;
      if ( sub_5660A0(v91)
        && (v57 = this->editorPackage) != 0
        && (v57->members.packageFlags & 0x200) != 0
        && (v57->members.packageFlags & 1) != 0
        && TESObjectREFR_GetParentCell((TESObjectREFR *)v10)
        && (v58 = TESObjectREFR_GetParentCell((TESObjectREFR *)v10), sub_4CAAC0((ExtraDataList *)v58, (Actor *)v10)) )
      {
        ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_8D)(this, v10, 0x101);
      }
      else
      {
        v59 = a5;
        a5 = 2 * v56;
        v76 = (float)(2 * v56);
        v75 = (float)a4;
        v41 = v86;
        v60 = sub_629F40(this, (Concurrency::details::SchedulerBase *)v10, v86, v75, v76, v59, 0);
        ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_8D)(this, v10, v60);
      }
    }
    else
    {
      ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_8D)(this, v10, a4);
      v55 = v91;
    }
    if ( LOBYTE(a2) )
    {
      v61 = flt_A31C80;
    }
    else if ( LOBYTE(a3) )
    {
      v61 = (double)v85;
    }
    else
    {
      v61 = sub_5677B0(v55, v41, (TESObjectREFR *)v10, 2);
    }
    v62 = this->__vftable;
    a3 = v61;
    v82 = a3;
    v78 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)this->follow);
    v63 = TESObjectREFR_GetParentCell((TESObjectREFR *)this->follow);
    ((void (__thiscall *)(HighProcess *, UInt32, float *, TESObjectCELL *, TESWorldSpace *, _DWORD))v62->Unk_104)(
      this,
      v10,
      &v96,
      v63,
      v78,
      LODWORD(v82));
    goto LABEL_144;
  }
  if ( (v14->members.super.super.super.flags & 0x20) != 0 )
    sub_566870((TargetData **)v9, (TESForm *)v14, 1);
  if ( LOBYTE(a3) )
LABEL_176:
    ((void (__thiscall *)(HighProcess *, UInt32, int))this->Unk_61)(this, v10, 1);
}
