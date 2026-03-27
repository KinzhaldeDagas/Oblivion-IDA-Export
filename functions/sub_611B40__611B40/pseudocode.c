char __thiscall sub_611B40(Actor *this, PlayerCharacter *a2)
{
  bool v3; // zf
  void (__thiscall *Unk_C2)(Actor *); // edx
  int *v5; // eax
  PlayerCharacter *v6; // eax

  v3 = ((unsigned __int8 (__thiscall *)(Actor *, PlayerCharacter *))this->vtbl->Yeld)(this, a2) == 0;
  Unk_C2 = this->vtbl->Unk_C2;
  if ( v3 )
  {
    LOBYTE(v6) = ((char (__thiscall *)(Actor *, PlayerCharacter *, _DWORD))Unk_C2)(this, a2, 0);
  }
  else
  {
    ((void (__thiscall *)(Actor *, PlayerCharacter *, int))Unk_C2)(this, a2, 6);
    if ( ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->GetCombatController)(this, 0) )
    {
      v5 = (int *)this->vtbl->GetCombatController(this);
      sub_615480(v5, (int)a2);
    }
    ((void (__thiscall *)(Actor *, PlayerCharacter *))this->vtbl->Unk_D0)(this, a2);
    LOBYTE(v6) = sub_5E6C60(this);
    if ( (_BYTE)v6 )
    {
      v6 = TESDataHandler_g_PlayerRef;
      if ( a2 == TESDataHandler_g_PlayerRef )
      {
        if ( LOBYTE(v6->unk738) )
          LOBYTE(v6->unk738) = 0;
      }
    }
  }
  return (char)v6;
}
