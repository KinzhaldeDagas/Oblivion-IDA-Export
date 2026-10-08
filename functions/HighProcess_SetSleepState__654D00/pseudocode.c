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
  float AimPitch; // [esp+8h] [ebp-14h]
  char v19; // [esp+20h] [ebp+4h]

  if ( a2 ) /*0x654d0c*/
  {
    v7 = a2->vtbl->super.super.GetNiNode(a2); /*0x654d1f*/
    if ( v7 ) /*0x654d23*/
    {
      if ( a2 != (Actor *)reference ) /*0x654d2f*/
      {
        sleepState = this->sleepState; /*0x654d35*/
        if ( sleepState == kSitSleep_Sleeping || (v19 = 0, sleepState == kSitSleep_Sitting) ) /*0x654d46*/
          v19 = 1; /*0x654d48*/
        v9 = a3 == kSitSleep_Sleeping || a3 == kSitSleep_Sitting; /*0x654d5f*/
        if ( this->GetProcessLevel(this) || !v19 || v9 ) /*0x654d76*/
        {
          if ( !this->GetProcessLevel(this) && v9 && !v19 && !a2->vtbl->GetMountedHorse(a2) ) /*0x654da2*/
            sub_88CE30(v7, 1, 1, 0); /*0x654dae*/
        }
        else
        {
          sub_88CE30(v7, 0, 1, 0); /*0x654d7e*/
        }
      }
    }
  }
  animData = this->animData; /*0x654db6*/
  if ( animData ) /*0x654dc2*/
  {
    if ( a3 < kSitSleep_SittingIn || a3 > kSitSleep_SittingOut ) /*0x654dd0*/
    {
      v14 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)animData->manager + 0x1F) + 0x4C))( /*0x654e2c*/
              *((_DWORD *)animData->manager + 0x1F),
              off_B06560[0]);
      if ( v14 ) /*0x654e35*/
        *(_WORD *)(v14 + 0x18) &= ~1u; /*0x654e37*/
      v15 = *((_DWORD *)this->animData->manager + 0x1F); /*0x654e47*/
      v16 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v15 + 0x4C))(v15, off_B06568[0]); /*0x654e55*/
      if ( v16 ) /*0x654e59*/
        *(_WORD *)(v16 + 0x18) &= ~1u; /*0x654e5b*/
    }
    else
    {
      v11 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)animData->manager + 0x1F) + 0x4C))( /*0x654de6*/
              *((_DWORD *)animData->manager + 0x1F),
              off_B06560[0]);
      if ( v11 ) /*0x654dea*/
        *(_WORD *)(v11 + 0x18) |= 1u; /*0x654dec*/
      v12 = *((_DWORD *)this->animData->manager + 0x1F); /*0x654dfd*/
      v13 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v12 + 0x4C))(v12, off_B06568[0]); /*0x654e0b*/
      if ( v13 ) /*0x654e0f*/
        *(_WORD *)(v13 + 0x18) |= 1u; /*0x654e11*/
    }
  }
  if ( a2 ) /*0x654e61*/
  {
    AimPitch = Actor_GetAimPitch(a2); /*0x654e6d*/
    sub_65A650((TESObjectREFR *)a2, AimPitch); /*0x654e70*/
  }
  this->sleepState = a3; /*0x654e7e*/
  this->furniture = a4; /*0x654e84*/
  this->furnitureMarkerIndex = a5; /*0x654e8a*/
  return a4; /*0x654e7d*/
}
