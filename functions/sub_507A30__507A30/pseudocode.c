char Sky_ReloadClimateFromOverride()
{
  TESClimate *firstClimate; // esi
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // edi
  Sky *GlobalObject; // eax

  firstClimate = Sky_CreateOrGetGlobalObject()->firstClimate; /*0x507a36*/
  OverrideFile = TESForm_GetOverrideFile(&firstClimate->form, 0xFFFFFFFF); /*0x507a3d*/
  if ( OverrideFile ) /*0x507a44*/
  {
    ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x507a4e*/
    TESFile_OpenBSFileWrapper__(ThreadSafeFile, 0, 0); /*0x507a56*/
    TESFile::FindForm(ThreadSafeFile, &firstClimate->form); /*0x507a5e*/
    firstClimate->form.vtbl->Unk_06(&firstClimate->form); /*0x507a6a*/
    firstClimate->form.vtbl->LoadForm(&firstClimate->form, ThreadSafeFile); /*0x507a74*/
    GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x507a79*/
    Sky_SetClimateAndRefreshChildren(GlobalObject, firstClimate, 1);// Verified: climate override reload path reloads the current Sky climate form from its override file, then forces Sky_SetClimateAndRefreshChildren to rebuild dependent child objects. /*0x507a80*/
  }
  return 1; /*0x507a88*/
}
