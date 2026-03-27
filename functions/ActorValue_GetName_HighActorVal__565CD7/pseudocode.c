int __usercall ActorValue_GetName_::HighActorVal@<eax>(signed int a1@<eax>)
{
  if ( a1 >= 0x48 )
    return 0;
  else
    return *(_DWORD *)(4 * a1 + 0xB12868);
}
