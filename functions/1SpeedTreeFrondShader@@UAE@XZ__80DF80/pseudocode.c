void __thiscall SpeedTreeFrondShader::~SpeedTreeFrondShader(BSShader *this)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *vftable; // esi
  NiD3DPass *v8; // ecx

  this->__vftable = (BSShaderVtbl *)&SpeedTreeFrondShader::`vftable';
  v2 = (int *)(this + 1);
  v3 = 4;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v5 = (BSShader *)((char *)this + 0x8C);
  v6 = 2;
  do
  {
    vftable = v5->__vftable;
    if ( v5->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) )
      {
        if ( vftable )
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1);
      }
      v5->__vftable = 0;
    }
    v5 = (BSShader *)((char *)v5 + 4);
    --v6;
  }
  while ( v6 );
  v8 = *((NiD3DPass **)this + 0x25);
  if ( v8 )
  {
    if ( v8->RefCount-- == 1 )
      sub_7604D0(v8);
  }
  _LN21((char *)this + 0x8C, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(this + 1, 4u, 4, (void (__thiscall *)(void *))sub_7016A0);
  BSShader::~BSShader(this);
}
