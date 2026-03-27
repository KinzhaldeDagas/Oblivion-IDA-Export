void __thiscall sub_7C3850(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // esi
  int *v4; // ebp
  NiTPointerList__BSImageSpaceShader *v5; // ebp
  int v6; // esi
  int v7; // edi

  v2 = *(this + 0xC);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 0xC) = 0;
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0xD));
  v3 = (_DWORD *)*(this + 9);
  while ( v3 )
  {
    v4 = (int *)v3[2];
    v3 = (_DWORD *)*v3;
    if ( v4 )
    {
      sub_812D60(v4);
      FormHeapFree((unsigned int)v4);
    }
  }
  v5 = (NiTPointerList__BSImageSpaceShader *)(this + 8);
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 8));
  v6 = *(this + 0xC);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 0xC) = 0;
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0xD));
  NiTList<long>::~NiTList<long>((NiTPointerList__BSImageSpaceShader *)(this + 0xD));
  v7 = *(this + 0xC);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  NiTPointerList<TallGrassGroup *>::~NiTPointerList<TallGrassGroup *>(v5);
}
