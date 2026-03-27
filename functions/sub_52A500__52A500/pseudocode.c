void __thiscall sub_52A500(TESForm *this)
{
  *((_BYTE *)this + 0x3C) |= 1u;
  this->vtbl->MarkAsModified(this, 4);
  *((_BYTE *)this + 0x5C) = 0;
  j_TESForm_InitializeComponents(this);
}
