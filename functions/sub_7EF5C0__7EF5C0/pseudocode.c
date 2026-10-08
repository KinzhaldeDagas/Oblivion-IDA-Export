char __thiscall sub_7EF5C0(BSShader *this)
{
  char v1; // al
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  char v3; // bl
  float *v4; // edi
  int v5; // esi
  float *v6; // edi
  int v7; // esi
  NiD3DPass *v8; // eax

  v1 = sub_8025F0(this); /*0x7ef5c3*/
  v2 = InterlockedDecrement; /*0x7ef5c8*/
  v3 = v1; /*0x7ef5ce*/
  v4 = &flt_B46638[0x2A]; /*0x7ef5d0*/
  do /*0x7ef603*/
  {
    v5 = *(_DWORD *)v4; /*0x7ef5d6*/
    if ( *(_DWORD *)v4 ) /*0x7ef5d6*/
    {
      if ( !v2((volatile LONG *)(v5 + 4)) ) /*0x7ef5e0*/
      {
        if ( v5 ) /*0x7ef5e8*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7ef5f2*/
      }
      *v4 = 0.0; /*0x7ef5f4*/
    }
    ++v4; /*0x7ef5fa*/
  }
  while ( (int)v4 < (int)&flt_B46638[0x2E] ); /*0x7ef603*/
  v6 = &flt_B46638[0x34]; /*0x7ef605*/
  do /*0x7ef63d*/
  {
    v7 = *(_DWORD *)v6; /*0x7ef610*/
    if ( *(_DWORD *)v6 ) /*0x7ef610*/
    {
      if ( !v2((volatile LONG *)(v7 + 4)) ) /*0x7ef61a*/
      {
        if ( v7 ) /*0x7ef622*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7ef62c*/
      }
      *v6 = 0.0; /*0x7ef62e*/
    }
    ++v6; /*0x7ef634*/
  }
  while ( (int)v6 < (int)&flt_B46638[0x36] ); /*0x7ef63d*/
  v8 = (NiD3DPass *)LODWORD(flt_B46638[0x33]); /*0x7ef63f*/
  if ( LODWORD(flt_B46638[0x33]) ) /*0x7ef63f*/
  {
    if ( v8->RefCount-- == 1 ) /*0x7ef649*/
      NiD3DPass_ReleaseToPool(v8); /*0x7ef651*/
    flt_B46638[0x33] = 0.0; /*0x7ef656*/
  }
  return v3; /*0x7ef660*/
}
