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

  BSShader::BSShader(&this->super);
  this->super.__vftable = (BSShaderVtbl *)&SkyShader::`vftable';
  this->Vertex[0] = 0;
  this->Vertex[1] = 0;
  this->Vertex[2] = 0;
  this->Vertex[3] = 0;
  this->Vertex[4] = 0;
  this->Vertex[5] = 0;
  this->Vertex[6] = 0;
  this->Pixel[0] = 0;
  this->Pixel[1] = 0;
  this->Pixel[2] = 0;
  this->Pixel[3] = 0;
  this->Pixel[4] = 0;
  this->unkAC[0] = 0;
  this->unkAC[1] = 0;
  this->unkAC[2] = 0;
  this->unkAC[3] = 0;
  this->unkAC[4] = 0;
  this->unkAC[5] = 0;
  this->Vertex1[0] = 0;
  this->Vertex1[1] = 0;
  this->Vertex1[2] = 0;
  this->Pixel1[0] = 0;
  this->Pixel1[1] = 0;
  this->Pixel1[2] = 0;
  v2 = (NiD3DPass *)this->unkAC[3];
  if ( v2 )
  {
    v3 = v2->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v2);
    this->unkAC[3] = 0;
  }
  v4 = (NiD3DPass *)this->unkAC[4];
  if ( v4 )
  {
    v3 = v4->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v4);
    this->unkAC[4] = 0;
  }
  v5 = (NiD3DPass *)this->unkAC[5];
  if ( v5 )
  {
    v3 = v5->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v5);
    this->unkAC[5] = 0;
  }
  v6 = this->Vertex1[0];
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v6 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1);
    this->Vertex1[0] = 0;
  }
  v7 = this->Vertex1[1];
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v7 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v7)(v7, 1);
    this->Vertex1[1] = 0;
  }
  v8 = this->Vertex1[2];
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1);
    this->Vertex1[2] = 0;
  }
  v9 = this->Pixel1[0];
  if ( v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v9 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v9)(v9, 1);
    this->Pixel1[0] = 0;
  }
  v10 = this->Pixel1[1];
  if ( v10 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v10 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v10)(v10, 1);
    this->Pixel1[1] = 0;
  }
  v11 = this->Pixel1[2];
  if ( v11 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v11 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v11)(v11, 1);
    this->Pixel1[2] = 0;
  }
  v12 = (NiD3DPass *)this->unkAC[2];
  if ( v12 )
  {
    v3 = v12->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v12);
    this->unkAC[2] = 0;
  }
  v13 = (NiD3DPass *)this->unkAC[0];
  if ( v13 )
  {
    v3 = v13->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v13);
    this->unkAC[0] = 0;
  }
  v14 = this->Vertex[0];
  v15 = InterlockedDecrement;
  if ( v14 )
  {
    if ( !v15((volatile LONG *)v14 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v14)(v14, 1);
    this->Vertex[0] = 0;
  }
  v16 = this->Vertex[1];
  if ( v16 )
  {
    if ( !v15((volatile LONG *)v16 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1);
    this->Vertex[1] = 0;
  }
  v17 = this->Vertex[2];
  if ( v17 )
  {
    if ( !v15((volatile LONG *)v17 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v17)(v17, 1);
    this->Vertex[2] = 0;
  }
  v18 = this->Vertex[4];
  if ( v18 )
  {
    if ( !v15((volatile LONG *)v18 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1);
    this->Vertex[4] = 0;
  }
  v19 = this->Vertex[5];
  if ( v19 )
  {
    if ( !v15((volatile LONG *)v19 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v19)(v19, 1);
    this->Vertex[5] = 0;
  }
  v20 = this->Vertex[6];
  if ( v20 )
  {
    if ( !v15((volatile LONG *)v20 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1);
    this->Vertex[6] = 0;
  }
  v21 = this->Vertex[3];
  if ( v21 )
  {
    if ( !v15((volatile LONG *)v21 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v21)(v21, 1);
    this->Vertex[3] = 0;
  }
  v22 = this->Pixel[0];
  if ( v22 )
  {
    if ( !v15((volatile LONG *)v22 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v22)(v22, 1);
    this->Pixel[0] = 0;
  }
  v23 = this->Pixel[1];
  if ( v23 )
  {
    if ( !v15((volatile LONG *)v23 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v23)(v23, 1);
    this->Pixel[1] = 0;
  }
  v24 = this->Pixel[2];
  if ( v24 )
  {
    if ( !v15((volatile LONG *)v24 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v24)(v24, 1);
    this->Pixel[2] = 0;
  }
  v25 = this->Pixel[3];
  if ( v25 )
  {
    if ( !v15((volatile LONG *)v25 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v25)(v25, 1);
    this->Pixel[3] = 0;
  }
  v26 = this->Pixel[4];
  if ( v26 )
  {
    if ( !v15((volatile LONG *)v26 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1);
    this->Pixel[4] = 0;
  }
  v27 = dword_B25AD0;
  v28 = dword_B25AD4;
  v29 = dword_B25AD8;
  v30 = dword_B25ADC;
  LODWORD(qword_B43178) = dword_B25AD0;
  LODWORD(qword_B43188) = v27;
  LODWORD(qword_B43198) = v27;
  LODWORD(qword_B431A8) = v27;
  LODWORD(qword_B431B8) = v27;
  LODWORD(qword_B431C8) = v27;
  dword_B43168 = v27;
  HIDWORD(qword_B43178) = v28;
  dword_B43180 = v29;
  dword_B43184 = v30;
  HIDWORD(qword_B43188) = v28;
  dword_B43190 = v29;
  dword_B43194 = v30;
  HIDWORD(qword_B43198) = v28;
  dword_B431A0 = v29;
  dword_B431A4 = v30;
  HIDWORD(qword_B431A8) = v28;
  dword_B431B0 = v29;
  dword_B431B4 = v30;
  HIDWORD(qword_B431B8) = v28;
  dword_B431C0 = v29;
  dword_B431C4 = v30;
  HIDWORD(qword_B431C8) = v28;
  dword_B431D0 = v29;
  dword_B431D4 = v30;
  dword_B4316C = v28;
  dword_B43170 = v29;
  dword_B43174 = v30;
  this->super.member.super.IsInitialized = 1;
  return this;
}
