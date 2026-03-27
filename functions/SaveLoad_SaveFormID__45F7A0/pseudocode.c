char __thiscall SaveLoad_SaveFormID(_BYTE *this, int a2, unsigned int a3)
{
  UInt32 mainThreadID; // edi
  int IRefToFormID; // eax
  unsigned int i; // edi

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(IRefToFormID) = *(this + 0x18);
  else
    IRefToFormID = *((_DWORD *)this + 6) >> 0x12;
  LOBYTE(IRefToFormID) = IRefToFormID & 1;
  if ( (_BYTE)IRefToFormID )
    LOBYTE(IRefToFormID) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                             dword_B34D90,
                             "Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
  for ( i = 0; i < a3 >> 2; ++i )
  {
    if ( *(this + 0x7D) )
      IRefToFormID = SaveLoad_IRefToFormID_((unsigned int **)this, *(_DWORD *)(a2 + 4 * i));
    else
      IRefToFormID = *(_DWORD *)(a2 + 4 * i);
    **((_DWORD **)this + 5) = IRefToFormID;
    *((_DWORD *)this + 5) += 4;
  }
  return IRefToFormID;
}
