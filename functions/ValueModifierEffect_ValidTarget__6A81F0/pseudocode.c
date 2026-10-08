signed int __stdcall ValueModifierEffect_ValidTarget(int a1)
{
  Actor *ParentActor; // eax

  if ( a1 /*0x6a820d*/
    && (ParentActor = MagicTarget_GetParentActor((MagicTarget *)a1)) != 0
    && !ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) )
  {
    return 1; /*0x6a8213*/
  }
  else
  {
    return ValueModifierEffect_ValidTarget_::Return_False(a1); /*0x6a81f6*/
  }
}
