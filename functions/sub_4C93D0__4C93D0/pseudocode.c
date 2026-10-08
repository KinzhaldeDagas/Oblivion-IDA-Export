TESForm *__thiscall sub_4C93D0(TESForm *this)
{
  int v2; // edi

  TESForm_constr(this); /*0x4c93fa*/
  TESTexture_constr((TESTexture *)this + 2); /*0x4c940a*/
  this->vtbl = (TESFormVtbl *)&TESLandTexture::`vftable'{for `TESLandTexture'}; /*0x4c940f*/
  *((_DWORD *)this + 6) = &TESLandTexture::`vftable'{for `TESTexture'}; /*0x4c9415*/
  *((_DWORD *)this + 9) = 0; /*0x4c941b*/
  *((_DWORD *)this + 0xB) = 0; /*0x4c941e*/
  *((_DWORD *)this + 0xC) = 0; /*0x4c9421*/
  this->member.type = kFormType_LandTexture; /*0x4c942d*/
  TESForm_SetIsLinked(this, 1); /*0x4c9431*/
  v2 = *((_DWORD *)this + 9); /*0x4c9436*/
  if ( v2 ) /*0x4c943b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4c9441*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4c9457*/
    *((_DWORD *)this + 9) = 0; /*0x4c9459*/
  }
  *((_BYTE *)this + 0x28) = 2; /*0x4c9460*/
  *((_BYTE *)this + 0x29) = 0x1E; /*0x4c9464*/
  *((_BYTE *)this + 0x2A) = 0x1E; /*0x4c9467*/
  *((_BYTE *)this + 0x2B) = 0x1E; /*0x4c946a*/
  j_TESForm_InitializeComponents(this); /*0x4c946d*/
  return this; /*0x4c9474*/
}
