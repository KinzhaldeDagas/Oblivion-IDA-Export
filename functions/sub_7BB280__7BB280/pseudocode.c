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

  FullPath = "sky\\v\\sky.v.hlsl";
  memset(v91, 0, 0x48);
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName);
  _sprintf(v95, "SKY.vso");
  v2 = sub_7B47E0();
  VertexShader = CreateVertexShader(FileName, v91, v2, v95, 0, 0);
  v4 = this->Vertex[0];
  v5 = (volatile LONG *)VertexShader;
  if ( v4 != VertexShader )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v4)(v4, 1);
    }
    this->Vertex[0] = (NiD3DVertexShader *)v5;
    if ( v5 )
      InterlockedIncrement(v5 + 1);
  }
  v87[0x12] = (int)"sky\\v\\sky.v.hlsl";
  v88[0] = (int)&off_A8F8C4;
  memset(&v88[1], 0, 0x44);
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYT.vso");
  v6 = sub_7B47E0();
  v7 = CreateVertexShader(FileName, v88, v6, v95, 0, 0);
  v8 = this->Vertex[1];
  v9 = (volatile LONG *)v7;
  if ( v8 != v7 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1);
    }
    this->Vertex[1] = (NiD3DVertexShader *)v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
  }
  v93[0x12] = (int)"sky\\v\\sky_quad.v.hlsl";
  memset(v94, 0, sizeof(v94));
  sub_801030("sky\\v\\sky_quad.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYQUAD.vso");
  v10 = sub_7B47E0();
  v11 = CreateVertexShader(FileName, v94, v10, v95, 0, 0);
  v12 = this->Vertex[2];
  v13 = (volatile LONG *)v11;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v12 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v12)(v12, 1);
    }
    this->Vertex[2] = (NiD3DVertexShader *)v13;
    if ( v13 )
      InterlockedIncrement(v13 + 1);
  }
  v85[0x12] = (int)"sky\\v\\sky.v.hlsl";
  v86[0] = (int)"HORIZFADE";
  memset(&v86[1], 0, 0x44);
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYHORIZFADE.vso");
  v14 = sub_7B47E0();
  v15 = CreateVertexShader(FileName, v86, v14, v95, 0, 0);
  v16 = this->Vertex[3];
  v17 = (volatile LONG *)v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1);
    }
    this->Vertex[3] = (NiD3DVertexShader *)v17;
    if ( v17 )
      InterlockedIncrement(v17 + 1);
  }
  v83[0x12] = (int)"sky\\v\\sky.v.hlsl";
  v84[0] = (int)"OCCLUSION";
  memset(&v84[1], 0, 0x44);
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYOCC.vso");
  v18 = sub_7B47E0();
  v19 = CreateVertexShader(FileName, v84, v18, v95, 0, 0);
  v20 = this->Vertex[4];
  v21 = (volatile LONG *)v19;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1);
    }
    this->Vertex[4] = (NiD3DVertexShader *)v21;
    if ( v21 )
      InterlockedIncrement(v21 + 1);
  }
  v75 = "sky\\v\\sky.v.hlsl";
  v76[0] = (int)&off_A8F8C4;
  v76[1] = 0;
  v76[2] = (int)"CLOUDS";
  memset(&v76[3], 0, 0x3C);
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYCLOUDS.vso");
  v22 = sub_7B47E0();
  v23 = CreateVertexShader(FileName, v76, v22, v95, 0, 0);
  v24 = this->Vertex[5];
  v25 = (volatile LONG *)v23;
  if ( v24 != v23 )
  {
    if ( v24 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v24)(v24, 1);
    }
    this->Vertex[5] = (NiD3DVertexShader *)v25;
    if ( v25 )
      InterlockedIncrement(v25 + 1);
  }
  v76[0x12] = (int)"sky\\v\\sky.v.hlsl";
  v77[0] = (int)"HORIZFADE";
  v77[1] = 0;
  v77[2] = (int)&off_A8F8C4;
  v77[3] = 0;
  v77[4] = (int)"CLOUDS";
  memset(&v77[5], 0, 0x34);
  sub_801030(v75, (int)FileName);
  _sprintf(v95, "SKYCLOUDSFADE.vso");
  v26 = sub_7B47E0();
  v27 = CreateVertexShader(FileName, v77, v26, v95, 0, 0);
  v28 = this->Vertex[6];
  v29 = (volatile LONG *)v27;
  if ( v28 != v27 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v28)(v28, 1);
    }
    this->Vertex[6] = (NiD3DVertexShader *)v29;
    if ( v29 )
      InterlockedIncrement(v29 + 1);
  }
  v92[0x12] = (int)"sky\\p\\sky.p.hlsl";
  memset(v93, 0, 0x48);
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName);
  _sprintf(v95, "SKY.pso");
  v30 = (char *)sub_7B4780(0);
  PixelShader = CreatePixelShader(FileName, v93, v30, v95, 0, 0);
  v32 = this->Pixel[2];
  v33 = (volatile LONG *)PixelShader;
  if ( v32 != PixelShader )
  {
    if ( v32 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v32)(v32, 1);
    }
    this->Pixel[2] = (NiD3DPixelShader *)v33;
    if ( v33 )
      InterlockedIncrement(v33 + 1);
  }
  v78 = "sky\\p\\sky.p.hlsl";
  v79[0] = (int)&off_A8F8C4;
  memset(&v79[1], 0, 0x44);
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName);
  _sprintf(v95, "SKYTEX.pso");
  v34 = (char *)sub_7B4780(0);
  v35 = CreatePixelShader(FileName, v79, v34, v95, 0, 0);
  v36 = this->Pixel[0];
  v37 = (volatile LONG *)v35;
  if ( v36 != v35 )
  {
    if ( v36 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v36)(v36, 1);
    }
    this->Pixel[0] = (NiD3DPixelShader *)v37;
    if ( v37 )
      InterlockedIncrement(v37 + 1);
  }
  v81[0x12] = (int)"sky\\p\\sky.p.hlsl";
  v82[0] = (int)"HORIZFADE";
  v82[1] = 0;
  v82[2] = (int)&off_A8F8C4;
  memset(&v82[3], 0, 0x3C);
  sub_801030(v78, (int)FileName);
  _sprintf(v95, "SKYTEXFADE.pso");
  v38 = (char *)sub_7B4780(0);
  v39 = CreatePixelShader(FileName, v82, v38, v95, 0, 0);
  v40 = this->Pixel[1];
  v41 = (volatile LONG *)v39;
  if ( v40 != v39 )
  {
    if ( v40 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1);
    }
    this->Pixel[1] = (NiD3DPixelShader *)v41;
    if ( v41 )
      InterlockedIncrement(v41 + 1);
  }
  _gcvt(flt_B43154, 0xC, DstBuf);
  v91[0x12] = (int)"sky\\p\\sky.p.hlsl";
  v92[0] = (int)"OCCLUSION";
  memset(&v92[1], 0, 0x44);
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName);
  _sprintf(v95, "SKYSUNOCCL.pso");
  v42 = (char *)sub_7B4780(0);
  v43 = CreatePixelShader(FileName, v92, v42, v95, 0, 0);
  v44 = this->Pixel[3];
  v45 = (volatile LONG *)v43;
  if ( v44 != v43 )
  {
    if ( v44 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v44 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v44)(v44, 1);
    }
    this->Pixel[3] = (NiD3DPixelShader *)v45;
    if ( v45 )
      InterlockedIncrement(v45 + 1);
  }
  v84[0x12] = (int)"sky\\p\\sky.p.hlsl";
  v85[0] = (int)"HORIZFADE";
  memset(&v85[1], 0, 0x44);
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName);
  _sprintf(v95, "SKYSHORIZFADE.pso");
  v46 = (char *)sub_7B4780(0);
  v47 = CreatePixelShader(FileName, v85, v46, v95, 0, 0);
  v48 = this->Pixel[4];
  v49 = (volatile LONG *)v47;
  if ( v48 != v47 )
  {
    if ( v48 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v48 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v48)(v48, 1);
    }
    this->Pixel[4] = (NiD3DPixelShader *)v49;
    if ( v49 )
      InterlockedIncrement(v49 + 1);
  }
  v79[0x12] = (int)"sky\\v\\sky.v.hlsl";
  v80[0] = (int)"DEPTH_VALUE";
  v80[1] = (int)"0.999999";
  v80[2] = (int)"SI";
  memset(&v80[3], 0, 0x3C);
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYFAR.vso");
  v50 = sub_7B47E0();
  v51 = CreateVertexShader(FileName, v80, v50, v95, 0, 0);
  v52 = this->Vertex1[0];
  v53 = (volatile LONG *)v51;
  if ( v52 != v51 )
  {
    if ( v52 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v52)(v52, 1);
    }
    this->Vertex1[0] = (NiD3DVertexShader *)v53;
    if ( v53 )
      InterlockedIncrement(v53 + 1);
  }
  v74[0] = (int)"DEPTH_VALUE";
  v74[1] = (int)"0.999999";
  v74[2] = (int)"SI";
  v74[3] = 0;
  v74[4] = (int)"SI_CLOUDS";
  v74[5] = (int)EmptyString;
  memset(&v74[6], 0, 0x30);
  sub_801030("sky\\v\\sky.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYCLOUDSI.vso");
  v54 = sub_7B47E0();
  v55 = CreateVertexShader(FileName, v74, v54, v95, 0, 0);
  v56 = this->Vertex1[1];
  v57 = (volatile LONG *)v55;
  if ( v56 != v55 )
  {
    if ( v56 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v56)(v56, 1);
    }
    this->Vertex1[1] = (NiD3DVertexShader *)v57;
    if ( v57 )
      InterlockedIncrement(v57 + 1);
  }
  v86[0x12] = (int)"sky\\v\\sky_quad.v.hlsl";
  v87[0] = (int)"SI";
  memset(&v87[1], 0, 0x44);
  sub_801030("sky\\v\\sky_quad.v.hlsl", (int)FileName);
  _sprintf(v95, "SKYQUADSI.vso");
  v58 = sub_7B47E0();
  v59 = CreateVertexShader(FileName, v87, v58, v95, 0, 0);
  v60 = this->Vertex1[2];
  v61 = (volatile LONG *)v59;
  if ( v60 != v59 )
  {
    if ( v60 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v60 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v60)(v60, 1);
    }
    this->Vertex1[2] = (NiD3DVertexShader *)v61;
    if ( v61 )
      InterlockedIncrement(v61 + 1);
  }
  _gcvt(flt_B43158, 0xC, DstBuf);
  v88[0x12] = (int)"sky\\p\\sky.p.hlsl";
  v89[0] = (int)"SI";
  v89[1] = (int)DstBuf;
  memset(&v89[2], 0, 0x40);
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName);
  _sprintf(v95, "SKYSI.pso");
  v62 = (char *)sub_7B4780(0);
  v63 = CreatePixelShader(FileName, v89, v62, v95, 0, 0);
  v64 = this->Pixel1[0];
  v65 = (volatile LONG *)v63;
  if ( v64 != v63 )
  {
    if ( v64 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v64)(v64, 1);
    }
    this->Pixel1[0] = (NiD3DPixelShader *)v65;
    if ( v65 )
      InterlockedIncrement(v65 + 1);
  }
  _gcvt(flt_B43154, 0xC, DstBuf);
  v80[0x12] = (int)"sky\\p\\sky.p.hlsl";
  v81[0] = (int)"SI";
  v81[1] = (int)DstBuf;
  v81[2] = (int)"SI_SUN";
  memset(&v81[3], 0, 0x3C);
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName);
  _sprintf(v95, "SKYSISUN.pso");
  v66 = (char *)sub_7B4780(0);
  v67 = CreatePixelShader(FileName, v81, v66, v95, 0, 0);
  v68 = this->Pixel1[1];
  v69 = (volatile LONG *)v67;
  if ( v68 != v67 )
  {
    if ( v68 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v68 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v68)(v68, 1);
    }
    this->Pixel1[1] = (NiD3DPixelShader *)v69;
    if ( v69 )
      InterlockedIncrement(v69 + 1);
  }
  v82[0x12] = (int)"sky\\p\\sky.p.hlsl";
  v83[0] = (int)"SI";
  v83[1] = 0;
  v83[2] = (int)"SI_CLOUDS";
  memset(&v83[3], 0, 0x3C);
  sub_801030("sky\\p\\sky.p.hlsl", (int)FileName);
  _sprintf(v95, "SKYSICLOUDS.pso");
  v70 = (char *)sub_7B4780(0);
  result = CreatePixelShader(FileName, v83, v70, v95, 0, 0);
  v72 = (volatile LONG *)this->Pixel1[2];
  v73 = (volatile LONG *)result;
  if ( v72 != (volatile LONG *)result )
  {
    if ( v72 )
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v72 + 1);
      if ( !result )
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v72)(v72, 1);
    }
    this->Pixel1[2] = (NiD3DPixelShader *)v73;
    if ( v73 )
      return (NiD3DShaderProgram *)InterlockedIncrement(v73 + 1);
  }
  return result;
}
