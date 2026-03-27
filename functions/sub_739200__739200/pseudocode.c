char __thiscall sub_739200(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  unsigned int i; // esi

  result = sub_700650(this, a2);
  if ( result )
  {
    for ( i = 8; i < 0x30; i += 4 )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)((char *)&this->members.RenderTargets[0]->__vftable + i) + 0x24))(
        *(#9279 **)((char *)&this->members.RenderTargets[0]->__vftable + i),
        a2);
    return 1;
  }
  return result;
}
