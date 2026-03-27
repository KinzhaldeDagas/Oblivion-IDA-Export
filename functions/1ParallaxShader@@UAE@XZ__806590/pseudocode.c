void __thiscall ParallaxShader::~ParallaxShader(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  char *v5; // ebp
  int *v6; // edi
  int v7; // ebx
  int v8; // esi
  NiD3DPass **v9; // esi
  NiD3DPass *v10; // ecx

  this->__vftable = (BSShaderVtbl *)&ParallaxShader::`vftable';
  v2 = (BSShader *)((char *)this + 0x9C);
  v3 = 0x24;
  do
  {
    vftable = v2->__vftable;
    if ( v2->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) )
      {
        if ( vftable )
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1);
      }
      v2->__vftable = 0;
    }
    v2 = (BSShader *)((char *)v2 + 4);
    --v3;
  }
  while ( v3 );
  v5 = (char *)this + 0x12C;
  v6 = (int *)v5;
  v7 = 0x1E;
  do
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      {
        if ( v8 )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      *v6 = 0;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = (NiD3DPass **)dword_B47620;
  do
  {
    v10 = *v9;
    if ( *v9 )
    {
      if ( v10->RefCount-- == 1 )
        sub_7604D0(v10);
      *v9 = 0;
    }
    ++v9;
  }
  while ( (int)v9 < (int)&unk_B47710 );
  _LN21(v5, 4u, 0x1E, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x9C, 4u, 0x24, (void (__thiscall *)(void *))sub_7016A0);
  ShadowLightShader::~ShadowLightShader(this);
}
