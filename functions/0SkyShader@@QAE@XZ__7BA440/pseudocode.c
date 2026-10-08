SkyShader *__thiscall SkyShader::SkyShader(SkyShader *this)
{
  NiD3DPass *v2; // ecx
  bool v3; // zf
  NiD3DPass *v4; // ecx
  NiD3DPass *v5; // ecx
  NiD3DVertexShader *v6; // ebx
  NiD3DVertexShader *v7; // ebx
  NiD3DVertexShader *v8; // ebx
  NiD3DPixelShader *v9; // ebx
  NiD3DPixelShader *v10; // ebx
  NiD3DPixelShader *v11; // ebx
  NiD3DPass *v12; // ecx
  NiD3DPass *v13; // ecx
  NiD3DVertexShader *v14; // ebx
  LONG (__stdcall *v15)(volatile LONG *); // ebp
  NiD3DVertexShader *v16; // ebx
  NiD3DVertexShader *v17; // ebx
  NiD3DVertexShader *v18; // ebx
  NiD3DVertexShader *v19; // ebx
  NiD3DVertexShader *v20; // ebx
  NiD3DVertexShader *v21; // ebx
  NiD3DPixelShader *v22; // ebx
  NiD3DPixelShader *v23; // ebx
  NiD3DPixelShader *v24; // ebx
  NiD3DPixelShader *v25; // ebx
  NiD3DPixelShader *v26; // ebx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // edi

  BSShader::BSShader(&this->super); /*0x7ba46b*/
  this->super.__vftable = (BSShaderVtbl *)&SkyShader::`vftable'; /*0x7ba472*/
  this->Vertex[0] = 0; /*0x7ba47c*/
  this->Vertex[1] = 0; /*0x7ba47f*/
  this->Vertex[2] = 0; /*0x7ba485*/
  this->Vertex[3] = 0; /*0x7ba48b*/
  this->Vertex[4] = 0; /*0x7ba491*/
  this->Vertex[5] = 0; /*0x7ba497*/
  this->Vertex[6] = 0; /*0x7ba49d*/
  this->Pixel[0] = 0; /*0x7ba4a3*/
  this->Pixel[1] = 0; /*0x7ba4a9*/
  this->Pixel[2] = 0; /*0x7ba4af*/
  this->Pixel[3] = 0; /*0x7ba4b5*/
  this->Pixel[4] = 0; /*0x7ba4bb*/
  this->unkAC[0] = 0; /*0x7ba4c1*/
  this->unkAC[1] = 0; /*0x7ba4c7*/
  this->unkAC[2] = 0; /*0x7ba4cd*/
  this->unkAC[3] = 0; /*0x7ba4d3*/
  this->unkAC[4] = 0; /*0x7ba4d9*/
  this->unkAC[5] = 0; /*0x7ba4df*/
  this->Vertex1[0] = 0; /*0x7ba4e5*/
  this->Vertex1[1] = 0; /*0x7ba4eb*/
  this->Vertex1[2] = 0; /*0x7ba4f1*/
  this->Pixel1[0] = 0; /*0x7ba4f7*/
  this->Pixel1[1] = 0; /*0x7ba4fd*/
  this->Pixel1[2] = 0; /*0x7ba503*/
  v2 = (NiD3DPass *)this->unkAC[3]; /*0x7ba509*/
  if ( v2 ) /*0x7ba519*/
  {
    v3 = v2->RefCount-- == 1; /*0x7ba51b*/
    if ( v3 ) /*0x7ba51e*/
      NiD3DPass_ReleaseToPool(v2); /*0x7ba520*/
    this->unkAC[3] = 0; /*0x7ba525*/
  }
  v4 = (NiD3DPass *)this->unkAC[4]; /*0x7ba52b*/
  if ( v4 ) /*0x7ba533*/
  {
    v3 = v4->RefCount-- == 1; /*0x7ba535*/
    if ( v3 ) /*0x7ba538*/
      NiD3DPass_ReleaseToPool(v4); /*0x7ba53a*/
    this->unkAC[4] = 0; /*0x7ba53f*/
  }
  v5 = (NiD3DPass *)this->unkAC[5]; /*0x7ba545*/
  if ( v5 ) /*0x7ba54d*/
  {
    v3 = v5->RefCount-- == 1; /*0x7ba54f*/
    if ( v3 ) /*0x7ba552*/
      NiD3DPass_ReleaseToPool(v5); /*0x7ba554*/
    this->unkAC[5] = 0; /*0x7ba559*/
  }
  v6 = this->Vertex1[0]; /*0x7ba55f*/
  if ( v6 ) /*0x7ba567*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v6 + 1) ) /*0x7ba56d*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1); /*0x7ba583*/
    this->Vertex1[0] = 0; /*0x7ba585*/
  }
  v7 = this->Vertex1[1]; /*0x7ba58b*/
  if ( v7 ) /*0x7ba593*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v7 + 1) ) /*0x7ba599*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v7)(v7, 1); /*0x7ba5af*/
    this->Vertex1[1] = 0; /*0x7ba5b1*/
  }
  v8 = this->Vertex1[2]; /*0x7ba5b7*/
  if ( v8 ) /*0x7ba5bf*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x7ba5c5*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1); /*0x7ba5db*/
    this->Vertex1[2] = 0; /*0x7ba5dd*/
  }
  v9 = this->Pixel1[0]; /*0x7ba5e3*/
  if ( v9 ) /*0x7ba5eb*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v9 + 1) ) /*0x7ba5f1*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v9)(v9, 1); /*0x7ba607*/
    this->Pixel1[0] = 0; /*0x7ba609*/
  }
  v10 = this->Pixel1[1]; /*0x7ba60f*/
  if ( v10 ) /*0x7ba617*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v10 + 1) ) /*0x7ba61d*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v10)(v10, 1); /*0x7ba633*/
    this->Pixel1[1] = 0; /*0x7ba635*/
  }
  v11 = this->Pixel1[2]; /*0x7ba63b*/
  if ( v11 ) /*0x7ba643*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v11 + 1) ) /*0x7ba649*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v11)(v11, 1); /*0x7ba65f*/
    this->Pixel1[2] = 0; /*0x7ba661*/
  }
  v12 = (NiD3DPass *)this->unkAC[2]; /*0x7ba667*/
  if ( v12 ) /*0x7ba66f*/
  {
    v3 = v12->RefCount-- == 1; /*0x7ba671*/
    if ( v3 ) /*0x7ba674*/
      NiD3DPass_ReleaseToPool(v12); /*0x7ba676*/
    this->unkAC[2] = 0; /*0x7ba67b*/
  }
  v13 = (NiD3DPass *)this->unkAC[0]; /*0x7ba681*/
  if ( v13 ) /*0x7ba689*/
  {
    v3 = v13->RefCount-- == 1; /*0x7ba68b*/
    if ( v3 ) /*0x7ba68e*/
      NiD3DPass_ReleaseToPool(v13); /*0x7ba690*/
    this->unkAC[0] = 0; /*0x7ba695*/
  }
  v14 = this->Vertex[0]; /*0x7ba69b*/
  v15 = InterlockedDecrement; /*0x7ba6a0*/
  if ( v14 ) /*0x7ba6a6*/
  {
    if ( !v15((volatile LONG *)v14 + 1) ) /*0x7ba6ac*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v14)(v14, 1); /*0x7ba6be*/
    this->Vertex[0] = 0; /*0x7ba6c0*/
  }
  v16 = this->Vertex[1]; /*0x7ba6c3*/
  if ( v16 ) /*0x7ba6cb*/
  {
    if ( !v15((volatile LONG *)v16 + 1) ) /*0x7ba6d1*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1); /*0x7ba6e3*/
    this->Vertex[1] = 0; /*0x7ba6e5*/
  }
  v17 = this->Vertex[2]; /*0x7ba6eb*/
  if ( v17 ) /*0x7ba6f3*/
  {
    if ( !v15((volatile LONG *)v17 + 1) ) /*0x7ba6f9*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v17)(v17, 1); /*0x7ba70b*/
    this->Vertex[2] = 0; /*0x7ba70d*/
  }
  v18 = this->Vertex[4]; /*0x7ba713*/
  if ( v18 ) /*0x7ba71b*/
  {
    if ( !v15((volatile LONG *)v18 + 1) ) /*0x7ba721*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1); /*0x7ba733*/
    this->Vertex[4] = 0; /*0x7ba735*/
  }
  v19 = this->Vertex[5]; /*0x7ba73b*/
  if ( v19 ) /*0x7ba743*/
  {
    if ( !v15((volatile LONG *)v19 + 1) ) /*0x7ba749*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v19)(v19, 1); /*0x7ba75b*/
    this->Vertex[5] = 0; /*0x7ba75d*/
  }
  v20 = this->Vertex[6]; /*0x7ba763*/
  if ( v20 ) /*0x7ba76b*/
  {
    if ( !v15((volatile LONG *)v20 + 1) ) /*0x7ba771*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1); /*0x7ba783*/
    this->Vertex[6] = 0; /*0x7ba785*/
  }
  v21 = this->Vertex[3]; /*0x7ba78b*/
  if ( v21 ) /*0x7ba793*/
  {
    if ( !v15((volatile LONG *)v21 + 1) ) /*0x7ba799*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v21)(v21, 1); /*0x7ba7ab*/
    this->Vertex[3] = 0; /*0x7ba7ad*/
  }
  v22 = this->Pixel[0]; /*0x7ba7b3*/
  if ( v22 ) /*0x7ba7bb*/
  {
    if ( !v15((volatile LONG *)v22 + 1) ) /*0x7ba7c1*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v22)(v22, 1); /*0x7ba7d3*/
    this->Pixel[0] = 0; /*0x7ba7d5*/
  }
  v23 = this->Pixel[1]; /*0x7ba7db*/
  if ( v23 ) /*0x7ba7e3*/
  {
    if ( !v15((volatile LONG *)v23 + 1) ) /*0x7ba7e9*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v23)(v23, 1); /*0x7ba7fb*/
    this->Pixel[1] = 0; /*0x7ba7fd*/
  }
  v24 = this->Pixel[2]; /*0x7ba803*/
  if ( v24 ) /*0x7ba80b*/
  {
    if ( !v15((volatile LONG *)v24 + 1) ) /*0x7ba811*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v24)(v24, 1); /*0x7ba823*/
    this->Pixel[2] = 0; /*0x7ba825*/
  }
  v25 = this->Pixel[3]; /*0x7ba82b*/
  if ( v25 ) /*0x7ba833*/
  {
    if ( !v15((volatile LONG *)v25 + 1) ) /*0x7ba839*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v25)(v25, 1); /*0x7ba84b*/
    this->Pixel[3] = 0; /*0x7ba84d*/
  }
  v26 = this->Pixel[4]; /*0x7ba853*/
  if ( v26 ) /*0x7ba85b*/
  {
    if ( !v15((volatile LONG *)v26 + 1) ) /*0x7ba861*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1); /*0x7ba873*/
    this->Pixel[4] = 0; /*0x7ba875*/
  }
  v27 = dword_B25AD0; /*0x7ba87b*/
  v28 = dword_B25AD4; /*0x7ba880*/
  v29 = dword_B25AD8; /*0x7ba886*/
  v30 = dword_B25ADC; /*0x7ba88c*/
  LODWORD(qword_B43178[0]) = dword_B25AD0; /*0x7ba892*/
  LODWORD(qword_B43178[2]) = v27; /*0x7ba897*/
  LODWORD(qword_B43178[4]) = v27; /*0x7ba89c*/
  LODWORD(qword_B43178[6]) = v27; /*0x7ba8a1*/
  LODWORD(qword_B43178[8]) = v27; /*0x7ba8a6*/
  LODWORD(qword_B43178[0xA]) = v27; /*0x7ba8ab*/
  flt_B43168 = v27; /*0x7ba8b0*/
  HIDWORD(qword_B43178[0]) = v28; /*0x7ba8b5*/
  LODWORD(qword_B43178[1]) = v29; /*0x7ba8bb*/
  HIDWORD(qword_B43178[1]) = v30; /*0x7ba8c1*/
  HIDWORD(qword_B43178[2]) = v28; /*0x7ba8c7*/
  LODWORD(qword_B43178[3]) = v29; /*0x7ba8cd*/
  HIDWORD(qword_B43178[3]) = v30; /*0x7ba8d3*/
  HIDWORD(qword_B43178[4]) = v28; /*0x7ba8d9*/
  LODWORD(qword_B43178[5]) = v29; /*0x7ba8df*/
  HIDWORD(qword_B43178[5]) = v30; /*0x7ba8e5*/
  HIDWORD(qword_B43178[6]) = v28; /*0x7ba8eb*/
  LODWORD(qword_B43178[7]) = v29; /*0x7ba8f1*/
  HIDWORD(qword_B43178[7]) = v30; /*0x7ba8f7*/
  HIDWORD(qword_B43178[8]) = v28; /*0x7ba8fd*/
  LODWORD(qword_B43178[9]) = v29; /*0x7ba903*/
  HIDWORD(qword_B43178[9]) = v30; /*0x7ba909*/
  HIDWORD(qword_B43178[0xA]) = v28; /*0x7ba90f*/
  LODWORD(qword_B43178[0xB]) = v29; /*0x7ba915*/
  HIDWORD(qword_B43178[0xB]) = v30; /*0x7ba91b*/
  flt_B4316C = v28; /*0x7ba921*/
  flt_B43170 = v29; /*0x7ba927*/
  flt_B43174 = v30; /*0x7ba92d*/
  this->super.member.super.IsInitialized = 1; /*0x7ba933*/
  return this; /*0x7ba939*/
}
