void __thiscall sub_52A500(TESForm *this)
{
  *((_BYTE *)this + 0x3C) |= 1u; /*0x52a503*/
  this->vtbl->MarkAsModified(this, 4); /*0x52a50e*/
  *((_BYTE *)this + 0x5C) = 0; /*0x52a510*/
  j_TESForm_InitializeComponents(this); /*0x52a517*/
}
