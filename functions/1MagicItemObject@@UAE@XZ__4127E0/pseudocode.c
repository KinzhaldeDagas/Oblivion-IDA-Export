void __thiscall MagicItemObject::~MagicItemObject(TESForm *this)
{
  TESForm *v2; // ecx

  v2 = 0;
  if ( this )
    v2 = (TESForm *)((char *)this + 0x24);
  MagicItem_destr(v2);
  TESObject_destr(this);
}
