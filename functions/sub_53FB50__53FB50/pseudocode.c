int __thiscall sub_53FB50(Sky *this)
{
  Atmosphere *atmosphere; // ecx

  atmosphere = this->atmosphere;
  if ( atmosphere )
    return TESEnchantableForm_GetCastingType(atmosphere);
  else
    return 0;
}
