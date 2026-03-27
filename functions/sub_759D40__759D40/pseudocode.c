NiGeometryData *__thiscall sub_759D40(NiGeometryData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x17);
  this->__vftable = (NiGeometryDataVtbl *)&NiPSysData::`vftable';
  FormHeapFree(v4);
  FormHeapFree(*((_DWORD *)this + 0x18));
  sub_73EEC0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
