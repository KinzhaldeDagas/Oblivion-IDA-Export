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

  this->__vftable = (BSShaderVtbl *)&ShadowLightShader::`vftable';
  v2 = dword_B45290;
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      {
        if ( v3 )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
      *v2 = 0;
    }
    ++v2;
  }
  while ( (int)v2 < (int)&dword_B45494 );
  v4 = dword_B45088;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      *v4 = 0;
    }
    ++v4;
  }
  while ( (int)v4 < (int)&dword_B4528C );
  v6 = (NiD3DPass **)dword_B455A0;
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      if ( v7->RefCount-- == 1 )
        sub_7604D0(v7);
      *v6 = 0;
    }
    ++v6;
  }
  while ( (int)v6 < (int)&dword_B45C2C );
  v9 = &dword_B45018;
  do
  {
    v10 = *v9;
    if ( *v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
      {
        if ( v10 )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      }
      *v9 = 0;
    }
    ++v9;
  }
  while ( (int)v9 < (int)&dword_B45084 );
  v11 = dword_B45518;
  do
  {
    v12 = *v11;
    if ( *v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
      {
        if ( v12 )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      }
      *v11 = 0;
    }
    ++v11;
  }
  while ( (int)v11 < (int)&dword_B4555C );
  ShaderDeclaration = this->member.super.ShaderDeclaration;
  if ( ShaderDeclaration )
  {
    if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->member) )
      (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
    this->member.super.ShaderDeclaration = 0;
  }
  v14 = *((_DWORD *)this + 0x1F);
  if ( v14 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    *((_DWORD *)this + 0x1F) = 0;
  }
  v15 = *((_DWORD *)this + 0x20);
  if ( v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    *((_DWORD *)this + 0x20) = 0;
  }
  v16 = *((_DWORD *)this + 0x21);
  if ( v16 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
      (**(void (__thiscall ***)(int, int))v16)(v16, 1);
    *((_DWORD *)this + 0x21) = 0;
  }
  v17 = *((_DWORD *)this + 0x22);
  if ( v17 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    *((_DWORD *)this + 0x22) = 0;
  }
  v18 = *((_DWORD *)this + 0x24);
  if ( v18 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    *((_DWORD *)this + 0x24) = 0;
  }
  v19 = *((_DWORD *)this + 0x23);
  if ( v19 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
      (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    *((_DWORD *)this + 0x23) = 0;
  }
  v20 = *((_DWORD *)this + 0x26);
  if ( v20 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
      (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    *((_DWORD *)this + 0x26) = 0;
  }
  v21 = *((_DWORD *)this + 0x25);
  if ( v21 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
      (**(void (__thiscall ***)(int, int))v21)(v21, 1);
    *((_DWORD *)this + 0x25) = 0;
  }
  v22 = *((_DWORD *)this + 0x26);
  v23 = InterlockedDecrement;
  if ( v22 )
  {
    if ( !v23((volatile LONG *)(v22 + 4)) )
      (**(void (__thiscall ***)(int, int))v22)(v22, 1);
  }
  v24 = *((_DWORD *)this + 0x25);
  if ( v24 )
  {
    if ( !v23((volatile LONG *)(v24 + 4)) )
      (**(void (__thiscall ***)(int, int))v24)(v24, 1);
  }
  v25 = *((_DWORD *)this + 0x24);
  if ( v25 )
  {
    if ( !v23((volatile LONG *)(v25 + 4)) )
      (**(void (__thiscall ***)(int, int))v25)(v25, 1);
  }
  v26 = *((_DWORD *)this + 0x23);
  if ( v26 )
  {
    if ( !v23((volatile LONG *)(v26 + 4)) )
      (**(void (__thiscall ***)(int, int))v26)(v26, 1);
  }
  v27 = *((_DWORD *)this + 0x22);
  if ( v27 )
  {
    if ( !v23((volatile LONG *)(v27 + 4)) )
      (**(void (__thiscall ***)(int, int))v27)(v27, 1);
  }
  v28 = *((_DWORD *)this + 0x21);
  if ( v28 )
  {
    if ( !v23((volatile LONG *)(v28 + 4)) )
      (**(void (__thiscall ***)(int, int))v28)(v28, 1);
  }
  v29 = *((_DWORD *)this + 0x20);
  if ( v29 )
  {
    if ( !v23((volatile LONG *)(v29 + 4)) )
      (**(void (__thiscall ***)(int, int))v29)(v29, 1);
  }
  v30 = *((_DWORD *)this + 0x1F);
  if ( v30 )
  {
    if ( !v23((volatile LONG *)(v30 + 4)) )
      (**(void (__thiscall ***)(int, int))v30)(v30, 1);
  }
  BSShader::~BSShader(this);
}
