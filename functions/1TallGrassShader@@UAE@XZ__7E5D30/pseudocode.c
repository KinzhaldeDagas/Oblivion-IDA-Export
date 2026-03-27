void __thiscall TallGrassShader::~TallGrassShader(BSShader *this)
{
  BSShader *v2; // ebp
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // ebp
  BSShaderVtbl *v6; // esi
  unsigned int v7; // [esp-4h] [ebp-2Ch]
  int v8; // [esp+14h] [ebp-14h]

  this->__vftable = (BSShaderVtbl *)&TallGrassShader::`vftable';
  v2 = (BSShader *)((char *)this + 0x94);
  v3 = 0x14;
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
  v5 = (BSShader *)((char *)this + 0x134);
  v8 = 2;
  do
  {
    v6 = v5->__vftable;
    if ( v5->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->super.super.super.GetType) )
      {
        if ( v6 )
          (*(void (__thiscall **)(BSShaderVtbl *, int))v6->super.super.super.super.Destructor)(v6, 1);
      }
      v5->__vftable = 0;
    }
    v5 = (BSShader *)((char *)v5 + 4);
    --v8;
  }
  while ( v8 );
  v7 = *((_DWORD *)this + 0x56);
  *((_DWORD *)this + 0x57) = 0;
  FormHeapFree(v7);
  _LN21((char *)this + 0x134, 4u, 9, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x94, 4u, 0x28, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(this + 1, 4u, 3, (void (__thiscall *)(void *))sub_4027D0);
  BSShader::~BSShader(this);
}
