bool __thiscall sub_8BC9B0(NiRenderTargetGroup *this, int a2)
{
  bool result; // al
  NiDepthStencilBuffer *DepthStencilBuffer; // ebp
  unsigned int v6; // esi
  int v7; // ecx
  bool a2a; // [esp+14h] [ebp+4h]

  result = sub_731E60(this, a2);
  DepthStencilBuffer = this->members.DepthStencilBuffer;
  v6 = 0;
  a2a = result;
  if ( DepthStencilBuffer )
  {
    do
    {
      v7 = *((_DWORD *)&this->members.RenderTargets[2]->__vftable + v6);
      if ( v7 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x24))(v7, a2);
      ++v6;
    }
    while ( v6 < (unsigned int)DepthStencilBuffer );
    return a2a;
  }
  return result;
}
