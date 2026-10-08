// Verified MagicModelHitEffect InitializeVisual resolves its target and model path, requires the SpecialIdle_HitEffect controller sequence, loads/attaches the model, and activates the sequence. Returns false when target/model/sequence setup fails.
bool __thiscall MagicModelHitEffect_InitializeVisual(MagicModelHitEffect *this)
{
  ActiveEffect *ownerActiveEffect; // eax
  TESObjectREFR *targetReference; // ecx
  const char *unknown_2C; // eax
  int ModelData; // eax
  NiControllerManager *v6; // eax
  void **p_unknown_30; // edi
  Ni2DBuffer *v8; // eax
  double v9; // st7
  NiControllerManager *v10; // eax
  NiControllerManager *v11; // edi
  float *SequenceByName; // ebx
  float a2; // [esp+18h] [ebp-4h]

  ownerActiveEffect = this->super.ownerActiveEffect; /*0x69e9a5*/
  if ( ownerActiveEffect ) /*0x69e9ab*/
  {
    this->super.elapsedSeconds = ownerActiveEffect->members.timeElapsed; /*0x69e9b0*/
    this->super.bFinished = (ownerActiveEffect->members.effectItem->setting->effectFlags & 0x400) == 0; /*0x69e9c4*/
  }
  targetReference = this->super.targetReference; /*0x69e9c7*/
  if ( !targetReference ) /*0x69e9cc*/
    return 0; /*0x69e9cc*/
  if ( !targetReference->vtbl->GetNiNode(targetReference) ) /*0x69e9da*/
    return 0; /*0x69e9da*/
  if ( (PlayerCharacter *)this->super.targetReference == reference ) /*0x69e9ec*/
    this->isThirdPerson_29 = reference->isThirdPerson; /*0x69e9f4*/
  unknown_2C = (const char *)this->unknown_2C; /*0x69e9f7*/
  if ( !unknown_2C ) /*0x69e9fc*/
    return 0; /*0x69e9fc*/
  if ( !*unknown_2C ) /*0x69ea02*/
    return 0; /*0x69ea02*/
  ModelData = ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], unknown_2C, 0, 0, 1);// Verified (Oblivion): derived field +0x2C is read as the model path and passed to ModelLoader_LoadModelData. During load it temporarily stores the serialized payload pointer before PostLink replaces it with this model path; treat +0x2C as a state-dependent payload/path slot, not a permanently stable char*. /*0x69ea18*/
  if ( ModelData ) /*0x69ea1f*/
  {
    v6 = (NiControllerManager *)NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(ModelData + 0xC)); /*0x69ea2a*/
    if ( v6 ) /*0x69ea34*/
    {
      if ( !NiControllerManager_FindSequenceByName(v6, "SpecialIdle_HitEffect") ) /*0x69ea3d*/
        return 0; /*0x69ea3d*/
    }
  }
  p_unknown_30 = &this->modelRoot_30; /*0x69ea4e*/
  v8 = (Ni2DBuffer *)sub_69FBF0((const char *)this->unknown_2C); /*0x69ea51*/
  NiSmartPointer_Set__((Ni2DBuffer **)&this->modelRoot_30, v8);// Verified (Oblivion): loaded model root is stored in derived field +0x30 through a reference-counted smart-pointer setter; this NiAVObject root is later updated, attached, and positioned. /*0x69ea5c*/
  QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)this->unknown_2C, 0, 1); /*0x69ea6f*/
  if ( !this->modelRoot_30 ) /*0x69ea74*/
    return 0; /*0x69ea74*/
  if ( !this->super.targetReference->vtbl->GetNiNode(this->super.targetReference) ) /*0x69ea88*/
    return 0; /*0x69ea88*/
  this->super.super.vtable[1].super.Unk_02((NiObject *)this); /*0x69ea99*/
  sub_6F94E0((int *)*p_unknown_30); /*0x69ea9e*/
  v9 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x69eaa3*/
  if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x69eab6*/
    v9 = v9 + flt_A2FC78; /*0x69eab8*/
  a2 = v9 / dbl_A2FC70; /*0x69eac7*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)*p_unknown_30, a2, 1); /*0x69ead2*/
  v10 = (NiControllerManager *)NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *((NiObject **)*p_unknown_30 + 3)); /*0x69eae2*/
  v11 = v10; /*0x69eae7*/
  if ( !v10 ) /*0x69eaee*/
    return 0; /*0x69eaee*/
  SequenceByName = (float *)NiControllerManager_FindSequenceByName(v10, "SpecialIdle_HitEffect"); /*0x69eafc*/
  if ( !SequenceByName ) /*0x69eb00*/
    return 0; /*0x69eb4e*/
  NiControllerManager_DeactivateAllSequences(v11, 0.0); /*0x69eb0a*/
  BSAnimGroupSequence_Activate((BSAnimGroupSequence *)SequenceByName, 0, 0, 1.0, 0.0, 0); /*0x69eb26*/
  *((_WORD *)v11 + 4) |= 8u; /*0x69eb2d*/
  if ( this->super.elapsedSeconds > 0.0 ) /*0x69eb3a*/
    SequenceByName[0x12] = SequenceByName[0xB] + this->super.elapsedSeconds; /*0x69eb42*/
  return 1; /*0x69eb45*/
}
