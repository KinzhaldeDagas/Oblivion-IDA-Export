void __thiscall sub_72C450(unsigned int *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *(this + 1); /*0x72c456*/
  *this = (unsigned int)&NiSkinPartition::Partition::`vftable'; /*0x72c457*/
  FormHeapFree(v2); /*0x72c45d*/
  FormHeapFree(*(this + 2)); /*0x72c466*/
  FormHeapFree(*(this + 3)); /*0x72c46f*/
  FormHeapFree(*(this + 4)); /*0x72c478*/
  FormHeapFree(*(this + 5)); /*0x72c481*/
  FormHeapFree(*(this + 6)); /*0x72c48a*/
}
