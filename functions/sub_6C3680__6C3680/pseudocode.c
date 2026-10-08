// Oblivion NiTransformController stream-registration thunk to the generic single-interpolator controller registration path.
// attributes: thunk
char __thiscall NiTransformController_RegisterStreamables(_DWORD *this, int a2)
{
  return NiSingleInterpController_RegisterStreamables(this, a2);
}
