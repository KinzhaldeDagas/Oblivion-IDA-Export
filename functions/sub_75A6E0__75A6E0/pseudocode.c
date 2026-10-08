char __thiscall sub_75A6E0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  UInt32 numRenderTargets; // ecx

  result = sub_6E7270(this, a2); /*0x75a6e9*/
  if ( result ) /*0x75a6f0*/
  {
    numRenderTargets = this->members.numRenderTargets; /*0x75a6f7*/
    if ( numRenderTargets ) /*0x75a6fc*/
      (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)numRenderTargets + 0x24))(numRenderTargets, a2); /*0x75a704*/
    return 1; /*0x75a707*/
  }
  return result; /*0x75a6f2*/
}
