void __thiscall sub_446D00(unsigned int *this)
{
  unsigned int v1; // [esp-4h] [ebp-4h]

  v1 = *(this + 1);
  *this = (unsigned int)&NiTLargeArray<TESObjectCELL *>::`vftable';
  FormHeapFree(v1);
}
