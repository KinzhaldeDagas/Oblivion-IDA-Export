UInt8 __thiscall TESWorldSpace::IsNoWaterLOD(TESWorldSpace *this)
{
  return (this->worldFlags & kFlag_NoLODWater) != 0;
}
