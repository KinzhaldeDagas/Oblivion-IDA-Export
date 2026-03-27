NiTLargeArray<TESTopicInfo *> *__thiscall NiTLargeArray<TESTopicInfo *>::NiTLargeArray<TESTopicInfo *>(
        NiTLargeArray<TESTopicInfo *> *this,
        char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &NiTLargeArray<TESTopicInfo *>::`vftable';
  FormHeapFree(v4);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
