// Verified 0x40-byte QueuedTreeModel constructor layout: +0x2C TESModel component, +0x30 lodMultiplier, +0x34 task flags, +0x38 TESObjectREFR, and +0x3C TESObjectTREE. Bytes +0x35..+0x37 remain Unknown.
QueuedTreeModel_OblivionLayout *__thiscall QueuedTreeModel_ctor(
        QueuedTreeModel_OblivionLayout *this,
        TESObjectREFR *reference,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree,
        unsigned __int8 priority,
        int lodMultiplier)
{
  TESModel *v6; // edi
  const char *v7; // eax

  if ( tree ) /*0x4376d3*/
    v6 = (TESModel *)&tree->prefix_000_047[0x24]; /*0x4376d5*/
  else
    v6 = 0; /*0x4376da*/
  sub_436500((IOTask *)this, priority); /*0x4376e1*/
  *(_DWORD *)&this->queuedBase_000_02B[0x18] = 0; /*0x4376e6*/
  *(_DWORD *)&this->queuedBase_000_02B[0x1C] = 0; /*0x4376e9*/
  *(_DWORD *)&this->queuedBase_000_02B[0x20] = 0; /*0x4376ec*/
  *(_DWORD *)&this->queuedBase_000_02B[0x24] = 0; /*0x4376ef*/
  *(_DWORD *)this->queuedBase_000_02B = &QueuedModel::`vftable'; /*0x4376f2*/
  *(_DWORD *)&this->queuedBase_000_02B[0x28] = 0; /*0x4376fc*/
  this->lodMultiplier = lodMultiplier;          // Verified: constructor argument lodMultiplier is stored at QueuedTreeModel+0x30. The only queue-construction call passes TESForm_GetLODMult(baseTree), substituting literal 6 when the reference HasVisibleDistantFlag; Fallout's homolog names the corresponding enum ENUM_LOD_MULT. The Oblivion enum values beyond this observed override remain Unknown. /*0x437703*/
  this->treeModelComponent = v6; /*0x437706*/
  this->taskFlags_034 = 0; /*0x437709*/
  v7 = v6->vtbl->GetModelPath(v6); /*0x437718*/
  sub_434600(this, v7); /*0x43771d*/
  sub_434CB0((int **)this, 0, 1); /*0x437727*/
  this->taskFlags_034 = this->taskFlags_034 & 0xF8 | 1; /*0x437739*/
  *(_DWORD *)this->queuedBase_000_02B = &QueuedTreeModel::`vftable'; /*0x43773c*/
  this->reference = reference; /*0x437742*/
  this->tree = (TESObjectTREE_OblivionLayout_080 *)tree; /*0x437745*/
  return this; /*0x43774a*/
}
