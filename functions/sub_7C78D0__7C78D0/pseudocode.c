void __userpurge sub_7C78D0(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, NiCullingProcess *a2)
{
  int v5; // ebp
  int Camera; // edi
  _DWORD *v7; // ecx
  LONG v8; // esi
  int v9; // ebx
  void (__thiscall ***v10)(_DWORD, int); // ebp
  int v11; // eax
  bool v12; // zf
  void (__thiscall ***v13)(_DWORD, int); // esi
  float v14; // eax
  BSShaderAccumulator *v15; // esi
  NiDX9Renderer *v16; // ecx
  NiAccumulator *v17; // ebx
  float v18; // eax
  int v19; // ecx
  NiProperty *NiPropertyByID; // eax
  float v21; // edx
  float v22; // ecx
  double v23; // st7
  int m_extraDataList; // edx
  double v25; // st7
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  BSShaderAccumulator *v29; // eax
  BSShaderAccumulator *v30; // esi
  volatile LONG *accumulator; // ebp
  NiDX9Renderer *v32; // ecx
  _DWORD *v34; // [esp+18h] [ebp-34h]
  int v35; // [esp+18h] [ebp-34h]
  int v36; // [esp+1Ch] [ebp-30h] BYREF
  float v37; // [esp+20h] [ebp-2Ch]
  float v38; // [esp+24h] [ebp-28h]
  float v39; // [esp+28h] [ebp-24h]
  int v40; // [esp+2Ch] [ebp-20h]
  int v41; // [esp+30h] [ebp-1Ch]
  int v42; // [esp+34h] [ebp-18h]
  int v43; // [esp+38h] [ebp-14h]
  float v44; // [esp+3Ch] [ebp-10h]
  int v45; // [esp+48h] [ebp-4h]

  v5 = a1;
  Camera = (int)a2->Camera;
  if ( !*(_BYTE *)(a1 + 0x12C) )
  {
    v7 = *(_DWORD **)(a1 + 0xE8);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = v7[2];
        v34 = (_DWORD *)*v7;
        if ( v8 )
        {
          v9 = *sub_405AD0((_DWORD *)v8, &v36);
          if ( v36 )
          {
            v10 = (void (__thiscall ***)(_DWORD, int))v36;
            if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) )
              (**v10)(v10, 1);
            v5 = a1;
          }
          if ( !v9 || *(_DWORD *)(v9 + 4) == 1 )
          {
            sub_7C77C0((_DWORD *)v5, v8);
          }
          else
          {
            if ( *(_BYTE *)(v8 + 0x104) )
              sub_7C6020((_DWORD *)v5, v8);
            if ( !*(_BYTE *)(v8 + 0xF4) || !sub_405A80() )
              ShadowSceneLight_CullProcess((void *)v8, st5_0, a3, a4, (int)a2);
          }
        }
        if ( !v34 )
          break;
        v7 = v34;
      }
    }
    sub_7C71B0((_DWORD *)v5, (float *)Camera);
  }
  v11 = dword_B43124;
  v12 = dword_B43124 == Camera;
  byte_B42F30 = *(_BYTE *)(v5 + 0x11C);
  if ( !v12 )
  {
    if ( v11 )
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v11;
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**v13)(v13, 1);
    }
    dword_B43124 = Camera;
    if ( Camera )
      InterlockedIncrement((volatile LONG *)(Camera + 4));
  }
  if ( ShaderPackage )
  {
    if ( byte_B42E86 == 1 )
    {
      if ( dword_B2D18C == 0xFFFFFFFF )
        dword_B2D18C = dword_B42F40;
      dword_B42F40 = 4;
    }
    else if ( dword_B2D18C != 0xFFFFFFFF )
    {
      dword_B42F40 = dword_B2D18C;
      dword_B2D18C = 0xFFFFFFFF;
    }
    v18 = *(float *)(Camera + 0x8C);
    v19 = *(int *)(Camera + 0x90);
    v38 = *(float *)(Camera + 0x88);
    *(float *)&v41 = v38;
    v39 = v18;
    *(float *)&v42 = v18;
    v40 = v19;
    v43 = v19;
    v44 = 0.0;
    sub_7ECAE0(0x1Cu, SLODWORD(v38), SLODWORD(v18), v19, COERCE_INT(0.0));
    v38 = *(float *)(Camera + 0x64);
    v39 = *(float *)(Camera + 0x70);
    v40 = *(int *)(Camera + 0x7C);
    *(float *)&v41 = v38;
    *(float *)&v42 = v39;
    v43 = v40;
    v44 = 0.0;
    sub_7ECAE0(0x1Du, SLODWORD(v38), SLODWORD(v39), v40, COERCE_INT(0.0));
    v38 = *(float *)(Camera + 0x6C);
    v39 = *(float *)(Camera + 0x78);
    v40 = *(int *)(Camera + 0x84);
    *(float *)&v41 = v38;
    *(float *)&v42 = v39;
    v43 = v40;
    v44 = 0.0;
    sub_7ECAE0(0x1Eu, SLODWORD(v38), SLODWORD(v39), v40, COERCE_INT(0.0));
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v5, 1);
    if ( NiPropertyByID )
    {
      v21 = *(float *)&NiPropertyByID[1].members.m_pcName;
      v22 = *(float *)&NiPropertyByID[1].members.m_controller;
      v37 = *(float *)&NiPropertyByID[1].members.m_extraDataListLen;
      v23 = *(float *)&NiPropertyByID[2].vtbl;
      v38 = v21;
      m_extraDataList = (int)NiPropertyByID[1].members.m_extraDataList;
      *(float *)&v35 = v23;
      v39 = v22;
      v40 = m_extraDataList;
      v37 = *(float *)&v35 - v37;
      v25 = v37;
      dword_B46638 = v35;
      *(float *)&v42 = v25;
      dword_B4663C = v42;
      *(float *)&v41 = v38;
      *(float *)&dword_B46640 = 0.0;
      v26 = v41;
      *(float *)&v42 = v39;
      *(float *)&dword_B46644 = 0.0;
      v27 = v42;
      v43 = v40;
      dword_B46648 = v26;
      v28 = v43;
      dword_B4664C = v27;
      v44 = 0.0;
      dword_B46650 = v28;
      *(float *)&dword_B46654 = 0.0;
    }
    flt_B460B8 = (LocalGrassWindMagnitudeMax - LocalGrassWindMagnitudeMin) * flt_B2C670 + LocalGrassWindMagnitudeMin;
    *(float *)&v29 = COERCE_FLOAT(InitBSShaderAccumulator());
    v30 = v29;
    v37 = *(float *)&v29;
    if ( *(float *)&v29 != 0.0 )
      InterlockedIncrement((volatile LONG *)v29 + 1);
    v12 = *((_DWORD *)v30 + 1) == 1;
    v45 = 1;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)v30 + 1);
    accumulator = (volatile LONG *)g_Renderer->member.super.accumulator;
    if ( accumulator )
      InterlockedIncrement(accumulator + 1);
    v32 = g_Renderer;
    LOBYTE(v45) = 2;
    NiDX9Renderer::SetShaderAccumulator(v32, v30);
    (*(void (__thiscall **)(BSShaderAccumulator *, int))(*(_DWORD *)v30 + 0x4C))(v30, Camera);
    *((_BYTE *)v30 + 0x21E0) = 1;
    NiNode::OnVisible((NiNode *)a1, a2);
    *((_BYTE *)v30 + 0x21E1) = 1;
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v30 + 0x50))(v30);
    NiDX9Renderer::SetShaderAccumulator(g_Renderer, (BSShaderAccumulator *)accumulator);
    LOBYTE(v45) = 1;
    if ( accumulator )
    {
      if ( !InterlockedDecrement(accumulator + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1);
    }
    v45 = 0xFFFFFFFF;
    if ( !InterlockedDecrement((volatile LONG *)v30 + 1) )
      (**(void (__thiscall ***)(BSShaderAccumulator *, int))v30)(v30, 1);
  }
  else
  {
    v14 = COERCE_FLOAT(FormHeapAlloc(0x38u));
    v37 = v14;
    v45 = 0;
    if ( v14 == 0.0 )
      v15 = 0;
    else
      v15 = (BSShaderAccumulator *)NiAlphaAccumulator_Constructor((_DWORD *)LODWORD(v14));
    v16 = g_Renderer;
    v17 = g_Renderer->member.super.accumulator;
    v45 = 0xFFFFFFFF;
    NiDX9Renderer::SetShaderAccumulator(v16, v15);
    (*(void (__usercall **)(BSShaderAccumulator *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v15 + 0x4C))(
      v15,
      Camera,
      a4,
      a3,
      st5_0);
    NiNode::OnVisible((NiNode *)v5, a2);
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v15 + 0x50))(v15);
    NiDX9Renderer::SetShaderAccumulator(g_Renderer, v17);
  }
}
