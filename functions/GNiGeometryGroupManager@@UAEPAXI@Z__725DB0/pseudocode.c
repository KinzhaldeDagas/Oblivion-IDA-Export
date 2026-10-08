NiGeometryGroupManager *__thiscall NiGeometryGroupManager::`scalar deleting destructor'(
        NiGeometryGroupManager *this,
        char a2)
{
  *(_DWORD *)this = &NiGeometryGroupManager::`vftable'; /*0x725db8*/
  unk_B3FD8C = 0; /*0x725dbe*/
  if ( (a2 & 1) != 0 ) /*0x725dc8*/
    FormHeapFree((unsigned int)this); /*0x725dcb*/
  return this; /*0x725dd5*/
}
