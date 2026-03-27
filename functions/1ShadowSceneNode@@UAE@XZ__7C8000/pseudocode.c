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

  *(_DWORD *)this = &ShadowSceneNode::`vftable';
  if ( (ShadowSceneNode *)GetShadowSceneNode(*((unsigned __int8 *)this + 0x11C)) == this )
    sub_7B4270(*((unsigned __int8 *)this + 0x11C), 0);
  sub_7C7E50(this);
  v2 = *((_DWORD *)this + 0x44);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x44) = 0;
  }
  v4 = *((_DWORD *)this + 0x45);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x45) = 0;
  }
  v5 = *((void (__thiscall ****)(_DWORD, int))this + 0x46);
  if ( v5 )
    (**v5)(v5, 1);
  if ( *((_DWORD *)this + 0x48) )
    sub_7C1EE0(g_textureManager, *((BSRenderedTexture **)this + 0x48));
  v6 = *((_DWORD *)this + 0x48);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0x48) = 0;
  }
  v7 = *((_DWORD *)this + 0x37);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0x37) = 0;
  }
  v8 = *((_DWORD *)this + 0x49);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *((_DWORD *)this + 0x48);
  if ( v9 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *((_DWORD *)this + 0x45);
  if ( v10 )
  {
    if ( !v3((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *((_DWORD *)this + 0x44);
  if ( v11 )
  {
    if ( !v3((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xF4));
  NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0xE4));
  v12 = *((_DWORD *)this + 0x37);
  if ( v12 )
  {
    if ( !v3((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  NiBSPNode::~NiBSPNode(this);
}
