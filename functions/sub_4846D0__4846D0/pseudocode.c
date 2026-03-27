char __thiscall sub_4846D0(TESForm *this)
{
  TESForm *vtbl; // esi

  vtbl = (TESForm *)this->vtbl;
  if ( this->vtbl )
  {
    while ( vtbl->vtbl )
    {
      if ( sub_41DEF0((TESForm *)vtbl->vtbl) )
        return 1;
      vtbl = *(TESForm **)&vtbl->member.type;
      if ( !vtbl )
        return 0;
    }
  }
  return 0;
}
