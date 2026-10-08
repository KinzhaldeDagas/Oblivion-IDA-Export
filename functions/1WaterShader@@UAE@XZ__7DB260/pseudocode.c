void __thiscall WaterShader::~WaterShader(WaterShader *this)
{
  NiD3DVertexShader *v2; // esi
  UInt32 *Unk07C; // edi
  int v4; // ebx
  UInt32 v5; // esi
  NiD3DPass *v6; // ecx
  UInt32 v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // edi
  UInt32 v10; // esi
  UInt32 v11; // esi
  UInt32 v12; // esi
  UInt32 v13; // esi
  NiD3DVertexShader *v14; // esi
  NiD3DVertexShader *v15; // esi

  this->super.__vftable = (BSShaderVtbl *)&WaterShader::`vftable'; /*0x7db28b*/
  v2 = this->Vertex[0]; /*0x7db292*/
  if ( v2 ) /*0x7db2a2*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v2 + 1) ) /*0x7db2a8*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v2)(v2, 1); /*0x7db2be*/
    this->Vertex[0] = 0; /*0x7db2c0*/
  }
  Unk07C = this->Unk07C; /*0x7db2ca*/
  v4 = 0x10; /*0x7db2cd*/
  do /*0x7db319*/
  {
    v5 = Unk07C[0x12]; /*0x7db2d2*/
    if ( v5 ) /*0x7db2d7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7db2dd*/
        (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1); /*0x7db2f3*/
      Unk07C[0x12] = 0; /*0x7db2f5*/
    }
    v6 = (NiD3DPass *)*Unk07C; /*0x7db2fc*/
    if ( *Unk07C ) /*0x7db2fc*/
    {
      if ( v6->RefCount-- == 1 ) /*0x7db302*/
        NiD3DPass_ReleaseToPool(v6); /*0x7db308*/
      *Unk07C = 0; /*0x7db30d*/
    }
    ++Unk07C; /*0x7db313*/
    --v4; /*0x7db316*/
  }
  while ( v4 ); /*0x7db319*/
  v8 = this->Unk104[4]; /*0x7db31b*/
  v9 = InterlockedDecrement; /*0x7db323*/
  if ( v8 ) /*0x7db32e*/
  {
    if ( !v9((volatile LONG *)(v8 + 4)) ) /*0x7db334*/
      (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1); /*0x7db346*/
  }
  v10 = this->Unk104[3]; /*0x7db348*/
  if ( v10 ) /*0x7db355*/
  {
    if ( !v9((volatile LONG *)(v10 + 4)) ) /*0x7db35b*/
      (**(void (__thiscall ***)(UInt32, int))v10)(v10, 1); /*0x7db36d*/
  }
  v11 = this->Unk104[2]; /*0x7db36f*/
  if ( v11 ) /*0x7db37c*/
  {
    if ( !v9((volatile LONG *)(v11 + 4)) ) /*0x7db382*/
      (**(void (__thiscall ***)(UInt32, int))v11)(v11, 1); /*0x7db394*/
  }
  v12 = this->Unk104[1]; /*0x7db396*/
  if ( v12 ) /*0x7db3a3*/
  {
    if ( !v9((volatile LONG *)(v12 + 4)) ) /*0x7db3a9*/
      (**(void (__thiscall ***)(UInt32, int))v12)(v12, 1); /*0x7db3bb*/
  }
  v13 = this->Unk104[0]; /*0x7db3bd*/
  if ( v13 ) /*0x7db3ca*/
  {
    if ( !v9((volatile LONG *)(v13 + 4)) ) /*0x7db3d0*/
      (**(void (__thiscall ***)(UInt32, int))v13)(v13, 1); /*0x7db3e2*/
  }
  _LN21((char *)this->Pixel, 4u, 0x10, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7db3f9*/
  v14 = this->Vertex[1]; /*0x7db3fe*/
  if ( v14 ) /*0x7db40b*/
  {
    if ( !v9((volatile LONG *)v14 + 1) ) /*0x7db411*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v14)(v14, 1); /*0x7db423*/
  }
  v15 = this->Vertex[0]; /*0x7db425*/
  if ( v15 ) /*0x7db432*/
  {
    if ( !v9((volatile LONG *)v15 + 1) ) /*0x7db438*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v15)(v15, 1); /*0x7db44a*/
  }
  _LN21((char *)this->Unk07C, 4u, 0x10, (void (__thiscall *)(void *))sub_4027D0); /*0x7db45e*/
  BSShader::~BSShader(&this->super); /*0x7db46d*/
}
