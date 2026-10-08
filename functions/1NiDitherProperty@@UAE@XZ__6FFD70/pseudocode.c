void __thiscall NiDitherProperty::~NiDitherProperty(NiDitherProperty *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiObjectNET::`vftable'; /*0x6ffd99*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x6ffdab*/
  sub_6FFC60(this); /*0x6ffdb5*/
  v2 = *((_DWORD *)this + 3); /*0x6ffdba*/
  if ( v2 ) /*0x6ffdc4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6ffdca*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6ffde0*/
  }
  NiRefObject_destr(this); /*0x6ffdec*/
}
