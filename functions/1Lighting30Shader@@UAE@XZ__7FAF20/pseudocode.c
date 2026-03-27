void __thiscall Lighting30Shader::~Lighting30Shader(BSShader *this)
{
  int *v2; // edi
  int v3; // esi
  int i; // edi
  int v5; // esi
  int v6; // esi
  NiD3DPass **v7; // esi
  NiD3DPass *v8; // ecx
  NiD3DShaderDeclaration *ShaderDeclaration; // esi
  LONG (__stdcall *v11)(volatile LONG *); // edi
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
  int v23; // esi

  this->__vftable = (BSShaderVtbl *)&Lighting30Shader::`vftable';
  v2 = dword_B47288;
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
  while ( (int)v2 < (int)dword_B47308 );
  for ( i = 0; i < 0x27; ++i )
  {
    v5 = dword_B46ED8[i];
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      dword_B46ED8[i] = 0;
    }
    v6 = dword_B46C20[i];
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      dword_B46C20[i] = 0;
    }
  }
  v7 = (NiD3DPass **)dword_B473D0;
  do
  {
    v8 = *v7;
    if ( *v7 )
    {
      if ( v8->RefCount-- == 1 )
        sub_7604D0(v8);
      *v7 = 0;
    }
    ++v7;
  }
  while ( (int)v7 < (int)&dword_B474A8 );
  ShaderDeclaration = this->member.super.ShaderDeclaration;
  v11 = InterlockedDecrement;
  if ( ShaderDeclaration )
  {
    if ( !v11((volatile LONG *)&ShaderDeclaration->member) )
      (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
    this->member.super.ShaderDeclaration = 0;
  }
  v12 = *((_DWORD *)this + 0x23);
  if ( v12 )
  {
    if ( !v11((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    *((_DWORD *)this + 0x23) = 0;
  }
  v13 = *((_DWORD *)this + 0x24);
  if ( v13 )
  {
    if ( !v11((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    *((_DWORD *)this + 0x24) = 0;
  }
  v14 = *((_DWORD *)this + 0x25);
  if ( v14 )
  {
    if ( !v11((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    *((_DWORD *)this + 0x25) = 0;
  }
  v15 = *((_DWORD *)this + 0x26);
  if ( v15 )
  {
    if ( !v11((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    *((_DWORD *)this + 0x26) = 0;
  }
  *((_DWORD *)this + 0x27) = 0;
  v16 = *((_DWORD *)this + 0x26);
  if ( v16 )
  {
    if ( !v11((volatile LONG *)(v16 + 4)) )
      (**(void (__thiscall ***)(int, int))v16)(v16, 1);
  }
  v17 = *((_DWORD *)this + 0x25);
  if ( v17 )
  {
    if ( !v11((volatile LONG *)(v17 + 4)) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
  }
  v18 = *((_DWORD *)this + 0x24);
  if ( v18 )
  {
    if ( !v11((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
  }
  v19 = *((_DWORD *)this + 0x23);
  if ( v19 )
  {
    if ( !v11((volatile LONG *)(v19 + 4)) )
      (**(void (__thiscall ***)(int, int))v19)(v19, 1);
  }
  v20 = *((_DWORD *)this + 0x22);
  if ( v20 )
  {
    if ( !v11((volatile LONG *)(v20 + 4)) )
      (**(void (__thiscall ***)(int, int))v20)(v20, 1);
  }
  v21 = *((_DWORD *)this + 0x21);
  if ( v21 )
  {
    if ( !v11((volatile LONG *)(v21 + 4)) )
      (**(void (__thiscall ***)(int, int))v21)(v21, 1);
  }
  v22 = *((_DWORD *)this + 0x20);
  if ( v22 )
  {
    if ( !v11((volatile LONG *)(v22 + 4)) )
      (**(void (__thiscall ***)(int, int))v22)(v22, 1);
  }
  v23 = *((_DWORD *)this + 0x1F);
  if ( v23 )
  {
    if ( !v11((volatile LONG *)(v23 + 4)) )
      (**(void (__thiscall ***)(int, int))v23)(v23, 1);
  }
  BSShader::~BSShader(this);
}
