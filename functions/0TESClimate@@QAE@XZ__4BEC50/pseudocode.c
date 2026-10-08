// Verified: constructs Climate FormType 0x2E, list at +0x30, two textures at +0x38, six initialized bytes at +0x50..+0x55; total layout is 0x58.
TESClimate *__thiscall TESClimate_ctor(TESClimate *this)
{
  TESForm_constr(&this->form); /*0x4bec78*/
  this->form.vtbl = (TESFormVtbl *)&TESClimate::`vftable'; /*0x4bec88*/
  TESModel::TESModel(&this->model); /*0x4bec8e*/
  sub_4EED50((unsigned int *)&this->weatherList); /*0x4bec9b*/
  ArrayConstructor( /*0x4becb7*/
    (char *)this->weatherTextures,
    0xCu,
    2,
    (void (__thiscall *)(char *))TESTexture_constr,
    (void (__thiscall *)(void *))TESTexture_destr);
  this->form.member.type = kFormType_Climate; /*0x4becbe*/
  this->unknown50 = 0; /*0x4becc2*/
  this->weatherAndMoonFlags = 0; /*0x4becc5*/
  HIBYTE(this->weatherAndMoonFlags) = HIBYTE(this->weatherAndMoonFlags) & 0xC0 | 3; /*0x4becd2*/
  return this; /*0x4becd7*/
}
