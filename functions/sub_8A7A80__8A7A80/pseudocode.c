void __thiscall sub_8A7A80(LPCRITICAL_SECTION *this, int a2)
{
  sub_8A7720(*(this + 5));
  if ( *(this + 3) == (LPCRITICAL_SECTION)((unsigned int)*(this + 4) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)this + 2, 4);
  *((_DWORD *)&(*(this + 2))->DebugInfo + (_DWORD)*(this + 3)) = a2;
  *(this + 3) = (LPCRITICAL_SECTION)((char *)*(this + 3) + 1);
  LeaveCriticalSection(*(this + 5));
}
