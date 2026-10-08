// Oblivion NiTransformController equality wrapper around generic single-interpolator controller equality, which includes the smart interpolator at +0x3C.
bool __thiscall NiTransformController_IsEqual(_DWORD *this, int a2)
{
  return NiSingleInterpController_IsEqual(this, a2); /*0x6c369f*/
}
