char __thiscall sub_75A6E0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  UInt32 numRenderTargets; // ecx

  result = sub_6E7270(this, a2);
  if ( result )
  {
    numRenderTargets = this->members.numRenderTargets;
    if ( numRenderTargets )
      (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)numRenderTargets + 0x24))(numRenderTargets, a2);
    return 1;
  }
  return result;
}
