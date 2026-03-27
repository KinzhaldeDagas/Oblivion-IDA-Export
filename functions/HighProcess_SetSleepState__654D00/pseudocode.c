TESObjectREFR *__thiscall HighProcess::SetSleepState(
        HighProcess *this,
        Actor *a2,
        SitSleep a3,
        TESObjectREFR *a4,
        UInt8 a5)
{
  NiNode *v7; // edi
  UInt8 sleepState; // al
  bool v9; // bl
  ActorAnimData *animData; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  float v18; // [esp+8h] [ebp-14h]
  char v19; // [esp+20h] [ebp+4h]

  if ( a2 )
  {
    v7 = a2->vtbl->super.super.GetNiNode(a2);
    if ( v7 )
    {
      if ( a2 != (Actor *)TESDataHandler_g_PlayerRef )
      {
        sleepState = this->sleepState;
        if ( sleepState == kSitSleep_Sleeping || (v19 = 0, sleepState == kSitSleep_Sitting) )
          v19 = 1;
        v9 = a3 == kSitSleep_Sleeping || a3 == kSitSleep_Sitting;
        if ( this->GetProcessLevel(this) || !v19 || v9 )
        {
          if ( !this->GetProcessLevel(this) && v9 && !v19 && !a2->vtbl->GetMountedHorse(a2) )
            sub_88CE30(v7, 1, 1, 0);
        }
        else
        {
          sub_88CE30(v7, 0, 1, 0);
        }
      }
    }
  }
  animData = this->animData;
  if ( animData )
  {
    if ( a3 < kSitSleep_SittingIn || a3 > kSitSleep_SittingOut )
    {
      v14 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)animData->manager + 0x1F) + 0x4C))(
              *((_DWORD *)animData->manager + 0x1F),
              off_B06560[0]);
      if ( v14 )
        *(_WORD *)(v14 + 0x18) &= ~1u;
      v15 = *((_DWORD *)this->animData->manager + 0x1F);
      v16 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v15 + 0x4C))(v15, off_B06568[0]);
      if ( v16 )
        *(_WORD *)(v16 + 0x18) &= ~1u;
    }
    else
    {
      v11 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)animData->manager + 0x1F) + 0x4C))(
              *((_DWORD *)animData->manager + 0x1F),
              off_B06560[0]);
      if ( v11 )
        *(_WORD *)(v11 + 0x18) |= 1u;
      v12 = *((_DWORD *)this->animData->manager + 0x1F);
      v13 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v12 + 0x4C))(v12, off_B06568[0]);
      if ( v13 )
        *(_WORD *)(v13 + 0x18) |= 1u;
    }
  }
  if ( a2 )
  {
    v18 = sub_4A9720(a2);
    sub_65A650((TESObjectREFR *)a2, v18);
  }
  this->sleepState = a3;
  this->furniture = a4;
  this->furnitureMarkerIndex = a5;
  return a4;
}
