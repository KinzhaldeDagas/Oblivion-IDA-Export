void __thiscall Actor_Resurrect(Actor *this, int a1, char a2, bool useAnimBoh)
{
  int v4; // ebx
  char v5; // bp
  int v6; // edi
  double v7; // st5
  double v8; // st6
  double v9; // st7
  TESObjectCELL *v11; // eax
  bhkCharacterProxy *CharProxy; // eax
  LowProcess *process; // ecx
  ActorAnimData *v14; // eax
  LowProcess *v15; // ecx
  int v16; // eax
  LowProcess *v17; // ecx
  LowProcess *v18; // eax
  LowProcess *v19; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v21; // edi
  signed int v22; // eax
  ActorVtbl *vtbl; // eax
  Actor *v24; // ecx
  NiPoint3 *v25; // [esp+Ch] [ebp-1Ch]
  float a1a; // [esp+2Ch] [ebp+4h]
  float a3a; // [esp+34h] [ebp+Ch]

  ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.super.Unk_23)(this, 0);
  sub_4212E0(&this->members.super.super.baseExtraList.vtbl);
  LOBYTE(this->members.unk0E8[5]) = 0;
  if ( useAnimBoh
    && this->vtbl->super.super.GetNiNode(this)
    && TESObjectREFR_GetParentCell((TESObjectREFR *)this)
    && (v11 = TESObjectREFR_GetParentCell((TESObjectREFR *)this), TESObjectCELL_IsProcessLevel_LowHigh(v11, 1)) )
  {
    Actor_HandleDeathSTate____(this, 0);
    a1a = this->vtbl->GetAV_F(this, kActorVal_Health);
    a3a = (double)Actor_GetBaseCalcAVi((int *)this, v4, v6, (int)this, 8) - a1a;
    ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))this->vtbl->DamageAV_F)(this, 8, LODWORD(a3a), 0);
    v25 = (NiPoint3 *)this->vtbl->super.super.GetPos(this);
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
    sub_452A10(CharProxy, v25);
    this->members.super.process->Unk_63(this->members.super.process, 0);
    this->vtbl->super.super.Unk_52((TESObjectREFR *)this);
    process = this->members.super.process;
    if ( process )
      process->SetKnockedState(process, 3);
    v14 = this->vtbl->super.super.GetAnimData(this);
    if ( v14 )
      sub_4728C0((int)v14);
  }
  else
  {
    AVCollection_ClearArrayAndList(&this->members.avModifiers.avList.entry);
    Actor_HandleDeathSTate____(this, 0);
    LOBYTE(this->members.unk0B4[3]) = 0;
    if ( this != (Actor *)TESDataHandler_g_PlayerRef )
    {
      v15 = this->members.super.process;
      if ( v15 )
      {
        v16 = v15->GetProcessLevel(v15);
        sub_674550(v5, v7, v8, v9, (int)this, v16);
      }
      v17 = this->members.super.process;
      if ( v17 )
        ((void (__thiscall *)(LowProcess *, int))v17->Destructor)(v17, 1);
      v18 = (LowProcess *)FormHeapAlloc(0x90u);
      if ( v18 )
        v19 = LowProcess::LowProcess(v18);
      else
        v19 = 0;
      this->members.super.process = v19;
    }
    if ( (_BYTE)a1 )
      this->vtbl->super.super.Unk_61((TESObjectREFR *)this, 0);
    if ( this != (Actor *)TESDataHandler_g_PlayerRef )
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      v21 = ParentCell;
      if ( ParentCell && TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) && a2 )
      {
        v22 = sub_440C80(TES, v21, 0);
        sub_438060((_DWORD **)ModelLoaderPtr, v5, v7, v8, v9, (TESObjectREFR *)this, v22);
        vtbl = this->vtbl;
        v24 = this;
        if ( v21->members.cellProcessLevel == 6 )
          vtbl->super.super.IsParalyzed((TESObjectREFR *)this);
        else
LABEL_29:
          vtbl->super.Unk_6C((MobileObject *)v24);
      }
      else
      {
        switch ( MobileObject_GetProcessLevel((MobileObject *)this) )
        {
          case 0u:
            this->vtbl->super.super.IsParalyzed((TESObjectREFR *)this);
            break;
          case 1u:
            vtbl = this->vtbl;
            v24 = this;
            goto LABEL_29;
          case 2u:
            this->vtbl->super.Unk_6B((MobileObject *)this);
            break;
          case 3u:
            sub_673A90((int)this, 3, 0, 0, 0);
            break;
          default:
            return;
        }
      }
    }
  }
}
