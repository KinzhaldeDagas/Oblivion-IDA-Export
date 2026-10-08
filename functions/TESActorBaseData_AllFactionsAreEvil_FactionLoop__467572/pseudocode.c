void __usercall TESActorBaseData_AllFactionsAreEvil_::FactionLoop(_DWORD *this@<ecx>, char a2@<al>)
{
  if ( !a2 ) /*0x467574*/
    JUMPOUT(0x467592); /*0x467592*/
  if ( !*this || (*(_BYTE *)(*(_DWORD *)*this + 0x34) & 2) != 0 ) /*0x467587*/
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop_next(this, a2); /*0x46757a*/
  else
    TESActorBaseData_AllFactionsAreEvil_::FactionLoop_next(this, 0); /*0x46758a*/
}
