BSExtraDataVtbl *ToggleGlobalCollision()
{
  TES *v0; // eax
  bool v1; // bl
  ExtraDataList *currentInteriorCell; // esi
  BSExtraDataVtbl *result; // eax

  v0 = TES;
  v1 = IsCollisionOn == 0;
  IsCollisionOn = v1;
  currentInteriorCell = (ExtraDataList *)v0->currentInteriorCell;
  if ( currentInteriorCell && TESObjectCELL_IsInterior(v0->currentInteriorCell) )
    result = sub_424180(currentInteriorCell + 2);
  else
    result = (BSExtraDataVtbl *)bhkWorldM;
  if ( result )
    BYTE1(result[3].Destructor) = !v1;
  return result;
}
