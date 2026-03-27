void __thiscall BSTexturePalette::~BSTexturePalette(BSTexturePalette *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this = &BSTexturePalette::`vftable';
  sub_4A2850(this);
  NiTMap_Clear(*((_DWORD **)this + 3));
  NiTMap_Clear(*((_DWORD **)this + 2));
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 3);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 2);
  if ( v3 )
    (**v3)(v3, 1);
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
