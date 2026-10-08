void __thiscall PrecipitationShader::~PrecipitationShader(BSShader *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  float *v2; // edi
  int v3; // esi
  float *v4; // edi
  int v5; // esi
  NiD3DPass *v6; // eax
  int v8; // esi

  this->__vftable = (BSShaderVtbl *)&PrecipitationShader::`vftable'; /*0x7ee8c8*/
  v1 = InterlockedDecrement; /*0x7ee8ce*/
  v2 = &flt_B46638[0x2A]; /*0x7ee8dc*/
  do /*0x7ee90e*/
  {
    v3 = *(_DWORD *)v2; /*0x7ee8e1*/
    if ( *(_DWORD *)v2 ) /*0x7ee8e1*/
    {
      if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x7ee8eb*/
      {
        if ( v3 ) /*0x7ee8f3*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7ee8fd*/
      }
      *v2 = 0.0; /*0x7ee8ff*/
    }
    ++v2; /*0x7ee905*/
  }
  while ( (int)v2 < (int)&flt_B46638[0x2E] ); /*0x7ee90e*/
  v4 = &flt_B46638[0x34]; /*0x7ee910*/
  do /*0x7ee942*/
  {
    v5 = *(_DWORD *)v4; /*0x7ee915*/
    if ( *(_DWORD *)v4 ) /*0x7ee915*/
    {
      if ( !v1((volatile LONG *)(v5 + 4)) ) /*0x7ee91f*/
      {
        if ( v5 ) /*0x7ee927*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7ee931*/
      }
      *v4 = 0.0; /*0x7ee933*/
    }
    ++v4; /*0x7ee939*/
  }
  while ( (int)v4 < (int)&flt_B46638[0x36] ); /*0x7ee942*/
  v6 = (NiD3DPass *)LODWORD(flt_B46638[0x33]); /*0x7ee944*/
  if ( LODWORD(flt_B46638[0x33]) ) /*0x7ee944*/
  {
    if ( v6->RefCount-- == 1 ) /*0x7ee950*/
      NiD3DPass_ReleaseToPool(v6); /*0x7ee957*/
    flt_B46638[0x33] = 0.0; /*0x7ee95c*/
  }
  v8 = *((_DWORD *)this + 0x2B); /*0x7ee96a*/
  if ( v8 ) /*0x7ee977*/
  {
    if ( !v1((volatile LONG *)(v8 + 4)) ) /*0x7ee97d*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7ee98f*/
  }
  BSShader::~BSShader(this); /*0x7ee999*/
}
