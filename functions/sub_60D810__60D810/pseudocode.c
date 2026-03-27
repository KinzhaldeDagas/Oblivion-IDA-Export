void __thiscall sub_60D810(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( (a2 & 0x20000) != 0 )
  {
    v4 = *(this + 2);
    if ( v4 )
    {
      if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v4 + 0xC)) )
      {
        if ( (a2 & 0x10000) == 0 )
          sub_45C7A0((char *)SaveLoad_CurrentSavegame, (TESForm *)*(this + 2));
        *(this + 2) = 0;
      }
    }
  }
}
