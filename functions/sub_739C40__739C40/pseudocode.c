NiScreenPolygon *__thiscall sub_739C40(_DWORD *this, _DWORD **a2)
{
  NiScreenPolygon *v3; // eax
  NiScreenPolygon *v4; // edi

  v3 = (NiScreenPolygon *)FormHeapAlloc(0x1Cu);
  v4 = 0;
  if ( v3 )
    v4 = NiScreenPolygon::NiScreenPolygon(
           v3,
           *((_WORD *)this + 6),
           (void *)*(this + 4),
           (void *)*(this + 5),
           (void *)*(this + 6));
  sub_739010(this, (int)v4, a2);
  return v4;
}
