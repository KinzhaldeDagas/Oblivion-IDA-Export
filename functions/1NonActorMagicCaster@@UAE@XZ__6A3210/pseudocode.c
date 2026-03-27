void __thiscall NonActorMagicCaster::~NonActorMagicCaster(NonActorMagicCaster *this)
{
  _DWORD *v2; // edi
  TESChildCELL *v3; // ecx

  v2 = (_DWORD *)((char *)this + 0xC);
  *(_DWORD *)this = &NonActorMagicCaster::`vftable'{for `NonActorMagicCaster'};
  *((_DWORD *)this + 3) = &NonActorMagicCaster::`vftable'{for `MagicCaster'};
  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
  {
    v3 = *((TESChildCELL **)this + 8);
    if ( v3 )
      TESOjectREFR_stuffsWithPArentCell(v3);
    sub_6A3060((char *)this);
  }
  MagicCaster_destr(v2);
  *(_DWORD *)this = &BSExtraData::`vftable';
}
