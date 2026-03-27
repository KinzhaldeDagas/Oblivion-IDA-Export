TESObjectREFR *__thiscall sub_6078E0(TESObjectREFR *this)
{
  HighProcess *v2; // eax
  HighProcess *v3; // eax

  MobilObject_constr(this);
  this->member.super.flags |= 0x200000u;
  this->vtbl = (TESObjectREFRVtbl *)&ArrowProjectile::`vftable'{for `ArrowProjectile'};
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&ArrowProjectile::`vftable'{for `TESChildCell'};
  v2 = (HighProcess *)FormHeapAlloc(0x2ECu);
  if ( v2 )
    v3 = HighProcess::HighProcess(v2);
  else
    v3 = 0;
  *((_DWORD *)this + 0x16) = v3;
  *((_DWORD *)this + 0x17) = 0;
  *((_BYTE *)this + 0x94) = 0;
  *((_DWORD *)this + 0x26) = 0;
  *((_BYTE *)this + 0x95) = 0;
  *((_BYTE *)this + 0x97) = 0;
  ++dword_B3B7D0;
  return this;
}
