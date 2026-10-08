int __usercall ActorValue_GetName_::HighActorVal@<eax>(signed int a1@<eax>)
{
  if ( a1 >= 0x48 ) /*0x565cda*/
    return 0; /*0x565ce4*/
  else
    return *(_DWORD *)(4 * a1 + 0xB12868); /*0x565cdc*/
}
