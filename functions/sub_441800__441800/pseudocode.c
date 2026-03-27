int __thiscall sub_441800(TESObjectCELL *this, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  NiNode *NiNode; // eax
  int v5; // eax

  v3 = a2 + 2;
  NiNode = TESObjectCELL_GetNiNode_(this);
  if ( NiNode
    && NiNode->members.children.end > v3
    && (v5 = *((_DWORD *)&NiNode->members.children.data->vtbl + v3)) != 0
    && *(unsigned __int16 *)(v5 + 0xB6) > a3 )
  {
    return *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * a3);
  }
  else
  {
    return 0;
  }
}
