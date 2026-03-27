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

  NiNode::NiNode((NiNode *)this, 0);
  *(_DWORD *)this = &ShadowSceneNode::`vftable';
  *((_DWORD *)this + 0x37) = 0;
  *((_DWORD *)this + 0x3C) = 0;
  *((_DWORD *)this + 0x3A) = 0;
  *((_DWORD *)this + 0x3B) = 0;
  *((_DWORD *)this + 0x39) = &NiTPointerList<NiPointer<ShadowSceneLight>>::`vftable';
  *((_DWORD *)this + 0x40) = 0;
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  *((_DWORD *)this + 0x3D) = &NiTPointerList<NiPointer<ShadowSceneLight>>::`vftable';
  *((_DWORD *)this + 0x44) = 0;
  *((_DWORD *)this + 0x45) = 0;
  *((_DWORD *)this + 0x48) = 0;
  *((_DWORD *)this + 0x49) = 0;
  NiObjectNET_SetName((NiObjectNET *)this, "shadow scene node");
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xE4));
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xF4));
  *((_DWORD *)this + 0x46) = 0;
  v2 = *((_DWORD *)this + 0x48);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x48) = 0;
  }
  v3 = *((_DWORD *)this + 0x37);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x37) = 0;
  }
  *((_WORD *)this + 0x70) = 0xFFFF;
  *((_DWORD *)this + 0x4A) = 0;
  *((_BYTE *)this + 0x12C) = 0;
  v4 = (ShadowSceneLight *)FormHeapAlloc(0x220u);
  if ( v4 )
    v5 = ShadowSceneLight::ShadowSceneLight(v4);
  else
    v5 = 0;
  v6 = *((volatile LONG **)this + 0x44);
  if ( v6 != (volatile LONG *)v5 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement(v6 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
    *((_DWORD *)this + 0x44) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)v5 + 1);
  }
  v7 = (ShadowSceneLight *)FormHeapAlloc(0x220u);
  if ( v7 )
    v8 = ShadowSceneLight::ShadowSceneLight(v7);
  else
    v8 = 0;
  v9 = *((volatile LONG **)this + 0x45);
  if ( v9 != (volatile LONG *)v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement(v9 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
    }
    *((_DWORD *)this + 0x45) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)v8 + 1);
  }
  *((_DWORD *)this + 0x42) = 0;
  *((_DWORD *)this + 0x43) = 0;
  return this;
}
