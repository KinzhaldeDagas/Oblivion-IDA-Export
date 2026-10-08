NiGeometryData *__thiscall sub_759D40(NiGeometryData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x17); /*0x759d46*/
  this->__vftable = (NiGeometryDataVtbl *)&NiPSysData::`vftable'; /*0x759d47*/
  FormHeapFree(v4); /*0x759d4d*/
  FormHeapFree(*((_DWORD *)this + 0x18)); /*0x759d56*/
  sub_73EEC0(this); /*0x759d60*/
  if ( (a2 & 1) != 0 ) /*0x759d6a*/
    FormHeapFree((unsigned int)this); /*0x759d6d*/
  return this; /*0x759d77*/
}
