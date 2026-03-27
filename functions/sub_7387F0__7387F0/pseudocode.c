void __thiscall sub_7387F0(unsigned int *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *(this + 2);
  *this = (unsigned int)&NiScreenGeometryData::ScreenElement::`vftable';
  FormHeapFree(v2);
  FormHeapFree(*(this + 3));
  FormHeapFree(*(this + 4));
}
