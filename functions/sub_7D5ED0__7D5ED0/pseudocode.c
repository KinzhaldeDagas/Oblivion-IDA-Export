// Create/reuse the fence geometry at +0x148, insert it at object-list head, and set reconciliation cursor +0x144.
MEF_RefListNode32 *__thiscall ShadowSceneLight_BeginReceiverReconciliation(ShadowSceneLight_DecodedLayout *self)
{
  Ni2DBuffer **p_receiverFence_148; // esi
  NiTriShape *v3; // eax
  Ni2DBuffer *v4; // eax
  MEF_RefListNode32 *result; // eax

  p_receiverFence_148 = (Ni2DBuffer **)&self->receiverFence_148; /*0x7d5efc*/
  if ( !self->receiverFence_148 ) /*0x7d5ef5*/
  {
    v3 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x7d5f09*/
    if ( v3 ) /*0x7d5f1f*/
      v4 = (Ni2DBuffer *)OB_NiTriShape_ctorWithData_010201A0(v3, 0); /*0x7d5f25*/
    else
      v4 = 0; /*0x7d5f2c*/
    NiSmartPointer_Set__(p_receiverFence_148, v4); /*0x7d5f39*/
    NiObjectNET_SetName((NiObjectNET *)*p_receiverFence_148, "fence"); /*0x7d5f45*/
  }
  NiTRefPointerList__AddHead((MEF_RefList32 *)&self->objectListVtable_E4, (void **)p_receiverFence_148); /*0x7d5f51*/
  result = self->objectListHead_E8; /*0x7d5f56*/
  self->receiverCursor_144 = result; /*0x7d5f5c*/
  return result; /*0x7d5f62*/
}
