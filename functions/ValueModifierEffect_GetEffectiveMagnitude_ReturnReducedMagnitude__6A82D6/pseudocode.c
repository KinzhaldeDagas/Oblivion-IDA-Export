// positive sp value has been detected, the output may be wrong!
void __stdcall ValueModifierEffect_GetEffectiveMagnitude_::ReturnReducedMagnitude(float a1)
{
  __asm { fsubp   st(1), st }
  __asm
  {
    fstp    [esp-4+arg_0]
    fld     [esp-4+arg_0]
  }
}
