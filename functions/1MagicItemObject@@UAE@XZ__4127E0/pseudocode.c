void __thiscall MagicItemObject::~MagicItemObject(TESForm *this)
{
  TESForm *v2; // ecx

  v2 = 0; /*0x412808*/
  if ( this ) /*0x412810*/
    v2 = (TESForm *)((char *)this + 0x24); /*0x412812*/
  MagicItem_destr(v2); /*0x412815*/
  TESObject_destr(this); /*0x412824*/
}
