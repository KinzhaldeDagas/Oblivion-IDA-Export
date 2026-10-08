TESObjectREFR *__thiscall sub_5E1880(TESObjectREFR *this, char a2)
{
  LowProcess *v3; // eax
  LowProcess *v4; // eax
  double v5; // st7
  float z; // edx

  MobilObject_constr(this); /*0x5e18ad*/
  MagicCaster_constr((_DWORD *)this + 0x17); /*0x5e18bd*/
  MagicTarget_constr((MagicTarget *)this + 0xD); /*0x5e18cc*/
  this->vtbl = (TESObjectREFRVtbl *)&Actor::`vftable'{for `Actor'}; /*0x5e18dc*/
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Actor::`vftable'{for `TESChildCell'}; /*0x5e18e2*/
  *((_DWORD *)this + 0x17) = &Actor::`vftable'{for `MagicCaster'}; /*0x5e18e9*/
  *((_DWORD *)this + 0x1A) = &Actor::`vftable'{for `MagicTarget'}; /*0x5e18ef*/
  AVCollection_Constr((AVCollection *)((char *)this + 0x88)); /*0x5e18f6*/
  *((_DWORD *)this + 0x27) = 0; /*0x5e18fb*/
  *((_DWORD *)this + 0x28) = 0; /*0x5e1901*/
  *((_DWORD *)this + 0x29) = 0; /*0x5e1907*/
  *((_DWORD *)this + 0x2A) = 0; /*0x5e190d*/
  *((_DWORD *)this + 0x2D) = 0; /*0x5e1913*/
  *((_DWORD *)this + 0x2E) = 0; /*0x5e1919*/
  this->member.super.flags |= 0x200000u; /*0x5e191f*/
  v3 = (LowProcess *)FormHeapAlloc(0x90u); /*0x5e1930*/
  if ( v3 ) /*0x5e1943*/
    v4 = LowProcess::LowProcess(v3); /*0x5e1947*/
  else
    v4 = 0; /*0x5e194e*/
  *((_DWORD *)this + 0x16) = v4; /*0x5e1959*/
  if ( a2 ) /*0x5e195c*/
    ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], (MobileObject *)this, 3, 0, 0, 0); /*0x5e1969*/
  v5 = kTerrainLODQuadRayDirectionZ; /*0x5e196e*/
  *((_DWORD *)this + 0x39) = 0; /*0x5e1974*/
  *((float *)this + 0x2F) = v5; /*0x5e197a*/
  *((_DWORD *)this + 0x2C) = 0; /*0x5e1980*/
  *((_BYTE *)this + 0xC0) = 0; /*0x5e1988*/
  *((float *)this + 0x1D) = 0.0; /*0x5e198e*/
  *((_DWORD *)this + 0x1C) = 7; /*0x5e1991*/
  *((float *)this + 0x2B) = 0.0; /*0x5e1998*/
  *((_BYTE *)this + 0x78) = 1; /*0x5e199e*/
  *((float *)this + 0x37) = 0.0; /*0x5e19a2*/
  *((_BYTE *)this + 0xC9) = 0; /*0x5e19a8*/
  *((float *)this + 0x40) = 0.0; /*0x5e19ae*/
  *((_BYTE *)this + 0xC8) = 0; /*0x5e19b4*/
  *((float *)this + 0x3D) = 0.0; /*0x5e19ba*/
  *((_DWORD *)this + 0x1F) = 0; /*0x5e19c0*/
  *((_DWORD *)this + 0x34) = 0; /*0x5e19c3*/
  *((_DWORD *)this + 0x35) = 0; /*0x5e19c9*/
  *((_BYTE *)this + 0xCA) = 1; /*0x5e19cf*/
  *((_DWORD *)this + 0x33) = 0; /*0x5e19d6*/
  *((_BYTE *)this + 0xD8) = 0; /*0x5e19dc*/
  *((_BYTE *)this + 0xE0) = 1; /*0x5e19e2*/
  *((_DWORD *)this + 0x31) = 0; /*0x5e19e9*/
  *((_DWORD *)this + 0x3E) = 0; /*0x5e19ef*/
  *((_DWORD *)this + 0x3A) = LODWORD(g_zeroNiPoint3.x); /*0x5e19fa*/
  *((_DWORD *)this + 0x3B) = LODWORD(g_zeroNiPoint3.y); /*0x5e1a06*/
  z = g_zeroNiPoint3.z; /*0x5e1a0c*/
  *((float *)this + 0x21) = 0.0; /*0x5e1a12*/
  *((float *)this + 0x3C) = z; /*0x5e1a18*/
  *((_DWORD *)this + 0x39) = 0; /*0x5e1a1e*/
  *((_BYTE *)this + 0xFC) = 0; /*0x5e1a24*/
  *((_BYTE *)this + 0xFD) = 1; /*0x5e1a2a*/
  return this; /*0x5e1a33*/
}
