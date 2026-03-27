void __usercall TESActorBaseData_AllFactionsAreEvil_::FactionLoop_next(_DWORD *this@<ecx>, char a2@<al>)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)*(this + 1);
  if ( v2 )
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop(v2, a2);
}
