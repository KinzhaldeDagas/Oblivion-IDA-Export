bool __stdcall ActiveEffect_TargetIsActor(int a1)
{
  if ( a1 ) /*0x6938f6*/
    return MagicTarget_GetParentActor((MagicTarget *)a1) != 0; /*0x693904*/
  else
    return ActiveEffect_TargetIsActor_::Return_False(0); /*0x6938f6*/
}
