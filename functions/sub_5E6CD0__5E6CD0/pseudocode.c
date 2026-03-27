bool __thiscall sub_5E6CD0(TESObjectREFR *this, char a2)
{
  int v3; // eax
  PlayerCharacter *v4; // eax
  TESPackage *editorPackage; // ecx
  int v7; // eax
  int v8; // eax
  char v9; // al

  if ( !*((_DWORD *)this + 0x16)
    || (v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16))) == 0
    || *(_BYTE *)(v3 + 0x20) != 0x10 )
  {
    v7 = *((_DWORD *)this + 0x16);
    if ( !v7 )
      return 0;
    if ( a2 )
      return 0;
    v8 = *(_DWORD *)(v7 + 8);
    if ( !v8 )
      return 0;
    v9 = *(_BYTE *)(v8 + 0x20);
    return v9 == 0x10
        || v9 == 0xA
        || v9 == 0xD
        && (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x180))(*((_DWORD *)this + 0x16)) == 1;
  }
  v4 = TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef != (PlayerCharacter *)this )
    return 1;
  editorPackage = v4->super.super.super.process->editorPackage;
  if ( editorPackage )
  {
    editorPackage->__vftable->super.Destroy((TESForm *)editorPackage, 1);
    v4 = TESDataHandler_g_PlayerRef;
  }
  v4->super.super.super.process->editorPackage = 0;
  return 0;
}
