int __thiscall sub_4C9490(TESForm *this)
{
  TESForm *v2; // ebx
  int v3; // edi

  v2 = this + 1; /*0x4c94bc*/
  this->vtbl = (TESFormVtbl *)&TESLandTexture::`vftable'{for `TESLandTexture'}; /*0x4c94bf*/
  *((_DWORD *)this + 6) = &TESLandTexture::`vftable'{for `TESTexture'}; /*0x4c94c5*/
  sub_4C8DD0(this); /*0x4c94d3*/
  v3 = *((_DWORD *)this + 9); /*0x4c94d8*/
  if ( v3 ) /*0x4c94e2*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x4c94e8*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x4c94fe*/
  }
  TESTexture_destr(v2); /*0x4c9507*/
  return TESForm_destr(this); /*0x4c951b*/
}
