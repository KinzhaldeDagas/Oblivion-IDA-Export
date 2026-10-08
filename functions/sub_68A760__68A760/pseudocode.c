// Verified TravelPath_ComputeDistance sums Euclidean segments from sourceRef->GetPos through each TravelPathNode_GetPosition. For a type-0 teleport node, the segment endpoint is the linked door's TeleportData xyz marker; after consuming that node, the next segment starts at the current door's own TeleportData xyz (its destination marker). Type-1 nodes use owned position payloads; ordinary references use GetPos.
double __thiscall TravelPath_ComputeDistance(TravelPath *this, TESObjectREFR *sourceRef)
{
  float *v3; // eax
  BSSimpleList_VoidPtr *p_nodes; // edi
  TravelPathNode *data; // esi
  NiPoint3 *Position; // eax
  float *Head; // eax
  TESObjectREFR *Reference; // eax
  TESObjectREFR *v9; // esi
  char *TeleportExtraData; // eax
  float v12; // [esp+4h] [ebp-1Ch]
  float v13; // [esp+8h] [ebp-18h]
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+10h] [ebp-10h]
  float v16; // [esp+14h] [ebp-Ch]
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]
  float sourceRefa; // [esp+24h] [ebp+4h]
  float sourceRefb; // [esp+24h] [ebp+4h]

  v12 = 0.0; /*0x68a768*/
  if ( !sourceRef ) /*0x68a772*/
    return v12; /*0x68a877*/
  v3 = sourceRef->vtbl->GetPos(sourceRef); /*0x68a781*/
  p_nodes = &this->nodes; /*0x68a78b*/
  v13 = *v3; /*0x68a790*/
  v14 = v3[1]; /*0x68a794*/
  v15 = v3[2]; /*0x68a798*/
  if ( this != (TravelPath *)0xFFFFFFFC ) /*0x68a79c*/
  {
    do /*0x68a7a2*/
    {
      if ( !p_nodes->firstNode.next && !p_nodes->firstNode.data ) /*0x68a7ab*/
        return v12; /*0x68a7ab*/
      data = (TravelPathNode *)p_nodes->firstNode.data; /*0x68a7b1*/
      Position = TravelPathNode_GetPosition((const TravelPathNode *)p_nodes->firstNode.data);// Verified distance loop uses TravelPathNode_GetPosition as each segment endpoint before accumulating the Euclidean length from the current position. /*0x68a7b5*/
      v16 = Position->x - v13; /*0x68a7c0*/
      v17 = Position->y - v14; /*0x68a7cb*/
      v18 = Position->z - v15; /*0x68a7d6*/
      sourceRefa = v17 * v17 + v16 * v16 + v18 * v18; /*0x68a7f6*/
      sourceRefb = sqrt(sourceRefa); /*0x68a803*/
      v12 = sourceRefb + v12; /*0x68a811*/
      if ( DName::status((char *)data) == 1 )   // Verified current-position update after each node: position nodes use their owned xyz; a teleport reference uses that reference's own TeleportData xyz as the next segment's starting position; a normal reference uses its GetPos result. /*0x68a81f*/
      {
        Head = (float *)TravelPathNode_GetPosition(data); /*0x68a821*/
      }
      else
      {
        Reference = TravelPathNode_GetReference(data); /*0x68a828*/
        v9 = Reference; /*0x68a82d*/
        if ( !Reference || !TESObjectREFR_GetTeleportData(Reference) ) /*0x68a835*/
          goto LABEL_11; /*0x68a83c*/
        TeleportExtraData = (char *)TESObjectREFR_GetTeleportData(v9); /*0x68a840*/
        Head = (float *)EmbeddedList_GetHead(TeleportExtraData); /*0x68a847*/
      }
      v15 = Head[2]; /*0x68a854*/
      v14 = Head[1]; /*0x68a858*/
      v13 = *Head; /*0x68a85c*/
LABEL_11:
      p_nodes = (BSSimpleList_VoidPtr *)p_nodes->firstNode.next; /*0x68a860*/
    }
    while ( p_nodes ); /*0x68a7a2*/
  }
  return v12; /*0x68a870*/
}
