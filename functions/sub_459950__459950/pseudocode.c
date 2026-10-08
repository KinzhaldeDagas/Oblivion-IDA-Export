unsigned int __thiscall sub_459950(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  if ( TESDataHandler_IsFormIDCreated_(a2) ) /*0x45995f*/
    return a2; /*0x459969*/
  v4 = *(this + 0x1D); /*0x45996f*/
  if ( a2 <= *(_DWORD *)(v4 + 0xC) ) /*0x459975*/
    return *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * a2); /*0x459981*/
  else
    return 0; /*0x459978*/
}
