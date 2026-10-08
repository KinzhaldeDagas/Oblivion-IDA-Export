char __thiscall sub_711CD0(NiRenderTargetGroup *this, int a2)
{
  char result; // al

  result = sub_700650(this, a2); /*0x711cd9*/
  if ( result ) /*0x711ce0*/
  {
    if ( this->members.RenderTargets[0] ) /*0x711ce7*/
      (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[0]->__vftable + 9))( /*0x711cf6*/
        this->members.RenderTargets[0],
        a2);
    return 1; /*0x711cf9*/
  }
  return result; /*0x711ce2*/
}
