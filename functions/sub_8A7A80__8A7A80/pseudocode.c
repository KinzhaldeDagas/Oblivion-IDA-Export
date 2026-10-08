void __thiscall sub_8A7A80(LPCRITICAL_SECTION *this, int a2)
{
  sub_8A7720(*(this + 5)); /*0x8a7a87*/
  if ( *(this + 3) == (LPCRITICAL_SECTION)((unsigned int)*(this + 4) & 0x3FFFFFFF) ) /*0x8a7a9c*/
    sub_8A6EE0((const void **)this + 2, 4); /*0x8a7aa1*/
  *((_DWORD *)&(*(this + 2))->DebugInfo + (_DWORD)*(this + 3)) = a2; /*0x8a7ab2*/
  *(this + 3) = (LPCRITICAL_SECTION)((char *)*(this + 3) + 1); /*0x8a7ab5*/
  LeaveCriticalSection(*(this + 5)); /*0x8a7ac1*/
}
