char __thiscall sub_6ED330(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  Ni2DBuffer *v4; // ecx
  UInt32 numRenderTargets; // ecx

  result = sub_6E7270(this, a2); /*0x6ed339*/
  if ( result ) /*0x6ed340*/
  {
    v4 = this->members.RenderTargets[3]; /*0x6ed347*/
    if ( v4 ) /*0x6ed34c*/
      (*((void (__thiscall **)(Ni2DBuffer *, int))v4->__vftable + 9))(v4, a2); /*0x6ed354*/
    numRenderTargets = this->members.numRenderTargets; /*0x6ed356*/
    if ( numRenderTargets ) /*0x6ed35b*/
      (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)numRenderTargets + 0x24))(numRenderTargets, a2); /*0x6ed363*/
    return 1; /*0x6ed366*/
  }
  return result; /*0x6ed342*/
}
