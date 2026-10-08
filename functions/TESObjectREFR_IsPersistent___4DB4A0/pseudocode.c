bool __thiscall TESObjectREFR_IsPersistent(TESObjectREFR *this)
{
  Data *OverrideFile; // edi

  OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF); /*0x4db4ab*/
  return OverrideFile /*0x4db502*/
      && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184)
      && (!sub_45A500(g_TESSaveLoadGame) || (g_TESSaveLoadGame->flags & 0x10) != 0)
      && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2]
      && !TESFile_GetIsMaster(OverrideFile)
      || (this->member.super.flags & kFormFlags_QuestItem) != 0;
}
