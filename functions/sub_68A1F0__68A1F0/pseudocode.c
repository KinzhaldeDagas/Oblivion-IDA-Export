TESForm *__thiscall sub_68A1F0(char *this)
{
  char *v1; // esi
  TESForm *SpatialContainerAtPosition; // edi
  TESObjectREFR *Reference; // eax
  TeleportData *TeleportData; // eax
  TESObjectREFR *LinkedDoor; // eax

  v1 = this + 4; /*0x68a1f2*/
  SpatialContainerAtPosition = 0; /*0x68a1f5*/
  if ( this != (char *)0xFFFFFFFC ) /*0x68a1f9*/
  {
    do /*0x68a23a*/
    {
      if ( !*((_DWORD *)v1 + 1) && !*(_DWORD *)v1 ) /*0x68a206*/
        break; /*0x68a209*/
      Reference = TravelPathNode_GetReference(*(const TravelPathNode **)v1); /*0x68a20d*/
      if ( Reference ) /*0x68a214*/
      {
        TeleportData = TESObjectREFR_GetTeleportData(Reference); /*0x68a218*/
        if ( TeleportData ) /*0x68a21f*/
        {
          LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x68a223*/
          if ( LinkedDoor ) /*0x68a22a*/
            SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x68a233*/
        }
      }
      v1 = *((char **)v1 + 1); /*0x68a235*/
    }
    while ( v1 ); /*0x68a23a*/
  }
  return SpatialContainerAtPosition; /*0x68a23e*/
}
