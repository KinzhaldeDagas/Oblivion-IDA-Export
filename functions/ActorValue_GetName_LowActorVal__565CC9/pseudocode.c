int __usercall ActorValue_GetName_::LowActorVal@<eax>(int a1@<eax>)
{
  int v1; // eax

  v1 = *(_DWORD *)(4 * a1 + 0xB12758); /*0x565cc9*/
  if ( !v1 ) /*0x565cd2*/
    JUMPOUT(0x565CE4); /*0x565ce4*/
  return *(_DWORD *)v1; /*0x565cd6*/
}
