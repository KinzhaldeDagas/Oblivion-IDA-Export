// Verified generic name-keyed collection dispatch: looks up the setting object in the collection map by string key and calls LoadSetting virtual +0x10 when present, then advances to the next setting record.
char __thiscall GameSettingCollection_LoadExistingSetting(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  char v5; // bl
  int v7; // [esp-8h] [ebp-10h]

  v3 = a2; /*0x4a8040*/
  v5 = 0; /*0x4a8051*/
  v7 = a3; /*0x4a8053*/
  *(this + 4) = 0; /*0x4a805a*/
  *((_DWORD *)this + 0x42) = v3; /*0x4a805d*/
  a2 = 0; /*0x4a8063*/
  NiTMap_GetAt((_DWORD *)this + 0x43, v7, &a2); /*0x4a8067*/
  if ( a2 ) /*0x4a8072*/
    v5 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10))(this, a2); /*0x4a807e*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x18))(this); /*0x4a8087*/
  return v5; /*0x4a8089*/
}
