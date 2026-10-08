int __thiscall sub_4417D0(TESObjectCELL *this, unsigned int a2)
{
  NiNode *NiNode; // eax

  NiNode = GetObjectPointerAt_054(this); /*0x4417d0*/
  if ( NiNode && NiNode->members.children.end > a2 ) /*0x4417e6*/
    return *((_DWORD *)&NiNode->members.children.data->vtbl + a2); /*0x4417ee*/
  else
    return 0; /*0x4417f4*/
}
