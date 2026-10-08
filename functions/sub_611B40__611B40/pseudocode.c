char __thiscall sub_611B40(Actor *this, PlayerCharacter *a2)
{
  bool v3; // zf
  void (__thiscall *Unk_C2)(Actor *); // edx
  int *v5; // eax
  PlayerCharacter *v6; // eax

  v3 = ((unsigned __int8 (__thiscall *)(Actor *, PlayerCharacter *))this->vtbl->Yeld)(this, a2) == 0; /*0x611b53*/
  Unk_C2 = this->vtbl->Unk_C2; /*0x611b57*/
  if ( v3 ) /*0x611b61*/
  {
    LOBYTE(v6) = ((char (__thiscall *)(Actor *, PlayerCharacter *, _DWORD))Unk_C2)(this, a2, 0); /*0x611bc5*/
  }
  else
  {
    ((void (__thiscall *)(Actor *, PlayerCharacter *, int))Unk_C2)(this, a2, 6); /*0x611b66*/
    if ( ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->GetCombatController)(this, 0) ) /*0x611b72*/
    {
      v5 = (int *)this->vtbl->GetCombatController(this); /*0x611b83*/
      sub_615480(v5, (int)a2); /*0x611b87*/
    }
    ((void (__thiscall *)(Actor *, PlayerCharacter *))this->vtbl->Unk_D0)(this, a2); /*0x611b97*/
    LOBYTE(v6) = Actor_IsGuardClass(this); /*0x611b9b*/
    if ( (_BYTE)v6 ) /*0x611ba2*/
    {
      v6 = reference; /*0x611ba4*/
      if ( a2 == reference ) /*0x611bab*/
      {
        if ( LOBYTE(v6->unk738) ) /*0x611bad*/
          LOBYTE(v6->unk738) = 0; /*0x611bb7*/
      }
    }
  }
  return (char)v6; /*0x611bb6*/
}
