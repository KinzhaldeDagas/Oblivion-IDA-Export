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

  this->super.__vftable = (BSShaderVtbl *)&SkyShader::`vftable'; /*0x7ba99b*/
  v2 = (NiD3DPass *)this->unkAC[3]; /*0x7ba9a1*/
  if ( v2 ) /*0x7ba9b6*/
  {
    v3 = v2->RefCount-- == 1; /*0x7ba9b8*/
    if ( v3 ) /*0x7ba9bb*/
      NiD3DPass_ReleaseToPool(v2); /*0x7ba9bd*/
    this->unkAC[3] = 0; /*0x7ba9c2*/
  }
  v4 = (NiD3DPass *)this->unkAC[4]; /*0x7ba9c8*/
  if ( v4 ) /*0x7ba9d0*/
  {
    v3 = v4->RefCount-- == 1; /*0x7ba9d2*/
    if ( v3 ) /*0x7ba9d5*/
      NiD3DPass_ReleaseToPool(v4); /*0x7ba9d7*/
    this->unkAC[4] = 0; /*0x7ba9dc*/
  }
  v5 = (NiD3DPass *)this->unkAC[5]; /*0x7ba9e2*/
  if ( v5 ) /*0x7ba9ea*/
  {
    v3 = v5->RefCount-- == 1; /*0x7ba9ec*/
    if ( v3 ) /*0x7ba9ef*/
      NiD3DPass_ReleaseToPool(v5); /*0x7ba9f1*/
    this->unkAC[5] = 0; /*0x7ba9f6*/
  }
  v6 = this->Vertex1[0]; /*0x7ba9fc*/
  v7 = InterlockedDecrement; /*0x7baa04*/
  if ( v6 ) /*0x7baa0a*/
  {
    if ( !v7((volatile LONG *)v6 + 1) ) /*0x7baa10*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1); /*0x7baa22*/
    this->Vertex1[0] = 0; /*0x7baa24*/
  }
  v8 = this->Vertex1[1]; /*0x7baa2a*/
  if ( v8 ) /*0x7baa32*/
  {
    if ( !v7((volatile LONG *)v8 + 1) ) /*0x7baa38*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1); /*0x7baa4a*/
    this->Vertex1[1] = 0; /*0x7baa4c*/
  }
  v9 = this->Vertex1[2]; /*0x7baa52*/
  if ( v9 ) /*0x7baa5a*/
  {
    if ( !v7((volatile LONG *)v9 + 1) ) /*0x7baa60*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v9)(v9, 1); /*0x7baa72*/
    this->Vertex1[2] = 0; /*0x7baa74*/
  }
  v10 = this->Pixel1[0]; /*0x7baa7a*/
  if ( v10 ) /*0x7baa82*/
  {
    if ( !v7((volatile LONG *)v10 + 1) ) /*0x7baa88*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v10)(v10, 1); /*0x7baa9a*/
    this->Pixel1[0] = 0; /*0x7baa9c*/
  }
  v11 = this->Pixel1[1]; /*0x7baaa2*/
  if ( v11 ) /*0x7baaaa*/
  {
    if ( !v7((volatile LONG *)v11 + 1) ) /*0x7baab0*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v11)(v11, 1); /*0x7baac2*/
    this->Pixel1[1] = 0; /*0x7baac4*/
  }
  v12 = this->Pixel1[2]; /*0x7baaca*/
  if ( v12 ) /*0x7baad2*/
  {
    if ( !v7((volatile LONG *)v12 + 1) ) /*0x7baad8*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v12)(v12, 1); /*0x7baaea*/
    this->Pixel1[2] = 0; /*0x7baaec*/
  }
  v13 = (NiD3DPass *)this->unkAC[2]; /*0x7baaf2*/
  if ( v13 ) /*0x7baafa*/
  {
    v3 = v13->RefCount-- == 1; /*0x7baafc*/
    if ( v3 ) /*0x7bab00*/
      NiD3DPass_ReleaseToPool(v13); /*0x7bab02*/
    this->unkAC[2] = 0; /*0x7bab07*/
  }
  v14 = (NiD3DPass *)this->unkAC[0]; /*0x7bab0d*/
  if ( v14 ) /*0x7bab15*/
  {
    v3 = v14->RefCount-- == 1; /*0x7bab17*/
    if ( v3 ) /*0x7bab1b*/
      NiD3DPass_ReleaseToPool(v14); /*0x7bab1d*/
    this->unkAC[0] = 0; /*0x7bab22*/
  }
  v15 = this->Vertex[0]; /*0x7bab28*/
  if ( v15 ) /*0x7bab2d*/
  {
    if ( !v7((volatile LONG *)v15 + 1) ) /*0x7bab33*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v15)(v15, 1); /*0x7bab45*/
    this->Vertex[0] = 0; /*0x7bab47*/
  }
  v16 = this->Vertex[1]; /*0x7bab4a*/
  if ( v16 ) /*0x7bab52*/
  {
    if ( !v7((volatile LONG *)v16 + 1) ) /*0x7bab58*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1); /*0x7bab6a*/
    this->Vertex[1] = 0; /*0x7bab6c*/
  }
  v17 = this->Vertex[2]; /*0x7bab72*/
  if ( v17 ) /*0x7bab7a*/
  {
    if ( !v7((volatile LONG *)v17 + 1) ) /*0x7bab80*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v17)(v17, 1); /*0x7bab92*/
    this->Vertex[2] = 0; /*0x7bab94*/
  }
  v18 = this->Vertex[4]; /*0x7bab9a*/
  if ( v18 ) /*0x7baba2*/
  {
    if ( !v7((volatile LONG *)v18 + 1) ) /*0x7baba8*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1); /*0x7babba*/
    this->Vertex[4] = 0; /*0x7babbc*/
  }
  v19 = this->Vertex[5]; /*0x7babc2*/
  if ( v19 ) /*0x7babca*/
  {
    if ( !v7((volatile LONG *)v19 + 1) ) /*0x7babd0*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v19)(v19, 1); /*0x7babe2*/
    this->Vertex[5] = 0; /*0x7babe4*/
  }
  v20 = this->Vertex[6]; /*0x7babea*/
  if ( v20 ) /*0x7babf2*/
  {
    if ( !v7((volatile LONG *)v20 + 1) ) /*0x7babf8*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1); /*0x7bac0a*/
    this->Vertex[6] = 0; /*0x7bac0c*/
  }
  v21 = this->Vertex[3]; /*0x7bac12*/
  if ( v21 ) /*0x7bac1a*/
  {
    if ( !v7((volatile LONG *)v21 + 1) ) /*0x7bac20*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v21)(v21, 1); /*0x7bac32*/
    this->Vertex[3] = 0; /*0x7bac34*/
  }
  v22 = this->Pixel[0]; /*0x7bac3a*/
  if ( v22 ) /*0x7bac42*/
  {
    if ( !v7((volatile LONG *)v22 + 1) ) /*0x7bac48*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v22)(v22, 1); /*0x7bac5a*/
    this->Pixel[0] = 0; /*0x7bac5c*/
  }
  v23 = this->Pixel[1]; /*0x7bac62*/
  if ( v23 ) /*0x7bac6a*/
  {
    if ( !v7((volatile LONG *)v23 + 1) ) /*0x7bac70*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v23)(v23, 1); /*0x7bac82*/
    this->Pixel[1] = 0; /*0x7bac84*/
  }
  v24 = this->Pixel[2]; /*0x7bac8a*/
  if ( v24 ) /*0x7bac92*/
  {
    if ( !v7((volatile LONG *)v24 + 1) ) /*0x7bac98*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v24)(v24, 1); /*0x7bacaa*/
    this->Pixel[2] = 0; /*0x7bacac*/
  }
  v25 = this->Pixel[3]; /*0x7bacb2*/
  if ( v25 ) /*0x7bacba*/
  {
    if ( !v7((volatile LONG *)v25 + 1) ) /*0x7bacc0*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v25)(v25, 1); /*0x7bacd2*/
    this->Pixel[3] = 0; /*0x7bacd4*/
  }
  v26 = this->Pixel[4]; /*0x7bacda*/
  if ( v26 ) /*0x7bace2*/
  {
    if ( !v7((volatile LONG *)v26 + 1) ) /*0x7bace8*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1); /*0x7bacfa*/
    this->Pixel[4] = 0; /*0x7bacfc*/
  }
  v27 = this->Pixel1[2]; /*0x7bad02*/
  if ( v27 ) /*0x7bad0f*/
  {
    if ( !v7((volatile LONG *)v27 + 1) ) /*0x7bad15*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v27)(v27, 1); /*0x7bad27*/
  }
  v28 = this->Pixel1[1]; /*0x7bad29*/
  if ( v28 ) /*0x7bad36*/
  {
    if ( !v7((volatile LONG *)v28 + 1) ) /*0x7bad3c*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v28)(v28, 1); /*0x7bad4e*/
  }
  v29 = this->Pixel1[0]; /*0x7bad50*/
  if ( v29 ) /*0x7bad5d*/
  {
    if ( !v7((volatile LONG *)v29 + 1) ) /*0x7bad63*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v29)(v29, 1); /*0x7bad75*/
  }
  v30 = this->Vertex1[2]; /*0x7bad77*/
  if ( v30 ) /*0x7bad84*/
  {
    if ( !v7((volatile LONG *)v30 + 1) ) /*0x7bad8a*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v30)(v30, 1); /*0x7bad9c*/
  }
  v31 = this->Vertex1[1]; /*0x7bad9e*/
  if ( v31 ) /*0x7badab*/
  {
    if ( !v7((volatile LONG *)v31 + 1) ) /*0x7badb1*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v31)(v31, 1); /*0x7badc3*/
  }
  v32 = this->Vertex1[0]; /*0x7badc5*/
  if ( v32 ) /*0x7badd2*/
  {
    if ( !v7((volatile LONG *)v32 + 1) ) /*0x7badd8*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v32)(v32, 1); /*0x7badea*/
  }
  v33 = (NiD3DPass *)this->unkAC[5]; /*0x7badec*/
  if ( v33 ) /*0x7badfc*/
  {
    v3 = v33->RefCount-- == 1; /*0x7badfe*/
    if ( v3 ) /*0x7bae01*/
      NiD3DPass_ReleaseToPool(v33); /*0x7bae03*/
  }
  v34 = (NiD3DPass *)this->unkAC[4]; /*0x7bae08*/
  if ( v34 ) /*0x7bae15*/
  {
    v3 = v34->RefCount-- == 1; /*0x7bae17*/
    if ( v3 ) /*0x7bae1a*/
      NiD3DPass_ReleaseToPool(v34); /*0x7bae1c*/
  }
  v35 = (NiD3DPass *)this->unkAC[3]; /*0x7bae21*/
  if ( v35 ) /*0x7bae2e*/
  {
    v3 = v35->RefCount-- == 1; /*0x7bae30*/
    if ( v3 ) /*0x7bae33*/
      NiD3DPass_ReleaseToPool(v35); /*0x7bae35*/
  }
  v36 = (NiD3DPass *)this->unkAC[2]; /*0x7bae3a*/
  if ( v36 ) /*0x7bae47*/
  {
    v3 = v36->RefCount-- == 1; /*0x7bae49*/
    if ( v3 ) /*0x7bae4c*/
      NiD3DPass_ReleaseToPool(v36); /*0x7bae4e*/
  }
  v37 = (NiD3DPass *)this->unkAC[1]; /*0x7bae53*/
  if ( v37 ) /*0x7bae60*/
  {
    v3 = v37->RefCount-- == 1; /*0x7bae62*/
    if ( v3 ) /*0x7bae65*/
      NiD3DPass_ReleaseToPool(v37); /*0x7bae67*/
  }
  v38 = (NiD3DPass *)this->unkAC[0]; /*0x7bae6c*/
  if ( v38 ) /*0x7bae79*/
  {
    v3 = v38->RefCount-- == 1; /*0x7bae7b*/
    if ( v3 ) /*0x7bae7e*/
      NiD3DPass_ReleaseToPool(v38); /*0x7bae80*/
  }
  v39 = this->Pixel[4]; /*0x7bae85*/
  if ( v39 ) /*0x7bae92*/
  {
    if ( !v7((volatile LONG *)v39 + 1) ) /*0x7bae98*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v39)(v39, 1); /*0x7baeaa*/
  }
  v40 = this->Pixel[3]; /*0x7baeac*/
  if ( v40 ) /*0x7baeb9*/
  {
    if ( !v7((volatile LONG *)v40 + 1) ) /*0x7baebf*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1); /*0x7baed1*/
  }
  v41 = this->Pixel[2]; /*0x7baed3*/
  if ( v41 ) /*0x7baee0*/
  {
    if ( !v7((volatile LONG *)v41 + 1) ) /*0x7baee6*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v41)(v41, 1); /*0x7baef8*/
  }
  v42 = this->Pixel[1]; /*0x7baefa*/
  if ( v42 ) /*0x7baf07*/
  {
    if ( !v7((volatile LONG *)v42 + 1) ) /*0x7baf0d*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1); /*0x7baf1f*/
  }
  v43 = this->Pixel[0]; /*0x7baf21*/
  if ( v43 ) /*0x7baf2e*/
  {
    if ( !v7((volatile LONG *)v43 + 1) ) /*0x7baf34*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v43)(v43, 1); /*0x7baf46*/
  }
  v44 = this->Vertex[6]; /*0x7baf48*/
  if ( v44 ) /*0x7baf55*/
  {
    if ( !v7((volatile LONG *)v44 + 1) ) /*0x7baf5b*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v44)(v44, 1); /*0x7baf6d*/
  }
  v45 = this->Vertex[5]; /*0x7baf6f*/
  if ( v45 ) /*0x7baf7c*/
  {
    if ( !v7((volatile LONG *)v45 + 1) ) /*0x7baf82*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v45)(v45, 1); /*0x7baf94*/
  }
  v46 = this->Vertex[4]; /*0x7baf96*/
  if ( v46 ) /*0x7bafa3*/
  {
    if ( !v7((volatile LONG *)v46 + 1) ) /*0x7bafa9*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v46)(v46, 1); /*0x7bafbb*/
  }
  v47 = this->Vertex[3]; /*0x7bafbd*/
  if ( v47 ) /*0x7bafca*/
  {
    if ( !v7((volatile LONG *)v47 + 1) ) /*0x7bafd0*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v47)(v47, 1); /*0x7bafe2*/
  }
  v48 = this->Vertex[2]; /*0x7bafe4*/
  if ( v48 ) /*0x7baff1*/
  {
    if ( !v7((volatile LONG *)v48 + 1) ) /*0x7baff7*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v48)(v48, 1); /*0x7bb009*/
  }
  v49 = this->Vertex[1]; /*0x7bb00b*/
  if ( v49 ) /*0x7bb018*/
  {
    if ( !v7((volatile LONG *)v49 + 1) ) /*0x7bb01e*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v49)(v49, 1); /*0x7bb030*/
  }
  v50 = this->Vertex[0]; /*0x7bb032*/
  if ( v50 ) /*0x7bb03b*/
  {
    if ( !v7((volatile LONG *)v50 + 1) ) /*0x7bb041*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v50)(v50, 1); /*0x7bb053*/
  }
  BSShader::~BSShader(&this->super); /*0x7bb05f*/
}
