void __thiscall NonActorMagicCaster::~NonActorMagicCaster(NonActorMagicCaster *this)
{
  _DWORD *v2; // edi
  TESChildCELL *v3; // ecx

  v2 = (_DWORD *)((char *)this + 0xC); /*0x6a323b*/
  *(_DWORD *)this = &NonActorMagicCaster::`vftable'{for `NonActorMagicCaster'}; /*0x6a323e*/
  *((_DWORD *)this + 3) = &NonActorMagicCaster::`vftable'{for `MagicCaster'}; /*0x6a3244*/
  if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x6a324f*/
  {
    v3 = *((TESChildCELL **)this + 8); /*0x6a3261*/
    if ( v3 ) /*0x6a3266*/
      TESOjectREFR_stuffsWithPArentCell(v3); /*0x6a3268*/
    sub_6A3060((char *)this); /*0x6a326f*/
  }
  MagicCaster_destr(v2); /*0x6a327b*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x6a3280*/
}
