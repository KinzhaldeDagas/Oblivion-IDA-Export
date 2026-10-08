BSExtraDataVtbl *ToggleGlobalCollision()
{
  TES *v0; // eax
  bool v1; // bl
  ExtraDataList *currentInteriorCell; // esi
  BSExtraDataVtbl *result; // eax

  v0 = MEMORY[0xB333A0]; /*0x4447f7*/
  v1 = MEMORY[0xB33A34] == 0; /*0x4447fd*/
  MEMORY[0xB33A34] = v1; /*0x444801*/
  currentInteriorCell = (ExtraDataList *)v0->currentInteriorCell; /*0x444807*/
  if ( currentInteriorCell && TESObjectCELL_IsInterior(v0->currentInteriorCell) ) /*0x444810*/
    result = sub_424180(currentInteriorCell + 2); /*0x44481c*/
  else
    result = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x444823*/
  if ( result ) /*0x44482a*/
    BYTE1(result[3].Destructor) = !v1; /*0x444831*/
  return result; /*0x444834*/
}
