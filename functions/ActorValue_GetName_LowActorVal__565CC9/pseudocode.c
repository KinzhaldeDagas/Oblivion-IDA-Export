int __usercall ActorValue_GetName_::LowActorVal@<eax>(int a1@<eax>)
{
  int v1; // eax

  v1 = *(_DWORD *)(4 * a1 + 0xB12758);
  if ( !v1 )
    JUMPOUT(0x565CE4);
  return *(_DWORD *)v1;
}
