void __cdecl sub_7B8530(char a1)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int i; // esi
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // edi
  float v6; // esi
  float v7; // esi
  int v8; // esi
  float v9; // esi
  int v10; // esi
  float v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  float v15; // esi
  int v16; // esi
  int v17; // esi
  float v18; // esi
  int v19; // esi
  float v20; // esi
  float v21; // esi
  int v22; // esi
  NiTPointerList__BSImageSpaceShader *v23; // esi
  unsigned int v24; // esi
  BSShaderAccumulator *v25; // esi
  NiDX9Renderer *v26; // esi

  v1 = InterlockedDecrement; /*0x7b8532*/
  if ( a1 ) /*0x7b853f*/
  {
    *(_DWORD *)&OB_RendererGlobalState_010201A0[0x23] = 0; /*0x7b8545*/
    sub_7C4D90(); /*0x7b854b*/
    sub_7B3E60(); /*0x7b8550*/
    for ( i = 0; i < 0x1C; ++i ) /*0x7b8555*/
    {
      v3 = *(_DWORD *)(4 * i + 0xB42EC0); /*0x7b8560*/
      if ( v3 ) /*0x7b8569*/
      {
        v4 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4); /*0x7b856e*/
        if ( v4 > 1 ) /*0x7b8574*/
          PrintError("Shader %i is leaking.  There are %i references to it on shutdown.", i, v4); /*0x7b857d*/
        v5 = *(_DWORD *)(4 * i + 0xB42EC0); /*0x7b8585*/
        if ( v5 ) /*0x7b858e*/
        {
          sub_7B7170(*(int **)(4 * i + 0xB42EC0)); /*0x7b8592*/
          FormHeapFree(v5); /*0x7b8598*/
        }
        *(_DWORD *)(4 * i + 0xB42EC0) = 0; /*0x7b85a0*/
      }
    }
    sub_7E30F0(); /*0x7b85af*/
    sub_7F3BA0(); /*0x7b85b4*/
    v6 = flt_B430DC[4]; /*0x7b85b9*/
    if ( LODWORD(flt_B430DC[4]) ) /*0x7b85b9*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v6) + 4)) && v6 != 0.0 ) /*0x7b85d0*/
        (**(void (__thiscall ***)(float, int))LODWORD(v6))(COERCE_FLOAT(LODWORD(v6)), 1); /*0x7b85da*/
      flt_B430DC[4] = 0.0; /*0x7b85dc*/
    }
    v7 = flt_B430DC[0]; /*0x7b85e2*/
    if ( LODWORD(flt_B430DC[0]) ) /*0x7b85e2*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v7) + 4)) && v7 != 0.0 ) /*0x7b85f8*/
        (**(void (__thiscall ***)(float, int))LODWORD(v7))(COERCE_FLOAT(LODWORD(v7)), 1); /*0x7b8602*/
      flt_B430DC[0] = 0.0; /*0x7b8604*/
    }
    v8 = unk_B430F0; /*0x7b860a*/
    if ( unk_B430F0 ) /*0x7b860a*/
    {
      if ( !v1((volatile LONG *)(v8 + 4)) ) /*0x7b8618*/
      {
        if ( v8 ) /*0x7b8620*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7b862a*/
      }
      unk_B430F0 = 0; /*0x7b862c*/
    }
    v9 = flt_B430DC[1]; /*0x7b8632*/
    if ( LODWORD(flt_B430DC[1]) ) /*0x7b8632*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v9) + 4)) && v9 != 0.0 ) /*0x7b8648*/
        (**(void (__thiscall ***)(float, int))LODWORD(v9))(COERCE_FLOAT(LODWORD(v9)), 1); /*0x7b8652*/
      flt_B430DC[1] = 0.0; /*0x7b8654*/
    }
    v10 = unk_B43100; /*0x7b865a*/
    if ( unk_B43100 ) /*0x7b865a*/
    {
      if ( !v1((volatile LONG *)(v10 + 4)) ) /*0x7b8668*/
      {
        if ( v10 ) /*0x7b8670*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7b867a*/
      }
      unk_B43100 = 0; /*0x7b867c*/
    }
    v11 = flt_B430DC[2]; /*0x7b8682*/
    if ( LODWORD(flt_B430DC[2]) ) /*0x7b8682*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v11) + 4)) && v11 != 0.0 ) /*0x7b8698*/
        (**(void (__thiscall ***)(float, int))LODWORD(v11))(COERCE_FLOAT(LODWORD(v11)), 1); /*0x7b86a2*/
      flt_B430DC[2] = 0.0; /*0x7b86a4*/
    }
    v12 = unk_B4311C; /*0x7b86aa*/
    if ( unk_B4311C ) /*0x7b86aa*/
    {
      if ( !v1((volatile LONG *)(v12 + 4)) ) /*0x7b86b8*/
      {
        if ( v12 ) /*0x7b86c0*/
          (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7b86ca*/
      }
      unk_B4311C = 0; /*0x7b86cc*/
    }
    v13 = unk_B43120; /*0x7b86d2*/
    if ( unk_B43120 ) /*0x7b86d2*/
    {
      if ( !v1((volatile LONG *)(v13 + 4)) ) /*0x7b86e0*/
      {
        if ( v13 ) /*0x7b86e8*/
          (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7b86f2*/
      }
      unk_B43120 = 0; /*0x7b86f4*/
    }
    v14 = unk_B430F8; /*0x7b86fa*/
    if ( unk_B430F8 ) /*0x7b86fa*/
    {
      if ( !v1((volatile LONG *)(v14 + 4)) ) /*0x7b8708*/
      {
        if ( v14 ) /*0x7b8710*/
          (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7b871a*/
      }
      unk_B430F8 = 0; /*0x7b871c*/
    }
    v15 = flt_B43110[0]; /*0x7b8722*/
    if ( LODWORD(flt_B43110[0]) ) /*0x7b8722*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v15) + 4)) && v15 != 0.0 ) /*0x7b8738*/
        (**(void (__thiscall ***)(float, int))LODWORD(v15))(COERCE_FLOAT(LODWORD(v15)), 1); /*0x7b8742*/
      flt_B43110[0] = 0.0; /*0x7b8744*/
    }
    v16 = unk_B430D4; /*0x7b874a*/
    if ( unk_B430D4 ) /*0x7b874a*/
    {
      if ( !v1((volatile LONG *)(v16 + 4)) ) /*0x7b8758*/
      {
        if ( v16 ) /*0x7b8760*/
          (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x7b876a*/
      }
      unk_B430D4 = 0; /*0x7b876c*/
    }
    v17 = unk_B43128; /*0x7b8772*/
    if ( unk_B43128 ) /*0x7b8772*/
    {
      if ( !v1((volatile LONG *)(v17 + 4)) ) /*0x7b8780*/
      {
        if ( v17 ) /*0x7b8788*/
          (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x7b8792*/
      }
      unk_B43128 = 0; /*0x7b8794*/
    }
    v18 = flt_B43110[1]; /*0x7b879a*/
    if ( LODWORD(flt_B43110[1]) ) /*0x7b879a*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v18) + 4)) && v18 != 0.0 ) /*0x7b87b0*/
        (**(void (__thiscall ***)(float, int))LODWORD(v18))(COERCE_FLOAT(LODWORD(v18)), 1); /*0x7b87ba*/
      flt_B43110[1] = 0.0; /*0x7b87bc*/
    }
    v19 = unk_B430F4; /*0x7b87c2*/
    if ( unk_B430F4 ) /*0x7b87c2*/
    {
      if ( !v1((volatile LONG *)(v19 + 4)) ) /*0x7b87d0*/
      {
        if ( v19 ) /*0x7b87d8*/
          (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x7b87e2*/
      }
      unk_B430F4 = 0; /*0x7b87e4*/
    }
    v20 = flt_B430DC[3]; /*0x7b87ea*/
    if ( LODWORD(flt_B430DC[3]) ) /*0x7b87ea*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v20) + 4)) && v20 != 0.0 ) /*0x7b8800*/
        (**(void (__thiscall ***)(float, int))LODWORD(v20))(COERCE_FLOAT(LODWORD(v20)), 1); /*0x7b880a*/
      flt_B430DC[3] = 0.0; /*0x7b880c*/
    }
    v21 = flt_B43110[2]; /*0x7b8812*/
    if ( LODWORD(flt_B43110[2]) ) /*0x7b8812*/
    {
      if ( !v1((volatile LONG *)(LODWORD(v21) + 4)) && v21 != 0.0 ) /*0x7b8828*/
        (**(void (__thiscall ***)(float, int))LODWORD(v21))(COERCE_FLOAT(LODWORD(v21)), 1); /*0x7b8832*/
      flt_B43110[2] = 0.0; /*0x7b8834*/
    }
    v22 = unk_B43124; /*0x7b883a*/
    if ( unk_B43124 ) /*0x7b883a*/
    {
      if ( !v1((volatile LONG *)(v22 + 4)) ) /*0x7b8848*/
      {
        if ( v22 ) /*0x7b8850*/
          (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x7b885a*/
      }
      unk_B43124 = 0; /*0x7b885c*/
    }
    if ( MEMORY[0xB42D7C] ) /*0x7b8862*/
    {
      v23 = MEMORY[0xB42D7C]; /*0x7b886c*/
      ImageSpaceShaderList::Destroy(MEMORY[0xB42D7C]); /*0x7b886e*/
      FormHeapFree((unsigned int)v23); /*0x7b8874*/
      MEMORY[0xB42D7C] = 0; /*0x7b887c*/
    }
    if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0xB7] ) /*0x7b8882*/
    {
      v24 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xB7]; /*0x7b888c*/
      BSTextureManager_Delete(*(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7]); /*0x7b888e*/
      FormHeapFree(v24); /*0x7b8894*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0xB7] = 0; /*0x7b889c*/
    }
    v25 = unk_B430FC; /*0x7b88a2*/
    if ( unk_B430FC ) /*0x7b88a2*/
    {
      if ( !v1((volatile LONG *)v25 + 1) ) /*0x7b88b0*/
      {
        if ( v25 ) /*0x7b88b8*/
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v25)(v25, 1); /*0x7b88c2*/
      }
      unk_B430FC = 0; /*0x7b88c4*/
    }
    sub_7AB1D0(0); /*0x7b88cb*/
    OB_RendererGlobalState_010201A0[0x98] = 0; /*0x7b88d3*/
  }
  v26 = unk_B43104; /*0x7b88d9*/
  if ( unk_B43104 ) /*0x7b88d9*/
  {
    if ( !v1((volatile LONG *)&v26->member) ) /*0x7b88e7*/
    {
      if ( v26 ) /*0x7b88ef*/
        ((void (__thiscall *)(NiDX9Renderer *, int))v26->__vftable->super.gap0[0])(v26, 1); /*0x7b88f9*/
    }
    unk_B43104 = 0; /*0x7b88fb*/
  }
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = 0; /*0x7b8903*/
}
