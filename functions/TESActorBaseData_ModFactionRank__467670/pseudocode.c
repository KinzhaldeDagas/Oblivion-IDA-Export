void __thiscall TESActorBaseData_ModFactionRank(char *this, int a2, char a3, int a4)
{
  int FactionRank; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-8h]
  char v8; // [esp+4h] [ebp-4h]

  if ( a2 )
  {
    FactionRank = TESActorBaseData_GetFactionRank(this, a2, a4);
    if ( FactionRank > (int)0xFFFFFFFF )
    {
      v6 = a3 + FactionRank;
      if ( v6 < 0 )
        v6 = 0;
      TESActorBaseData_SetFactionRank(this, a2, v6, v7, v8);
    }
  }
}
