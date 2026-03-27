bool __stdcall ActiveEffect_TargetIsActor(int a1)
{
  if ( a1 )
    return MagicTarget_GetParentActor((MagicTarget *)a1) != 0;
  else
    return ActiveEffect_TargetIsActor_::Return_False(0);
}
