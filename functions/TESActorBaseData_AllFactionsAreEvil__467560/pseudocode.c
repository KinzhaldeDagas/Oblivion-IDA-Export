void __thiscall TESActorBaseData_AllFactionsAreEvil(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = this + 6; /*0x467560*/
  if ( v1[1] || *v1 ) /*0x46756b*/
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop(v1, 1); /*0x46756e*/
  else
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop(v1, 0); /*0x467571*/
}
