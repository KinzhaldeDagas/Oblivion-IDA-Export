ShadowSceneLight *__thiscall ShadowSceneLight::ShadowSceneLight(ShadowSceneLight *this)
{
  NiFrustumPlanes *v2; // edi
  int i; // ebp
  double v4; // st7
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  double v10; // st6
  double v11; // st5
  int v12; // edi
  int v13; // edi
  int v14; // edi

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &ShadowSceneLight::`vftable';
  *((_DWORD *)this + 0x3C) = 0;
  *((_DWORD *)this + 0x3A) = 0;
  *((_DWORD *)this + 0x3B) = 0;
  *((_DWORD *)this + 0x39) = &NiTPointerList<NiPointer<NiTriBasedGeom>>::`vftable';
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x40) = 0;
  *((_DWORD *)this + 0x45) = 0;
  *((_DWORD *)this + 0x47) = 0;
  *((_DWORD *)this + 0x4C) = 0;
  *((_DWORD *)this + 0x50) = 0;
  *((_DWORD *)this + 0x4E) = 0;
  *((_DWORD *)this + 0x4F) = 0;
  *((_DWORD *)this + 0x4D) = &NiTPointerList<NiPointer<NiAVObject>>::`vftable';
  *((_DWORD *)this + 0x52) = 0;
  *((_DWORD *)this + 0x53) = 0;
  v2 = (NiFrustumPlanes *)((char *)this + 0x150);
  for ( i = 5; i >= 0; --i )
  {
    sub_716DB0(v2);
    v2 = (NiFrustumPlanes *)((char *)v2 + 0x10);
  }
  v4 = 0.0;
  v5 = InterlockedDecrement;
  *((_DWORD *)this + 0x6C) = 0x3F;
  *((float *)this + 0x34) = 0.0;
  *((float *)this + 0x35) = 0.0;
  *((_BYTE *)this + 0xF5) = 1;
  *((float *)this + 0x36) = 0.0;
  *((_BYTE *)this + 0xF4) = 0;
  *((_BYTE *)this + 0xFC) = 0;
  *((_BYTE *)this + 0x104) = 0;
  *((float *)this + 0x42) = Vector3_InitValue_;
  *((float *)this + 0x43) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x44) = dword_B3F9B0;
  *((_WORD *)this + 0x8C) = 0;
  v6 = *((_DWORD *)this + 0x3E);
  if ( v6 )
  {
    if ( !v5((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    v4 = 0.0;
    *((_DWORD *)this + 0x3E) = 0;
  }
  v7 = *((_DWORD *)this + 0x40);
  if ( v7 )
  {
    if ( !v5((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    v4 = 0.0;
    *((_DWORD *)this + 0x40) = 0;
  }
  v8 = *((_DWORD *)this + 0x47);
  if ( v8 )
  {
    if ( !v5((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    v4 = 0.0;
    *((_DWORD *)this + 0x47) = 0;
  }
  v9 = *((_DWORD *)this + 0x45);
  if ( v9 )
  {
    if ( !v5((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    v4 = 0.0;
    *((_DWORD *)this + 0x45) = 0;
  }
  *((float *)this + 0x12) = v4;
  *((float *)this + 0x11) = v4;
  *((float *)this + 0x10) = v4;
  *((float *)this + 0xF) = v4;
  *((float *)this + 0xD) = v4;
  *((float *)this + 0xC) = v4;
  *((float *)this + 0xB) = v4;
  *((float *)this + 0xA) = v4;
  *((float *)this + 8) = v4;
  *((float *)this + 7) = v4;
  *((float *)this + 6) = v4;
  *((float *)this + 5) = v4;
  v10 = 1.0;
  *((float *)this + 0x13) = 1.0;
  *((float *)this + 0xE) = 1.0;
  *((float *)this + 9) = 1.0;
  *((float *)this + 4) = 1.0;
  v11 = flt_A430CC;
  *((_BYTE *)this + 0xF5) = 0;
  *((float *)this + 0x49) = v11;
  *((_BYTE *)this + 0x120) = 0;
  *((_BYTE *)this + 0x12C) = 0;
  *((float *)this + 0x4A) = 1.0;
  v12 = *((_DWORD *)this + 0x4C);
  if ( v12 )
  {
    if ( !v5((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    v4 = 0.0;
    *((_DWORD *)this + 0x4C) = 0;
    v10 = 1.0;
  }
  *((_DWORD *)this + 0x51) = 0;
  v13 = *((_DWORD *)this + 0x52);
  if ( v13 )
  {
    if ( !v5((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    v4 = 0.0;
    *((_DWORD *)this + 0x52) = 0;
    v10 = 1.0;
  }
  v14 = *((_DWORD *)this + 0x53);
  if ( v14 )
  {
    if ( !v5((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    v4 = 0.0;
    *((_DWORD *)this + 0x53) = 0;
    v10 = 1.0;
  }
  *((float *)this + 0x38) = v4;
  *((float *)this + 0x37) = v10;
  *((_BYTE *)this + 0x214) = 0;
  _memset((char *)this + 0x1B4, 0, 0x60);
  return this;
}
