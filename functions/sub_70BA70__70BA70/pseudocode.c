NiNode *sub_70BA70()
{
  NiNode *v0; // eax

  v0 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v0 )
    return NiNode::NiNode(v0, 0);
  else
    return 0;
}
