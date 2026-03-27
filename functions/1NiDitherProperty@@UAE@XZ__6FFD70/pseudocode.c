void __thiscall NiDitherProperty::~NiDitherProperty(NiDitherProperty *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiObjectNET::`vftable';
  FormHeapFree(*((_DWORD *)this + 2));
  sub_6FFC60(this);
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiRefObject_destr(this);
}
