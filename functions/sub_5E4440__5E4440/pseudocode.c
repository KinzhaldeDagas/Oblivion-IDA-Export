void __userpurge sub_5E4440(
        Actor *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  int v8; // edi
  int v9; // eax

  if ( a6 )
  {
    if ( (*(_BYTE *)(a6 + 0x88) & 1) != 0 )
    {
      if ( *(_DWORD *)(a6 + 0x64) )
      {
        a1->vtbl->super.super.RemoveItem((TESObjectREFR *)a1, (TESForm *)a6, 0, 1, 0, 0, 0, 0, 0, 1, 0);
        sub_5C1900();
        v8 = *(_DWORD *)(a6 + 0x64);
        if ( v8 )
          v9 = v8 + 0x18;
        else
          v9 = 0;
        MagicCaster_CastMagicItem(&a1->members.magicCaster.vtbl, v9, a7, 0);
        if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
          sub_664850((int)TESDataHandler_g_PlayerRef, a2, a3, a4, a5, 0);
      }
    }
  }
}
