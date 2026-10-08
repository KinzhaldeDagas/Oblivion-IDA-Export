// CULLING MainWorld goal 2026-09-27: shared TallGrassTriShape/TallGrassTriStrips bound updater transforms a bound stored at object+0xC4 with world transform+0x64 into world bound+0x20. This is instance-specific bound provenance, not ordinary geometryData-bound handling.
int __thiscall sub_864610(float *this)
{
  return NiBound_TransformInto(this + 8, (NiPoint3 *)(this + 0x31), (NiTransform *)(this + 0x19)); /*0x864623*/
}
