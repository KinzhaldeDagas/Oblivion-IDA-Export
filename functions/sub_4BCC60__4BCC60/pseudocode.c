void __thiscall sub_4BCC60(_DWORD *this)
{
  _BYTE *BSFile; // eax
  int v3; // esi

  BSFile = sub_434650(this, 0, 1);
  if ( !BSFile )
    BSFile = FileFinder_LoadBSFile((const char *)*(this + 8), 0, 0x800);
  v3 = *(this + 0xB);
  if ( v3 )
  {
    sub_4F1990(
      *(TESForm **)(v3 + 8),
      *(_DWORD *)v3,
      *(_DWORD *)(v3 + 4),
      (_DWORD *)(v3 + 0xC),
      *(_DWORD *)(v3 + 0x24),
      BSFile);
    *(_BYTE *)(v3 + 0x28) = 1;
  }
}
