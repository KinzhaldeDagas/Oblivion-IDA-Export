void __thiscall sub_72C450(unsigned int *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *(this + 1);
  *this = (unsigned int)&NiSkinPartition::Partition::`vftable';
  FormHeapFree(v2);
  FormHeapFree(*(this + 2));
  FormHeapFree(*(this + 3));
  FormHeapFree(*(this + 4));
  FormHeapFree(*(this + 5));
  FormHeapFree(*(this + 6));
}
