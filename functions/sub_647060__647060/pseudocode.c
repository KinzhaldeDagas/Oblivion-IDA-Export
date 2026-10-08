// Verified 2026-10-04: LowProcess size role from Oblivion process vtable slot +0x3F0, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
unsigned __int16 __thiscall LowProcess_GetSaveSize(
        LowProcess *self,
        ProcessSaveChangeMask changeMask,
        MobileObject *owner)
{
  unsigned __int16 SaveSize; // si
  unsigned __int16 v5; // bp
  TESSaveLoadGame_SerializationView *v6; // ecx
  unsigned __int8 currentVersion; // al
  __int16 v8; // si
  __int16 v9; // si
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // di
  unsigned __int8 v12; // al
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  int v17; // [esp-Ch] [ebp-1Ch]
  int v18; // [esp-8h] [ebp-18h]
  const char *v19; // [esp-4h] [ebp-14h]

  SaveSize = BaseProcess_GetSaveSize(self, changeMask, owner); /*0x64707b*/
  v5 = SaveSize; /*0x647082*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x647085*/
    SaveSize += 6; /*0x64708e*/
  v6 = g_TESSaveLoadGame; /*0x647091*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x647097*/
  v8 = SaveSize + 0xB; /*0x64709a*/
  if ( currentVersion >= 0x34u ) /*0x64709f*/
    ++v8; /*0x6470a1*/
  if ( currentVersion >= 0x37u ) /*0x6470a6*/
    ++v8; /*0x6470a8*/
  if ( currentVersion >= 0x4Bu ) /*0x6470ad*/
    v8 += 4; /*0x6470af*/
  if ( currentVersion >= 0x4Fu ) /*0x6470b4*/
    v8 += 8; /*0x6470b6*/
  if ( currentVersion >= 0x56u ) /*0x6470bb*/
    v8 += 4; /*0x6470bd*/
  v9 = v8 + 8; /*0x6470c0*/
  if ( (changeMask & 0x400000) != 0 ) /*0x6470cd*/
  {
    v10 = AVCollection_GetSaveSize(&self->avDamageModifiers); /*0x6470d2*/
    v6 = g_TESSaveLoadGame; /*0x6470d7*/
    v11 = v10 + v9; /*0x6470e0*/
    v9 += v10; /*0x6470e8*/
  }
  else
  {
    v11 = v9; /*0x6470ee*/
  }
  v12 = v6->currentVersion; /*0x6470f3*/
  if ( v12 >= 0x74u ) /*0x6470f8*/
  {
    v9 += 4; /*0x6470fa*/
    v11 = v9; /*0x647101*/
  }
  if ( v12 >= 0x76u ) /*0x647106*/
    v11 = v9 + 1; /*0x64710f*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)v6->currentlySavingFormHeader; /*0x64711b*/
    if ( currentlySavingFormHeader )
    {
      v14 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x647128*/
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)( /*0x647148*/
                            v14,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0xED8,
                            ".\\AI\\LowProcess.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v11 - v5,
        *currentlySavingFormHeader,
        v15,
        v17,
        v18,
        v19);
      return v11; /*0x64716b*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v11 - v5, 0xED8, ".\\AI\\LowProcess.cpp");
  }
  return v11; /*0x647167*/
}
