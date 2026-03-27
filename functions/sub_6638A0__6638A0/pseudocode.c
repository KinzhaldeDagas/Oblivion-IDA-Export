char __thiscall sub_6638A0(int *this)
{
  BSExtraDataVtbl *v2; // eax
  int *v3; // edi
  void (__thiscall *Destructor)(BSExtraData *); // eax

  v2 = sub_41E650((ExtraDataList *)(this + 0x11));
  v3 = (int *)v2;
  if ( v2 )
  {
    Destructor = v2->Destructor;
    if ( *v3 == *(this + 0x1E6) && (*(_BYTE *)(*(this + 0x174) + 0x18) & 1) != 0 )
    {
      sub_55E2A0(v3, this + 0x1E7);
      LOBYTE(v2) = sub_5E3FC0(this);
    }
    else
    {
      if ( Destructor == (void (__thiscall *)(BSExtraData *))*(this + 0x1E7)
        && (TESObjectREFR::GetNiNode((TESObjectREFR *)this)->members.super.m_flags & 1) != 0 )
      {
        sub_55E2A0(v3, this + 0x1E6);
      }
      LOBYTE(v2) = sub_5E3FC0(this);
    }
  }
  return (char)v2;
}
