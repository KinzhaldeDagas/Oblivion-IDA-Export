void __thiscall sub_446D00(unsigned int *this)
{
  unsigned int v1; // [esp-4h] [ebp-4h]

  v1 = *(this + 1); /*0x446d03*/
  *this = (unsigned int)&NiTLargeArray<TESObjectCELL *>::`vftable'; /*0x446d04*/
  FormHeapFree(v1); /*0x446d0a*/
}
