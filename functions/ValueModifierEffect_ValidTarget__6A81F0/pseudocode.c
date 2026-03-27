signed int __stdcall ValueModifierEffect_ValidTarget(int a1)
{
  Actor *ParentActor; // eax

  if ( a1
    && (ParentActor = MagicTarget_GetParentActor((MagicTarget *)a1)) != 0
    && !ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) )
  {
    return 1;
  }
  else
  {
    return ValueModifierEffect_ValidTarget_::Return_False(a1);
  }
}
