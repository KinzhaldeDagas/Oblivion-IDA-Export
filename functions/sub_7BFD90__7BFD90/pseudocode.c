void __thiscall sub_7BFD90(HDRShader *this)
{
  NiD3DVertexShader *v2; // ebp
  NiD3DPass *v3; // edi
  NiD3DVertexShader *VertexShader; // ebx
  NiD3DVertexShader **p_VertexShader; // edi
  NiD3DPass *v6; // ebx
  NiD3DPixelShader *v7; // ebp
  NiD3DPixelShader *PixelShader; // edi
  NiD3DPixelShader **p_PixelShader; // ebx
  NiD3DPass *v10; // ebx
  NiD3DVertexShader *v11; // ebp
  NiD3DVertexShader *v12; // edi
  NiD3DVertexShader **v13; // ebx
  NiD3DPass *v14; // ebx
  NiD3DPixelShader *v15; // ebp
  NiD3DPixelShader *v16; // edi
  NiD3DPixelShader **v17; // ebx
  NiD3DPass *v18; // ebx
  NiD3DVertexShader *v19; // ebp
  NiD3DVertexShader *v20; // edi
  NiD3DVertexShader **v21; // ebx
  NiD3DPass *v22; // ebx
  NiD3DPixelShader *v23; // ebp
  NiD3DPixelShader *v24; // edi
  NiD3DPixelShader **v25; // ebx
  NiD3DPass *v26; // ebx
  NiD3DVertexShader *v27; // ebp
  NiD3DVertexShader *v28; // edi
  NiD3DVertexShader **v29; // ebx
  NiD3DPass *v30; // ebx
  NiD3DPixelShader *v31; // ebp
  NiD3DPixelShader *v32; // edi
  NiD3DPixelShader **v33; // ebx
  NiD3DPass *v34; // ecx
  NiD3DPass *v35; // ebx
  NiD3DVertexShader *v36; // ebp
  NiD3DVertexShader *v37; // edi
  NiD3DVertexShader **v38; // ebx
  NiD3DPass *v39; // ebx
  NiD3DPixelShader *v40; // ebp
  NiD3DPixelShader *v41; // edi
  NiD3DPixelShader **v42; // ebx
  NiD3DPass *v43; // ebx
  NiD3DVertexShader *v44; // ebp
  NiD3DVertexShader *v45; // edi
  NiD3DVertexShader **v46; // ebx
  NiD3DPass *v47; // ebx
  NiD3DPixelShader *v48; // ebp
  NiD3DPixelShader *v49; // edi
  NiD3DPixelShader **v50; // ebx
  NiD3DPass *v51; // ebx
  NiD3DVertexShader *v52; // ebp
  NiD3DVertexShader *v53; // edi
  NiD3DVertexShader **v54; // ebx
  NiD3DPass *v55; // ebx
  NiD3DPixelShader *v56; // ebp
  NiD3DPixelShader *v57; // edi
  NiD3DPixelShader **v58; // ebx
  NiD3DPass *v59; // ebx
  NiD3DVertexShader *v60; // ebp
  NiD3DVertexShader *v61; // edi
  NiD3DVertexShader **v62; // ebx
  NiD3DPass *v63; // ebx
  NiD3DPixelShader *v64; // ebp
  NiD3DPixelShader *v65; // edi
  NiD3DPixelShader **v66; // ebx
  NiD3DPass *v67; // ebx
  NiD3DVertexShader *v68; // ebp
  NiD3DVertexShader *v69; // edi
  NiD3DVertexShader **v70; // ebx
  NiD3DPixelShader *v71; // ebx
  NiD3DPass *v72; // esi
  NiD3DPixelShader *v73; // edi
  NiD3DPixelShader **v74; // esi

  v2 = this->Vertex[3]; /*0x7bfd95*/
  v3 = this->passes[0]; /*0x7bfd9c*/
  VertexShader = v3->VertexShader; /*0x7bfda2*/
  p_VertexShader = &v3->VertexShader; /*0x7bfda5*/
  if ( VertexShader != v2 ) /*0x7bfdaa*/
  {
    if ( VertexShader ) /*0x7bfdae*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x7bfdb4*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x7bfdca*/
    }
    *p_VertexShader = v2; /*0x7bfdce*/
    if ( v2 ) /*0x7bfdd0*/
      InterlockedIncrement((volatile LONG *)v2 + 1); /*0x7bfdd6*/
  }
  v6 = this->passes[0]; /*0x7bfddc*/
  v7 = this->Pixel[3]; /*0x7bfde2*/
  PixelShader = v6->PixelShader; /*0x7bfde8*/
  p_PixelShader = &v6->PixelShader; /*0x7bfdeb*/
  if ( PixelShader != v7 ) /*0x7bfdf0*/
  {
    if ( PixelShader ) /*0x7bfdf4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x7bfdfa*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x7bfe10*/
    }
    *p_PixelShader = v7; /*0x7bfe14*/
    if ( v7 ) /*0x7bfe16*/
      InterlockedIncrement((volatile LONG *)v7 + 1); /*0x7bfe1c*/
  }
  v10 = this->passes[1]; /*0x7bfe22*/
  v11 = this->Vertex[2]; /*0x7bfe28*/
  v12 = v10->VertexShader; /*0x7bfe2e*/
  v13 = &v10->VertexShader; /*0x7bfe31*/
  if ( v12 != v11 ) /*0x7bfe36*/
  {
    if ( v12 ) /*0x7bfe3a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v12 + 1) ) /*0x7bfe40*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v12)(v12, 1); /*0x7bfe56*/
    }
    *v13 = v11; /*0x7bfe5a*/
    if ( v11 ) /*0x7bfe5c*/
      InterlockedIncrement((volatile LONG *)v11 + 1); /*0x7bfe62*/
  }
  v14 = this->passes[1]; /*0x7bfe68*/
  v15 = this->Pixel[2]; /*0x7bfe6e*/
  v16 = v14->PixelShader; /*0x7bfe74*/
  v17 = &v14->PixelShader; /*0x7bfe77*/
  if ( v16 != v15 ) /*0x7bfe7c*/
  {
    if ( v16 ) /*0x7bfe80*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) ) /*0x7bfe86*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v16)(v16, 1); /*0x7bfe9c*/
    }
    *v17 = v15; /*0x7bfea0*/
    if ( v15 ) /*0x7bfea2*/
      InterlockedIncrement((volatile LONG *)v15 + 1); /*0x7bfea8*/
  }
  v18 = this->passes[2]; /*0x7bfeae*/
  v19 = this->Vertex[2]; /*0x7bfeb4*/
  v20 = v18->VertexShader; /*0x7bfeba*/
  v21 = &v18->VertexShader; /*0x7bfebd*/
  if ( v20 != v19 ) /*0x7bfec2*/
  {
    if ( v20 ) /*0x7bfec6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) ) /*0x7bfecc*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1); /*0x7bfee2*/
    }
    *v21 = v19; /*0x7bfee6*/
    if ( v19 ) /*0x7bfee8*/
      InterlockedIncrement((volatile LONG *)v19 + 1); /*0x7bfeee*/
  }
  v22 = this->passes[2]; /*0x7bfef4*/
  v23 = this->Pixel[2]; /*0x7bfefa*/
  v24 = v22->PixelShader; /*0x7bff00*/
  v25 = &v22->PixelShader; /*0x7bff03*/
  if ( v24 != v23 ) /*0x7bff08*/
  {
    if ( v24 ) /*0x7bff0c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) ) /*0x7bff12*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v24)(v24, 1); /*0x7bff28*/
    }
    *v25 = v23; /*0x7bff2c*/
    if ( v23 ) /*0x7bff2e*/
      InterlockedIncrement((volatile LONG *)v23 + 1); /*0x7bff34*/
  }
  v26 = this->passes[3]; /*0x7bff3a*/
  v27 = this->Vertex[0]; /*0x7bff40*/
  v28 = v26->VertexShader; /*0x7bff46*/
  v29 = &v26->VertexShader; /*0x7bff49*/
  if ( v28 != v27 ) /*0x7bff4e*/
  {
    if ( v28 ) /*0x7bff52*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) ) /*0x7bff58*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v28)(v28, 1); /*0x7bff6e*/
    }
    *v29 = v27; /*0x7bff72*/
    if ( v27 ) /*0x7bff74*/
      InterlockedIncrement((volatile LONG *)v27 + 1); /*0x7bff7a*/
  }
  v30 = this->passes[3]; /*0x7bff80*/
  v31 = this->Pixel[0]; /*0x7bff86*/
  v32 = v30->PixelShader; /*0x7bff8c*/
  v33 = &v30->PixelShader; /*0x7bff8f*/
  if ( v32 != v31 ) /*0x7bff94*/
  {
    if ( v32 ) /*0x7bff98*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) ) /*0x7bff9e*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v32)(v32, 1); /*0x7bffb4*/
    }
    *v33 = v31; /*0x7bffb8*/
    if ( v31 ) /*0x7bffba*/
      InterlockedIncrement((volatile LONG *)v31 + 1); /*0x7bffc0*/
  }
  v34 = this->passes[7]; /*0x7bffc6*/
  if ( v34 ) /*0x7bffce*/
  {
    NiD3DPass_SetVertexShader(v34, this->Vertex[3]); /*0x7bffd7*/
    NiD3DPass_SetPixelShader(&this->passes[7]->__vftable, this->Pixel[3]); /*0x7bffe9*/
  }
  v35 = this->passes[8]; /*0x7bffee*/
  v36 = this->Vertex[3]; /*0x7bfff4*/
  v37 = v35->VertexShader; /*0x7bfffa*/
  v38 = &v35->VertexShader; /*0x7bfffd*/
  if ( v37 != v36 ) /*0x7c0002*/
  {
    if ( v37 ) /*0x7c0006*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v37 + 1) ) /*0x7c000c*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v37)(v37, 1); /*0x7c0022*/
    }
    *v38 = v36; /*0x7c0026*/
    if ( v36 ) /*0x7c0028*/
      InterlockedIncrement((volatile LONG *)v36 + 1); /*0x7c002e*/
  }
  v39 = this->passes[8]; /*0x7c0034*/
  v40 = this->Pixel[3]; /*0x7c003a*/
  v41 = v39->PixelShader; /*0x7c0040*/
  v42 = &v39->PixelShader; /*0x7c0043*/
  if ( v41 != v40 ) /*0x7c0048*/
  {
    if ( v41 ) /*0x7c004c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v41 + 1) ) /*0x7c0052*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v41)(v41, 1); /*0x7c0068*/
    }
    *v42 = v40; /*0x7c006c*/
    if ( v40 ) /*0x7c006e*/
      InterlockedIncrement((volatile LONG *)v40 + 1); /*0x7c0074*/
  }
  v43 = this->passes[9]; /*0x7c007a*/
  v44 = this->Vertex[4]; /*0x7c0080*/
  v45 = v43->VertexShader; /*0x7c0086*/
  v46 = &v43->VertexShader; /*0x7c0089*/
  if ( v45 != v44 ) /*0x7c008e*/
  {
    if ( v45 ) /*0x7c0092*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v45 + 1) ) /*0x7c0098*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v45)(v45, 1); /*0x7c00ae*/
    }
    *v46 = v44; /*0x7c00b2*/
    if ( v44 ) /*0x7c00b4*/
      InterlockedIncrement((volatile LONG *)v44 + 1); /*0x7c00ba*/
  }
  v47 = this->passes[9]; /*0x7c00c0*/
  v48 = this->Pixel[4]; /*0x7c00c6*/
  v49 = v47->PixelShader; /*0x7c00cc*/
  v50 = &v47->PixelShader; /*0x7c00cf*/
  if ( v49 != v48 ) /*0x7c00d4*/
  {
    if ( v49 ) /*0x7c00d8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v49 + 1) ) /*0x7c00de*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v49)(v49, 1); /*0x7c00f4*/
    }
    *v50 = v48; /*0x7c00f8*/
    if ( v48 ) /*0x7c00fa*/
      InterlockedIncrement((volatile LONG *)v48 + 1); /*0x7c0100*/
  }
  v51 = this->passes[0xA]; /*0x7c0106*/
  v52 = this->Vertex[5]; /*0x7c010c*/
  v53 = v51->VertexShader; /*0x7c0112*/
  v54 = &v51->VertexShader; /*0x7c0115*/
  if ( v53 != v52 ) /*0x7c011a*/
  {
    if ( v53 ) /*0x7c011e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v53 + 1) ) /*0x7c0124*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v53)(v53, 1); /*0x7c013a*/
    }
    *v54 = v52; /*0x7c013e*/
    if ( v52 ) /*0x7c0140*/
      InterlockedIncrement((volatile LONG *)v52 + 1); /*0x7c0146*/
  }
  v55 = this->passes[0xA]; /*0x7c014c*/
  v56 = this->Pixel[5]; /*0x7c0152*/
  v57 = v55->PixelShader; /*0x7c0158*/
  v58 = &v55->PixelShader; /*0x7c015b*/
  if ( v57 != v56 ) /*0x7c0160*/
  {
    if ( v57 ) /*0x7c0164*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v57 + 1) ) /*0x7c016a*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v57)(v57, 1); /*0x7c0180*/
    }
    *v58 = v56; /*0x7c0184*/
    if ( v56 ) /*0x7c0186*/
      InterlockedIncrement((volatile LONG *)v56 + 1); /*0x7c018c*/
  }
  v59 = this->passes[0xB]; /*0x7c0192*/
  v60 = this->Vertex[6]; /*0x7c0198*/
  v61 = v59->VertexShader; /*0x7c019e*/
  v62 = &v59->VertexShader; /*0x7c01a1*/
  if ( v61 != v60 ) /*0x7c01a6*/
  {
    if ( v61 ) /*0x7c01aa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v61 + 1) ) /*0x7c01b0*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v61)(v61, 1); /*0x7c01c6*/
    }
    *v62 = v60; /*0x7c01ca*/
    if ( v60 ) /*0x7c01cc*/
      InterlockedIncrement((volatile LONG *)v60 + 1); /*0x7c01d2*/
  }
  v63 = this->passes[0xB]; /*0x7c01d8*/
  v64 = this->Pixel[6]; /*0x7c01de*/
  v65 = v63->PixelShader; /*0x7c01e4*/
  v66 = &v63->PixelShader; /*0x7c01e7*/
  if ( v65 != v64 ) /*0x7c01ec*/
  {
    if ( v65 ) /*0x7c01f0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v65 + 1) ) /*0x7c01f6*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v65)(v65, 1); /*0x7c020c*/
    }
    *v66 = v64; /*0x7c0210*/
    if ( v64 ) /*0x7c0212*/
      InterlockedIncrement((volatile LONG *)v64 + 1); /*0x7c0218*/
  }
  v67 = this->passes[0xC]; /*0x7c021e*/
  v68 = this->Vertex[7]; /*0x7c0224*/
  v69 = v67->VertexShader; /*0x7c022a*/
  v70 = &v67->VertexShader; /*0x7c022d*/
  if ( v69 != v68 ) /*0x7c0232*/
  {
    if ( v69 ) /*0x7c0236*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v69 + 1) ) /*0x7c023c*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v69)(v69, 1); /*0x7c0252*/
    }
    *v70 = v68; /*0x7c0256*/
    if ( v68 ) /*0x7c0258*/
      InterlockedIncrement((volatile LONG *)v68 + 1); /*0x7c025e*/
  }
  v71 = this->Pixel[7]; /*0x7c0264*/
  v72 = this->passes[0xC]; /*0x7c026a*/
  v73 = v72->PixelShader; /*0x7c0270*/
  v74 = &v72->PixelShader; /*0x7c0273*/
  if ( v73 != v71 ) /*0x7c0278*/
  {
    if ( v73 ) /*0x7c027c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v73 + 1) ) /*0x7c0282*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v73)(v73, 1); /*0x7c0298*/
    }
    *v74 = v71; /*0x7c029c*/
    if ( v71 ) /*0x7c029e*/
      InterlockedIncrement((volatile LONG *)v71 + 1); /*0x7c02a4*/
  }
}
