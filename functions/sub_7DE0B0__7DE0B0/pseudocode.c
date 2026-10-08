void __thiscall sub_7DE0B0(BSRenderedTexture **this)
{
  BSRenderedTexture *v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  float v9; // edi
  float v10; // edi
  void (__thiscall ***v11)(_DWORD, int); // ecx

  v2 = *(this + 0x43); /*0x7de0b4*/
  if ( v2 ) /*0x7de0be*/
    BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v2); /*0x7de0c7*/
  if ( *(this + 0x40) ) /*0x7de0cc*/
    BSTextureManager__ReturnRenderedTexture( /*0x7de0dd*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      *(this + 0x40));
  if ( *(this + 0x41) ) /*0x7de0e2*/
    BSTextureManager__ReturnRenderedTexture( /*0x7de0f3*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      *(this + 0x41));
  v3 = InterlockedDecrement; /*0x7de0f9*/
  v4 = (int)*(this + 0x43); /*0x7de100*/
  if ( v4 ) /*0x7de108*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7de10e*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7de120*/
    *(this + 0x43) = 0; /*0x7de122*/
  }
  v5 = (int)*(this + 0x40); /*0x7de128*/
  if ( v5 ) /*0x7de130*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7de136*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7de148*/
    *(this + 0x40) = 0; /*0x7de14a*/
  }
  v6 = (int)*(this + 0x41); /*0x7de150*/
  if ( v6 ) /*0x7de158*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x7de15e*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7de170*/
    *(this + 0x41) = 0; /*0x7de172*/
  }
  v7 = (int)*(this + 0x3F); /*0x7de178*/
  if ( v7 ) /*0x7de180*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x7de186*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7de198*/
    *(this + 0x3F) = 0; /*0x7de19a*/
  }
  v8 = (int)*(this + 0x42); /*0x7de1a0*/
  if ( v8 ) /*0x7de1a8*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x7de1ae*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7de1c0*/
    *(this + 0x42) = 0; /*0x7de1c2*/
  }
  v9 = OB_ShaderConstantStorage_010201A0[0x65]; /*0x7de1c8*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x65]) ) /*0x7de1c8*/
  {
    if ( !v3((volatile LONG *)(LODWORD(v9) + 4)) && v9 != 0.0 ) /*0x7de1de*/
      (**(void (__thiscall ***)(float, int))LODWORD(v9))(COERCE_FLOAT(LODWORD(v9)), 1); /*0x7de1e8*/
    OB_ShaderConstantStorage_010201A0[0x65] = 0.0; /*0x7de1ea*/
  }
  v10 = OB_ShaderConstantStorage_010201A0[0x68]; /*0x7de1f0*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) ) /*0x7de1f0*/
  {
    if ( !v3((volatile LONG *)(LODWORD(v10) + 4)) && v10 != 0.0 ) /*0x7de206*/
      (**(void (__thiscall ***)(float, int))LODWORD(v10))(COERCE_FLOAT(LODWORD(v10)), 1); /*0x7de210*/
    OB_ShaderConstantStorage_010201A0[0x68] = 0.0; /*0x7de212*/
  }
  v11 = (void (__thiscall ***)(_DWORD, int))*(this + 0x24); /*0x7de218*/
  if ( v11 ) /*0x7de222*/
    (**v11)(v11, 1); /*0x7de22a*/
  *(this + 0x24) = 0; /*0x7de22c*/
}
