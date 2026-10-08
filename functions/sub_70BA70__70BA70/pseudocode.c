NiNode *sub_70BA70()
{
  NiNode *v0; // eax

  v0 = (NiNode *)FormHeapAlloc(0xDCu); /*0x70ba96*/
  if ( v0 ) /*0x70baac*/
    return NiNode::NiNode(v0, 0); /*0x70bab2*/
  else
    return 0; /*0x70bac7*/
}
