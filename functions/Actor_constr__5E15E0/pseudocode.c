TESObjectREFR *__thiscall Actor_constr(TESObjectREFR *this)
{
  LowProcess *v2; // eax
  LowProcess *v3; // eax

  MobilObject_constr(this); /*0x5e160d*/
  MagicCaster_constr((_DWORD *)this + 0x17); /*0x5e161d*/
  MagicTarget_constr((MagicTarget *)this + 0xD); /*0x5e162c*/
  this->vtbl = (TESObjectREFRVtbl *)&Actor::`vftable'{for `Actor'}; /*0x5e163c*/
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Actor::`vftable'{for `TESChildCell'}; /*0x5e1642*/
  *((_DWORD *)this + 0x17) = &Actor::`vftable'{for `MagicCaster'}; /*0x5e1649*/
  *((_DWORD *)this + 0x1A) = &Actor::`vftable'{for `MagicTarget'}; /*0x5e164f*/
  AVCollection_Constr((AVCollection *)((char *)this + 0x88)); /*0x5e1656*/
  *((_DWORD *)this + 0x27) = 0; /*0x5e165b*/
  *((_DWORD *)this + 0x28) = 0; /*0x5e1661*/
  *((_DWORD *)this + 0x29) = 0; /*0x5e1667*/
  *((_DWORD *)this + 0x2A) = 0; /*0x5e166d*/
  *((_DWORD *)this + 0x2D) = 0; /*0x5e1673*/
  *((_DWORD *)this + 0x2E) = 0; /*0x5e1679*/
  this->member.super.flags |= 0x200000u; /*0x5e167f*/
  v2 = (LowProcess *)FormHeapAlloc(0x90u); /*0x5e1690*/
  if ( v2 ) /*0x5e16a3*/
    v3 = LowProcess::LowProcess(v2); /*0x5e16a7*/
  else
    v3 = 0; /*0x5e16ae*/
  *((_DWORD *)this + 0x16) = v3; /*0x5e16c0*/
  ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], (MobileObject *)this, 3, 0, 0, 0); /*0x5e16c3*/
  *((float *)this + 0x2F) = kTerrainLODQuadRayDirectionZ; /*0x5e16ce*/
  *((_DWORD *)this + 0x2C) = 0; /*0x5e16d4*/
  *((_BYTE *)this + 0xC0) = 0; /*0x5e16dc*/
  *((float *)this + 0x1D) = 0.0; /*0x5e16e2*/
  *((_DWORD *)this + 0x1C) = 7; /*0x5e16e5*/
  *((float *)this + 0x2B) = 0.0; /*0x5e16ec*/
  *((_BYTE *)this + 0x78) = 1; /*0x5e16f2*/
  *((float *)this + 0x37) = 0.0; /*0x5e16f6*/
  *((_BYTE *)this + 0x80) = 0; /*0x5e16fc*/
  *((float *)this + 0x40) = 0.0; /*0x5e1702*/
  *((_BYTE *)this + 0xC9) = 0; /*0x5e1708*/
  *((float *)this + 0x3D) = 0.0; /*0x5e170e*/
  *((_BYTE *)this + 0xC8) = 0; /*0x5e1714*/
  *((_DWORD *)this + 0x1F) = 0; /*0x5e171a*/
  *((_DWORD *)this + 0x39) = 0; /*0x5e171d*/
  *((_DWORD *)this + 0x34) = 0; /*0x5e1723*/
  *((_DWORD *)this + 0x35) = 0; /*0x5e1729*/
  *((_BYTE *)this + 0xCA) = 1; /*0x5e172f*/
  *((_DWORD *)this + 0x33) = 0; /*0x5e1736*/
  *((_BYTE *)this + 0xE0) = 1; /*0x5e173c*/
  *((_DWORD *)this + 0x31) = 0; /*0x5e1743*/
  *((_DWORD *)this + 0x3E) = 0; /*0x5e1749*/
  *((_DWORD *)this + 0x3A) = LODWORD(g_zeroNiPoint3.x); /*0x5e1754*/
  *((_DWORD *)this + 0x3B) = LODWORD(g_zeroNiPoint3.y); /*0x5e1760*/
  *((_DWORD *)this + 0x3C) = LODWORD(g_zeroNiPoint3.z); /*0x5e176c*/
  *((_BYTE *)this + 0xFC) = 0; /*0x5e1772*/
  *((_BYTE *)this + 0xFD) = 1; /*0x5e1778*/
  return this; /*0x5e1781*/
}
