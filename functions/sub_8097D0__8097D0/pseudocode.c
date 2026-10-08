char __thiscall sub_8097D0(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *v7; // esi
  NiD3DPass **v8; // esi
  NiD3DPass *v9; // ecx

  sub_8025F0(this); /*0x8097d6*/
  v2 = (BSShader *)((char *)this + 0x9C); /*0x8097db*/
  v3 = 0x14; /*0x8097e1*/
  do /*0x809814*/
  {
    vftable = v2->__vftable; /*0x8097e6*/
    if ( v2->__vftable ) /*0x8097e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x8097f0*/
      {
        if ( vftable ) /*0x8097fc*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x809806*/
      }
      v2->__vftable = 0; /*0x809808*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x80980e*/
    --v3; /*0x809811*/
  }
  while ( v3 ); /*0x809814*/
  v5 = (BSShader *)((char *)this + 0xEC); /*0x809816*/
  v6 = 0xA; /*0x80981c*/
  do /*0x80984f*/
  {
    v7 = v5->__vftable; /*0x809821*/
    if ( v5->__vftable ) /*0x809821*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) ) /*0x80982b*/
      {
        if ( v7 ) /*0x809837*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1); /*0x809841*/
      }
      v5->__vftable = 0; /*0x809843*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x809849*/
    --v6; /*0x80984c*/
  }
  while ( v6 ); /*0x80984f*/
  v8 = (NiD3DPass **)unk_B47718; /*0x809851*/
  do /*0x80987f*/
  {
    v9 = *v8; /*0x809860*/
    if ( *v8 ) /*0x809860*/
    {
      if ( v9->RefCount-- == 1 ) /*0x809866*/
        NiD3DPass_ReleaseToPool(v9); /*0x80986b*/
      *v8 = 0; /*0x809870*/
    }
    ++v8; /*0x809876*/
  }
  while ( (int)v8 < (int)&stru_B47768 ); /*0x80987f*/
  return 1; /*0x809881*/
}
