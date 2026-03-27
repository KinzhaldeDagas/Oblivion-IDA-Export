unsigned int __thiscall sub_459950(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  if ( TESDataHandler_IsFormIDCreated_(a2) )
    return a2;
  v4 = *(this + 0x1D);
  if ( a2 <= *(_DWORD *)(v4 + 0xC) )
    return *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * a2);
  else
    return 0;
}
