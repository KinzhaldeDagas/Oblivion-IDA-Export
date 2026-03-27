void __thiscall NiD3DShaderProgramFactory::~NiD3DShaderProgramFactory(NiD3DShaderProgramFactory *this)
{
  _DWORD *v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD *v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  v2 = *((_DWORD **)this + 6);
  *(_DWORD *)this = &NiD3DShaderProgramFactory::`vftable';
  if ( v2 )
    NiTMap_Clear(v2);
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 6);
  if ( v3 )
    (**v3)(v3, 1);
  v4 = *((_DWORD **)this + 7);
  if ( v4 )
    NiTMap_Clear(v4);
  v5 = *((void (__thiscall ****)(_DWORD, int))this + 7);
  if ( v5 )
    (**v5)(v5, 1);
  sub_77F460(this);
  *((_DWORD *)this + 2) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable';
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 8));
  *((_DWORD *)this + 2) = &NiTListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable';
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
