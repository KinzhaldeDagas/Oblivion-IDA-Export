void __thiscall sub_722320(float *this, NiCullingProcess *a2)
{
  sub_721B70(this, (int)a2->Camera);
  NiNode::OnVisible((NiNode *)this, a2);
}
