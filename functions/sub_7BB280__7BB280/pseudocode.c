NiD3DShaderProgram *__thiscall sub_7BB280(SkyShader *this)
{
  const char *v2; // eax
  NiD3DShaderProgram *VertexShader; // eax
  NiD3DVertexShader *v4; // ebx
  volatile LONG *v5; // ebp
  const char *v6; // eax
  NiD3DShaderProgram *v7; // eax
  NiD3DVertexShader *v8; // ebx
  volatile LONG *v9; // ebp
  const char *v10; // eax
  NiD3DShaderProgram *v11; // eax
  NiD3DVertexShader *v12; // ebx
  volatile LONG *v13; // ebp
  const char *v14; // eax
  NiD3DShaderProgram *v15; // eax
  NiD3DVertexShader *v16; // ebx
  volatile LONG *v17; // ebp
  const char *v18; // eax
  NiD3DShaderProgram *v19; // eax
  NiD3DVertexShader *v20; // ebx
  volatile LONG *v21; // ebp
  const char *v22; // eax
  NiD3DShaderProgram *v23; // eax
  NiD3DVertexShader *v24; // ebx
  volatile LONG *v25; // ebp
  const char *v26; // eax
  NiD3DShaderProgram *v27; // eax
  NiD3DVertexShader *v28; // ebx
  volatile LONG *v29; // ebp
  char *v30; // eax
  NiD3DShaderProgram *PixelShader; // eax
  NiD3DPixelShader *v32; // ebx
  volatile LONG *v33; // ebp
  char *v34; // eax
  NiD3DShaderProgram *v35; // eax
  NiD3DPixelShader *v36; // ebx
  volatile LONG *v37; // ebp
  char *v38; // eax
  NiD3DShaderProgram *v39; // eax
  NiD3DPixelShader *v40; // ebx
  volatile LONG *v41; // ebp
  char *v42; // eax
  NiD3DShaderProgram *v43; // eax
  NiD3DPixelShader *v44; // ebx
  volatile LONG *v45; // ebp
  char *v46; // eax
  NiD3DShaderProgram *v47; // eax
  NiD3DPixelShader *v48; // ebx
  volatile LONG *v49; // ebp
  const char *v50; // eax
  NiD3DShaderProgram *v51; // eax
  NiD3DVertexShader *v52; // ebx
  volatile LONG *v53; // ebp
  const char *v54; // eax
  NiD3DShaderProgram *v55; // eax
  NiD3DVertexShader *v56; // ebx
  volatile LONG *v57; // ebp
  const char *v58; // eax
  NiD3DShaderProgram *v59; // eax
  NiD3DVertexShader *v60; // ebx
  volatile LONG *v61; // ebp
  char *v62; // eax
  NiD3DShaderProgram *v63; // eax
  NiD3DPixelShader *v64; // ebx
  volatile LONG *v65; // ebp
  char *v66; // eax
  NiD3DShaderProgram *v67; // eax
  NiD3DPixelShader *v68; // ebx
  volatile LONG *v69; // ebp
  char *v70; // eax
  NiD3DShaderProgram *result; // eax
  volatile LONG *v72; // ebx
  volatile LONG *v73; // ebp
  int v74[18]; // [esp+64h] [ebp-8C0h] BYREF
  char *v75; // [esp+ACh] [ebp-878h]
  int v76[19]; // [esp+B0h] [ebp-874h] BYREF
  int v77[18]; // [esp+FCh] [ebp-828h] BYREF
  char *v78; // [esp+144h] [ebp-7E0h]
  int v79[19]; // [esp+148h] [ebp-7DCh] BYREF
  int v80[19]; // [esp+194h] [ebp-790h] BYREF
  int v81[19]; // [esp+1E0h] [ebp-744h] BYREF
  int v82[19]; // [esp+22Ch] [ebp-6F8h] BYREF
  int v83[19]; // [esp+278h] [ebp-6ACh] BYREF
  int v84[19]; // [esp+2C4h] [ebp-660h] BYREF
  int v85[19]; // [esp+310h] [ebp-614h] BYREF
  int v86[19]; // [esp+35Ch] [ebp-5C8h] BYREF
  int v87[19]; // [esp+3A8h] [ebp-57Ch] BYREF
  int v88[19]; // [esp+3F4h] [ebp-530h] BYREF
  int v89[18]; // [esp+440h] [ebp-4E4h] BYREF
  char *FullPath; // [esp+488h] [ebp-49Ch]
  int v91[19]; // [esp+48Ch] [ebp-498h] BYREF
  int v92[19]; // [esp+4D8h] [ebp-44Ch] BYREF
  int v93[19]; // [esp+524h] [ebp-400h] BYREF
  int v94[18]; // [esp+570h] [ebp-3B4h] BYREF
  char v95[260]; // [esp+5B8h] [ebp-36Ch] BYREF
  char FileName[260]; // [esp+6BCh] [ebp-268h] BYREF
  char DstBuf[352]; // [esp+7C0h] [ebp-164h] BYREF

  FullPath = "sky\\v\\sky.v.hlsl"; /*0x7bb2a7*/
  memset(v91, 0, 0x48); /*0x7bb2b2*/
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName); /*0x7bb2dc*/
  _sprintf(v95, "SKY.vso"); /*0x7bb2ee*/
  v2 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bb300*/
  VertexShader = CreateVertexShader(FileName, v91, v2, v95, 0, 0); /*0x7bb318*/
  v4 = this->Vertex[0]; /*0x7bb31d*/
  v5 = (volatile LONG *)VertexShader; /*0x7bb320*/
  if ( v4 != VertexShader ) /*0x7bb324*/
  {
    if ( v4 ) /*0x7bb328*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x7bb32e*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v4)(v4, 1); /*0x7bb344*/
    }
    this->Vertex[0] = (NiD3DVertexShader *)v5; /*0x7bb348*/
    if ( v5 ) /*0x7bb34b*/
      InterlockedIncrement(v5 + 1); /*0x7bb351*/
  }
  v87[0x12] = (int)"sky\\v\\sky.v.hlsl"; /*0x7bb362*/
  v88[0] = (int)&off_A8F8C4; /*0x7bb36d*/
  memset(&v88[1], 0, 0x44); /*0x7bb378*/
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName); /*0x7bb3a2*/
  _sprintf(v95, "SKYT.vso"); /*0x7bb3b4*/
  v6 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bb3c6*/
  v7 = CreateVertexShader(FileName, v88, v6, v95, 0, 0); /*0x7bb3de*/
  v8 = this->Vertex[1]; /*0x7bb3e3*/
  v9 = (volatile LONG *)v7; /*0x7bb3e9*/
  if ( v8 != v7 ) /*0x7bb3ed*/
  {
    if ( v8 ) /*0x7bb3f1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x7bb3f7*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1); /*0x7bb40d*/
    }
    this->Vertex[1] = (NiD3DVertexShader *)v9; /*0x7bb411*/
    if ( v9 ) /*0x7bb417*/
      InterlockedIncrement(v9 + 1); /*0x7bb41d*/
  }
  v93[0x12] = (int)"sky\\v\\sky_quad.v.hlsl"; /*0x7bb42e*/
  memset(v94, 0, sizeof(v94)); /*0x7bb439*/
  sub_801030("sky\\v\\sky_quad.v.hlsl", (int)FileName); /*0x7bb463*/
  _sprintf(v95, "SKYQUAD.vso"); /*0x7bb475*/
  v10 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bb487*/
  v11 = CreateVertexShader(FileName, v94, v10, v95, 0, 0); /*0x7bb49f*/
  v12 = this->Vertex[2]; /*0x7bb4a4*/
  v13 = (volatile LONG *)v11; /*0x7bb4aa*/
  if ( v12 != v11 ) /*0x7bb4ae*/
  {
    if ( v12 ) /*0x7bb4b2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v12 + 1) ) /*0x7bb4b8*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v12)(v12, 1); /*0x7bb4ce*/
    }
    this->Vertex[2] = (NiD3DVertexShader *)v13; /*0x7bb4d2*/
    if ( v13 ) /*0x7bb4d8*/
      InterlockedIncrement(v13 + 1); /*0x7bb4de*/
  }
  v85[0x12] = (int)"sky\\v\\sky.v.hlsl"; /*0x7bb4ef*/
  v86[0] = (int)"HORIZFADE"; /*0x7bb4fa*/
  memset(&v86[1], 0, 0x44); /*0x7bb505*/
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName); /*0x7bb52f*/
  _sprintf(v95, "SKYHORIZFADE.vso"); /*0x7bb541*/
  v14 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bb553*/
  v15 = CreateVertexShader(FileName, v86, v14, v95, 0, 0); /*0x7bb56b*/
  v16 = this->Vertex[3]; /*0x7bb570*/
  v17 = (volatile LONG *)v15; /*0x7bb576*/
  if ( v16 != v15 ) /*0x7bb57a*/
  {
    if ( v16 ) /*0x7bb57e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) ) /*0x7bb584*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1); /*0x7bb59a*/
    }
    this->Vertex[3] = (NiD3DVertexShader *)v17; /*0x7bb59e*/
    if ( v17 ) /*0x7bb5a4*/
      InterlockedIncrement(v17 + 1); /*0x7bb5aa*/
  }
  v83[0x12] = (int)"sky\\v\\sky.v.hlsl"; /*0x7bb5bb*/
  v84[0] = (int)"OCCLUSION"; /*0x7bb5c6*/
  memset(&v84[1], 0, 0x44); /*0x7bb5d1*/
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName); /*0x7bb5fb*/
  _sprintf(v95, "SKYOCC.vso"); /*0x7bb60d*/
  v18 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bb61f*/
  v19 = CreateVertexShader(FileName, v84, v18, v95, 0, 0); /*0x7bb637*/
  v20 = this->Vertex[4]; /*0x7bb63c*/
  v21 = (volatile LONG *)v19; /*0x7bb642*/
  if ( v20 != v19 ) /*0x7bb646*/
  {
    if ( v20 ) /*0x7bb64a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) ) /*0x7bb650*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1); /*0x7bb666*/
    }
    this->Vertex[4] = (NiD3DVertexShader *)v21; /*0x7bb66a*/
    if ( v21 ) /*0x7bb670*/
      InterlockedIncrement(v21 + 1); /*0x7bb676*/
  }
  v75 = "sky\\v\\sky.v.hlsl"; /*0x7bb684*/
  v76[0] = (int)&off_A8F8C4; /*0x7bb68c*/
  v76[1] = 0; /*0x7bb694*/
  v76[2] = (int)"CLOUDS"; /*0x7bb698*/
  memset(&v76[3], 0, 0x3C); /*0x7bb6a0*/
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName); /*0x7bb6ba*/
  _sprintf(v95, "SKYCLOUDS.vso"); /*0x7bb6cc*/
  v22 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bb6de*/
  v23 = CreateVertexShader(FileName, v76, v22, v95, 0, 0); /*0x7bb6f3*/
  v24 = this->Vertex[5]; /*0x7bb6f8*/
  v25 = (volatile LONG *)v23; /*0x7bb6fe*/
  if ( v24 != v23 ) /*0x7bb702*/
  {
    if ( v24 ) /*0x7bb706*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) ) /*0x7bb70c*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v24)(v24, 1); /*0x7bb722*/
    }
    this->Vertex[5] = (NiD3DVertexShader *)v25; /*0x7bb726*/
    if ( v25 ) /*0x7bb72c*/
      InterlockedIncrement(v25 + 1); /*0x7bb732*/
  }
  v76[0x12] = (int)"sky\\v\\sky.v.hlsl"; /*0x7bb743*/
  v77[0] = (int)"HORIZFADE"; /*0x7bb74e*/
  v77[1] = 0; /*0x7bb759*/
  v77[2] = (int)&off_A8F8C4; /*0x7bb760*/
  v77[3] = 0; /*0x7bb76b*/
  v77[4] = (int)"CLOUDS"; /*0x7bb772*/
  memset(&v77[5], 0, 0x34); /*0x7bb77d*/
  sub_801030(v75, (int)FileName); /*0x7bb79d*/
  _sprintf(v95, "SKYCLOUDSFADE.vso"); /*0x7bb7af*/
  v26 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bb7c1*/
  v27 = CreateVertexShader(FileName, v77, v26, v95, 0, 0); /*0x7bb7d9*/
  v28 = this->Vertex[6]; /*0x7bb7de*/
  v29 = (volatile LONG *)v27; /*0x7bb7e4*/
  if ( v28 != v27 ) /*0x7bb7e8*/
  {
    if ( v28 ) /*0x7bb7ec*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) ) /*0x7bb7f2*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v28)(v28, 1); /*0x7bb808*/
    }
    this->Vertex[6] = (NiD3DVertexShader *)v29; /*0x7bb80c*/
    if ( v29 ) /*0x7bb812*/
      InterlockedIncrement(v29 + 1); /*0x7bb818*/
  }
  v92[0x12] = (int)"sky\\p\\sky.p.hlsl"; /*0x7bb829*/
  memset(v93, 0, 0x48); /*0x7bb834*/
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName); /*0x7bb85e*/
  _sprintf(v95, "SKY.pso"); /*0x7bb870*/
  v30 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bb883*/
  PixelShader = CreatePixelShader(FileName, v93, v30, v95, 0, 0); /*0x7bb89e*/
  v32 = this->Pixel[2]; /*0x7bb8a3*/
  v33 = (volatile LONG *)PixelShader; /*0x7bb8a9*/
  if ( v32 != PixelShader ) /*0x7bb8ad*/
  {
    if ( v32 ) /*0x7bb8b1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) ) /*0x7bb8b7*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v32)(v32, 1); /*0x7bb8cd*/
    }
    this->Pixel[2] = (NiD3DPixelShader *)v33; /*0x7bb8d1*/
    if ( v33 ) /*0x7bb8d7*/
      InterlockedIncrement(v33 + 1); /*0x7bb8dd*/
  }
  v78 = "sky\\p\\sky.p.hlsl"; /*0x7bb8ee*/
  v79[0] = (int)&off_A8F8C4; /*0x7bb8f9*/
  memset(&v79[1], 0, 0x44); /*0x7bb904*/
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName); /*0x7bb92e*/
  _sprintf(v95, "SKYTEX.pso"); /*0x7bb940*/
  v34 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bb953*/
  v35 = CreatePixelShader(FileName, v79, v34, v95, 0, 0); /*0x7bb96e*/
  v36 = this->Pixel[0]; /*0x7bb973*/
  v37 = (volatile LONG *)v35; /*0x7bb979*/
  if ( v36 != v35 ) /*0x7bb97d*/
  {
    if ( v36 ) /*0x7bb981*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) ) /*0x7bb987*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v36)(v36, 1); /*0x7bb99d*/
    }
    this->Pixel[0] = (NiD3DPixelShader *)v37; /*0x7bb9a1*/
    if ( v37 ) /*0x7bb9a7*/
      InterlockedIncrement(v37 + 1); /*0x7bb9ad*/
  }
  v81[0x12] = (int)"sky\\p\\sky.p.hlsl"; /*0x7bb9be*/
  v82[0] = (int)"HORIZFADE"; /*0x7bb9c9*/
  v82[1] = 0; /*0x7bb9d4*/
  v82[2] = (int)&off_A8F8C4; /*0x7bb9db*/
  memset(&v82[3], 0, 0x3C); /*0x7bb9e6*/
  sub_801030(v78, (int)FileName); /*0x7bba10*/
  _sprintf(v95, "SKYTEXFADE.pso"); /*0x7bba22*/
  v38 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bba35*/
  v39 = CreatePixelShader(FileName, v82, v38, v95, 0, 0); /*0x7bba50*/
  v40 = this->Pixel[1]; /*0x7bba55*/
  v41 = (volatile LONG *)v39; /*0x7bba5b*/
  if ( v40 != v39 ) /*0x7bba5f*/
  {
    if ( v40 ) /*0x7bba63*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) ) /*0x7bba69*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1); /*0x7bba7f*/
    }
    this->Pixel[1] = (NiD3DPixelShader *)v41; /*0x7bba83*/
    if ( v41 ) /*0x7bba89*/
      InterlockedIncrement(v41 + 1); /*0x7bba8f*/
  }
  _gcvt(unk_B43154, 0xC, DstBuf); /*0x7bbaab*/
  v91[0x12] = (int)"sky\\p\\sky.p.hlsl"; /*0x7bbabb*/
  v92[0] = (int)"OCCLUSION"; /*0x7bbac6*/
  memset(&v92[1], 0, 0x44); /*0x7bbad1*/
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName); /*0x7bbaf4*/
  _sprintf(v95, "SKYSUNOCCL.pso"); /*0x7bbb06*/
  v42 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bbb19*/
  v43 = CreatePixelShader(FileName, v92, v42, v95, 0, 0); /*0x7bbb34*/
  v44 = this->Pixel[3]; /*0x7bbb39*/
  v45 = (volatile LONG *)v43; /*0x7bbb3f*/
  if ( v44 != v43 ) /*0x7bbb43*/
  {
    if ( v44 ) /*0x7bbb47*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v44 + 1) ) /*0x7bbb4d*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v44)(v44, 1); /*0x7bbb63*/
    }
    this->Pixel[3] = (NiD3DPixelShader *)v45; /*0x7bbb67*/
    if ( v45 ) /*0x7bbb6d*/
      InterlockedIncrement(v45 + 1); /*0x7bbb73*/
  }
  v84[0x12] = (int)"sky\\p\\sky.p.hlsl"; /*0x7bbb84*/
  v85[0] = (int)"HORIZFADE"; /*0x7bbb8f*/
  memset(&v85[1], 0, 0x44); /*0x7bbb9a*/
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName); /*0x7bbbc4*/
  _sprintf(v95, "SKYSHORIZFADE.pso"); /*0x7bbbd6*/
  v46 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bbbe9*/
  v47 = CreatePixelShader(FileName, v85, v46, v95, 0, 0); /*0x7bbc04*/
  v48 = this->Pixel[4]; /*0x7bbc09*/
  v49 = (volatile LONG *)v47; /*0x7bbc0f*/
  if ( v48 != v47 ) /*0x7bbc13*/
  {
    if ( v48 ) /*0x7bbc17*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v48 + 1) ) /*0x7bbc1d*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v48)(v48, 1); /*0x7bbc33*/
    }
    this->Pixel[4] = (NiD3DPixelShader *)v49; /*0x7bbc37*/
    if ( v49 ) /*0x7bbc3d*/
      InterlockedIncrement(v49 + 1); /*0x7bbc43*/
  }
  v79[0x12] = (int)"sky\\v\\sky.v.hlsl"; /*0x7bbc54*/
  v80[0] = (int)"DEPTH_VALUE"; /*0x7bbc5f*/
  v80[1] = (int)"0.999999"; /*0x7bbc6a*/
  v80[2] = (int)"SI"; /*0x7bbc75*/
  memset(&v80[3], 0, 0x3C); /*0x7bbc80*/
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName); /*0x7bbca3*/
  _sprintf(v95, "SKYFAR.vso"); /*0x7bbcb5*/
  v50 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bbcc7*/
  v51 = CreateVertexShader(FileName, v80, v50, v95, 0, 0); /*0x7bbcdf*/
  v52 = this->Vertex1[0]; /*0x7bbce4*/
  v53 = (volatile LONG *)v51; /*0x7bbcea*/
  if ( v52 != v51 ) /*0x7bbcee*/
  {
    if ( v52 ) /*0x7bbcf2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) ) /*0x7bbcf8*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v52)(v52, 1); /*0x7bbd0e*/
    }
    this->Vertex1[0] = (NiD3DVertexShader *)v53; /*0x7bbd12*/
    if ( v53 ) /*0x7bbd18*/
      InterlockedIncrement(v53 + 1); /*0x7bbd1e*/
  }
  v74[0] = (int)"DEPTH_VALUE"; /*0x7bbd34*/
  v74[1] = (int)"0.999999"; /*0x7bbd3c*/
  v74[2] = (int)"SI"; /*0x7bbd44*/
  v74[3] = 0; /*0x7bbd4c*/
  v74[4] = (int)"SI_CLOUDS"; /*0x7bbd50*/
  v74[5] = (int)EmptyString; /*0x7bbd58*/
  memset(&v74[6], 0, 0x30); /*0x7bbd60*/
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName); /*0x7bbd76*/
  _sprintf(v95, "SKYCLOUDSI.vso"); /*0x7bbd88*/
  v54 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bbd9a*/
  v55 = CreateVertexShader(FileName, v74, v54, v95, 0, 0); /*0x7bbdaf*/
  v56 = this->Vertex1[1]; /*0x7bbdb4*/
  v57 = (volatile LONG *)v55; /*0x7bbdba*/
  if ( v56 != v55 ) /*0x7bbdbe*/
  {
    if ( v56 ) /*0x7bbdc2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) ) /*0x7bbdc8*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v56)(v56, 1); /*0x7bbdde*/
    }
    this->Vertex1[1] = (NiD3DVertexShader *)v57; /*0x7bbde2*/
    if ( v57 ) /*0x7bbde8*/
      InterlockedIncrement(v57 + 1); /*0x7bbdee*/
  }
  v86[0x12] = (int)"sky\\v\\sky_quad.v.hlsl"; /*0x7bbdff*/
  v87[0] = (int)"SI"; /*0x7bbe0a*/
  memset(&v87[1], 0, 0x44); /*0x7bbe15*/
  sub_801030("sky\\v\\sky_quad.v.hlsl", (int)FileName); /*0x7bbe3f*/
  _sprintf(v95, "SKYQUADSI.vso"); /*0x7bbe51*/
  v58 = BSShaderManager_GetVertexShaderTargetName(); /*0x7bbe63*/
  v59 = CreateVertexShader(FileName, v87, v58, v95, 0, 0); /*0x7bbe7b*/
  v60 = this->Vertex1[2]; /*0x7bbe80*/
  v61 = (volatile LONG *)v59; /*0x7bbe86*/
  if ( v60 != v59 ) /*0x7bbe8a*/
  {
    if ( v60 ) /*0x7bbe8e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v60 + 1) ) /*0x7bbe94*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v60)(v60, 1); /*0x7bbeaa*/
    }
    this->Vertex1[2] = (NiD3DVertexShader *)v61; /*0x7bbeae*/
    if ( v61 ) /*0x7bbeb4*/
      InterlockedIncrement(v61 + 1); /*0x7bbeba*/
  }
  _gcvt(unk_B43158, 0xC, DstBuf); /*0x7bbed6*/
  v88[0x12] = (int)"sky\\p\\sky.p.hlsl"; /*0x7bbeed*/
  v89[0] = (int)"SI"; /*0x7bbef8*/
  v89[1] = (int)DstBuf; /*0x7bbf03*/
  memset(&v89[2], 0, 0x40); /*0x7bbf0a*/
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName); /*0x7bbf2d*/
  _sprintf(v95, "SKYSI.pso"); /*0x7bbf3f*/
  v62 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bbf52*/
  v63 = CreatePixelShader(FileName, v89, v62, v95, 0, 0); /*0x7bbf6d*/
  v64 = this->Pixel1[0]; /*0x7bbf72*/
  v65 = (volatile LONG *)v63; /*0x7bbf78*/
  if ( v64 != v63 ) /*0x7bbf7c*/
  {
    if ( v64 ) /*0x7bbf80*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) ) /*0x7bbf86*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v64)(v64, 1); /*0x7bbf9c*/
    }
    this->Pixel1[0] = (NiD3DPixelShader *)v65; /*0x7bbfa0*/
    if ( v65 ) /*0x7bbfa6*/
      InterlockedIncrement(v65 + 1); /*0x7bbfac*/
  }
  _gcvt(unk_B43154, 0xC, DstBuf); /*0x7bbfc8*/
  v80[0x12] = (int)"sky\\p\\sky.p.hlsl"; /*0x7bbfdf*/
  v81[0] = (int)"SI"; /*0x7bbfea*/
  v81[1] = (int)DstBuf; /*0x7bbff5*/
  v81[2] = (int)"SI_SUN"; /*0x7bbffc*/
  memset(&v81[3], 0, 0x3C); /*0x7bc007*/
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName); /*0x7bc02a*/
  _sprintf(v95, "SKYSISUN.pso"); /*0x7bc03c*/
  v66 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bc04f*/
  v67 = CreatePixelShader(FileName, v81, v66, v95, 0, 0); /*0x7bc06a*/
  v68 = this->Pixel1[1]; /*0x7bc06f*/
  v69 = (volatile LONG *)v67; /*0x7bc075*/
  if ( v68 != v67 ) /*0x7bc079*/
  {
    if ( v68 ) /*0x7bc07d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v68 + 1) ) /*0x7bc083*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v68)(v68, 1); /*0x7bc099*/
    }
    this->Pixel1[1] = (NiD3DPixelShader *)v69; /*0x7bc09d*/
    if ( v69 ) /*0x7bc0a3*/
      InterlockedIncrement(v69 + 1); /*0x7bc0a9*/
  }
  v82[0x12] = (int)"sky\\p\\sky.p.hlsl"; /*0x7bc0ba*/
  v83[0] = (int)"SI"; /*0x7bc0c5*/
  v83[1] = 0; /*0x7bc0d0*/
  v83[2] = (int)"SI_CLOUDS"; /*0x7bc0d7*/
  memset(&v83[3], 0, 0x3C); /*0x7bc0e2*/
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName); /*0x7bc105*/
  _sprintf(v95, "SKYSICLOUDS.pso"); /*0x7bc117*/
  v70 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7bc12a*/
  result = CreatePixelShader(FileName, v83, v70, v95, 0, 0); /*0x7bc145*/
  v72 = (volatile LONG *)this->Pixel1[2]; /*0x7bc14a*/
  v73 = (volatile LONG *)result; /*0x7bc150*/
  if ( v72 != (volatile LONG *)result ) /*0x7bc154*/
  {
    if ( v72 ) /*0x7bc158*/
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v72 + 1); /*0x7bc15e*/
      if ( !result ) /*0x7bc166*/
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v72)(v72, 1); /*0x7bc174*/
    }
    this->Pixel1[2] = (NiD3DPixelShader *)v73; /*0x7bc178*/
    if ( v73 ) /*0x7bc17e*/
      return (NiD3DShaderProgram *)InterlockedIncrement(v73 + 1); /*0x7bc184*/
  }
  return result; /*0x7bc18a*/
}
