void sub_83A7E0()
{
  int v0; // esi
  int v1; // edi
  int v2; // ebp
  int v3; // edi
  int v4; // ebp
  bool v5; // zf
  int v6; // edi
  int v7; // ebp
  int v8; // edi
  int v9; // ebp
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int v13; // ebp

  v0 = 0; /*0x83a807*/
  if ( unk_B45B34 ) /*0x83a817*/
  {
    v0 = unk_B45B34; /*0x83a825*/
    ++*(_DWORD *)(unk_B45B34 + 0x60); /*0x83a82f*/
  }
  v1 = *(_DWORD *)(v0 + 0x58); /*0x83a838*/
  v2 = unk_B45474; /*0x83a83d*/
  if ( v1 != unk_B45474 ) /*0x83a83f*/
  {
    if ( v1 ) /*0x83a843*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v1 + 4)) ) /*0x83a849*/
        (**(void (__thiscall ***)(int, int))v1)(v1, 1); /*0x83a85f*/
    }
    *(_DWORD *)(v0 + 0x58) = v2; /*0x83a863*/
    if ( v2 ) /*0x83a866*/
      InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x83a86c*/
  }
  v3 = *(_DWORD *)(v0 + 0x44); /*0x83a877*/
  v4 = unk_B45268; /*0x83a87c*/
  if ( v3 != unk_B45268 ) /*0x83a87e*/
  {
    if ( v3 ) /*0x83a882*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x83a888*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x83a89e*/
    }
    *(_DWORD *)(v0 + 0x44) = v4; /*0x83a8a2*/
    if ( v4 ) /*0x83a8a5*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x83a8ab*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a8b1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a8bb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x83a8c5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a8ca*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a8d4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83a8de*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a8e3*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a8ed*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x83a8f8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a8fd*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a907*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x83a912*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a917*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a921*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x83a92c*/
  v5 = v0 == unk_B45B38; /*0x83a931*/
  unk_B440B4 = 0x400002; /*0x83a937*/
  unk_B44744 = 0; /*0x83a941*/
  if ( !v5 ) /*0x83a947*/
  {
    v5 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83a949*/
    if ( v5 ) /*0x83a94d*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83a951*/
    v0 = unk_B45B38; /*0x83a956*/
    if ( unk_B45B38 ) /*0x83a95e*/
      ++*(_DWORD *)(v0 + 0x60); /*0x83a964*/
  }
  v6 = *(_DWORD *)(v0 + 0x58); /*0x83a96d*/
  v7 = unk_B45478; /*0x83a972*/
  if ( v6 != unk_B45478 ) /*0x83a974*/
  {
    if ( v6 ) /*0x83a978*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x83a97e*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x83a994*/
    }
    *(_DWORD *)(v0 + 0x58) = v7; /*0x83a998*/
    if ( v7 ) /*0x83a99b*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x83a9a1*/
  }
  v8 = *(_DWORD *)(v0 + 0x44); /*0x83a9ac*/
  v9 = unk_B45268; /*0x83a9b1*/
  if ( v8 != unk_B45268 ) /*0x83a9b3*/
  {
    if ( v8 ) /*0x83a9b7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x83a9bd*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x83a9d3*/
    }
    *(_DWORD *)(v0 + 0x44) = v9; /*0x83a9d7*/
    if ( v9 ) /*0x83a9da*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x83a9e0*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a9e6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a9f0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x83a9fa*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a9ff*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83aa09*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83aa13*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83aa18*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83aa22*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x83aa2d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83aa32*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83aa3c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x83aa47*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83aa4c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83aa56*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x83aa61*/
  v5 = v0 == unk_B45B3C; /*0x83aa66*/
  unk_B440B8 = (int)&loc_840007 + 1; /*0x83aa6c*/
  unk_B44748 = 0; /*0x83aa76*/
  if ( !v5 ) /*0x83aa7c*/
  {
    v5 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83aa7e*/
    if ( v5 ) /*0x83aa82*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83aa86*/
    v0 = unk_B45B3C; /*0x83aa8b*/
    if ( unk_B45B3C ) /*0x83aa93*/
      ++*(_DWORD *)(v0 + 0x60); /*0x83aa99*/
  }
  v10 = *(_DWORD *)(v0 + 0x58); /*0x83aaa2*/
  v11 = unk_B4547C; /*0x83aaa7*/
  if ( v10 != unk_B4547C ) /*0x83aaa9*/
  {
    if ( v10 ) /*0x83aaad*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x83aab3*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x83aac9*/
    }
    *(_DWORD *)(v0 + 0x58) = v11; /*0x83aacd*/
    if ( v11 ) /*0x83aad0*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83aad6*/
  }
  v12 = *(_DWORD *)(v0 + 0x44); /*0x83aae1*/
  v13 = unk_B4526C; /*0x83aae6*/
  if ( v12 != unk_B4526C ) /*0x83aae8*/
  {
    if ( v12 ) /*0x83aaec*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x83aaf2*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x83ab08*/
    }
    *(_DWORD *)(v0 + 0x44) = v13; /*0x83ab0c*/
    if ( v13 ) /*0x83ab0f*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x83ab15*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83ab1b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83ab25*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x83ab2f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83ab34*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83ab3e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83ab48*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83ab4d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83ab57*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x83ab62*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83ab67*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83ab71*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 8u, 0); /*0x83ab7c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83ab81*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83ab8b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x83ab96*/
  unk_B440BC = 2; /*0x83ab9e*/
  unk_B4474C = 0; /*0x83aba8*/
  v5 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83abae*/
  if ( v5 ) /*0x83abb5*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83abb9*/
}
