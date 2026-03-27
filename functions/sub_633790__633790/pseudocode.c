TESObjectREFR **__thiscall sub_633790(TESObjectREFR **this, int a2)
{
  TESObjectREFR **result; // eax
  TESObjectREFR **v4; // ebp
  int v5; // ebx
  TESObjectREFR *v6; // edi
  TESObjectREFR *i; // edi

  if ( !*(this + 0x4F) )
    return ((TESObjectREFR **(__thiscall *)(TESObjectREFR **, int, int))LODWORD((*this)[4].member.rot.z))(this, a2, 1);
  if ( ((unsigned __int8 (__thiscall *)(_DWORD, int))(*(this + 0x4F))->vtbl[1].GetSleepState)(*(this + 0x4F), 1) )
    goto LABEL_9;
  if ( *(this + 0x4F) != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    return (*(TESObjectREFR **(__thiscall **)(TESObjectREFR **, int))&(*this)[0xE].member.baseExtraList.members.m_presenceBitfield[4])(
             this,
             a2);
  if ( PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) )
  {
LABEL_9:
    if ( *(this + 0x4F) == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      result = sub_6758E0((int)TESDataHandler_g_PlayerRef, 0xC, 1);
      v4 = result;
      if ( result )
      {
        v5 = a2;
        do
        {
          if ( !*v4 )
            break;
          result = (TESObjectREFR **)((int (__thiscall *)(TESObjectREFR *))(*v4)->vtbl->IsActor)(*v4);
          if ( (_BYTE)result )
          {
            v6 = *v4;
            if ( *v4 )
            {
              LOBYTE(a2) = sub_67CB50(&dword_B3BDB0, *v4) == 0;
              result = (TESObjectREFR **)((int (__thiscall *)(TESObjectREFR **, int, TESObjectREFR *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*this)[6].member.childCell.GetChildCell)(
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
          v4 = (TESObjectREFR **)v4[1];
        }
        while ( v4 );
      }
    }
    else
    {
      result = (TESObjectREFR **)((int (__thiscall *)(_DWORD))(*(this + 0x4F))->vtbl[1].IsMobileObject)(*(this + 0x4F));
      if ( result )
      {
        for ( i = result[0x10]; i; i = *(TESObjectREFR **)&i->member.super.type )
        {
          result = (TESObjectREFR **)i->vtbl;
          if ( !i->vtbl )
            break;
          result = (TESObjectREFR **)((int (__thiscall *)(TESObjectREFR **, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*this)[6].member.childCell.GetChildCell)(
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
    if ( *(this + 0x4F) != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      return (*(TESObjectREFR **(__thiscall **)(TESObjectREFR **, int))&(*this)[0xE].member.baseExtraList.members.m_presenceBitfield[4])(
               this,
               a2);
    return ((TESObjectREFR **(__thiscall *)(TESObjectREFR **, int, _DWORD, unsigned int, _DWORD))LODWORD((*this)[4].member.scale))(
             this,
             a2,
             0,
             0xFFFFFFFF,
             0);
  }
  return result;
}
