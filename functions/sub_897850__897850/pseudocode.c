char __thiscall sub_897850(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v3; // ecx

  v3 = this->members.RenderTargets[2]; /*0x897853*/
  if ( v3 ) /*0x89785d*/
    (*((void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable + 9))(v3, a2); /*0x897865*/
  return sub_711CD0(this, a2); /*0x89786f*/
}
