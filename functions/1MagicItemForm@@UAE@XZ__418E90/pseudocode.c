void __thiscall MagicItemForm::~MagicItemForm(TESForm *this)
{
  _DWORD *v2; // ecx

  v2 = 0;
  if ( this )
    v2 = this + 1;
  MagicItem_destr(v2);
  TESForm_destr(this);
}
