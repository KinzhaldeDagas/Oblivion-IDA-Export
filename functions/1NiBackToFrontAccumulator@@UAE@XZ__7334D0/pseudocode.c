void __thiscall NiBackToFrontAccumulator::~NiBackToFrontAccumulator(NiBackToFrontAccumulator *this)
{
  int *v2; // ecx
  int v3; // eax
  bool v4; // zf

  *(_DWORD *)this = &NiBackToFrontAccumulator::`vftable'; /*0x7334fa*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x73350c*/
  FormHeapFree(*((_DWORD *)this + 0xB)); /*0x733515*/
  for ( ; *((_DWORD *)this + 6); --*((_DWORD *)this + 6) ) /*0x73351a*/
  {
    v2 = *((int **)this + 4); /*0x733530*/
    v3 = *v2; /*0x733533*/
    v4 = *v2 == 0; /*0x733535*/
    *((_DWORD *)this + 4) = *v2; /*0x733537*/
    if ( v4 ) /*0x73353a*/
      *((_DWORD *)this + 5) = 0; /*0x733541*/
    else
      *(_DWORD *)(v3 + 4) = 0; /*0x73353c*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 3) + 8))((char *)this + 0xC, v2); /*0x73354c*/
  }
  NiTPointerList<NiGeometry *>::~NiTPointerList<NiGeometry *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xC)); /*0x73355e*/
  *(_DWORD *)this = &NiAccumulator::`vftable'; /*0x73356d*/
  NiRefObject_destr(this); /*0x733573*/
}
