char sub_508240()
{
  TES *v0; // ecx
  bool v1; // al
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *v3; // eax
  TESWorldSpace *v4; // eax
  TESWorldSpace *v5; // eax
  float *v6; // eax

  v0 = TES;
  v1 = byte_B43077 == 0;
  byte_B43077 = v1;
  byte_B02D70 = v1;
  CurrentWorldspace = TES::GetCurrentWorldspace(v0);
  sub_4EF7E0((int)CurrentWorldspace);
  if ( sub_4E9F40() )
  {
    Interface_ConsolePrint("LOD land is now disabled.");
    v4 = TES::GetCurrentWorldspace(TES);
    sub_4EF7E0((int)v4);
    sub_4EB0E0(0);
  }
  else
  {
    Interface_ConsolePrint("LOD land is now being displayed.");
    v3 = TES::GetCurrentWorldspace(TES);
    sub_4EF7E0((int)v3);
    sub_4EB0E0(1);
  }
  v5 = TES::GetCurrentWorldspace(TES);
  sub_4EF7E0((int)v5);
  v6 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
  sub_4EA6E0(*(_DWORD *)v6, v6[1], *((_DWORD *)v6 + 2), 0);
  return 1;
}
