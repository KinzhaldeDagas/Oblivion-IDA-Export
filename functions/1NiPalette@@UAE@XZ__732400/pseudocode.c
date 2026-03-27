void __thiscall NiPalette::~NiPalette(NiPalette *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &NiPalette::`vftable';
  FormHeapFree(*((_DWORD *)this + 5));
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 6);
  if ( v2 )
    (**v2)(v2, 1);
  sub_732370(this);
  NiRefObject_destr(this);
}
