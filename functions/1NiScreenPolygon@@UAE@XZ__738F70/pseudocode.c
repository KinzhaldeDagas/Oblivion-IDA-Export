void __thiscall NiScreenPolygon::~NiScreenPolygon(NiScreenPolygon *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiScreenPolygon::`vftable';
  FormHeapFree(*((_DWORD *)this + 4));
  FormHeapFree(*((_DWORD *)this + 5));
  FormHeapFree(*((_DWORD *)this + 6));
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiRefObject_destr(this);
}
