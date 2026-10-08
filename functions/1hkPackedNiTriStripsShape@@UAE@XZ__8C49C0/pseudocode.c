void __thiscall hkPackedNiTriStripsShape::~hkPackedNiTriStripsShape(hkPackedNiTriStripsShape *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  *(_DWORD *)this = &hkPackedNiTriStripsShape::`vftable'; /*0x8c49ea*/
  v2 = *((_DWORD *)this + 4); /*0x8c49f0*/
  v3 = InterlockedDecrement; /*0x8c49f5*/
  if ( v2 ) /*0x8c4a03*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x8c4a09*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x8c4a1b*/
    *((_DWORD *)this + 4) = 0; /*0x8c4a1d*/
  }
  v4 = *((_DWORD *)this + 4); /*0x8c4a24*/
  if ( v4 ) /*0x8c4a2e*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x8c4a34*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8c4a46*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8c4a48*/
}
