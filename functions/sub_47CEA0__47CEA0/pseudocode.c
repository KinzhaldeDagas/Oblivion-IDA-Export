_DWORD *__thiscall sub_47CEA0(_DWORD *this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // eax

  *this = &BSThread::`vftable';
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *((_BYTE *)this + 0x18) = 0;
  v2 = (_RTL_CRITICAL_SECTION_0 *)FormHeapAlloc(0x80u);
  if ( v2 )
    *(this + 1) = NiInitalizeCriticalSection(v2);
  else
    *(this + 1) = 0;
  return this;
}
