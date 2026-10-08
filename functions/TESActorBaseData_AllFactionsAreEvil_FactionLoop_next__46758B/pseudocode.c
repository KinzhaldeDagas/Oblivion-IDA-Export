void __usercall TESActorBaseData_AllFactionsAreEvil_::FactionLoop_next(_DWORD *this@<ecx>, char a2@<al>)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)*(this + 1); /*0x46758b*/
  if ( v2 ) /*0x467590*/
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop(v2, a2); /*0x467590*/
}
