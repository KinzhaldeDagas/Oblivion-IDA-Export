NiObject *__thiscall MagicModelHitEffect_constr_args(NiObject *this, TESObjectREFR *a2, int a3)
{
  int v4; // edi
  int v5; // edi
  int FXEffect; // eax

  MagicHitEffect_constr_args(this, a2, a3);
  this->__vftable = (NiObjectVtbl *)&MagicModelHitEffect::`vftable';
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  v4 = *((_DWORD *)this + 0xC);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0xC) = 0;
  }
  v5 = *((_DWORD *)this + 0xD);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0xD) = 0;
  }
  *((_BYTE *)this + 0x29) = 0;
  *((_DWORD *)this + 0xB) = 0;
  FXEffect = MagicItem_GetFXEffect(*(_DWORD **)(a3 + 8), 0);
  *((_DWORD *)this + 0xB) = (*(int (__thiscall **)(int))(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18);
  *((_BYTE *)this + 0x28) = 0;
  return this;
}
