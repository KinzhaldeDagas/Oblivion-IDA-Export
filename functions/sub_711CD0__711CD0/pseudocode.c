char __thiscall sub_711CD0(NiRenderTargetGroup *this, int a2)
{
  char result; // al

  result = sub_700650(this, a2);
  if ( result )
  {
    if ( this->members.RenderTargets[0] )
      (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[0]->__vftable + 9))(
        this->members.RenderTargets[0],
        a2);
    return 1;
  }
  return result;
}
