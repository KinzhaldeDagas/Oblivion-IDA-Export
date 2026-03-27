char __thiscall sub_897850(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v3; // ecx

  v3 = this->members.RenderTargets[2];
  if ( v3 )
    (*((void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable + 9))(v3, a2);
  return sub_711CD0(this, a2);
}
