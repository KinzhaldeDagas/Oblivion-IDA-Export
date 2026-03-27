void __thiscall WaterShaderDisplacement::~WaterShaderDisplacement(BSImageSpaceShader *this)
{
  int v2; // ebx
  BSImageSpaceShader *v3; // edi
  int v4; // esi
  BSImageSpaceShaderVtbl *vftable; // esi
  NiD3DPass *v6; // ecx
  bool v7; // zf
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // edi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  NiD3DPass *v14; // ecx

  this->__vftable = (BSImageSpaceShaderVtbl *)&WaterShaderDisplacement::`vftable';
  v2 = 8;
  v3 = (BSImageSpaceShader *)((char *)this + 0xB4);
  do
  {
    v4 = *(_DWORD *)&v3->member.super.super.IsInitialized;
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *(_DWORD *)&v3->member.super.super.IsInitialized = 0;
    }
    vftable = v3->__vftable;
    if ( v3->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.super.GetType) )
      {
        if ( vftable )
          (*(void (__thiscall **)(BSImageSpaceShaderVtbl *, int))vftable->super.super.super.super.super.Destructor)(
            vftable,
            1);
      }
      v3->__vftable = 0;
    }
    v3 = (BSImageSpaceShader *)((char *)v3 + 4);
    --v2;
  }
  while ( v2 );
  v6 = *((NiD3DPass **)this + 0x3E);
  if ( v6 )
  {
    v7 = v6->RefCount-- == 1;
    if ( v7 )
      sub_7604D0(v6);
    *((_DWORD *)this + 0x3E) = 0;
  }
  v8 = *((_DWORD *)this + 0x43);
  v9 = InterlockedDecrement;
  if ( v8 )
  {
    if ( !v9((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v10 = *((_DWORD *)this + 0x42);
  if ( v10 )
  {
    if ( !v9((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *((_DWORD *)this + 0x41);
  if ( v11 )
  {
    if ( !v9((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  v12 = *((_DWORD *)this + 0x40);
  if ( v12 )
  {
    if ( !v9((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  v13 = *((_DWORD *)this + 0x3F);
  if ( v13 )
  {
    if ( !v9((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
  }
  v14 = *((NiD3DPass **)this + 0x3E);
  if ( v14 )
  {
    v7 = v14->RefCount-- == 1;
    if ( v7 )
      sub_7604D0(v14);
  }
  _LN21((char *)this + 0xD4, 4u, 8, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0xB4, 4u, 8, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader(this);
}
