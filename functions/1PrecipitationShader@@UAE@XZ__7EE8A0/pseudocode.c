void __thiscall PrecipitationShader::~PrecipitationShader(BSShader *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int *v2; // edi
  int v3; // esi
  int *v4; // edi
  int v5; // esi
  NiD3DPass *v6; // eax
  int v8; // esi

  this->__vftable = (BSShaderVtbl *)&PrecipitationShader::`vftable';
  v1 = InterlockedDecrement;
  v2 = dword_B466E0;
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( !v1((volatile LONG *)(v3 + 4)) )
      {
        if ( v3 )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
      *v2 = 0;
    }
    ++v2;
  }
  while ( (int)v2 < (int)&unk_B466F0 );
  v4 = dword_B46708;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      if ( !v1((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      *v4 = 0;
    }
    ++v4;
  }
  while ( (int)v4 < (int)&dword_B46710 );
  v6 = (NiD3DPass *)dword_B46704;
  if ( dword_B46704 )
  {
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
    dword_B46704 = 0;
  }
  v8 = *((_DWORD *)this + 0x2B);
  if ( v8 )
  {
    if ( !v1((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  BSShader::~BSShader(this);
}
