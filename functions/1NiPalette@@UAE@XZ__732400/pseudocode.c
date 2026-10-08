void __thiscall NiPalette::~NiPalette(NiPalette *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &NiPalette::`vftable'; /*0x732428*/
  FormHeapFree(*((_DWORD *)this + 5)); /*0x73243a*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 6); /*0x73243f*/
  if ( v2 ) /*0x732447*/
    (**v2)(v2, 1); /*0x73244f*/
  sub_732370(this); /*0x732453*/
  NiRefObject_destr(this); /*0x732462*/
}
