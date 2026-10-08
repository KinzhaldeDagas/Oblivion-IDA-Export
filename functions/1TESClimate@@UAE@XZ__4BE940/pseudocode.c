// Verified: TESClimate destructor destroys both textures, clears the weather EntryData list at +0x30, then destroys model and TESForm base.
void __thiscall TESClimate_dtor(TESClimate *this)
{
  this->form.vtbl = (TESFormVtbl *)&TESClimate::`vftable'; /*0x4be968*/
  j_TESForm_ClearComponentReferences(&this->form); /*0x4be976*/
  _LN21((char *)this->weatherTextures, 0xCu, 2, (void (__thiscall *)(void *))TESTexture_destr); /*0x4be98d*/
  sub_4EED70((unsigned int *)&this->weatherList); /*0x4be99a*/
  TESModel::~TESModel(&this->model); /*0x4be9a7*/
  TESForm_destr(&this->form); /*0x4be9b6*/
}
