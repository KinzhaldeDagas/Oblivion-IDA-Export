bool __thiscall sub_5E6CD0(TESObjectREFR *this, char a2)
{
  int v3; // eax
  PlayerCharacter *v4; // eax
  TESPackage *editorPackage; // ecx
  int v7; // eax
  int v8; // eax
  char v9; // al

  if ( !*((_DWORD *)this + 0x16) /*0x5e6cee*/
    || (v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16))) == 0
    || *(_BYTE *)(v3 + 0x20) != 0x10 )
  {
    v7 = *((_DWORD *)this + 0x16); /*0x5e6d27*/
    if ( !v7 ) /*0x5e6d2c*/
      return 0; /*0x5e6d2c*/
    if ( a2 ) /*0x5e6d33*/
      return 0; /*0x5e6d33*/
    v8 = *(_DWORD *)(v7 + 8); /*0x5e6d35*/
    if ( !v8 ) /*0x5e6d3a*/
      return 0; /*0x5e6d3a*/
    v9 = *(_BYTE *)(v8 + 0x20); /*0x5e6d3c*/
    return v9 == 0x10 /*0x5e6d5b*/
        || v9 == 0xA
        || v9 == 0xD
        && (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x180))(*((_DWORD *)this + 0x16)) == 1;
  }
  v4 = reference; /*0x5e6cf0*/
  if ( reference != (PlayerCharacter *)this ) /*0x5e6cf7*/
    return 1; /*0x5e6cf7*/
  editorPackage = v4->super.super.super.process->editorPackage; /*0x5e6cfc*/
  if ( editorPackage ) /*0x5e6d01*/
  {
    editorPackage->__vftable->super.Destroy((TESForm *)editorPackage, 1); /*0x5e6d0a*/
    v4 = reference; /*0x5e6d0c*/
  }
  v4->super.super.super.process->editorPackage = 0; /*0x5e6d14*/
  return 0; /*0x5e6d1d*/
}
