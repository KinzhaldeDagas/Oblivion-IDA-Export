void __usercall TESActorBaseData_AllFactionsAreEvil_::FactionLoop(_DWORD *this@<ecx>, char a2@<al>)
{
  if ( !a2 )
    JUMPOUT(0x467592);
  TESActorBaseData_AllFactionsAreEvil_::FactionLoop_next(this);
}
