char __thiscall sub_739200(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  unsigned int i; // esi

  result = sub_700650(this, a2); /*0x739209*/
  if ( result ) /*0x739210*/
  {
    for ( i = 8; i < 0x30; i += 4 ) /*0x739218*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)((char *)&this->members.RenderTargets[0]->__vftable + i) + 0x24))( /*0x73922c*/
        *(#9279 **)((char *)&this->members.RenderTargets[0]->__vftable + i),
        a2);
    return 1; /*0x739238*/
  }
  return result; /*0x739212*/
}
