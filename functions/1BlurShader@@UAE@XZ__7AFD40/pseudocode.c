void __thiscall BlurShader::~BlurShader(BSImageSpaceShader *this)
{
  int v2; // esi
  int v3; // ebx
  BSImageSpaceShader *v4; // edi
  UInt32 Unk084; // esi
  BSImageSpaceShaderVtbl *vftable; // esi
  int v7; // esi

  this->__vftable = (BSImageSpaceShaderVtbl *)&BlurShader::`vftable';
  v2 = *((_DWORD *)this + 0x38);
  v3 = 3;
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x38) = 0;
  }
  v4 = (BSImageSpaceShader *)((char *)this + 0xA0);
  do
  {
    Unk084 = v4[0xFFFFFFFF].member.Unk084;
    if ( Unk084 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(Unk084 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))Unk084)(Unk084, 1);
      v4[0xFFFFFFFF].member.Unk084 = 0;
    }
    vftable = v4->__vftable;
    if ( v4->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.super.GetType) )
      {
        if ( vftable )
          (*(void (__thiscall **)(BSImageSpaceShaderVtbl *, int))vftable->super.super.super.super.super.Destructor)(
            vftable,
            1);
      }
      v4->__vftable = 0;
    }
    v4 = (BSImageSpaceShader *)((char *)v4 + 4);
    --v3;
  }
  while ( v3 );
  v7 = *((_DWORD *)this + 0x38);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  _LN21((char *)this + 0xA0, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x94, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader(this);
}
