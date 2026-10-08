// Verified: releases model-loader usage for a bound object/reference. For scaled refs, removes the scale-specific key and may also remove the base key depending on load state.
void __thiscall TESBoundObject_ReleaseReferenceModel(TESBoundObject *this, TESObjectREFR *reference)
{
  void *FormModelPAth; // edi
  char outPath[260]; // [esp+8h] [ebp-108h] BYREF

  if ( this == (TESBoundObject *)MEMORY[0xB35EA4] || this == (TESBoundObject *)MEMORY[0xB35EB4] ) /*0x4b323d*/
    reference = 0; /*0x4b323f*/
  FormModelPAth = sub_4693E0(this, reference); /*0x4b3249*/
  if ( !FormModelPAth ) /*0x4b3250*/
    FormModelPAth = GetFormModelPAth(this); /*0x4b325b*/
  if ( !reference || TESObjectREFR_GetScale(reference) == fConstant_1 ) /*0x4b3273*/
  {
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)FormModelPAth, 1, 1); /*0x4b32d7*/
  }
  else
  {
    TESBoundObject_BuildReferenceModelPath(this, reference, outPath); /*0x4b327d*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)outPath, 1, 1); /*0x4b3291*/
    if ( ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], (int)outPath, (int)outPath) ) /*0x4b32a1*/
    {
      --unk_B35AC8; /*0x4b32c3*/
    }
    else
    {
      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)FormModelPAth, 1, 1); /*0x4b32b5*/
      --unk_B35AC4; /*0x4b32ba*/
    }
  }
  if ( this->member.super.type == kFormType_NPC && reference != (TESObjectREFR *)::reference ) /*0x4b32e9*/
    sub_522260(this); /*0x4b32ed*/
}
