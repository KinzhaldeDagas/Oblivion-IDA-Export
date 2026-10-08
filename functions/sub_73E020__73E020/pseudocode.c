char __thiscall sub_73E020(NiRenderTargetGroup *this, int a2)
{
  char result; // al

  result = sub_700650(this, a2); /*0x73e029*/
  if ( result ) /*0x73e030*/
  {
    (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[3]->__vftable + 9))( /*0x73e040*/
      this->members.RenderTargets[3],
      a2);
    return 1; /*0x73e043*/
  }
  return result; /*0x73e032*/
}
