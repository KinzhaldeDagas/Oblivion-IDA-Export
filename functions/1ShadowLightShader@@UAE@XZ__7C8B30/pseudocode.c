void __thiscall ShadowLightShader::~ShadowLightShader(BSShader *this)
{
  int *v2; // edi
  int v3; // esi
  int *v4; // edi
  int v5; // esi
  NiD3DPass **v6; // esi
  NiD3DPass *v7; // ecx
  int *v9; // edi
  int v10; // esi
  int *v11; // edi
  int v12; // esi
  NiD3DShaderDeclaration *ShaderDeclaration; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  LONG (__stdcall *v23)(volatile LONG *); // edi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi

  this->__vftable = (BSShaderVtbl *)&ShadowLightShader::`vftable'; /*0x7c8b5b*/
  v2 = unk_B45290; /*0x7c8b6a*/
  do /*0x7c8b9e*/
  {
    v3 = *v2; /*0x7c8b71*/
    if ( *v2 ) /*0x7c8b71*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7c8b7b*/
      {
        if ( v3 ) /*0x7c8b87*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7c8b91*/
      }
      *v2 = 0; /*0x7c8b93*/
    }
    ++v2; /*0x7c8b95*/
  }
  while ( (int)v2 < (int)&unk_B45494 ); /*0x7c8b9e*/
  v4 = unk_B45088; /*0x7c8ba0*/
  do /*0x7c8bd2*/
  {
    v5 = *v4; /*0x7c8ba5*/
    if ( *v4 ) /*0x7c8ba5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7c8baf*/
      {
        if ( v5 ) /*0x7c8bbb*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7c8bc5*/
      }
      *v4 = 0; /*0x7c8bc7*/
    }
    ++v4; /*0x7c8bc9*/
  }
  while ( (int)v4 < (int)&unk_B4528C ); /*0x7c8bd2*/
  v6 = (NiD3DPass **)unk_B455A0; /*0x7c8bd4*/
  do /*0x7c8bfc*/
  {
    v7 = *v6; /*0x7c8be0*/
    if ( *v6 ) /*0x7c8be0*/
    {
      if ( v7->RefCount-- == 1 ) /*0x7c8be6*/
        NiD3DPass_ReleaseToPool(v7); /*0x7c8bec*/
      *v6 = 0; /*0x7c8bf1*/
    }
    ++v6; /*0x7c8bf3*/
  }
  while ( (int)v6 < (int)&unk_B45C2C ); /*0x7c8bfc*/
  v9 = &unk_B45018; /*0x7c8bfe*/
  do /*0x7c8c30*/
  {
    v10 = *v9; /*0x7c8c03*/
    if ( *v9 ) /*0x7c8c03*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7c8c0d*/
      {
        if ( v10 ) /*0x7c8c19*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7c8c23*/
      }
      *v9 = 0; /*0x7c8c25*/
    }
    ++v9; /*0x7c8c27*/
  }
  while ( (int)v9 < (int)&dword_B45084 ); /*0x7c8c30*/
  v11 = unk_B45518; /*0x7c8c32*/
  do /*0x7c8c64*/
  {
    v12 = *v11; /*0x7c8c37*/
    if ( *v11 ) /*0x7c8c37*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7c8c41*/
      {
        if ( v12 ) /*0x7c8c4d*/
          (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7c8c57*/
      }
      *v11 = 0; /*0x7c8c59*/
    }
    ++v11; /*0x7c8c5b*/
  }
  while ( (int)v11 < (int)&unk_B4555C ); /*0x7c8c64*/
  ShaderDeclaration = this->member.super.ShaderDeclaration; /*0x7c8c66*/
  if ( ShaderDeclaration ) /*0x7c8c6b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->member) ) /*0x7c8c71*/
      (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7c8c87*/
    this->member.super.ShaderDeclaration = 0; /*0x7c8c89*/
  }
  v14 = *((_DWORD *)this + 0x1F); /*0x7c8c8c*/
  if ( v14 ) /*0x7c8c91*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x7c8c97*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7c8cad*/
    *((_DWORD *)this + 0x1F) = 0; /*0x7c8caf*/
  }
  v15 = *((_DWORD *)this + 0x20); /*0x7c8cb2*/
  if ( v15 ) /*0x7c8cba*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x7c8cc0*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7c8cd6*/
    *((_DWORD *)this + 0x20) = 0; /*0x7c8cd8*/
  }
  v16 = *((_DWORD *)this + 0x21); /*0x7c8cde*/
  if ( v16 ) /*0x7c8ce6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x7c8cec*/
      (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x7c8d02*/
    *((_DWORD *)this + 0x21) = 0; /*0x7c8d04*/
  }
  v17 = *((_DWORD *)this + 0x22); /*0x7c8d0a*/
  if ( v17 ) /*0x7c8d12*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x7c8d18*/
      (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x7c8d2e*/
    *((_DWORD *)this + 0x22) = 0; /*0x7c8d30*/
  }
  v18 = *((_DWORD *)this + 0x24); /*0x7c8d36*/
  if ( v18 ) /*0x7c8d3e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x7c8d44*/
      (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x7c8d5a*/
    *((_DWORD *)this + 0x24) = 0; /*0x7c8d5c*/
  }
  v19 = *((_DWORD *)this + 0x23); /*0x7c8d62*/
  if ( v19 ) /*0x7c8d6a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x7c8d70*/
      (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x7c8d86*/
    *((_DWORD *)this + 0x23) = 0; /*0x7c8d88*/
  }
  v20 = *((_DWORD *)this + 0x26); /*0x7c8d8e*/
  if ( v20 ) /*0x7c8d96*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x7c8d9c*/
      (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x7c8db2*/
    *((_DWORD *)this + 0x26) = 0; /*0x7c8db4*/
  }
  v21 = *((_DWORD *)this + 0x25); /*0x7c8dba*/
  if ( v21 ) /*0x7c8dc2*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x7c8dc8*/
      (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x7c8dde*/
    *((_DWORD *)this + 0x25) = 0; /*0x7c8de0*/
  }
  v22 = *((_DWORD *)this + 0x26); /*0x7c8de6*/
  v23 = InterlockedDecrement; /*0x7c8dee*/
  if ( v22 ) /*0x7c8df9*/
  {
    if ( !v23((volatile LONG *)(v22 + 4)) ) /*0x7c8dff*/
      (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x7c8e11*/
  }
  v24 = *((_DWORD *)this + 0x25); /*0x7c8e13*/
  if ( v24 ) /*0x7c8e20*/
  {
    if ( !v23((volatile LONG *)(v24 + 4)) ) /*0x7c8e26*/
      (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x7c8e38*/
  }
  v25 = *((_DWORD *)this + 0x24); /*0x7c8e3a*/
  if ( v25 ) /*0x7c8e47*/
  {
    if ( !v23((volatile LONG *)(v25 + 4)) ) /*0x7c8e4d*/
      (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x7c8e5f*/
  }
  v26 = *((_DWORD *)this + 0x23); /*0x7c8e61*/
  if ( v26 ) /*0x7c8e6e*/
  {
    if ( !v23((volatile LONG *)(v26 + 4)) ) /*0x7c8e74*/
      (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x7c8e86*/
  }
  v27 = *((_DWORD *)this + 0x22); /*0x7c8e88*/
  if ( v27 ) /*0x7c8e95*/
  {
    if ( !v23((volatile LONG *)(v27 + 4)) ) /*0x7c8e9b*/
      (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x7c8ead*/
  }
  v28 = *((_DWORD *)this + 0x21); /*0x7c8eaf*/
  if ( v28 ) /*0x7c8ebc*/
  {
    if ( !v23((volatile LONG *)(v28 + 4)) ) /*0x7c8ec2*/
      (**(void (__thiscall ***)(int, int))v28)(v28, 1); /*0x7c8ed4*/
  }
  v29 = *((_DWORD *)this + 0x20); /*0x7c8ed6*/
  if ( v29 ) /*0x7c8ee3*/
  {
    if ( !v23((volatile LONG *)(v29 + 4)) ) /*0x7c8ee9*/
      (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x7c8efb*/
  }
  v30 = *((_DWORD *)this + 0x1F); /*0x7c8efd*/
  if ( v30 ) /*0x7c8f06*/
  {
    if ( !v23((volatile LONG *)(v30 + 4)) ) /*0x7c8f0c*/
      (**(void (__thiscall ***)(int, int))v30)(v30, 1); /*0x7c8f1e*/
  }
  BSShader::~BSShader(this); /*0x7c8f2a*/
}
