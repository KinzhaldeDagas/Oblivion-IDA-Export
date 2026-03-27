void __thiscall sub_7B3940(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // esi
  _DWORD *v4; // ebp
  NiTPointerList__BSImageSpaceShader *v5; // esi
  int v6; // edi

  v2 = *(this + 7);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 7) = 0;
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 8));
  v3 = (_DWORD *)*(this + 4);
  while ( v3 )
  {
    v4 = (_DWORD *)v3[2];
    v3 = (_DWORD *)*v3;
    if ( v4 )
    {
      sub_803210(v4);
      FormHeapFree((unsigned int)v4);
    }
  }
  v5 = (NiTPointerList__BSImageSpaceShader *)(this + 3);
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 3));
  NiTList<unsigned int>::~NiTList<unsigned int>((NiTPointerList__BSImageSpaceShader *)(this + 8));
  v6 = *(this + 7);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  NiTPointerList<DistantLODGroup *>::~NiTPointerList<DistantLODGroup *>(v5);
}
