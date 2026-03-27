void __thiscall SpeedTreeLeafShader::~SpeedTreeLeafShader(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *v7; // esi
  NiD3DPass *v8; // ecx

  this->__vftable = (BSShaderVtbl *)&SpeedTreeLeafShader::`vftable';
  v2 = (BSShader *)((char *)this + 0x37C);
  v3 = 4;
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
  v5 = (BSShader *)((char *)this + 0x38C);
  v6 = 2;
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
  v8 = *((NiD3DPass **)this + 0xE5);
  if ( v8 )
  {
    if ( v8->RefCount-- == 1 )
      sub_7604D0(v8);
  }
  _LN21((char *)this + 0x38C, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x37C, 4u, 4, (void (__thiscall *)(void *))sub_7016A0);
  BSShader::~BSShader(this);
}
