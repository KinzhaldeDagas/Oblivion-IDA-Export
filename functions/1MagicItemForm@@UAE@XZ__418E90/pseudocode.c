void __thiscall MagicItemForm::~MagicItemForm(TESForm *this)
{
  TESForm *v2; // ecx

  v2 = 0; /*0x418eb8*/
  if ( this ) /*0x418ec0*/
    v2 = this + 1; /*0x418ec2*/
  MagicItem_destr(v2); /*0x418ec5*/
  TESForm_destr(this); /*0x418ed4*/
}
