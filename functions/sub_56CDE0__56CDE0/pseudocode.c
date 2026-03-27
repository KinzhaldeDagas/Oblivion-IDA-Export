NiObject *__thiscall sub_56CDE0(NiObject *this)
{
  int v2; // edi

  BSTempEff_constr(this, 0, 0.0);
  this->__vftable = (NiObjectVtbl *)&BSTempEffectGeometryDecal::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_BYTE *)this + 0x28) = 0;
  *((_DWORD *)this + 6) = 0;
  v2 = *((_DWORD *)this + 7);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 7) = 0;
  }
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  return this;
}
