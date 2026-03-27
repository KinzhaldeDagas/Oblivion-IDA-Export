void __thiscall NiPixelData::~NiPixelData(NiPixelData *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  *(_DWORD *)this = &NiPixelData::`vftable';
  v2 = *((_DWORD *)this + 0x13);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x13) = 0;
  }
  sub_7322D0(this);
  v4 = *((_DWORD *)this + 0x13);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  NiRefObject_destr(this);
}
