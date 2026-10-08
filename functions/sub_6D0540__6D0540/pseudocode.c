// NiInterpController equality thunk delegates to NiTimeController_IsEqual.
// attributes: thunk
char __thiscall NiInterpController_IsEqual(NiTriBasedGeomData *this, int a2)
{
  return NiTimeController_IsEqual(this, a2);
}
