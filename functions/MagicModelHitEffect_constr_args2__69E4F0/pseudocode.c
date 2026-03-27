NiObject *__thiscall MagicModelHitEffect_constr_args2(NiObject *this, TESObjectREFR *a2, int a3, float a4)
{
  int v5; // edi
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  int v7; // edi
  double v8; // st7
  NiObject *result; // eax

  MagicHitEffect_constr_args(this, a2, 0);
  this->__vftable = (NiObjectVtbl *)&MagicModelHitEffect::`vftable';
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  v5 = *((_DWORD *)this + 0xC);
  v6 = InterlockedDecrement;
  if ( v5 )
  {
    if ( !v6((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0xC) = 0;
  }
  v7 = *((_DWORD *)this + 0xD);
  if ( v7 )
  {
    if ( !v6((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0xD) = 0;
  }
  *((_BYTE *)this + 0x29) = 0;
  *((_DWORD *)this + 0xB) = a3;
  *((_BYTE *)this + 0x28) = 0;
  v8 = a4;
  result = this;
  if ( a4 < 0.0 )
    v8 = flt_A32048;
  *((float *)this + 2) = v8;
  return result;
}
