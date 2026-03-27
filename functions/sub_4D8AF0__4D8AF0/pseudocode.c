void __thiscall sub_4D8AF0(TESObjectCELL **this)
{
  TESObjectCELL *v2; // edi
  float *v3; // eax
  TESObjectCELL *v4; // eax
  int v5; // eax

  v2 = *(this + 0x10);
  if ( v2 && TESObjectCELL_IsInterior(*(this + 0x10)) )
  {
    if ( *(_BYTE *)(((int (__thiscall *)(TESObjectCELL **))(*this)[4].members.super.modlist.data)(this) + 4) != 0x29 )
    {
      v3 = (float *)((int (__thiscall *)(TESObjectCELL **))(*this)[4].members.super.modlist.next)(this);
      sub_4CBBB0(v2, v3);
    }
  }
  else
  {
    v4 = *(this + 0x10);
    if ( v4 || (v4 = (TESObjectCELL *)((int (__thiscall *)(TESObjectCELL **))(*(this + 6))->vtbl)(this + 6)) != 0 )
    {
      if ( TESObjectCELL_GetWorldSpace(v4) )
      {
        if ( *(_BYTE *)(((int (__thiscall *)(TESObjectCELL **))(*this)[4].members.super.modlist.data)(this) + 4) != 0x29 )
        {
          v5 = ((int (__thiscall *)(TESObjectCELL **))(*this)[4].members.super.modlist.next)(this);
          sub_4F0600(v5);
        }
      }
    }
  }
}
