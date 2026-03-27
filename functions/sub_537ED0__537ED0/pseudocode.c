bhkWaterListener *__thiscall sub_537ED0(bhkWaterListener *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &TESWaterListener::`vftable';
  FormHeapFree(v4);
  bhkWaterListener::~bhkWaterListener(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
