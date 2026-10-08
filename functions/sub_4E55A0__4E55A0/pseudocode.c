int __thiscall sub_4E55A0(int this)
{
  unsigned int i; // esi
  int result; // eax
  TESConnectedPoint *v4; // ecx

  if ( *(_DWORD *)(this + 0x24) ) /*0x4e55a3*/
  {
    for ( i = 0; i < *(unsigned __int16 *)(this + 0x30); ++i ) /*0x4e55ac*/
    {
      result = *(_DWORD *)(this + 0x24); /*0x4e55b2*/
      v4 = *(TESConnectedPoint **)(*(_DWORD *)(result + 4) + 4 * i); /*0x4e55b8*/
      if ( v4 ) /*0x4e55bd*/
        GraphNode_ResetTransientSearchState(v4); /*0x4e55bf*/
    }
  }
  return result; /*0x4e55d0*/
}
