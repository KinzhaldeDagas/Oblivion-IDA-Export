TESObjectREFR **__thiscall sub_633790(TESObjectREFR **this, int a2)
{
  TESObjectREFR **result; // eax
  TESObjectREFR **v4; // ebp
  int v5; // ebx
  TESObjectREFR *v6; // edi
  TESObjectREFR *i; // edi

  if ( !*(this + 0x4F) ) /*0x633794*/
    return ((TESObjectREFR **(__thiscall *)(TESObjectREFR **, int, int))LODWORD((*this)[4].member.rot.z))(this, a2, 1); /*0x6337b2*/
  if ( ((unsigned __int8 (__thiscall *)(_DWORD, int))(*(this + 0x4F))->vtbl[1].GetSleepState)(*(this + 0x4F), 1) ) /*0x6337c3*/
    goto LABEL_9; /*0x6337c3*/
  if ( *(this + 0x4F) != (TESObjectREFR *)reference ) /*0x6337d5*/
    return (*(TESObjectREFR **(__thiscall **)(TESObjectREFR **, int))&(*this)[0xE].member.baseExtraList.members.m_presenceBitfield[4])( /*0x633803*/
             this,
             a2);
  if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) ) /*0x6337d9*/
  {
LABEL_9:
    if ( *(this + 0x4F) == (TESObjectREFR *)reference ) /*0x63382f*/
    {
      result = (TESObjectREFR **)sub_6758E0( /*0x63383f*/
                                   (ActorProcessManager *)&qword_B3BB2C[0x75],
                                   (TESObjectREFR *)reference,
                                   0xC,
                                   1);
      v4 = result; /*0x633844*/
      if ( result ) /*0x633848*/
      {
        v5 = a2; /*0x63384e*/
        do /*0x6338b0*/
        {
          if ( !*v4 ) /*0x633852*/
            break; /*0x633857*/
          result = (TESObjectREFR **)((int (__thiscall *)(TESObjectREFR *))(*v4)->vtbl->IsActor)(*v4); /*0x633865*/
          if ( (_BYTE)result ) /*0x633869*/
          {
            v6 = *v4; /*0x63386b*/
            if ( *v4 ) /*0x63386b*/
            {
              LOBYTE(a2) = sub_67CB50((int *)&qword_B3BB2C[0xA1], (Actor *)*v4) == 0; /*0x633886*/
              result = (TESObjectREFR **)((int (__thiscall *)(TESObjectREFR **, int, TESObjectREFR *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*this)[6].member.childCell.GetChildCell)( /*0x6338a9*/
                                           this,
                                           v5,
                                           v6,
                                           a2,
                                           0,
                                           0,
                                           a2,
                                           0,
                                           0,
                                           0,
                                           1);
            }
          }
          v4 = (TESObjectREFR **)v4[1]; /*0x6338ab*/
        }
        while ( v4 ); /*0x6338b0*/
      }
    }
    else
    {
      result = (TESObjectREFR **)((int (__thiscall *)(_DWORD))(*(this + 0x4F))->vtbl[1].IsMobileObject)(*(this + 0x4F)); /*0x6338c7*/
      if ( result ) /*0x6338cb*/
      {
        for ( i = result[0x10]; i; i = *(TESObjectREFR **)&i->member.super.type ) /*0x6338d2*/
        {
          result = (TESObjectREFR **)i->vtbl; /*0x6338d8*/
          if ( !i->vtbl ) /*0x6338d8*/
            break; /*0x6338dc*/
          result = (TESObjectREFR **)((int (__thiscall *)(TESObjectREFR **, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*this)[6].member.childCell.GetChildCell)( /*0x6338fc*/
                                       this,
                                       a2,
                                       *result,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       1);
        }
      }
    }
  }
  else
  {
    if ( *(this + 0x4F) != (TESObjectREFR *)reference ) /*0x6337ee*/
      return (*(TESObjectREFR **(__thiscall **)(TESObjectREFR **, int))&(*this)[0xE].member.baseExtraList.members.m_presenceBitfield[4])( /*0x6337ee*/
               this,
               a2);
    return ((TESObjectREFR **(__thiscall *)(TESObjectREFR **, int, _DWORD, unsigned int, _DWORD))LODWORD((*this)[4].member.scale))( /*0x63381b*/
             this,
             a2,
             0,
             0xFFFFFFFF,
             0);
  }
  return result; /*0x6337b0*/
}
