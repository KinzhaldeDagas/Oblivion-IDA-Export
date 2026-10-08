int *__thiscall sub_758520(int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 3); /*0x758523*/
  *this = (int)&NiPSysEmitterCtlrData::`vftable'; /*0x758528*/
  if ( v3 ) /*0x75852e*/
    (*(void (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2C8))(v3); /*0x75853b*/
  if ( *(this + 7) ) /*0x758540*/
    (*(void (__cdecl **)(_DWORD))(4 * *(this + 8) + 0xB3D340))(*(this + 7)); /*0x758552*/
  NiRefObject_destr(this); /*0x758559*/
  if ( (a2 & 1) != 0 ) /*0x758563*/
    FormHeapFree((unsigned int)this); /*0x758566*/
  return this; /*0x758570*/
}
