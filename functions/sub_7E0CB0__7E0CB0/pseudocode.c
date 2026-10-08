void __thiscall sub_7E0CB0(_DWORD *this)
{
  BSRenderedTexture *v2; // eax
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi

  v2 = (BSRenderedTexture *)*(this + 0x38); /*0x7e0cb5*/
  if ( v2 ) /*0x7e0cc0*/
    BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v2); /*0x7e0cc9*/
  if ( *(this + 0x39) ) /*0x7e0cce*/
    BSTextureManager__ReturnRenderedTexture( /*0x7e0cdf*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      (BSRenderedTexture *)*(this + 0x39));
  if ( *(this + 0x3A) ) /*0x7e0ce4*/
    BSTextureManager__ReturnRenderedTexture( /*0x7e0cf5*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      (BSRenderedTexture *)*(this + 0x3A));
  if ( *(this + 0x36) ) /*0x7e0cfa*/
    BSTextureManager__ReturnRenderedTexture( /*0x7e0d0b*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      (BSRenderedTexture *)*(this + 0x36));
  if ( *(this + 0x37) ) /*0x7e0d10*/
    BSTextureManager__ReturnRenderedTexture( /*0x7e0d21*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      (BSRenderedTexture *)*(this + 0x37));
  if ( *(this + 0x3C) ) /*0x7e0d26*/
    BSTextureManager__ReturnRenderedTexture( /*0x7e0d37*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      (BSRenderedTexture *)*(this + 0x3C));
  if ( *(this + 0x3D) ) /*0x7e0d3c*/
    BSTextureManager__ReturnRenderedTexture( /*0x7e0d4d*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      (BSRenderedTexture *)*(this + 0x3D));
  v3 = *(this + 0x38); /*0x7e0d52*/
  v4 = InterlockedDecrement; /*0x7e0d5a*/
  if ( v3 ) /*0x7e0d60*/
  {
    if ( !v4((volatile LONG *)(v3 + 4)) ) /*0x7e0d66*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7e0d78*/
    *(this + 0x38) = 0; /*0x7e0d7a*/
  }
  v5 = *(this + 0x39); /*0x7e0d80*/
  if ( v5 ) /*0x7e0d88*/
  {
    if ( !v4((volatile LONG *)(v5 + 4)) ) /*0x7e0d8e*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7e0da0*/
    *(this + 0x39) = 0; /*0x7e0da2*/
  }
  v6 = *(this + 0x3A); /*0x7e0da8*/
  if ( v6 ) /*0x7e0db0*/
  {
    if ( !v4((volatile LONG *)(v6 + 4)) ) /*0x7e0db6*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7e0dc8*/
    *(this + 0x3A) = 0; /*0x7e0dca*/
  }
  v7 = *(this + 0x36); /*0x7e0dd0*/
  if ( v7 ) /*0x7e0dd8*/
  {
    if ( !v4((volatile LONG *)(v7 + 4)) ) /*0x7e0dde*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7e0df0*/
    *(this + 0x36) = 0; /*0x7e0df2*/
  }
  v8 = *(this + 0x37); /*0x7e0df8*/
  if ( v8 ) /*0x7e0e00*/
  {
    if ( !v4((volatile LONG *)(v8 + 4)) ) /*0x7e0e06*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7e0e18*/
    *(this + 0x37) = 0; /*0x7e0e1a*/
  }
  v9 = *(this + 0x3C); /*0x7e0e20*/
  if ( v9 ) /*0x7e0e28*/
  {
    if ( !v4((volatile LONG *)(v9 + 4)) ) /*0x7e0e2e*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7e0e40*/
    *(this + 0x3C) = 0; /*0x7e0e42*/
  }
  v10 = *(this + 0x3D); /*0x7e0e48*/
  if ( v10 ) /*0x7e0e50*/
  {
    if ( !v4((volatile LONG *)(v10 + 4)) ) /*0x7e0e56*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7e0e68*/
    *(this + 0x3D) = 0; /*0x7e0e6a*/
  }
  v11 = *(this + 0x3B); /*0x7e0e70*/
  if ( v11 ) /*0x7e0e78*/
  {
    if ( !v4((volatile LONG *)(v11 + 4)) ) /*0x7e0e7e*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7e0e90*/
    *(this + 0x3B) = 0; /*0x7e0e92*/
  }
  *((_BYTE *)this + 0x108) = 0; /*0x7e0e99*/
}
