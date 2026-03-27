int __thiscall sub_4C9490(TESForm *this)
{
  TESForm *v2; // ebx
  int v3; // edi

  v2 = this + 1;
  this->vtbl = (TESFormVtbl *)&TESLandTexture::`vftable'{for `TESLandTexture'};
  *((_DWORD *)this + 6) = &TESLandTexture::`vftable'{for `TESTexture'};
  sub_4C8DD0(this);
  v3 = *((_DWORD *)this + 9);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  TESTexture_destr(v2);
  return TESForm_destr(this);
}
