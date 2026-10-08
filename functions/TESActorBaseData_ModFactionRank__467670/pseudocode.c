void __thiscall TESActorBaseData_ModFactionRank(char *this, int a2, char a3, int a4)
{
  signed int FactionRank; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-8h]
  char v8; // [esp+4h] [ebp-4h]

  if ( a2 ) /*0x46767a*/
  {
    FactionRank = TESActorBaseData_GetFactionRank((int *)this, a2, a4); /*0x467682*/
    if ( FactionRank > (int)0xFFFFFFFF ) /*0x46768a*/
    {
      v6 = a3 + FactionRank; /*0x467691*/
      if ( v6 < 0 ) /*0x467693*/
        v6 = 0; /*0x467695*/
      TESActorBaseData_SetFactionRank(this, a2, v6, v7, v8); /*0x46769b*/
    }
  }
}
