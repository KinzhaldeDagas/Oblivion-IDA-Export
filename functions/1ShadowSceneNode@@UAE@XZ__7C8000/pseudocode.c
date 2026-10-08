// ShadowSceneNode destructor. Clears registration and tears down owned light lists, persistent lights, target, cube camera, and helper state.
void __thiscall ShadowSceneNode::~ShadowSceneNode(ShadowSceneNode *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi

  *(_DWORD *)this = &ShadowSceneNode::`vftable'; /*0x7c802b*/
  if ( (ShadowSceneNode *)GetShadowSceneNode(*((unsigned __int8 *)this + 0x11C)) == this ) /*0x7c804d*/
    sub_7B4270(*((unsigned __int8 *)this + 0x11C), 0); /*0x7c8058*/
  ShadowSceneNode_TeardownLightLists(this); /*0x7c8062*/
  v2 = *((_DWORD *)this + 0x44); /*0x7c8067*/
  v3 = InterlockedDecrement; /*0x7c806f*/
  if ( v2 ) /*0x7c8075*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7c807b*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c808d*/
    *((_DWORD *)this + 0x44) = 0; /*0x7c808f*/
  }
  v4 = *((_DWORD *)this + 0x45); /*0x7c8095*/
  if ( v4 ) /*0x7c809d*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7c80a3*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7c80b5*/
    *((_DWORD *)this + 0x45) = 0; /*0x7c80b7*/
  }
  v5 = *((void (__thiscall ****)(_DWORD, int))this + 0x46); /*0x7c80bd*/
  if ( v5 ) /*0x7c80c5*/
    (**v5)(v5, 1); /*0x7c80cd*/
  if ( *((_DWORD *)this + 0x48) ) /*0x7c80cf*/
    BSTextureManager__ReturnRenderedTexture( /*0x7c80e0*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
      *((BSRenderedTexture **)this + 0x48));
  v6 = *((_DWORD *)this + 0x48); /*0x7c80e5*/
  if ( v6 ) /*0x7c80ed*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x7c80f3*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c8105*/
    *((_DWORD *)this + 0x48) = 0; /*0x7c8107*/
  }
  v7 = *((_DWORD *)this + 0x37); /*0x7c810d*/
  if ( v7 ) /*0x7c8115*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x7c811b*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c812d*/
    *((_DWORD *)this + 0x37) = 0; /*0x7c812f*/
  }
  v8 = *((_DWORD *)this + 0x49); /*0x7c8135*/
  if ( v8 ) /*0x7c8142*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x7c8148*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7c815a*/
  }
  v9 = *((_DWORD *)this + 0x48); /*0x7c815c*/
  if ( v9 ) /*0x7c8169*/
  {
    if ( !v3((volatile LONG *)(v9 + 4)) ) /*0x7c816f*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7c8181*/
  }
  v10 = *((_DWORD *)this + 0x45); /*0x7c8183*/
  if ( v10 ) /*0x7c8190*/
  {
    if ( !v3((volatile LONG *)(v10 + 4)) ) /*0x7c8196*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7c81a8*/
  }
  v11 = *((_DWORD *)this + 0x44); /*0x7c81aa*/
  if ( v11 ) /*0x7c81b7*/
  {
    if ( !v3((volatile LONG *)(v11 + 4)) ) /*0x7c81bd*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7c81cf*/
  }
  NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xF4)); /*0x7c81dc*/
  NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xE4)); /*0x7c81ec*/
  v12 = *((_DWORD *)this + 0x37); /*0x7c81f1*/
  if ( v12 ) /*0x7c81fd*/
  {
    if ( !v3((volatile LONG *)(v12 + 4)) ) /*0x7c8203*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7c8215*/
  }
  NiBSPNode::~NiBSPNode(this); /*0x7c8221*/
}
