NiTLargeArray<HUDEffectIcon *> *__thiscall NiTLargeArray<HUDEffectIcon *>::NiTLargeArray<HUDEffectIcon *>(
        NiTLargeArray<HUDEffectIcon *> *this,
        char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &NiTLargeArray<HUDEffectIcon *>::`vftable';
  FormHeapFree(v4);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
