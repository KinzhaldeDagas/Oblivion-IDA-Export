void __thiscall sub_68B3F0(int this)
{
  TeleportData *v1; // esi
  char *LinkedDoor; // eax

  v1 = (TeleportData *)(this + 0x14); /*0x68b3f1*/
  if ( TeleportData_GetLinkedDoor((TeleportData *)(this + 0x14)) ) /*0x68b3f6*/
  {
    LinkedDoor = (char *)TeleportData_GetLinkedDoor(v1); /*0x68b401*/
    EmbeddedList_GetHead(LinkedDoor); /*0x68b409*/
  }
}
