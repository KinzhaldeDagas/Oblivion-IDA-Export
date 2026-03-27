void __thiscall CopyShader::~CopyShader(BSImageSpaceShader *this)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // esi
  char *v5; // ebx
  int *v6; // edi
  int v7; // ebp
  int v8; // esi

  this->__vftable = (BSImageSpaceShaderVtbl *)&CopyShader::`vftable';
  v2 = (int *)(this + 1);
  v3 = 3;
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
  v5 = (char *)this + 0x98;
  v6 = (int *)v5;
  v7 = 3;
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
  _LN21(v5, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(this + 1, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader(this);
}
