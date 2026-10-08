// Initialize TESObjectLIGH runtime data. The 0x18-byte DATA payload is +0x70..+0x87; falloffExponent_80 defaults through load normalization, projectorFovDegrees_84 defaults to 90.0, and fade_88 defaults to 1.0 outside DATA.
void __thiscall TESObjectLIGH_InitializeLightData(TESObjectLIGH_DecodedLayout *self)
{
  self->soundForm_8C = 0; /*0x4b0c34*/
  self->time_70 = 0; /*0x4b0c3a*/
  self->radius_74 = 0; /*0x4b0c3d*/
  self->colorRgb_78 = 0; /*0x4b0c40*/
  self->lightFlags_7C = 0; /*0x4b0c43*/
  self->falloffExponent_80 = 0.0; /*0x4b0c46*/
  self->fade_88 = 1.0;                          // Initialize TESObjectLIGH::fade_88 to 1.0; this field is serialized separately as FNAM. /*0x4b0c4c*/
  self->projectorFovDegrees_84 = flt_A430CC; /*0x4b0c58*/
  j_TESForm_InitializeComponents((TESForm *)self); /*0x4b0c5e*/
}
