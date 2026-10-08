// Verified blood component lifecycle: TESCreature +0x11C is TESModel bloodSpray, +0x134 is TESTexture bloodDecal; actor-base-data this is +0x24. Constructor constructs, InitializeDefaults initializes, destructor destroys these components. No Fallout member offsets imported.
// Probable homolog: Fallout TESCreature::InitializeData 0x8240A528 shares defaults for turning speed, foot weight, scale, skills, reach, flags 0x40/0x200, health 50. Different layouts; Oblivion component initialization verified independently.
void __thiscall TESCreature_InitializeDefaults(TESCreature *self)
{
  TESModel *p_bloodSpray; // ecx
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edx
  void (__thiscall *MarkAsModified)(TESActorBaseData *, unsigned int); // edx
  void (__thiscall *v5)(TESActorBaseData *, unsigned int); // edx

  self->turningSpeed = 0.0; /*0x51c7b6*/
  p_bloodSpray = &self->bloodSpray; /*0x51c7c4*/
  self->footWeight = *(float *)&dword_A46C30; /*0x51c7ca*/
  self->type = 0; /*0x51c7d0*/
  self->soundData.sounds = 0; /*0x51c7d8*/
  self->combatStyle = 0; /*0x51c7de*/
  self->baseScale = 1.0; /*0x51c7e4*/
  InitializeComponent = p_bloodSpray->vtbl->super.InitializeComponent; /*0x51c7ec*/
  *(_WORD *)&self->soulLevel = 3; /*0x51c7f4*/
  self->combatSkill = 0x32; /*0x51c7fd*/
  self->magicSkill = 0x32; /*0x51c803*/
  self->stealthSkill = 0x32; /*0x51c809*/
  self->attackReach = 0x20; /*0x51c80f*/
  InitializeComponent((BaseFormComponent *)p_bloodSpray); /*0x51c816*/
  self->bloodDecal.vtbl->InitializeComponent((BaseFormComponent *)&self->bloodDecal); /*0x51c826*/
  j_TESForm_InitializeComponents((TESForm *)self); /*0x51c82a*/
  MarkAsModified = self->super.actorBaseData.vtbl->MarkAsModified; /*0x51c832*/
  self->super.actorBaseData.flags |= 0x40u; /*0x51c835*/
  MarkAsModified(&self->super.actorBaseData, 0x10u); /*0x51c840*/
  v5 = self->super.actorBaseData.vtbl->MarkAsModified; /*0x51c844*/
  self->super.actorBaseData.flags |= 0x200u; /*0x51c847*/
  v5(&self->super.actorBaseData, 0x10u); /*0x51c852*/
  self->super.health.health = 0x32; /*0x51c855*/
}
