void __thiscall sub_5893F0(_DWORD *this)
{
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (_DWORD *)*(this + 0xD);
  while ( v2 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))v2[2];
    v2 = (_DWORD *)*v2;
    if ( v3 )
      (**v3)(v3, 1);
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0xC));
}
