TESObjectREFR *__thiscall Actor_constr(TESObjectREFR *this)
{
  LowProcess *v2; // eax
  LowProcess *v3; // eax

  MobilObject_constr(this);
  MagicCaster_constr((_DWORD *)this + 0x17);
  MagicTarget_constr((_BYTE *)this + 0x68);
  this->vtbl = (TESObjectREFRVtbl *)&Actor::`vftable'{for `Actor'};
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Actor::`vftable'{for `TESChildCell'};
  *((_DWORD *)this + 0x17) = &Actor::`vftable'{for `MagicCaster'};
  *((_DWORD *)this + 0x1A) = &Actor::`vftable'{for `MagicTarget'};
  AVCollection_Constr((_DWORD *)this + 0x22);
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x28) = 0;
  *((_DWORD *)this + 0x29) = 0;
  *((_DWORD *)this + 0x2A) = 0;
  *((_DWORD *)this + 0x2D) = 0;
  *((_DWORD *)this + 0x2E) = 0;
  this->member.super.flags |= 0x200000u;
  v2 = (LowProcess *)FormHeapAlloc(0x90u);
  if ( v2 )
    v3 = LowProcess::LowProcess(v2);
  else
    v3 = 0;
  *((_DWORD *)this + 0x16) = v3;
  sub_673A90((int)this, 3, 0, 0, 0);
  *((float *)this + 0x2F) = flt_A30634;
  *((_DWORD *)this + 0x2C) = 0;
  *((_BYTE *)this + 0xC0) = 0;
  *((float *)this + 0x1D) = 0.0;
  *((_DWORD *)this + 0x1C) = 7;
  *((float *)this + 0x2B) = 0.0;
  *((_BYTE *)this + 0x78) = 1;
  *((float *)this + 0x37) = 0.0;
  *((_BYTE *)this + 0x80) = 0;
  *((float *)this + 0x40) = 0.0;
  *((_BYTE *)this + 0xC9) = 0;
  *((float *)this + 0x3D) = 0.0;
  *((_BYTE *)this + 0xC8) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x39) = 0;
  *((_DWORD *)this + 0x34) = 0;
  *((_DWORD *)this + 0x35) = 0;
  *((_BYTE *)this + 0xCA) = 1;
  *((_DWORD *)this + 0x33) = 0;
  *((_BYTE *)this + 0xE0) = 1;
  *((_DWORD *)this + 0x31) = 0;
  *((_DWORD *)this + 0x3E) = 0;
  *((float *)this + 0x3A) = Vector3_InitValue_;
  *((float *)this + 0x3B) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x3C) = dword_B3F9B0;
  *((_BYTE *)this + 0xFC) = 0;
  *((_BYTE *)this + 0xFD) = 1;
  return this;
}
