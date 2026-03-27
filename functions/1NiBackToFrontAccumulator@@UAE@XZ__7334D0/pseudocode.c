void __thiscall NiBackToFrontAccumulator::~NiBackToFrontAccumulator(NiBackToFrontAccumulator *this)
{
  int *v2; // ecx
  int v3; // eax
  bool v4; // zf

  *(_DWORD *)this = &NiBackToFrontAccumulator::`vftable';
  FormHeapFree(*((_DWORD *)this + 0xA));
  FormHeapFree(*((_DWORD *)this + 0xB));
  for ( ; *((_DWORD *)this + 6); --*((_DWORD *)this + 6) )
  {
    v2 = *((int **)this + 4);
    v3 = *v2;
    v4 = *v2 == 0;
    *((_DWORD *)this + 4) = *v2;
    if ( v4 )
      *((_DWORD *)this + 5) = 0;
    else
      *(_DWORD *)(v3 + 4) = 0;
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 3) + 8))((char *)this + 0xC, v2);
  }
  NiTPointerList<NiGeometry *>::~NiTPointerList<NiGeometry *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xC));
  *(_DWORD *)this = &NiAccumulator::`vftable';
  NiRefObject_destr(this);
}
