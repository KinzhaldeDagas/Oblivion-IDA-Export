void __userpurge TESObjectREFR_PreLoadModifiedForm(
        Actor *this@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7)
{
  TESObjectCELL *parentCell; // eax
  UInt8 cellProcessLevel; // al
  signed int v10; // eax
  bool v11; // al
  ExtraDataList *p_baseExtraList; // ecx
  unsigned int resetSelector; // eax
  float v14; // eax
  unsigned int v15; // eax
  unsigned __int8 *RagDollData; // eax
  unsigned int v17; // eax
  int type; // ecx
  TESForm::FormFlags flags; // eax

  nullsub_returnvVoid_1arg(a7); /*0x4e0589*/
  if ( !this->vtbl->super.super.IsActor((TESObjectREFR *)this) && (a7 & 0x10000) != 0 ) /*0x4e05a4*/
    sub_46AA00(this, 0); /*0x4e05aa*/
  if ( (g_TESSaveLoadGame->flags & 0x40) != 0 && (a7 & 0x40000000) != 0 ) /*0x4e05c5*/
  {
    if ( (this->members.super.super.super.flags & 0x800) != 0 || (this->members.super.super.super.flags & 0x20) != 0 ) /*0x4e05d9*/
    {
      ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.Set3D)(this, 0); /*0x4e062f*/
    }
    else if ( !this->members.super.super.niNode ) /*0x4e05db*/
    {
      parentCell = this->members.super.super.parentCell; /*0x4e05e1*/
      if ( parentCell ) /*0x4e05e6*/
      {
        cellProcessLevel = parentCell->members.cellProcessLevel; /*0x4e05e8*/
        if ( (cellProcessLevel == 6 || cellProcessLevel == 3) && !sub_4354F0(MEMORY[0xB33A1C], (int)this) ) /*0x4e05fa*/
        {
          v10 = sub_440C80(MEMORY[0xB333A0], this->members.super.super.parentCell, 0); /*0x4e060f*/
          sub_438060((_DWORD **)MEMORY[0xB33A1C], (TESObjectREFR *)this, v10); /*0x4e061c*/
        }
      }
    }
  }
  if ( (a7 & 0x2000000) != 0 && !this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x4e0643*/
    sub_4DA4F0(this); /*0x4e064b*/
  if ( (a7 & 0x177577E0) != 0 || this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x4e0662*/
    sub_425650(&this->members.super.super.baseExtraList, a7, (TESObjectCELL **)this); /*0x4e066d*/
  if ( (a7 & 0x8000000) != 0 ) /*0x4e0678*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) && Actor_IsCreature(this) ) /*0x4e068c*/
    {
      UnequipWeapon((TESObjectREFR *)this, a2, a7, a4, a5, a6); /*0x4e0697*/
      sub_4DC8F0((TESObjectREFR *)this, a6, a4, a5, a3, 1); /*0x4e06a0*/
      UnequipLight((TESObjectREFR *)this); /*0x4e06a7*/
      TESObjectREFR_ClearEquippedAmmo3D((TESObjectREFR *)this); /*0x4e06ae*/
    }
    if ( (g_TESSaveLoadGame->flags & 0x40) != 0 ) /*0x4e06c5*/
      this->vtbl->super.super.Unk_61((TESObjectREFR *)this, 0); /*0x4e06d6*/
    else
      sub_4DDB00((TESObjectREFR *)this, 0); /*0x4e06c7*/
  }
  if ( this->vtbl->super.super.GetBaseForm(this) ) /*0x4e06e2*/
  {
    if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Door ) /*0x4e06f8*/
    {
      if ( (a7 & 0x40000) != 0 && !g_TESSaveLoadGame[1].unknown1C[4] ) /*0x4e0708*/
      {
        v11 = ExtraDataList_TestActionFlagBits(&this->members.super.super.baseExtraList, 8u); /*0x4e0718*/
        p_baseExtraList = &this->members.super.super.baseExtraList; /*0x4e0721*/
        if ( v11 ) /*0x4e0723*/
          ExtraDataList_ClearActionFlagBits(p_baseExtraList, 8u); /*0x4e0725*/
        else
          ExtraDataList_SetActionFlagBits(p_baseExtraList, 8u); /*0x4e072c*/
      }
      resetSelector = g_TESSaveLoadGame->resetSelector; /*0x4e0737*/
      if ( resetSelector == 0x1FFFF000 || resetSelector == 0x7FFFF000 ) /*0x4e0746*/
      {
        LOBYTE(v14) = ExtraDataList_TestActionFlagBits(&this->members.super.super.baseExtraList, 8u); /*0x4e074f*/
        sub_4DE460((TESObjectREFR *)this, v14, 1); /*0x4e0757*/
      }
    }
  }
  v15 = g_TESSaveLoadGame->resetSelector; /*0x4e0761*/
  if ( (v15 == 0x1FFFF000 || v15 == 0x7FFFF000) && this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x4e077e*/
  {
    if ( this->members.super.super.niNode ) /*0x4e0784*/
    {
      RagDollData = (unsigned __int8 *)ExtraDataList_GetRagDollData(&this->members.super.super.baseExtraList); /*0x4e078d*/
      if ( RagDollData ) /*0x4e0794*/
        sub_497830(RagDollData, (int)this); /*0x4e0799*/
      if ( !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x4e07aa*/
        this->vtbl->super.super.GetAnimData((TESObjectREFR *)this); /*0x4e07ba*/
    }
  }
  v17 = g_TESSaveLoadGame->resetSelector; /*0x4e07c2*/
  if ( v17 == 0x60000000 || v17 == 0x7FFFF000 ) /*0x4e07d1*/
  {
    if ( this->vtbl->super.super.GetBaseForm(this) ) /*0x4e07dd*/
    {
      type = this->vtbl->super.super.GetBaseForm(this)->member.type; /*0x4e07ef*/
      if ( type == 0x12 || type == 0xA || type == 0x18 ) /*0x4e0800*/
      {
        flags = this->members.super.super.super.flags; /*0x4e0802*/
        if ( (flags & 0x800) != 0 || (flags & 0x20) != 0 || type == 0x18 && (flags & 0x2000) != 0 ) /*0x4e0823*/
          sub_4D9310((char *)this, 0); /*0x4e0829*/
      }
    }
  }
}
