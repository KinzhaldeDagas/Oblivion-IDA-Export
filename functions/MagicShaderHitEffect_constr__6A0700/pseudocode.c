NiObject *__thiscall MagicShaderHitEffect_constr(NiObject *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi
  int v5; // edi

  MagicHitEffect_constr(this);
  this->__vftable = (NiObjectVtbl *)&MagicShaderHitEffect::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x12) = 0;
  v2 = InterlockedDecrement;
  *((_DWORD *)this + 0xD) = 0;
  v3 = *((_DWORD *)this + 0x12);
  if ( v3 )
  {
    if ( !v2((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x12) = 0;
  }
  *((float *)this + 0xE) = 0.0;
  v4 = *((_DWORD *)this + 0xF);
  if ( v4 )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  v5 = *((_DWORD *)this + 0x10);
  if ( v5 )
  {
    if ( !v2((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x10) = 0;
  }
  *((_BYTE *)this + 0x28) = 0;
  *((_DWORD *)this + 0xB) = 0xFFFFFFFF;
  *((_DWORD *)this + 0xC) = 0;
  *((_BYTE *)this + 0x44) = 0;
  return this;
}
