void __thiscall MobileObject_LinkModifierForm(TESObjectREFR *this, int a2, int a3)
{
  TESObjectREFR_LinkModifiedForm(this, a2, a3);
  if ( *((_DWORD *)this + 0x16) )
    (*(void (__thiscall **)(_DWORD, int, int, TESObjectREFR *))(**((_DWORD **)this + 0x16) + 0x3FC))(
      *((_DWORD *)this + 0x16),
      a2,
      a3,
      this);
  if ( ((a2 & 0x40000000) != 0 || (a3 & 0x40000000) != 0)
    && ((this->member.super.flags & 0x800) != 0 || (this->member.super.flags & 0x20) != 0) )
  {
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Set3D)(this, 0);
  }
}
