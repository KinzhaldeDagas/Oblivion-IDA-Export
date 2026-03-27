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

  v2 = this->Vertex[3];
  v3 = this->passes[0];
  VertexShader = v3->VertexShader;
  p_VertexShader = &v3->VertexShader;
  if ( VertexShader != v2 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    *p_VertexShader = v2;
    if ( v2 )
      InterlockedIncrement((volatile LONG *)v2 + 1);
  }
  v6 = this->passes[0];
  v7 = this->Pixel[3];
  PixelShader = v6->PixelShader;
  p_PixelShader = &v6->PixelShader;
  if ( PixelShader != v7 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    *p_PixelShader = v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)v7 + 1);
  }
  v10 = this->passes[1];
  v11 = this->Vertex[2];
  v12 = v10->VertexShader;
  v13 = &v10->VertexShader;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v12 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v12)(v12, 1);
    }
    *v13 = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)v11 + 1);
  }
  v14 = this->passes[1];
  v15 = this->Pixel[2];
  v16 = v14->PixelShader;
  v17 = &v14->PixelShader;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v16)(v16, 1);
    }
    *v17 = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)v15 + 1);
  }
  v18 = this->passes[2];
  v19 = this->Vertex[2];
  v20 = v18->VertexShader;
  v21 = &v18->VertexShader;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1);
    }
    *v21 = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)v19 + 1);
  }
  v22 = this->passes[2];
  v23 = this->Pixel[2];
  v24 = v22->PixelShader;
  v25 = &v22->PixelShader;
  if ( v24 != v23 )
  {
    if ( v24 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v24)(v24, 1);
    }
    *v25 = v23;
    if ( v23 )
      InterlockedIncrement((volatile LONG *)v23 + 1);
  }
  v26 = this->passes[3];
  v27 = this->Vertex[0];
  v28 = v26->VertexShader;
  v29 = &v26->VertexShader;
  if ( v28 != v27 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v28)(v28, 1);
    }
    *v29 = v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)v27 + 1);
  }
  v30 = this->passes[3];
  v31 = this->Pixel[0];
  v32 = v30->PixelShader;
  v33 = &v30->PixelShader;
  if ( v32 != v31 )
  {
    if ( v32 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v32)(v32, 1);
    }
    *v33 = v31;
    if ( v31 )
      InterlockedIncrement((volatile LONG *)v31 + 1);
  }
  v34 = this->passes[7];
  if ( v34 )
  {
    sub_7AECB0(v34, this->Vertex[3]);
    sub_7AEC60(&this->passes[7]->__vftable, this->Pixel[3]);
  }
  v35 = this->passes[8];
  v36 = this->Vertex[3];
  v37 = v35->VertexShader;
  v38 = &v35->VertexShader;
  if ( v37 != v36 )
  {
    if ( v37 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v37 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v37)(v37, 1);
    }
    *v38 = v36;
    if ( v36 )
      InterlockedIncrement((volatile LONG *)v36 + 1);
  }
  v39 = this->passes[8];
  v40 = this->Pixel[3];
  v41 = v39->PixelShader;
  v42 = &v39->PixelShader;
  if ( v41 != v40 )
  {
    if ( v41 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v41 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v41)(v41, 1);
    }
    *v42 = v40;
    if ( v40 )
      InterlockedIncrement((volatile LONG *)v40 + 1);
  }
  v43 = this->passes[9];
  v44 = this->Vertex[4];
  v45 = v43->VertexShader;
  v46 = &v43->VertexShader;
  if ( v45 != v44 )
  {
    if ( v45 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v45 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v45)(v45, 1);
    }
    *v46 = v44;
    if ( v44 )
      InterlockedIncrement((volatile LONG *)v44 + 1);
  }
  v47 = this->passes[9];
  v48 = this->Pixel[4];
  v49 = v47->PixelShader;
  v50 = &v47->PixelShader;
  if ( v49 != v48 )
  {
    if ( v49 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v49 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v49)(v49, 1);
    }
    *v50 = v48;
    if ( v48 )
      InterlockedIncrement((volatile LONG *)v48 + 1);
  }
  v51 = this->passes[0xA];
  v52 = this->Vertex[5];
  v53 = v51->VertexShader;
  v54 = &v51->VertexShader;
  if ( v53 != v52 )
  {
    if ( v53 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v53 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v53)(v53, 1);
    }
    *v54 = v52;
    if ( v52 )
      InterlockedIncrement((volatile LONG *)v52 + 1);
  }
  v55 = this->passes[0xA];
  v56 = this->Pixel[5];
  v57 = v55->PixelShader;
  v58 = &v55->PixelShader;
  if ( v57 != v56 )
  {
    if ( v57 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v57 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v57)(v57, 1);
    }
    *v58 = v56;
    if ( v56 )
      InterlockedIncrement((volatile LONG *)v56 + 1);
  }
  v59 = this->passes[0xB];
  v60 = this->Vertex[6];
  v61 = v59->VertexShader;
  v62 = &v59->VertexShader;
  if ( v61 != v60 )
  {
    if ( v61 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v61 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v61)(v61, 1);
    }
    *v62 = v60;
    if ( v60 )
      InterlockedIncrement((volatile LONG *)v60 + 1);
  }
  v63 = this->passes[0xB];
  v64 = this->Pixel[6];
  v65 = v63->PixelShader;
  v66 = &v63->PixelShader;
  if ( v65 != v64 )
  {
    if ( v65 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v65 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v65)(v65, 1);
    }
    *v66 = v64;
    if ( v64 )
      InterlockedIncrement((volatile LONG *)v64 + 1);
  }
  v67 = this->passes[0xC];
  v68 = this->Vertex[7];
  v69 = v67->VertexShader;
  v70 = &v67->VertexShader;
  if ( v69 != v68 )
  {
    if ( v69 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v69 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v69)(v69, 1);
    }
    *v70 = v68;
    if ( v68 )
      InterlockedIncrement((volatile LONG *)v68 + 1);
  }
  v71 = this->Pixel[7];
  v72 = this->passes[0xC];
  v73 = v72->PixelShader;
  v74 = &v72->PixelShader;
  if ( v73 != v71 )
  {
    if ( v73 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v73 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v73)(v73, 1);
    }
    *v74 = v71;
    if ( v71 )
      InterlockedIncrement((volatile LONG *)v71 + 1);
  }
}
