bool __thiscall sub_8BC9B0(NiRenderTargetGroup *this, int a2)
{
  bool result; // al
  NiDepthStencilBuffer *DepthStencilBuffer; // ebp
  unsigned int v6; // esi
  int v7; // ecx
  bool a2a; // [esp+14h] [ebp+4h]

  result = sub_731E60(this, a2); /*0x8bc9bb*/
  DepthStencilBuffer = this->members.DepthStencilBuffer; /*0x8bc9c0*/
  v6 = 0; /*0x8bc9c3*/
  a2a = result; /*0x8bc9c7*/
  if ( DepthStencilBuffer ) /*0x8bc9cb*/
  {
    do /*0x8bc9e7*/
    {
      v7 = *((_DWORD *)&this->members.RenderTargets[2]->__vftable + v6); /*0x8bc9d3*/
      if ( v7 ) /*0x8bc9d8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x24))(v7, a2); /*0x8bc9e0*/
      ++v6; /*0x8bc9e2*/
    }
    while ( v6 < (unsigned int)DepthStencilBuffer ); /*0x8bc9e7*/
    return a2a; /*0x8bc9e9*/
  }
  return result; /*0x8bc9ed*/
}
