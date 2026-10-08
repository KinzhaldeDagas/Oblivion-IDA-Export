NiTLargeArray<TESTopicInfo *> *__thiscall NiTLargeArray<TESTopicInfo *>::NiTLargeArray<TESTopicInfo *>(
        NiTLargeArray<TESTopicInfo *> *this,
        char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 1); /*0x52f456*/
  *(_DWORD *)this = &NiTLargeArray<TESTopicInfo *>::`vftable'; /*0x52f457*/
  FormHeapFree(v4); /*0x52f45d*/
  if ( (a2 & 1) != 0 ) /*0x52f46a*/
    FormHeapFree((unsigned int)this); /*0x52f46d*/
  return this; /*0x52f477*/
}
