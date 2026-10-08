bhkWaterListener *__thiscall sub_537ED0(bhkWaterListener *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 6); /*0x537ed6*/
  *(_DWORD *)this = &TESWaterListener::`vftable'; /*0x537ed7*/
  FormHeapFree(v4); /*0x537edd*/
  bhkWaterListener::~bhkWaterListener(this); /*0x537ee7*/
  if ( (a2 & 1) != 0 ) /*0x537ef1*/
    FormHeapFree((unsigned int)this); /*0x537ef4*/
  return this; /*0x537efe*/
}
