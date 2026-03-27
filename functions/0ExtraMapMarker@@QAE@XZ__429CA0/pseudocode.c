ExtraMapMarker *__thiscall ExtraMapMarker::ExtraMapMarker(ExtraMapMarker *this, int a2)
{
  *((_BYTE *)this + 4) = 0x33;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraMapMarker::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
