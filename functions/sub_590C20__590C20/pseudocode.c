int __usercall Tile3D_CreateSceneNode@<eax>(unsigned int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // ecx
  NiNode *v5; // eax
  NiNode *v6; // eax
  int v7; // ecx
  NiNode *v8; // eax
  Tile::Extra *v9; // eax
  unsigned int *v10; // eax

  v3 = *(_DWORD *)(a1 + 0x24); /*0x590c44*/
  if ( v3 ) /*0x590c49*/
  {
    *(_DWORD *)(v3 + 0x1C) = 0; /*0x590c4b*/
    v4 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x24); /*0x590c52*/
    if ( v4 ) /*0x590c57*/
      (**v4)(v4, 1); /*0x590c5f*/
  }
  v5 = (NiNode *)FormHeapAlloc(0xDCu); /*0x590c66*/
  if ( v5 ) /*0x590c7c*/
    v6 = NiNode::NiNode(v5, 0); /*0x590c82*/
  else
    v6 = 0; /*0x590c89*/
  v7 = *(_DWORD *)(a1 + 0x10); /*0x590c8b*/
  *(_DWORD *)(a1 + 0x24) = v6; /*0x590c96*/
  v8 = (NiNode *)sub_5894D0(v7); /*0x590c99*/
  if ( !v8 ) /*0x590ca0*/
    v8 = InterfaceManager_GetSingleton(0, 1)->unk054[0]; /*0x590caa*/
  ((void (__thiscall *)(NiNode *, _DWORD, int))v8->vtbl->AddObject)(v8, *(_DWORD *)(a1 + 0x24), 1); /*0x590cc0*/
  sub_590970((BSStringT *)a1); /*0x590cc4*/
  v9 = (Tile::Extra *)FormHeapAlloc(0x14u); /*0x590ccb*/
  if ( v9 ) /*0x590ce1*/
    v10 = (unsigned int *)Tile::Extra::Extra(v9, a1, *(_DWORD *)(a1 + 0x24)); /*0x590cea*/
  else
    v10 = 0; /*0x590cf1*/
  NiObjectNET_AddExtraData(*(const void ***)(a1 + 0x24), a2, v10); /*0x590cff*/
  return *(_DWORD *)(a1 + 0x24); /*0x590d07*/
}
