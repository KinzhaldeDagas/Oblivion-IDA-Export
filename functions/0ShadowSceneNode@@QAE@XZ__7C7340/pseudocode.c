// ShadowSceneNode constructor. Initializes full list (+0xE4..+0xF0), active list (+0xF4..+0x100), iterator/partition anchors, and persistent lights at +0x110/+0x114.
ShadowSceneNode *__thiscall ShadowSceneNode::ShadowSceneNode(ShadowSceneNode *this)
{
  int v2; // edi
  int v3; // edi
  ShadowSceneLight *v4; // eax
  ShadowSceneLight *v5; // ebp
  volatile LONG *v6; // edi
  ShadowSceneLight *v7; // eax
  ShadowSceneLight *v8; // ebp
  volatile LONG *v9; // edi

  NiNode::NiNode((NiNode *)this, 0); /*0x7c7370*/
  *(_DWORD *)this = &ShadowSceneNode::`vftable'; /*0x7c7375*/
  *((_DWORD *)this + 0x37) = 0; /*0x7c737f*/
  *((_DWORD *)this + 0x3C) = 0; /*0x7c738b*/
  *((_DWORD *)this + 0x3A) = 0; /*0x7c738e*/
  *((_DWORD *)this + 0x3B) = 0; /*0x7c7391*/
  *((_DWORD *)this + 0x39) = &NiTPointerList<NiPointer<ShadowSceneLight>>::`vftable'; /*0x7c7394*/
  *((_DWORD *)this + 0x40) = 0; /*0x7c73a0*/
  *((_DWORD *)this + 0x3E) = 0; /*0x7c73a3*/
  *((_DWORD *)this + 0x3F) = 0; /*0x7c73a6*/
  *((_DWORD *)this + 0x3D) = &NiTPointerList<NiPointer<ShadowSceneLight>>::`vftable'; /*0x7c73a9*/
  *((_DWORD *)this + 0x44) = 0; /*0x7c73b0*/
  *((_DWORD *)this + 0x45) = 0; /*0x7c73b6*/
  *((_DWORD *)this + 0x48) = 0; /*0x7c73bc*/
  *((_DWORD *)this + 0x49) = 0; /*0x7c73c2*/
  NiObjectNET_SetName((NiObjectNET *)this, "shadow scene node"); /*0x7c73d4*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xE4)); /*0x7c73db*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xF4)); /*0x7c73e2*/
  *((_DWORD *)this + 0x46) = 0; /*0x7c73e7*/
  v2 = *((_DWORD *)this + 0x48); /*0x7c73ed*/
  if ( v2 ) /*0x7c73f5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7c73fb*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c7411*/
    *((_DWORD *)this + 0x48) = 0; /*0x7c7413*/
  }
  v3 = *((_DWORD *)this + 0x37); /*0x7c7419*/
  if ( v3 ) /*0x7c7421*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7c7427*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7c743d*/
    *((_DWORD *)this + 0x37) = 0; /*0x7c743f*/
  }
  *((_WORD *)this + 0x70) = 0xFFFF; /*0x7c744a*/
  *((_DWORD *)this + 0x4A) = 0; /*0x7c7453*/
  *((_BYTE *)this + 0x12C) = 0; /*0x7c7459*/
  v4 = (ShadowSceneLight *)FormHeapAlloc(0x220u); /*0x7c745f*/
  if ( v4 ) /*0x7c7472*/
    v5 = ShadowSceneLight::ShadowSceneLight(v4);// Construct the first persistent ShadowSceneNode-owned ShadowSceneLight stored at node+0x110; no post-construction unresolved-field writes occur here. /*0x7c747b*/
  else
    v5 = 0; /*0x7c747f*/
  v6 = *((volatile LONG **)this + 0x44); /*0x7c7481*/
  if ( v6 != (volatile LONG *)v5 ) /*0x7c748e*/
  {
    if ( v6 ) /*0x7c7492*/
    {
      if ( !InterlockedDecrement(v6 + 1) ) /*0x7c7498*/
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x7c74ae*/
    }
    *((_DWORD *)this + 0x44) = v5; /*0x7c74b2*/
    if ( v5 ) /*0x7c74b8*/
      InterlockedIncrement((volatile LONG *)v5 + 1); /*0x7c74be*/
  }
  v7 = (ShadowSceneLight *)FormHeapAlloc(0x220u); /*0x7c74c9*/
  if ( v7 ) /*0x7c74dc*/
    v8 = ShadowSceneLight::ShadowSceneLight(v7);// Construct the second persistent ShadowSceneNode-owned ShadowSceneLight stored at node+0x114; no post-construction unresolved-field writes occur here. /*0x7c74e5*/
  else
    v8 = 0; /*0x7c74e9*/
  v9 = *((volatile LONG **)this + 0x45); /*0x7c74eb*/
  if ( v9 != (volatile LONG *)v8 ) /*0x7c74f8*/
  {
    if ( v9 ) /*0x7c74fc*/
    {
      if ( !InterlockedDecrement(v9 + 1) ) /*0x7c7502*/
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x7c7518*/
    }
    *((_DWORD *)this + 0x45) = v8; /*0x7c751c*/
    if ( v8 ) /*0x7c7522*/
      InterlockedIncrement((volatile LONG *)v8 + 1); /*0x7c7528*/
  }
  *((_DWORD *)this + 0x42) = 0; /*0x7c752e*/
  *((_DWORD *)this + 0x43) = 0; /*0x7c7534*/
  return this; /*0x7c753c*/
}
