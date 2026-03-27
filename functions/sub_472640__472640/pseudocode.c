void __thiscall sub_472640(_WORD *this, _WORD *a2)
{
  if ( a2 )
  {
    if ( *(this + 0x1E) == 0xFF && *(this + 0x38) == 0xFF && !TESActorBaseData_GetMagicka(a2) )
      *(this + 0x38) = TESActorBaseData_GetMagicka(a2);
    sub_472030(this, *(float *)&a2);
  }
}
