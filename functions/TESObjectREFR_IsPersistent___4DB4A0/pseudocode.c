bool __thiscall TESObjectREFR_IsPersistent_(TESObjectREFR *this)
{
  Data *OverrideFile; // edi

  OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);
  return OverrideFile
      && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184)
      && (!sub_45A500(SaveLoad_CurrentSavegame) || (SaveLoad_CurrentSavegame->flags & 0x10) != 0)
      && !*(_BYTE *)(TESDataHandler + 0xCD4)
      && !TESFile_GetIsMaster(OverrideFile)
      || (this->member.super.flags & kFormFlags_QuestItem) != 0;
}
