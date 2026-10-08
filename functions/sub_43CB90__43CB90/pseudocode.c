// Verified QueuedTree vtable QueueModels override (+0x2C). Reads its reference at +0x20, gets the base TESObjectTREE, computes a form-specific LOD multiplier with TESForm_GetLODMult, optionally substitutes value 6 when TESObjectREFR_HasVisibleDistantFlag is true, then attaches a QueuedTreeModel child with the same reference/tree and inherited priority. Probable visible-distant association is supported by Fallout's named getter and identical 0x8000 check; Oblivion helper does not test the base form bit.
QueuedTreeModel_OblivionLayout *__thiscall QueuedTree_QueueModels(QueuedTree_OblivionLayout *this)
{
  TESForm *v2; // edi
  int LODMult; // eax
  TESObjectREFR *reference; // ecx
  int v5; // ebx
  QueuedTreeModel_OblivionLayout *result; // eax
  QueuedTreeModel_OblivionLayout *v7; // esi
  QueuedTreeModel_OblivionLayout *outTask; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->reference->vtbl->GetBaseForm(this->reference); /*0x43cba3*/
  LODMult = TESForm_GetLODMult(v2); /*0x43cba6*/
  reference = this->reference; /*0x43cbab*/
  v5 = LODMult; /*0x43cbb3*/
  if ( reference ) /*0x43cbb5*/
  {                                             // Probable: the reference's 0x8000 TESForm flag is the visible-distant flag. Oblivion promotes this queued tree task's LOD multiplier to 6 when set. Fallout's GetVisibleDistant checks the same bit on the reference and then its base form; this helper checks only the reference.
    if ( TESObjectREFR_HasVisibleDistantFlag(reference) ) /*0x43cbb7*/
      v5 = 6; /*0x43cbc0*/
  }
  QueuedTreeModel_CreateAndQueue( /*0x43cbe8*/
    &outTask,
    this->reference,
    (TESObjectTREE_OblivionLayout_080_NiTArrayVerified *)v2,
    BYTE2(*(_DWORD *)&this->queuedBase_000_017[0x10]),
    (IOTask *)this,
    v5);                                        // Verified: caller passes the form-derived LOD multiplier (or 6 for a reference carrying TESObjectREFR flag 0x8000) into QueuedTreeModel+0x30; constructor now labels that field lodMultiplier. Fallout QueueModels also calls GetIsImposter in addition to GetVisibleDistant, an observed call-path divergence whose effect is not yet established.
  result = outTask; /*0x43cbed*/
  if ( outTask ) /*0x43cbf3*/
  {
    v7 = outTask; /*0x43cbf5*/
    result = (QueuedTreeModel_OblivionLayout *)InterlockedDecrement((volatile LONG *)&outTask->queuedBase_000_02B[8]); /*0x43cbfb*/
    if ( !result ) /*0x43cc03*/
      return (**(QueuedTreeModel_OblivionLayout *(__thiscall ***)(QueuedTreeModel_OblivionLayout *, int))v7->queuedBase_000_02B)( /*0x43cc11*/
               v7,
               1);
  }
  return result; /*0x43cc13*/
}
