// [Verified] Static-initialization target called with unk_B430D8 by InitializeRendererShaderStateGlobals. Resets renderer/shader state, clears pass-control bytes +1/+2, sets +3=1, resets shader version to 0, and releases cached renderer objects. [Unknown] The owning C++ class for unk_B430D8 is not identified.
void *__thiscall RendererShaderState_ResetGlobals(void *this)
{
  float v2; // eax
  bool v3; // zf
  LONG (__stdcall *v4)(volatile LONG *); // edi
  float v5; // esi
  float v6; // esi
  int v7; // esi
  float v8; // esi
  int v9; // esi
  float v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  float v14; // esi
  int v15; // esi
  float v16; // esi
  int v17; // esi
  BSShaderAccumulator *v18; // esi
  int v19; // esi
  int v20; // esi
  float v22; // [esp+38h] [ebp-14h]

  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x27] = 0; /*0x7b725a*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x2B] = 0; /*0x7b725f*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x2F] = 0; /*0x7b7264*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x33] = 0; /*0x7b7269*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x37] = 0; /*0x7b726e*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x3B] = 0; /*0x7b7273*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x3F] = 0; /*0x7b7278*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x43] = 0; /*0x7b727d*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x47] = 0; /*0x7b7282*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x4B] = 0; /*0x7b7287*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x4F] = 0; /*0x7b728c*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x53] = 0; /*0x7b7291*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x57] = 0; /*0x7b7296*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x5B] = 0; /*0x7b729b*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x5F] = 0; /*0x7b72a0*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x63] = 0; /*0x7b72a5*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x67] = 0; /*0x7b72aa*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x6B] = 0; /*0x7b72af*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x6F] = 0; /*0x7b72b4*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x73] = 0; /*0x7b72b9*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x77] = 0; /*0x7b72be*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x7B] = 0; /*0x7b72c3*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x7F] = 0; /*0x7b72c8*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x83] = 0; /*0x7b72cd*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x87] = 0; /*0x7b72d2*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x8B] = 0; /*0x7b72d7*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x8F] = 0; /*0x7b72dc*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x93] = 0; /*0x7b72e1*/
  v2 = flt_B430DC[4]; /*0x7b72e6*/
  v3 = LODWORD(flt_B430DC[4]) == 0; /*0x7b72eb*/
  v4 = InterlockedDecrement; /*0x7b72ed*/
  OB_RendererGlobalState_010201A0[0xCF] = 0; /*0x7b72f3*/
  MEMORY[0xB42D80] = 0; /*0x7b72f9*/
  OB_RendererGlobalState_010201A0[0xA6] = 1; /*0x7b72ff*/
  unk_B42E90 = NAN; /*0x7b7306*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = 0; /*0x7b7310*/
  OB_RendererGlobalState_010201A0[0xE] = 1; /*0x7b7316*/
  OB_ShaderPassControl_010201A0[1] = 0;         // [Verified] RendererShaderState_ResetGlobals clears OB_ShaderPassControl+1. /*0x7b731d*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] = 0x2F; /*0x7b7323*/
  unk_B42D70 = (int)j_j_NiFile_GetNiFile; /*0x7b732d*/
  unk_B42D78 = 0; /*0x7b7337*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1B] = 0; /*0x7b733d*/
  unk_B42E95 = 1; /*0x7b7343*/
  OB_RendererGlobalState_010201A0[0x98] = 0; /*0x7b734a*/
  unk_B42E94 = 0; /*0x7b7350*/
  OB_ShaderPassControl_010201A0[2] = 0;         // [Verified] RendererShaderState_ResetGlobals clears bFullBrightLighting before renderer startup reloads its INI value. /*0x7b7356*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x23] = 0; /*0x7b735c*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] = 0; /*0x7b7362*/
  MEMORY[0xB42D74] = 0; /*0x7b7368*/
  OB_ShaderPassControl_010201A0[3] = 1;         // [Verified] RendererShaderState_ResetGlobals initializes OB_ShaderPassControl+3 to one; the byte's meaning and consumers are Unknown. /*0x7b736e*/
  OB_RendererGlobalState_010201A0[0x9A] = 0; /*0x7b7375*/
  if ( !v3 ) /*0x7b737b*/
  {
    v5 = v2; /*0x7b737d*/
    if ( !v4((volatile LONG *)(LODWORD(v2) + 4)) && v5 != 0.0 ) /*0x7b738b*/
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v5))(LODWORD(v5), 1); /*0x7b7395*/
    flt_B430DC[4] = 0.0; /*0x7b7397*/
  }
  v6 = flt_B430DC[0]; /*0x7b739d*/
  if ( LODWORD(flt_B430DC[0]) ) /*0x7b739d*/
  {
    if ( !v4((volatile LONG *)(LODWORD(v6) + 4)) && v6 != 0.0 ) /*0x7b73b3*/
      (**(void (__thiscall ***)(float, int))LODWORD(v6))(COERCE_FLOAT(LODWORD(v6)), 1); /*0x7b73bd*/
    flt_B430DC[0] = 0.0; /*0x7b73bf*/
  }
  v7 = unk_B430F0; /*0x7b73c5*/
  if ( unk_B430F0 ) /*0x7b73c5*/
  {
    if ( !v4((volatile LONG *)(v7 + 4)) ) /*0x7b73d3*/
    {
      if ( v7 ) /*0x7b73db*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7b73e5*/
    }
    unk_B430F0 = 0; /*0x7b73e7*/
  }
  v8 = flt_B430DC[1]; /*0x7b73ed*/
  if ( LODWORD(flt_B430DC[1]) ) /*0x7b73ed*/
  {
    if ( !v4((volatile LONG *)(LODWORD(v8) + 4)) && v8 != 0.0 ) /*0x7b7403*/
      (**(void (__thiscall ***)(float, int))LODWORD(v8))(COERCE_FLOAT(LODWORD(v8)), 1); /*0x7b740d*/
    flt_B430DC[1] = 0.0; /*0x7b740f*/
  }
  v9 = unk_B43100; /*0x7b7415*/
  if ( unk_B43100 ) /*0x7b7415*/
  {
    if ( !v4((volatile LONG *)(v9 + 4)) ) /*0x7b7423*/
    {
      if ( v9 ) /*0x7b742b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7b7435*/
    }
    unk_B43100 = 0; /*0x7b7437*/
  }
  v10 = flt_B430DC[2]; /*0x7b743d*/
  if ( LODWORD(flt_B430DC[2]) ) /*0x7b743d*/
  {
    if ( !v4((volatile LONG *)(LODWORD(v10) + 4)) && v10 != 0.0 ) /*0x7b7453*/
      (**(void (__thiscall ***)(float, int))LODWORD(v10))(COERCE_FLOAT(LODWORD(v10)), 1); /*0x7b745d*/
    flt_B430DC[2] = 0.0; /*0x7b745f*/
  }
  v11 = unk_B4311C; /*0x7b7465*/
  if ( unk_B4311C ) /*0x7b7465*/
  {
    if ( !v4((volatile LONG *)(v11 + 4)) ) /*0x7b7473*/
    {
      if ( v11 ) /*0x7b747b*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7b7485*/
    }
    unk_B4311C = 0; /*0x7b7487*/
  }
  v12 = unk_B43120; /*0x7b748d*/
  if ( unk_B43120 ) /*0x7b748d*/
  {
    if ( !v4((volatile LONG *)(v12 + 4)) ) /*0x7b749b*/
    {
      if ( v12 ) /*0x7b74a3*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7b74ad*/
    }
    unk_B43120 = 0; /*0x7b74af*/
  }
  v13 = unk_B430F8; /*0x7b74b5*/
  if ( unk_B430F8 ) /*0x7b74b5*/
  {
    if ( !v4((volatile LONG *)(v13 + 4)) ) /*0x7b74c3*/
    {
      if ( v13 ) /*0x7b74cb*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7b74d5*/
    }
    unk_B430F8 = 0; /*0x7b74d7*/
  }
  v14 = flt_B43110[0]; /*0x7b74dd*/
  if ( LODWORD(flt_B43110[0]) ) /*0x7b74dd*/
  {
    if ( !v4((volatile LONG *)(LODWORD(v14) + 4)) && v14 != 0.0 ) /*0x7b74f3*/
      (**(void (__thiscall ***)(float, int))LODWORD(v14))(COERCE_FLOAT(LODWORD(v14)), 1); /*0x7b74fd*/
    flt_B43110[0] = 0.0; /*0x7b74ff*/
  }
  v15 = unk_B430D4; /*0x7b7505*/
  if ( unk_B430D4 ) /*0x7b7505*/
  {
    if ( !v4((volatile LONG *)(v15 + 4)) ) /*0x7b7513*/
    {
      if ( v15 ) /*0x7b751b*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7b7525*/
    }
    unk_B430D4 = 0; /*0x7b7527*/
  }
  v16 = flt_B43110[1]; /*0x7b752d*/
  if ( LODWORD(flt_B43110[1]) ) /*0x7b752d*/
  {
    if ( !v4((volatile LONG *)(LODWORD(v16) + 4)) && v16 != 0.0 ) /*0x7b7543*/
      (**(void (__thiscall ***)(float, int))LODWORD(v16))(COERCE_FLOAT(LODWORD(v16)), 1); /*0x7b754d*/
    flt_B43110[1] = 0.0; /*0x7b754f*/
  }
  v17 = unk_B430F4; /*0x7b7555*/
  if ( unk_B430F4 ) /*0x7b7555*/
  {
    if ( !v4((volatile LONG *)(v17 + 4)) ) /*0x7b7563*/
    {
      if ( v17 ) /*0x7b756b*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x7b7575*/
    }
    unk_B430F4 = 0; /*0x7b7577*/
  }
  v18 = unk_B430FC; /*0x7b757d*/
  v3 = unk_B430FC == 0; /*0x7b7583*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x9F] = 0; /*0x7b7585*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x9B] = 0; /*0x7b758b*/
  OB_RendererGlobalState_010201A0[0x97] = 0; /*0x7b7591*/
  OB_RendererGlobalState_010201A0[0xA3] = 0; /*0x7b7597*/
  OB_RendererGlobalState_010201A0[0xA5] = 0; /*0x7b759d*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0xC7] = 0; /*0x7b75a3*/
  if ( !v3 ) /*0x7b75a9*/
  {
    if ( !v4((volatile LONG *)v18 + 1) ) /*0x7b75af*/
    {
      if ( v18 ) /*0x7b75b7*/
        (**(void (__thiscall ***)(BSShaderAccumulator *, int))v18)(v18, 1); /*0x7b75c1*/
    }
    unk_B430FC = 0; /*0x7b75c3*/
  }
  v22 = g_DialogueFov_; /*0x7b75d0*/
  MEMORY[0xB42E97] = 0; /*0x7b75d3*/
  UpdateParticleShaderFOVData(v22); /*0x7b75d9*/
  v19 = unk_B43128; /*0x7b75de*/
  v3 = unk_B43128 == 0; /*0x7b75e7*/
  OB_RendererGlobalState_010201A0[0x99] = 0; /*0x7b75e9*/
  OB_RendererGlobalState_010201A0[0xD] = 0; /*0x7b75ef*/
  if ( !v3 ) /*0x7b75f5*/
  {
    if ( !v4((volatile LONG *)(v19 + 4)) ) /*0x7b75fb*/
    {
      if ( v19 ) /*0x7b7603*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x7b760d*/
    }
    unk_B43128 = 0; /*0x7b760f*/
  }
  v20 = unk_B43124; /*0x7b7615*/
  v3 = unk_B43124 == 0; /*0x7b761b*/
  OB_ShaderPassControl_010201A0[0] = 0; /*0x7b761d*/
  if ( !v3 ) /*0x7b7623*/
  {
    if ( !v4((volatile LONG *)(v20 + 4)) ) /*0x7b7629*/
    {
      if ( v20 ) /*0x7b7631*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x7b763b*/
    }
    unk_B43124 = 0; /*0x7b763d*/
  }
  OB_RendererGlobalState_010201A0[0xC] = 0; /*0x7b7648*/
  return this; /*0x7b7643*/
}
