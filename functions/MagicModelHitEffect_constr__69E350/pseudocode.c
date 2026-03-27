NiObject *__thiscall MagicModelHitEffect_constr(NiObject *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  MagicHitEffect_constr(this);
  this->__vftable = (NiObjectVtbl *)&MagicModelHitEffect::`vftable';
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  v2 = *((_DWORD *)this + 0xC);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0xC) = 0;
  }
  v4 = *((_DWORD *)this + 0xD);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0xD) = 0;
  }
  *((_BYTE *)this + 0x29) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_BYTE *)this + 0x28) = 0;
  return this;
}
