void __thiscall HairShader::~HairShader(BSShader *this)
{
  int v2; // ebp
  BSShader *v3; // edi
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebp
  BSShaderVtbl *v7; // esi
  BSShader *v8; // edi
  int v9; // ebp
  BSShaderVtbl *v10; // esi
  BSShader *v11; // edi
  int v12; // ebp
  BSShaderVtbl *v13; // esi
  NiD3DPass **v14; // esi
  int v15; // edi
  NiD3DPass *v16; // ecx
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi

  this->__vftable = (BSShaderVtbl *)&HairShader::`vftable';
  v2 = 7;
  v3 = (BSShader *)((char *)this + 0xA4);
  do
  {
    vftable = v3->__vftable;
    if ( v3->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) )
      {
        if ( vftable )
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1);
      }
      v3->__vftable = 0;
    }
    v3 = (BSShader *)((char *)v3 + 4);
    --v2;
  }
  while ( v2 );
  v5 = (BSShader *)((char *)this + 0xCC);
  v6 = 7;
  do
  {
    v7 = v5->__vftable;
    if ( v5->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) )
      {
        if ( v7 )
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1);
      }
      v5->__vftable = 0;
    }
    v5 = (BSShader *)((char *)v5 + 4);
    --v6;
  }
  while ( v6 );
  v8 = (BSShader *)((char *)this + 0xC0);
  v9 = 3;
  do
  {
    v10 = v8->__vftable;
    if ( v8->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->super.super.super.GetType) )
      {
        if ( v10 )
          (*(void (__thiscall **)(BSShaderVtbl *, int))v10->super.super.super.super.Destructor)(v10, 1);
      }
      v8->__vftable = 0;
    }
    v8 = (BSShader *)((char *)v8 + 4);
    --v9;
  }
  while ( v9 );
  v11 = (BSShader *)((char *)this + 0xE8);
  v12 = 3;
  do
  {
    v13 = v11->__vftable;
    if ( v11->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v13->super.super.super.GetType) )
      {
        if ( v13 )
          (*(void (__thiscall **)(BSShaderVtbl *, int))v13->super.super.super.super.Destructor)(v13, 1);
      }
      v11->__vftable = 0;
    }
    v11 = (BSShader *)((char *)v11 + 4);
    --v12;
  }
  while ( v12 );
  v14 = (NiD3DPass **)((char *)this + 0x9C);
  v15 = 2;
  do
  {
    v16 = *v14;
    if ( *v14 )
    {
      if ( v16->RefCount-- == 1 )
        sub_7604D0(v16);
      *v14 = 0;
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  LOBYTE(this->member.Unk078) = 0;
  v18 = *((_DWORD *)this + 0x3D);
  if ( v18 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    *((_DWORD *)this + 0x3D) = 0;
  }
  v19 = *((_DWORD *)this + 0x3E);
  if ( v19 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
      (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    *((_DWORD *)this + 0x3E) = 0;
  }
  this->member.Unk074 = 0xFFFFFFFF;
  v20 = *((_DWORD *)this + 0x3E);
  if ( v20 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
      (**(void (__thiscall ***)(int, int))v20)(v20, 1);
  }
  v21 = *((_DWORD *)this + 0x3D);
  if ( v21 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
      (**(void (__thiscall ***)(int, int))v21)(v21, 1);
  }
  _LN21((char *)this + 0xE8, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0xCC, 4u, 7, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0xC0, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0xA4, 4u, 7, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x9C, 4u, 2, (void (__thiscall *)(void *))sub_4027D0);
  ShadowLightShader::~ShadowLightShader(this);
}
