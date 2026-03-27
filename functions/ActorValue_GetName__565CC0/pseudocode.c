int __cdecl ActorValue_GetName(unsigned int a1)
{
  if ( a1 > 0x27 )
    return ActorValue_GetName_::HighActorVal(a1);
  else
    return ActorValue_GetName_::LowActorVal(a1);
}
