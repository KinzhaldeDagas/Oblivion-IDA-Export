// Verified TravelPathNode_GetPosition returns a stored NiPoint3* for kind 1; for kind 0, returns reference GetPos unless the ref has TeleportData, in which case it returns the linked door's TeleportData xyz marker. Null payloads and unrecognized kinds return g_zeroNiPoint3.
NiPoint3 *__thiscall TravelPathNode_GetPosition(const TravelPathNode *this)
{
  unsigned __int8 type; // cl
  NiPoint3 *result; // eax
  void *payload; // ecx

  type = this->type; /*0x68b113*/
  if ( type ) /*0x68b11c*/
  {
    if ( type != 1 ) /*0x68b121*/
      return &g_zeroNiPoint3; /*0x68b121*/
    if ( type != 1 ) /*0x68b126*/
      return &g_zeroNiPoint3; /*0x68b126*/
    result = (NiPoint3 *)this->payload; /*0x68b12c*/
    if ( !this->payload ) /*0x68b12c*/
      return &g_zeroNiPoint3; /*0x68b12e*/
  }
  else
  {
    if ( !this->payload ) /*0x68b13f*/
      return &g_zeroNiPoint3; /*0x68b130*/
    if ( TESObjectREFR_GetTeleportData(this->payload) ) /*0x68b141*/
    {
      if ( this->type ) /*0x68b14a*/
        return TESObjectREFR_GetLinkedTeleportMarkerPosition(0); /*0x68b15b*/
      else
        return TESObjectREFR_GetLinkedTeleportMarkerPosition((TESObjectREFR *)this->payload); /*0x68b153*/
    }
    else
    {
      if ( this->type ) /*0x68b160*/
        payload = 0; /*0x68b16a*/
      else
        payload = this->payload; /*0x68b166*/
      return (*(NiPoint3 *(__thiscall **)(void *))(*(_DWORD *)payload + 0x174))(payload); /*0x68b175*/
    }
  }
  return result; /*0x68b135*/
}
