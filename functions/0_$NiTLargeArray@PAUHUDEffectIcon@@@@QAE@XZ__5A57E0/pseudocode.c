NiTLargeArray<HUDEffectIcon *> *__thiscall NiTLargeArray<HUDEffectIcon *>::NiTLargeArray<HUDEffectIcon *>(
        NiTLargeArray<HUDEffectIcon *> *this,
        char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 1); /*0x5a57e6*/
  *(_DWORD *)this = &NiTLargeArray<HUDEffectIcon *>::`vftable'; /*0x5a57e7*/
  FormHeapFree(v4); /*0x5a57ed*/
  if ( (a2 & 1) != 0 ) /*0x5a57fa*/
    FormHeapFree((unsigned int)this); /*0x5a57fd*/
  return this; /*0x5a5807*/
}
