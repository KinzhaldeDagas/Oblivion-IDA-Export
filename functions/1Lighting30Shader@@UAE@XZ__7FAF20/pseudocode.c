//
// DX11 child-pin audit 2026-10-01: Lighting30 constructor7FAC40 and destructor7FAF20 establish +4 NiRef ownership of cached maps at shader+7C/+80/+84/+88 and declaration alternatives+8C/+90/+94/+98. Base shader owns active maps+2C/+30 and declaration+24. Definition factory7FC7D0 supplies four NiDX9ShaderDeclaration objects (six/eight/four/eight elements) to constructor call7FCBC4. Constant-map destructor9A9900 owns all capacity slots of the NiPointer entry array, not just the logical end; data+10 and capacity/end/live/grow at+14/+16/+18/+1A. Entries use+4 refs and vtableAB348C. New DX11 pin collection retains these child objects individually and seals bindings/array contents, but does NOT preserve the raw array allocation or exclude its mutation by itself. Pooled passes use a different +60 counter and remain separate.
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

  this->__vftable = (BSShaderVtbl *)&Lighting30Shader::`vftable'; /*0x7faf4b*/
  v2 = unk_B47288; /*0x7faf5a*/
  do /*0x7faf8e*/
  {
    v3 = *v2; /*0x7faf61*/
    if ( *v2 ) /*0x7faf61*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7faf6b*/
      {
        if ( v3 ) /*0x7faf77*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7faf81*/
      }
      *v2 = 0; /*0x7faf83*/
    }
    ++v2; /*0x7faf85*/
  }
  while ( (int)v2 < (int)unk_B47308 ); /*0x7faf8e*/
  for ( i = 0; i < 0x27; ++i ) /*0x7faf90*/
  {
    v5 = unk_B46ED8[i]; /*0x7faf92*/
    if ( v5 ) /*0x7faf9a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7fafa0*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7fafb6*/
      unk_B46ED8[i] = 0; /*0x7fafb8*/
    }
    v6 = unk_B46C20[i]; /*0x7fafbe*/
    if ( v6 ) /*0x7fafc6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7fafcc*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7fafe2*/
      unk_B46C20[i] = 0; /*0x7fafe4*/
    }
  }
  v7 = (NiD3DPass **)unk_B473D0; /*0x7faff5*/
  do /*0x7fb01c*/
  {
    v8 = *v7; /*0x7fb000*/
    if ( *v7 ) /*0x7fb000*/
    {
      if ( v8->RefCount-- == 1 ) /*0x7fb006*/
        NiD3DPass_ReleaseToPool(v8); /*0x7fb00c*/
      *v7 = 0; /*0x7fb011*/
    }
    ++v7; /*0x7fb013*/
  }
  while ( (int)v7 < (int)&unk_B474A8 ); /*0x7fb01c*/
  ShaderDeclaration = this->member.super.ShaderDeclaration; /*0x7fb01e*/
  v11 = InterlockedDecrement; /*0x7fb023*/
  if ( ShaderDeclaration ) /*0x7fb029*/
  {
    if ( !v11((volatile LONG *)&ShaderDeclaration->member) ) /*0x7fb02f*/
      (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7fb041*/
    this->member.super.ShaderDeclaration = 0; /*0x7fb043*/
  }
  v12 = *((_DWORD *)this + 0x23); /*0x7fb046*/
  if ( v12 ) /*0x7fb04e*/
  {
    if ( !v11((volatile LONG *)(v12 + 4)) ) /*0x7fb054*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7fb066*/
    *((_DWORD *)this + 0x23) = 0; /*0x7fb068*/
  }
  v13 = *((_DWORD *)this + 0x24); /*0x7fb06e*/
  if ( v13 ) /*0x7fb076*/
  {
    if ( !v11((volatile LONG *)(v13 + 4)) ) /*0x7fb07c*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7fb08e*/
    *((_DWORD *)this + 0x24) = 0; /*0x7fb090*/
  }
  v14 = *((_DWORD *)this + 0x25); /*0x7fb096*/
  if ( v14 ) /*0x7fb09e*/
  {
    if ( !v11((volatile LONG *)(v14 + 4)) ) /*0x7fb0a4*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7fb0b6*/
    *((_DWORD *)this + 0x25) = 0; /*0x7fb0b8*/
  }
  v15 = *((_DWORD *)this + 0x26); /*0x7fb0be*/
  if ( v15 ) /*0x7fb0c6*/
  {
    if ( !v11((volatile LONG *)(v15 + 4)) ) /*0x7fb0cc*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7fb0de*/
    *((_DWORD *)this + 0x26) = 0; /*0x7fb0e0*/
  }
  *((_DWORD *)this + 0x27) = 0; /*0x7fb0e6*/
  v16 = *((_DWORD *)this + 0x26); /*0x7fb0ec*/
  if ( v16 ) /*0x7fb0f9*/
  {
    if ( !v11((volatile LONG *)(v16 + 4)) ) /*0x7fb0ff*/
      (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x7fb111*/
  }
  v17 = *((_DWORD *)this + 0x25); /*0x7fb113*/
  if ( v17 ) /*0x7fb120*/
  {
    if ( !v11((volatile LONG *)(v17 + 4)) ) /*0x7fb126*/
      (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x7fb138*/
  }
  v18 = *((_DWORD *)this + 0x24); /*0x7fb13a*/
  if ( v18 ) /*0x7fb147*/
  {
    if ( !v11((volatile LONG *)(v18 + 4)) ) /*0x7fb14d*/
      (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x7fb15f*/
  }
  v19 = *((_DWORD *)this + 0x23); /*0x7fb161*/
  if ( v19 ) /*0x7fb16e*/
  {
    if ( !v11((volatile LONG *)(v19 + 4)) ) /*0x7fb174*/
      (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x7fb186*/
  }
  v20 = *((_DWORD *)this + 0x22); /*0x7fb188*/
  if ( v20 ) /*0x7fb195*/
  {
    if ( !v11((volatile LONG *)(v20 + 4)) ) /*0x7fb19b*/
      (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x7fb1ad*/
  }
  v21 = *((_DWORD *)this + 0x21); /*0x7fb1af*/
  if ( v21 ) /*0x7fb1bc*/
  {
    if ( !v11((volatile LONG *)(v21 + 4)) ) /*0x7fb1c2*/
      (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x7fb1d4*/
  }
  v22 = *((_DWORD *)this + 0x20); /*0x7fb1d6*/
  if ( v22 ) /*0x7fb1e3*/
  {
    if ( !v11((volatile LONG *)(v22 + 4)) ) /*0x7fb1e9*/
      (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x7fb1fb*/
  }
  v23 = *((_DWORD *)this + 0x1F); /*0x7fb1fd*/
  if ( v23 ) /*0x7fb206*/
  {
    if ( !v11((volatile LONG *)(v23 + 4)) ) /*0x7fb20c*/
      (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x7fb21e*/
  }
  BSShader::~BSShader(this); /*0x7fb22a*/
}
