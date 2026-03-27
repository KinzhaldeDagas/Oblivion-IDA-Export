int __usercall sub_590C20@<eax>(unsigned int a1@<ecx>, int a2@<ebx>)
{
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  NiNode *v9; // eax
  NiNode *v10; // eax
  int v11; // ecx
  NiNode *v12; // eax
  Tile::Extra *v13; // eax
  unsigned int *v14; // eax

  v7 = *(_DWORD *)(a1 + 0x24);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 0x1C) = 0;
    v8 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x24);
    if ( v8 )
      (**v8)(v8, 1);
  }
  v9 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v9 )
    v10 = NiNode::NiNode(v9, 0);
  else
    v10 = 0;
  v11 = *(_DWORD *)(a1 + 0x10);
  *(_DWORD *)(a1 + 0x24) = v10;
  v12 = (NiNode *)sub_5894D0(v11);
  if ( !v12 )
    v12 = InterfaceManager_GetSingleton(0, 1)->unk054[0];
  ((void (__thiscall *)(NiNode *, _DWORD, int))v12->vtbl->AddObject)(v12, *(_DWORD *)(a1 + 0x24), 1);
  sub_590970((BSStringT *)a1);
  v13 = (Tile::Extra *)FormHeapAlloc(0x14u);
  if ( v13 )
    v14 = (unsigned int *)Tile::Extra::Extra(v13, a1, *(_DWORD *)(a1 + 0x24));
  else
    v14 = 0;
  NiNode_AddNiExtraData(*(const void ***)(a1 + 0x24), a2, v14);
  return *(_DWORD *)(a1 + 0x24);
}
