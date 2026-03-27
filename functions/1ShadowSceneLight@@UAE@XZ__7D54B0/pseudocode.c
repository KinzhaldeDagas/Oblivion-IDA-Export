void __thiscall ShadowSceneLight::~ShadowSceneLight(ShadowSceneLight *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi

  *(_DWORD *)this = &ShadowSceneLight::`vftable';
  sub_7D21F0(this);
  v2 = *((_DWORD *)this + 0x3E);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x3E) = 0;
  }
  v4 = *((_DWORD *)this + 0x40);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x40) = 0;
  }
  if ( *((_DWORD *)this + 0x45) )
    BSTextureManager_DiscardShadowMap(g_textureManager, *((_DWORD *)this + 0x45));
  v5 = *((_DWORD *)this + 0x45);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x45) = 0;
  }
  *((_WORD *)this + 0x8C) = 0;
  v6 = *((_DWORD *)this + 0x47);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0x47) = 0;
  }
  v7 = *((_DWORD *)this + 0x53);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0x53) = 0;
  }
  v8 = *((_DWORD *)this + 0x4C);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *((_DWORD *)this + 0x4C) = 0;
  }
  *((_DWORD *)this + 0x51) = 0;
  v9 = *((_DWORD *)this + 0x52);
  if ( v9 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    *((_DWORD *)this + 0x52) = 0;
  }
  v10 = *((_DWORD *)this + 0x53);
  if ( v10 )
  {
    if ( !v3((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *((_DWORD *)this + 0x52);
  if ( v11 )
  {
    if ( !v3((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  NiTPointerList<NiPointer<NiAVObject>>::~NiTPointerList<NiPointer<NiAVObject>>((NiTPointerList__BSImageSpaceShader *)this + 0xB);
  v12 = *((_DWORD *)this + 0x4C);
  if ( v12 )
  {
    if ( !v3((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  v13 = *((_DWORD *)this + 0x47);
  if ( v13 )
  {
    if ( !v3((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
  }
  v14 = *((_DWORD *)this + 0x45);
  if ( v14 )
  {
    if ( !v3((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
  }
  v15 = *((_DWORD *)this + 0x40);
  if ( v15 )
  {
    if ( !v3((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
  }
  v16 = *((_DWORD *)this + 0x3E);
  if ( v16 )
  {
    if ( !v3((volatile LONG *)(v16 + 4)) )
      (**(void (__thiscall ***)(int, int))v16)(v16, 1);
  }
  NiTPointerList<NiPointer<NiTriBasedGeom>>::~NiTPointerList<NiPointer<NiTriBasedGeom>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xE4));
  *(_DWORD *)this = &NiRefObject::`vftable';
  v3(&NiRefObject_objcount);
}
