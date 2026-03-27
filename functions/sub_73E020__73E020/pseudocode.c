char __thiscall sub_73E020(NiRenderTargetGroup *this, int a2)
{
  char result; // al

  result = sub_700650(this, a2);
  if ( result )
  {
    (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[3]->__vftable + 9))(
      this->members.RenderTargets[3],
      a2);
    return 1;
  }
  return result;
}
