void __thiscall SkyShader::~SkyShader(SkyShader *this)
{
  NiD3DPass *v2; // ecx
  bool v3; // zf
  NiD3DPass *v4; // ecx
  NiD3DPass *v5; // ecx
  NiD3DVertexShader *v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  NiD3DVertexShader *v8; // edi
  NiD3DVertexShader *v9; // edi
  NiD3DPixelShader *v10; // edi
  NiD3DPixelShader *v11; // edi
  NiD3DPixelShader *v12; // edi
  NiD3DPass *v13; // ecx
  NiD3DPass *v14; // ecx
  NiD3DVertexShader *v15; // edi
  NiD3DVertexShader *v16; // edi
  NiD3DVertexShader *v17; // edi
  NiD3DVertexShader *v18; // edi
  NiD3DVertexShader *v19; // edi
  NiD3DVertexShader *v20; // edi
  NiD3DVertexShader *v21; // edi
  NiD3DPixelShader *v22; // edi
  NiD3DPixelShader *v23; // edi
  NiD3DPixelShader *v24; // edi
  NiD3DPixelShader *v25; // edi
  NiD3DPixelShader *v26; // edi
  NiD3DPixelShader *v27; // edi
  NiD3DPixelShader *v28; // edi
  NiD3DPixelShader *v29; // edi
  NiD3DVertexShader *v30; // edi
  NiD3DVertexShader *v31; // edi
  NiD3DVertexShader *v32; // edi
  NiD3DPass *v33; // ecx
  NiD3DPass *v34; // ecx
  NiD3DPass *v35; // ecx
  NiD3DPass *v36; // ecx
  NiD3DPass *v37; // ecx
  NiD3DPass *v38; // ecx
  NiD3DPixelShader *v39; // edi
  NiD3DPixelShader *v40; // edi
  NiD3DPixelShader *v41; // edi
  NiD3DPixelShader *v42; // edi
  NiD3DPixelShader *v43; // edi
  NiD3DVertexShader *v44; // edi
  NiD3DVertexShader *v45; // edi
  NiD3DVertexShader *v46; // edi
  NiD3DVertexShader *v47; // edi
  NiD3DVertexShader *v48; // edi
  NiD3DVertexShader *v49; // edi
  NiD3DVertexShader *v50; // edi

  this->super.__vftable = (BSShaderVtbl *)&SkyShader::`vftable';
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
  v7 = InterlockedDecrement;
  if ( v6 )
  {
    if ( !v7((volatile LONG *)v6 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1);
    this->Vertex1[0] = 0;
  }
  v8 = this->Vertex1[1];
  if ( v8 )
  {
    if ( !v7((volatile LONG *)v8 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1);
    this->Vertex1[1] = 0;
  }
  v9 = this->Vertex1[2];
  if ( v9 )
  {
    if ( !v7((volatile LONG *)v9 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v9)(v9, 1);
    this->Vertex1[2] = 0;
  }
  v10 = this->Pixel1[0];
  if ( v10 )
  {
    if ( !v7((volatile LONG *)v10 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v10)(v10, 1);
    this->Pixel1[0] = 0;
  }
  v11 = this->Pixel1[1];
  if ( v11 )
  {
    if ( !v7((volatile LONG *)v11 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v11)(v11, 1);
    this->Pixel1[1] = 0;
  }
  v12 = this->Pixel1[2];
  if ( v12 )
  {
    if ( !v7((volatile LONG *)v12 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v12)(v12, 1);
    this->Pixel1[2] = 0;
  }
  v13 = (NiD3DPass *)this->unkAC[2];
  if ( v13 )
  {
    v3 = v13->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v13);
    this->unkAC[2] = 0;
  }
  v14 = (NiD3DPass *)this->unkAC[0];
  if ( v14 )
  {
    v3 = v14->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v14);
    this->unkAC[0] = 0;
  }
  v15 = this->Vertex[0];
  if ( v15 )
  {
    if ( !v7((volatile LONG *)v15 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v15)(v15, 1);
    this->Vertex[0] = 0;
  }
  v16 = this->Vertex[1];
  if ( v16 )
  {
    if ( !v7((volatile LONG *)v16 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1);
    this->Vertex[1] = 0;
  }
  v17 = this->Vertex[2];
  if ( v17 )
  {
    if ( !v7((volatile LONG *)v17 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v17)(v17, 1);
    this->Vertex[2] = 0;
  }
  v18 = this->Vertex[4];
  if ( v18 )
  {
    if ( !v7((volatile LONG *)v18 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1);
    this->Vertex[4] = 0;
  }
  v19 = this->Vertex[5];
  if ( v19 )
  {
    if ( !v7((volatile LONG *)v19 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v19)(v19, 1);
    this->Vertex[5] = 0;
  }
  v20 = this->Vertex[6];
  if ( v20 )
  {
    if ( !v7((volatile LONG *)v20 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1);
    this->Vertex[6] = 0;
  }
  v21 = this->Vertex[3];
  if ( v21 )
  {
    if ( !v7((volatile LONG *)v21 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v21)(v21, 1);
    this->Vertex[3] = 0;
  }
  v22 = this->Pixel[0];
  if ( v22 )
  {
    if ( !v7((volatile LONG *)v22 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v22)(v22, 1);
    this->Pixel[0] = 0;
  }
  v23 = this->Pixel[1];
  if ( v23 )
  {
    if ( !v7((volatile LONG *)v23 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v23)(v23, 1);
    this->Pixel[1] = 0;
  }
  v24 = this->Pixel[2];
  if ( v24 )
  {
    if ( !v7((volatile LONG *)v24 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v24)(v24, 1);
    this->Pixel[2] = 0;
  }
  v25 = this->Pixel[3];
  if ( v25 )
  {
    if ( !v7((volatile LONG *)v25 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v25)(v25, 1);
    this->Pixel[3] = 0;
  }
  v26 = this->Pixel[4];
  if ( v26 )
  {
    if ( !v7((volatile LONG *)v26 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1);
    this->Pixel[4] = 0;
  }
  v27 = this->Pixel1[2];
  if ( v27 )
  {
    if ( !v7((volatile LONG *)v27 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v27)(v27, 1);
  }
  v28 = this->Pixel1[1];
  if ( v28 )
  {
    if ( !v7((volatile LONG *)v28 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v28)(v28, 1);
  }
  v29 = this->Pixel1[0];
  if ( v29 )
  {
    if ( !v7((volatile LONG *)v29 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v29)(v29, 1);
  }
  v30 = this->Vertex1[2];
  if ( v30 )
  {
    if ( !v7((volatile LONG *)v30 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v30)(v30, 1);
  }
  v31 = this->Vertex1[1];
  if ( v31 )
  {
    if ( !v7((volatile LONG *)v31 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v31)(v31, 1);
  }
  v32 = this->Vertex1[0];
  if ( v32 )
  {
    if ( !v7((volatile LONG *)v32 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v32)(v32, 1);
  }
  v33 = (NiD3DPass *)this->unkAC[5];
  if ( v33 )
  {
    v3 = v33->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v33);
  }
  v34 = (NiD3DPass *)this->unkAC[4];
  if ( v34 )
  {
    v3 = v34->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v34);
  }
  v35 = (NiD3DPass *)this->unkAC[3];
  if ( v35 )
  {
    v3 = v35->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v35);
  }
  v36 = (NiD3DPass *)this->unkAC[2];
  if ( v36 )
  {
    v3 = v36->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v36);
  }
  v37 = (NiD3DPass *)this->unkAC[1];
  if ( v37 )
  {
    v3 = v37->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v37);
  }
  v38 = (NiD3DPass *)this->unkAC[0];
  if ( v38 )
  {
    v3 = v38->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v38);
  }
  v39 = this->Pixel[4];
  if ( v39 )
  {
    if ( !v7((volatile LONG *)v39 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v39)(v39, 1);
  }
  v40 = this->Pixel[3];
  if ( v40 )
  {
    if ( !v7((volatile LONG *)v40 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1);
  }
  v41 = this->Pixel[2];
  if ( v41 )
  {
    if ( !v7((volatile LONG *)v41 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v41)(v41, 1);
  }
  v42 = this->Pixel[1];
  if ( v42 )
  {
    if ( !v7((volatile LONG *)v42 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1);
  }
  v43 = this->Pixel[0];
  if ( v43 )
  {
    if ( !v7((volatile LONG *)v43 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v43)(v43, 1);
  }
  v44 = this->Vertex[6];
  if ( v44 )
  {
    if ( !v7((volatile LONG *)v44 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v44)(v44, 1);
  }
  v45 = this->Vertex[5];
  if ( v45 )
  {
    if ( !v7((volatile LONG *)v45 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v45)(v45, 1);
  }
  v46 = this->Vertex[4];
  if ( v46 )
  {
    if ( !v7((volatile LONG *)v46 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v46)(v46, 1);
  }
  v47 = this->Vertex[3];
  if ( v47 )
  {
    if ( !v7((volatile LONG *)v47 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v47)(v47, 1);
  }
  v48 = this->Vertex[2];
  if ( v48 )
  {
    if ( !v7((volatile LONG *)v48 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v48)(v48, 1);
  }
  v49 = this->Vertex[1];
  if ( v49 )
  {
    if ( !v7((volatile LONG *)v49 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v49)(v49, 1);
  }
  v50 = this->Vertex[0];
  if ( v50 )
  {
    if ( !v7((volatile LONG *)v50 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v50)(v50, 1);
  }
  BSShader::~BSShader(&this->super);
}
