// Verified active-effect list save layout: TESSaveLoadGame_UseSaveGameBlocks controls whether the list emits a BLOK header and reserves/backpatches a block size. The list always reserves and patches a UInt16 effect count. Per-effect records separately use the save version threshold 0x2A to include a UInt16 record-size field.
int __cdecl ActiveEffect_Base_SaveAEList(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return ActiveEffect_Base_SaveAEList_::CheckRecordVersion(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
