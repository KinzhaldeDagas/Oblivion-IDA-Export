void __thiscall TESActorBaseData_SetFactionRank(char *this, int a2, int a3, int a4, char a5)
{
  char *v6; // esi

  if ( a2 ) /*0x4675ea*/
  {
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0x50))(this, 0x40); /*0x4675f3*/
    v6 = this + 0x18; /*0x4675f5*/
    if ( v6 ) /*0x4675fa*/
      TESActorBaseData_SetFactionRank_::FindFactionLoop(a2, v6, v6, a2, a3, a4, a5); /*0x4675fd*/
    else
      TESActorBaseData_SetFactionRank_::NewFactionEntry(a2, 0, a2, a3, a4, a5); /*0x4675fa*/
  }
  else
  {
    TESActorBaseData_SetFactionRank_::Done(0, a3); /*0x4675ea*/
  }
}
