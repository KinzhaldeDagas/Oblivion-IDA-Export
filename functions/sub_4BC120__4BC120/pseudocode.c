NiNode *__thiscall sub_4BC120(void *this, int a2)
{
  NiNode *v2; // eax

  if ( !a2 || (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2) != this )
    return 0;
  v2 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v2 )
    return NiNode::NiNode(v2, 0);
  else
    return 0;
}
