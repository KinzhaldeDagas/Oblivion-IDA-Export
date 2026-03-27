int *__thiscall sub_758520(int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 3);
  *this = (int)&NiPSysEmitterCtlrData::`vftable';
  if ( v3 )
    (*(void (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2C8))(v3);
  if ( *(this + 7) )
    (*(void (__cdecl **)(_DWORD))(4 * *(this + 8) + 0xB3D340))(*(this + 7));
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
