void __usercall sub_466B70(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>)
{
  UInt32 mainThreadID; // edi
  int v10; // eax

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v10) = *(_BYTE *)(a1 + 0x18);
  else
    v10 = *(_DWORD *)(a1 + 0x18) >> 0x12;
  if ( (v10 & 1) == 0 && !sub_65D140(TESDataHandler_g_PlayerRef) )
  {
    *(_BYTE *)(a1 + 0xAA) = 0;
    GameUI_QueueMessage((const char *)dword_B387B8, 0, 1u, 1.0);
    TESSaveLoadGame_SaveGame_(
      (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      1.0,
      0,
      "autosave",
      0);
  }
}
