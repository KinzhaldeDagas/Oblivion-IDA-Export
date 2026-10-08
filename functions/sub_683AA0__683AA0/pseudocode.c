bool __thiscall sub_683AA0(int this)
{
  TeleportData *v1; // esi
  TESObjectREFR *LinkedDoor; // eax

  v1 = (TeleportData *)(this + 0x14); /*0x683aa1*/
  if ( !TeleportData_GetLinkedDoor((TeleportData *)(this + 0x14)) ) /*0x683aa6*/
    return 0; /*0x683ac6*/
  LinkedDoor = TeleportData_GetLinkedDoor(v1); /*0x683ab1*/
  return NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)LinkedDoor) == 0; /*0x683ac4*/
}
