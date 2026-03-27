char __thiscall sub_6ED330(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  Ni2DBuffer *v4; // ecx
  UInt32 numRenderTargets; // ecx

  result = sub_6E7270(this, a2);
  if ( result )
  {
    v4 = this->members.RenderTargets[3];
    if ( v4 )
      (*((void (__thiscall **)(Ni2DBuffer *, int))v4->__vftable + 9))(v4, a2);
    numRenderTargets = this->members.numRenderTargets;
    if ( numRenderTargets )
      (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)numRenderTargets + 0x24))(numRenderTargets, a2);
    return 1;
  }
  return result;
}
