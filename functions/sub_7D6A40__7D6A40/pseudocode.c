// Walk the stale reconciliation cursor tail via ShadowSceneLight_RemoveReceiverGeometry, then clear +0x144.
void __thiscall ShadowSceneLight_RemoveStaleReceivers(ShadowSceneLight_DecodedLayout *self)
{
  MEF_RefListNode32 *receiverCursor_144; // esi
  NiNode *payload; // eax

  receiverCursor_144 = self->receiverCursor_144; /*0x7d6a44*/
  while ( receiverCursor_144 ) /*0x7d6a4c*/
  {
    payload = (NiNode *)receiverCursor_144->payload; /*0x7d6a53*/
    receiverCursor_144 = receiverCursor_144->next; /*0x7d6a57*/
    if ( payload ) /*0x7d6a59*/
      ShadowSceneLight_RemoveReceiverGeometry((int **)self, payload); /*0x7d6a5e*/
  }
  self->receiverCursor_144 = 0; /*0x7d6a67*/
}
