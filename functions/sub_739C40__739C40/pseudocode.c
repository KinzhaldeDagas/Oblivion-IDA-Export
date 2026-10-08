NiScreenPolygon *__thiscall sub_739C40(_DWORD *this, _DWORD **a2)
{
  NiScreenPolygon *v3; // eax
  NiScreenPolygon *v4; // edi

  v3 = (NiScreenPolygon *)FormHeapAlloc(0x1Cu); /*0x739c67*/
  v4 = 0; /*0x739c73*/
  if ( v3 ) /*0x739c7b*/
    v4 = NiScreenPolygon::NiScreenPolygon( /*0x739c95*/
           v3,
           *((_WORD *)this + 6),
           (void *)*(this + 4),
           (void *)*(this + 5),
           (void *)*(this + 6));
  sub_739010(this, (int)v4, a2); /*0x739ca7*/
  return v4; /*0x739cae*/
}
