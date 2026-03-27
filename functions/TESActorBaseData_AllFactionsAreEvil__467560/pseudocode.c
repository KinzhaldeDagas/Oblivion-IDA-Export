void __thiscall TESActorBaseData_AllFactionsAreEvil(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = this + 6;
  if ( v1[1] || *v1 )
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop(v1, 1);
  else
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop(v1, 0);
}
