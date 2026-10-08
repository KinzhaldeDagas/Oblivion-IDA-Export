int __cdecl TESObjectCELL::CalcExtGroupBlockKey(int a1, int a2)
{
  return TESObjectCELL_PackExteriorGroupLabel(a1 >> 5, a2 >> 5);
}
