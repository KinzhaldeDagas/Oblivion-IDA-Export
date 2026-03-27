void __thiscall sub_7C7880(_DWORD *this)
{
  _DWORD *v2; // esi
  LONG v3; // eax

  v2 = (_DWORD *)*(this + 0x3E);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_DWORD *)*v2;
    if ( v3 )
      sub_7C77C0(this, v3);
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0x3D));
  *(this + 0x42) = 0;
  *(this + 0x43) = 0;
}
