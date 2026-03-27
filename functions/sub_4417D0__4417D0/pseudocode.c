int __thiscall sub_4417D0(TESObjectCELL *this, unsigned int a2)
{
  NiNode *NiNode; // eax

  NiNode = TESObjectCELL_GetNiNode_(this);
  if ( NiNode && NiNode->members.children.end > a2 )
    return *((_DWORD *)&NiNode->members.children.data->vtbl + a2);
  else
    return 0;
}
