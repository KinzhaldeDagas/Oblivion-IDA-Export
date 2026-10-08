NiNode *__thiscall sub_4BC120(void *this, int a2)
{
  NiNode *v2; // eax

  if ( !a2 || (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2) != this ) /*0x4bc15a*/
    return 0; /*0x4bc1a7*/
  v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4bc161*/
  if ( v2 ) /*0x4bc173*/
    return NiNode::NiNode(v2, 0); /*0x4bc178*/
  else
    return 0; /*0x4bc191*/
}
