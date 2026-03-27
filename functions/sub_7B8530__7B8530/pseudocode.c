void __cdecl sub_7B8530(char a1)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int i; // esi
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  NiTPointerList__BSImageSpaceShader *v23; // esi
  BSTextureManager *v24; // esi
  BSShaderAccumulator *v25; // esi
  NiDX9Renderer *v26; // esi

  v1 = InterlockedDecrement;
  if ( a1 )
  {
    dword_B42EBC = 0;
    sub_7C4D90();
    sub_7B3E60();
    for ( i = 0; i < 0x1C; ++i )
    {
      v3 = *(_DWORD *)(4 * i + 0xB42EC0);
      if ( v3 )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4);
        if ( v4 > 1 )
          PrintError("Shader %i is leaking.  There are %i references to it on shutdown.", i, v4);
        v5 = *(_DWORD *)(4 * i + 0xB42EC0);
        if ( v5 )
        {
          sub_7B7170(*(int **)(4 * i + 0xB42EC0));
          FormHeapFree(v5);
        }
        *(_DWORD *)(4 * i + 0xB42EC0) = 0;
      }
    }
    sub_7E30F0();
    sub_7F3BA0();
    v6 = dword_B430EC;
    if ( dword_B430EC )
    {
      if ( !v1((volatile LONG *)(v6 + 4)) )
      {
        if ( v6 )
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      }
      dword_B430EC = 0;
    }
    v7 = dword_B430DC;
    if ( dword_B430DC )
    {
      if ( !v1((volatile LONG *)(v7 + 4)) )
      {
        if ( v7 )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      dword_B430DC = 0;
    }
    v8 = dword_B430F0;
    if ( dword_B430F0 )
    {
      if ( !v1((volatile LONG *)(v8 + 4)) )
      {
        if ( v8 )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      dword_B430F0 = 0;
    }
    v9 = dword_B430E0;
    if ( dword_B430E0 )
    {
      if ( !v1((volatile LONG *)(v9 + 4)) )
      {
        if ( v9 )
          (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      }
      dword_B430E0 = 0;
    }
    v10 = dword_B43100;
    if ( dword_B43100 )
    {
      if ( !v1((volatile LONG *)(v10 + 4)) )
      {
        if ( v10 )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      }
      dword_B43100 = 0;
    }
    v11 = dword_B430E4;
    if ( dword_B430E4 )
    {
      if ( !v1((volatile LONG *)(v11 + 4)) )
      {
        if ( v11 )
          (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      }
      dword_B430E4 = 0;
    }
    v12 = dword_B4311C;
    if ( dword_B4311C )
    {
      if ( !v1((volatile LONG *)(v12 + 4)) )
      {
        if ( v12 )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      }
      dword_B4311C = 0;
    }
    v13 = dword_B43120;
    if ( dword_B43120 )
    {
      if ( !v1((volatile LONG *)(v13 + 4)) )
      {
        if ( v13 )
          (**(void (__thiscall ***)(int, int))v13)(v13, 1);
      }
      dword_B43120 = 0;
    }
    v14 = dword_B430F8;
    if ( dword_B430F8 )
    {
      if ( !v1((volatile LONG *)(v14 + 4)) )
      {
        if ( v14 )
          (**(void (__thiscall ***)(int, int))v14)(v14, 1);
      }
      dword_B430F8 = 0;
    }
    v15 = dword_B43110;
    if ( dword_B43110 )
    {
      if ( !v1((volatile LONG *)(v15 + 4)) )
      {
        if ( v15 )
          (**(void (__thiscall ***)(int, int))v15)(v15, 1);
      }
      dword_B43110 = 0;
    }
    v16 = dword_B430D4;
    if ( dword_B430D4 )
    {
      if ( !v1((volatile LONG *)(v16 + 4)) )
      {
        if ( v16 )
          (**(void (__thiscall ***)(int, int))v16)(v16, 1);
      }
      dword_B430D4 = 0;
    }
    v17 = dword_B43128;
    if ( dword_B43128 )
    {
      if ( !v1((volatile LONG *)(v17 + 4)) )
      {
        if ( v17 )
          (**(void (__thiscall ***)(int, int))v17)(v17, 1);
      }
      dword_B43128 = 0;
    }
    v18 = dword_B43114;
    if ( dword_B43114 )
    {
      if ( !v1((volatile LONG *)(v18 + 4)) )
      {
        if ( v18 )
          (**(void (__thiscall ***)(int, int))v18)(v18, 1);
      }
      dword_B43114 = 0;
    }
    v19 = dword_B430F4;
    if ( dword_B430F4 )
    {
      if ( !v1((volatile LONG *)(v19 + 4)) )
      {
        if ( v19 )
          (**(void (__thiscall ***)(int, int))v19)(v19, 1);
      }
      dword_B430F4 = 0;
    }
    v20 = dword_B430E8;
    if ( dword_B430E8 )
    {
      if ( !v1((volatile LONG *)(v20 + 4)) )
      {
        if ( v20 )
          (**(void (__thiscall ***)(int, int))v20)(v20, 1);
      }
      dword_B430E8 = 0;
    }
    v21 = dword_B43118;
    if ( dword_B43118 )
    {
      if ( !v1((volatile LONG *)(v21 + 4)) )
      {
        if ( v21 )
          (**(void (__thiscall ***)(int, int))v21)(v21, 1);
      }
      dword_B43118 = 0;
    }
    v22 = dword_B43124;
    if ( dword_B43124 )
    {
      if ( !v1((volatile LONG *)(v22 + 4)) )
      {
        if ( v22 )
          (**(void (__thiscall ***)(int, int))v22)(v22, 1);
      }
      dword_B43124 = 0;
    }
    if ( imageSpaceShaderList )
    {
      v23 = imageSpaceShaderList;
      ImageSpaceShaderList::Destroy(imageSpaceShaderList);
      FormHeapFree((unsigned int)v23);
      imageSpaceShaderList = 0;
    }
    if ( g_textureManager )
    {
      v24 = g_textureManager;
      BSTextureManager_Delete(g_textureManager);
      FormHeapFree((unsigned int)v24);
      g_textureManager = 0;
    }
    v25 = dword_B430FC;
    if ( dword_B430FC )
    {
      if ( !v1((volatile LONG *)v25 + 1) )
      {
        if ( v25 )
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v25)(v25, 1);
      }
      dword_B430FC = 0;
    }
    sub_7AB1D0(0);
    byte_B42F31 = 0;
  }
  v26 = dword_B43104;
  if ( dword_B43104 )
  {
    if ( !v1((volatile LONG *)&v26->member) )
    {
      if ( v26 )
        ((void (__thiscall *)(NiDX9Renderer *, int))v26->__vftable->super.gap0[0])(v26, 1);
    }
    dword_B43104 = 0;
  }
  dword_B42EB8 = 0;
}
