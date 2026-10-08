// ShadowSceneLight destructor. Clears property associations before releasing backing light, shadow map, camera, exact caster root, fence, and list storage.
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

  *(_DWORD *)this = &ShadowSceneLight::`vftable'; /*0x7d54db*/
  ShadowSceneLight_ClearReceiverAssociations(this); /*0x7d54e9*/
  v2 = *((_DWORD *)this + 0x3E); /*0x7d54ee*/
  v3 = InterlockedDecrement; /*0x7d54f4*/
  if ( v2 ) /*0x7d54fe*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7d5504*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7d5516*/
    *((_DWORD *)this + 0x3E) = 0; /*0x7d5518*/
  }
  v4 = *((_DWORD *)this + 0x40); /*0x7d551e*/
  if ( v4 ) /*0x7d5526*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7d552c*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7d553e*/
    *((_DWORD *)this + 0x40) = 0; /*0x7d5540*/
  }
  if ( *((_DWORD *)this + 0x45) ) /*0x7d5546*/
    BSTextureManager__ReturnFrustumShadowTexture( /*0x7d5557*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
      *((_DWORD *)this + 0x45));
  v5 = *((_DWORD *)this + 0x45); /*0x7d555c*/
  if ( v5 ) /*0x7d5564*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7d556a*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7d557c*/
    *((_DWORD *)this + 0x45) = 0; /*0x7d557e*/
  }
  *((_WORD *)this + 0x8C) = 0; /*0x7d5584*/
  v6 = *((_DWORD *)this + 0x47); /*0x7d558b*/
  if ( v6 ) /*0x7d5593*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x7d5599*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7d55ab*/
    *((_DWORD *)this + 0x47) = 0; /*0x7d55ad*/
  }
  v7 = *((_DWORD *)this + 0x53); /*0x7d55b3*/
  if ( v7 ) /*0x7d55bb*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x7d55c1*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7d55d3*/
    *((_DWORD *)this + 0x53) = 0; /*0x7d55d5*/
  }
  v8 = *((_DWORD *)this + 0x4C); /*0x7d55db*/
  if ( v8 ) /*0x7d55e3*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x7d55e9*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7d55fb*/
    *((_DWORD *)this + 0x4C) = 0; /*0x7d55fd*/
  }
  *((_DWORD *)this + 0x51) = 0; /*0x7d5603*/
  v9 = *((_DWORD *)this + 0x52); /*0x7d5609*/
  if ( v9 ) /*0x7d5611*/
  {
    if ( !v3((volatile LONG *)(v9 + 4)) ) /*0x7d5617*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7d5629*/
    *((_DWORD *)this + 0x52) = 0; /*0x7d562b*/
  }
  v10 = *((_DWORD *)this + 0x53); /*0x7d5631*/
  if ( v10 ) /*0x7d563e*/
  {
    if ( !v3((volatile LONG *)(v10 + 4)) ) /*0x7d5644*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7d5656*/
  }
  v11 = *((_DWORD *)this + 0x52); /*0x7d5658*/
  if ( v11 ) /*0x7d5665*/
  {
    if ( !v3((volatile LONG *)(v11 + 4)) ) /*0x7d566b*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7d567d*/
  }
  NiTPointerList<NiPointer<NiAVObject>>::~NiTPointerList<NiPointer<NiAVObject>>((NiTPointerList__BSImageSpaceShader *)this + 0xB); /*0x7d568a*/
  v12 = *((_DWORD *)this + 0x4C); /*0x7d568f*/
  if ( v12 ) /*0x7d569c*/
  {
    if ( !v3((volatile LONG *)(v12 + 4)) ) /*0x7d56a2*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7d56b4*/
  }
  v13 = *((_DWORD *)this + 0x47); /*0x7d56b6*/
  if ( v13 ) /*0x7d56c3*/
  {
    if ( !v3((volatile LONG *)(v13 + 4)) ) /*0x7d56c9*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7d56db*/
  }
  v14 = *((_DWORD *)this + 0x45); /*0x7d56dd*/
  if ( v14 ) /*0x7d56ea*/
  {
    if ( !v3((volatile LONG *)(v14 + 4)) ) /*0x7d56f0*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7d5702*/
  }
  v15 = *((_DWORD *)this + 0x40); /*0x7d5704*/
  if ( v15 ) /*0x7d5711*/
  {
    if ( !v3((volatile LONG *)(v15 + 4)) ) /*0x7d5717*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7d5729*/
  }
  v16 = *((_DWORD *)this + 0x3E); /*0x7d572b*/
  if ( v16 ) /*0x7d5738*/
  {
    if ( !v3((volatile LONG *)(v16 + 4)) ) /*0x7d573e*/
      (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x7d5750*/
  }
  NiTPointerList<NiPointer<NiTriBasedGeom>>::~NiTPointerList<NiPointer<NiTriBasedGeom>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xE4)); /*0x7d575c*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7d5766*/
  v3((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x7d576c*/
}
