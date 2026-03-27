NiGeometryGroupManager *__thiscall NiGeometryGroupManager::`scalar deleting destructor'(
        NiGeometryGroupManager *this,
        char a2)
{
  *(_DWORD *)this = &NiGeometryGroupManager::`vftable';
  dword_B3FD8C = 0;
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
