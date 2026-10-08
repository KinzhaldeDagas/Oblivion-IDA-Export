void __thiscall NiD3DShaderProgramFactory::~NiD3DShaderProgramFactory(NiD3DShaderProgramFactory *this)
{
  _DWORD *v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD *v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  v2 = *((_DWORD **)this + 6); /*0x77f603*/
  *(_DWORD *)this = &NiD3DShaderProgramFactory::`vftable'; /*0x77f609*/
  if ( v2 ) /*0x77f60f*/
    NiTMap_Clear(v2); /*0x77f611*/
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 6); /*0x77f616*/
  if ( v3 ) /*0x77f61b*/
    (**v3)(v3, 1); /*0x77f623*/
  v4 = *((_DWORD **)this + 7); /*0x77f625*/
  if ( v4 ) /*0x77f62a*/
    NiTMap_Clear(v4); /*0x77f62c*/
  v5 = *((void (__thiscall ****)(_DWORD, int))this + 7); /*0x77f631*/
  if ( v5 ) /*0x77f636*/
    (**v5)(v5, 1); /*0x77f63e*/
  sub_77F460(this); /*0x77f642*/
  *((_DWORD *)this + 2) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable'; /*0x77f64c*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 8)); /*0x77f652*/
  *((_DWORD *)this + 2) = &NiTListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable'; /*0x77f657*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x77f662*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x77f668*/
}
