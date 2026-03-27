int __thiscall TESActorBaseData_SetFactionRank(char *this, int a2, int a3, int a4, char a5)
{
  char *v6; // esi

  if ( !a2 )
    return TESActorBaseData_SetFactionRank_::Done(0, a3);
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0x50))(this, 0x40);
  v6 = this + 0x18;
  if ( v6 )
    return TESActorBaseData_SetFactionRank_::FindFactionLoop(a2, v6, (int)v6, a2, a3, a4, a5);
  else
    return TESActorBaseData_SetFactionRank_::NewFactionEntry(a2, 0, a2, a3, a4, a5);
}
