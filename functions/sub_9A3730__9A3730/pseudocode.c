unsigned int __stdcall sub_9A3730(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  char v5; // al
  int v6; // edi
  int v7; // edi
  double v8; // st7
  int v9; // edi
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax

  v3 = 0; /*0x9a3736*/
  v4 = *(_DWORD *)(a2 + 0x14); /*0x9a373f*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a3742*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a3744*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v4] == 1 ) /*0x9a3757*/
  {
    g_NiD3DConstantMap_MappedBool = **(unsigned __int8 **)(a2 + 0x30); /*0x9a3761*/
    v5 = (*(int (__thiscall **)(int, int, unsigned int *, _DWORD))(*(_DWORD *)a1 + 0x30))( /*0x9a376c*/
           a1,
           a2,
           &g_NiD3DConstantMap_MappedBool,
           0);
    goto LABEL_27; /*0x9a376c*/
  }
  v6 = *(_DWORD *)(a2 + 0x14); /*0x9a3777*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a377a*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a377c*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v6] == 3 ) /*0x9a378f*/
  {
    g_NiD3DConstantMap_MappedInt4[0] = **(_DWORD **)(a2 + 0x30); /*0x9a3798*/
    g_NiD3DConstantMap_MappedInt4[1] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a379d*/
    g_NiD3DConstantMap_MappedInt4[2] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a37a2*/
    g_NiD3DConstantMap_MappedInt4[3] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a37a7*/
    v5 = (*(int (__thiscall **)(int, int, int *, _DWORD))(*(_DWORD *)a1 + 0x30))( /*0x9a37b1*/
           a1,
           a2,
           g_NiD3DConstantMap_MappedInt4,
           0);
    goto LABEL_27; /*0x9a37b1*/
  }
  v7 = *(_DWORD *)(a2 + 0x14); /*0x9a37bc*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a37bf*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a37c1*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v7] == 4 ) /*0x9a37d4*/
  {
    g_NiD3DConstantMap_MappedFloat4[0] = **(float **)(a2 + 0x30); /*0x9a37db*/
    v8 = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a37e1*/
    g_NiD3DConstantMap_MappedFloat4[1] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a37e7*/
    g_NiD3DConstantMap_MappedFloat4[2] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a37ed*/
LABEL_26:
    g_NiD3DConstantMap_MappedFloat4[3] = v8; /*0x9a393e*/
    v5 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))( /*0x9a3955*/
           a1,
           a2,
           g_NiD3DConstantMap_MappedFloat4,
           0);
    goto LABEL_27; /*0x9a3955*/
  }
  v9 = *(_DWORD *)(a2 + 0x14); /*0x9a37fe*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a3801*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a3803*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v9] == 5 ) /*0x9a3816*/
  {
    v10 = *(float **)(a2 + 0x30); /*0x9a3818*/
    g_NiD3DConstantMap_MappedFloat4[0] = *v10; /*0x9a381d*/
    g_NiD3DConstantMap_MappedFloat4[1] = v10[1]; /*0x9a3826*/
    g_NiD3DConstantMap_MappedFloat4[2] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a3832*/
    v8 = g_NiD3DConstantMap_MappedFloat4[1]; /*0x9a3838*/
    goto LABEL_26; /*0x9a383e*/
  }
  if ( sub_783370((_DWORD *)a2) ) /*0x9a3845*/
  {
    v11 = *(float **)(a2 + 0x30); /*0x9a384e*/
    g_NiD3DConstantMap_MappedFloat4[0] = *v11; /*0x9a3853*/
    g_NiD3DConstantMap_MappedFloat4[1] = v11[1]; /*0x9a385c*/
    g_NiD3DConstantMap_MappedFloat4[2] = v11[2]; /*0x9a3865*/
    v8 = 1.0; /*0x9a386b*/
    goto LABEL_26; /*0x9a386d*/
  }
  if ( sub_7833A0((_DWORD *)a2) || sub_7833D0((_DWORD *)a2) ) /*0x9a3883*/
  {
    v13 = *(float **)(a2 + 0x30); /*0x9a391e*/
    g_NiD3DConstantMap_MappedFloat4[0] = *v13; /*0x9a3923*/
    g_NiD3DConstantMap_MappedFloat4[1] = v13[1]; /*0x9a392c*/
    g_NiD3DConstantMap_MappedFloat4[2] = v13[2]; /*0x9a3935*/
    v8 = v13[3]; /*0x9a393b*/
    goto LABEL_26; /*0x9a393b*/
  }
  if ( sub_782DE0((_DWORD *)a2) ) /*0x9a3892*/
  {
    v12 = *(float **)(a2 + 0x30); /*0x9a389b*/
    g_NiD3DConstantMap_MappedMatrix[0] = *v12; /*0x9a38a2*/
    g_NiD3DConstantMap_MappedMatrix[1] = v12[1]; /*0x9a38b0*/
    g_NiD3DConstantMap_MappedMatrix[2] = v12[2]; /*0x9a38b9*/
    g_NiD3DConstantMap_MappedMatrix[3] = 0.0; /*0x9a38c1*/
    g_NiD3DConstantMap_MappedMatrix[4] = v12[3]; /*0x9a38ca*/
    g_NiD3DConstantMap_MappedMatrix[5] = v12[4]; /*0x9a38d3*/
    g_NiD3DConstantMap_MappedMatrix[6] = v12[5]; /*0x9a38dc*/
    g_NiD3DConstantMap_MappedMatrix[7] = 0.0; /*0x9a38e2*/
    g_NiD3DConstantMap_MappedMatrix[8] = v12[6]; /*0x9a38eb*/
    g_NiD3DConstantMap_MappedMatrix[9] = v12[7]; /*0x9a38f4*/
    g_NiD3DConstantMap_MappedMatrix[0xA] = v12[8]; /*0x9a38fd*/
    g_NiD3DConstantMap_MappedMatrix[0xB] = 0.0; /*0x9a3903*/
    v5 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x30))( /*0x9a3909*/
           a1,
           a2,
           g_NiD3DConstantMap_MappedMatrix,
           0);
  }
  else
  {
    if ( !sub_782E10((_DWORD *)a2) ) /*0x9a3914*/
      return v3; /*0x9a3914*/
    v5 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x30))(a1, a2, *(_DWORD *)(a2 + 0x30), 0); /*0x9a391c*/
  }
LABEL_27:
  if ( !v5 ) /*0x9a3959*/
    return 0x80000050; /*0x9a395b*/
  return v3; /*0x9a3960*/
}
