TESForm *__thiscall sub_4C93D0(TESForm *this)
{
  int v2; // edi

  TESForm_constr(this);
  TESTexture_constr((TESTexture *)this + 2);
  this->vtbl = (TESFormVtbl *)&TESLandTexture::`vftable'{for `TESLandTexture'};
  *((_DWORD *)this + 6) = &TESLandTexture::`vftable'{for `TESTexture'};
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  this->member.type = kFormType_LandTexture;
  TESForm_SetIsLinked(this, 1);
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 9) = 0;
  }
  *((_BYTE *)this + 0x28) = 2;
  *((_BYTE *)this + 0x29) = 0x1E;
  *((_BYTE *)this + 0x2A) = 0x1E;
  *((_BYTE *)this + 0x2B) = 0x1E;
  j_TESForm_InitializeComponents(this);
  return this;
}
