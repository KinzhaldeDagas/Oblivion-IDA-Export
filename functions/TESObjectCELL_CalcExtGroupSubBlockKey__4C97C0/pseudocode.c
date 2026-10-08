int __cdecl TESObjectCELL::CalcExtGroupSubBlockKey(int a1, int a2)
{
  return TESObjectCELL_PackExteriorGroupLabel(a1 >> 3, a2 >> 3);
}
