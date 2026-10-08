// Verified: given the linked-door reference slot from TeleportData, resolves its loaded parent cell or child cell and returns that cell's worldspace; returns null when the linked reference or its cell is unavailable.
TESWorldSpace *__thiscall TeleportData_GetLinkedDoorWorldspace(TESObjectREFR **linkedDoor)
{
  TESObjectREFR *v2; // ecx
  TESObjectCELL *DwordAtOffset40; // eax

  v2 = *linkedDoor; /*0x42b473*/
  if ( v2 /*0x42b49c*/
    && ((DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v2)) != 0
     || (DwordAtOffset40 = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))(*linkedDoor)->member.childCell.GetChildCell)(&(*linkedDoor)->member.childCell)) != 0) )
  {
    return TESObjectCELL_GetWorldSpace(DwordAtOffset40); /*0x42b489*/
  }
  else
  {
    return 0; /*0x42b4a7*/
  }
}
