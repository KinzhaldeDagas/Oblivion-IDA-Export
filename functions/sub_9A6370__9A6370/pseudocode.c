unsigned int __stdcall sub_9A6370(int a1, int a2, int a3)
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

  v3 = 0; /*0x9a6376*/
  v4 = *(_DWORD *)(a2 + 0x14); /*0x9a637f*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a6382*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a6384*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v4] == 1 ) /*0x9a6397*/
  {
    g_NiD3DConstantMap_MappedBool = **(unsigned __int8 **)(a2 + 0x30); /*0x9a63a1*/
    v5 = (*(int (__thiscall **)(int, int, unsigned int *, _DWORD))(*(_DWORD *)a1 + 0x28))( /*0x9a63ac*/
           a1,
           a2,
           &g_NiD3DConstantMap_MappedBool,
           0);
    goto LABEL_27; /*0x9a63ac*/
  }
  v6 = *(_DWORD *)(a2 + 0x14); /*0x9a63b7*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a63ba*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a63bc*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v6] == 3 ) /*0x9a63cf*/
  {
    g_NiD3DConstantMap_MappedInt4[0] = **(_DWORD **)(a2 + 0x30); /*0x9a63d8*/
    g_NiD3DConstantMap_MappedInt4[1] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a63dd*/
    g_NiD3DConstantMap_MappedInt4[2] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a63e2*/
    g_NiD3DConstantMap_MappedInt4[3] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a63e7*/
    v5 = (*(int (__thiscall **)(int, int, int *, _DWORD))(*(_DWORD *)a1 + 0x28))( /*0x9a63f1*/
           a1,
           a2,
           g_NiD3DConstantMap_MappedInt4,
           0);
    goto LABEL_27; /*0x9a63f1*/
  }
  v7 = *(_DWORD *)(a2 + 0x14); /*0x9a63fc*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a63ff*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a6401*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v7] == 4 ) /*0x9a6414*/
  {
    g_NiD3DConstantMap_MappedFloat4[0] = **(float **)(a2 + 0x30); /*0x9a641b*/
    v8 = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a6421*/
    g_NiD3DConstantMap_MappedFloat4[1] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a6427*/
    g_NiD3DConstantMap_MappedFloat4[2] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a642d*/
LABEL_26:
    g_NiD3DConstantMap_MappedFloat4[3] = v8; /*0x9a657e*/
    v5 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))( /*0x9a6595*/
           a1,
           a2,
           g_NiD3DConstantMap_MappedFloat4,
           0);
    goto LABEL_27; /*0x9a6595*/
  }
  v9 = *(_DWORD *)(a2 + 0x14); /*0x9a643e*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a6441*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a6443*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v9] == 5 ) /*0x9a6456*/
  {
    v10 = *(float **)(a2 + 0x30); /*0x9a6458*/
    g_NiD3DConstantMap_MappedFloat4[0] = *v10; /*0x9a645d*/
    g_NiD3DConstantMap_MappedFloat4[1] = v10[1]; /*0x9a6466*/
    g_NiD3DConstantMap_MappedFloat4[2] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a6472*/
    v8 = g_NiD3DConstantMap_MappedFloat4[1]; /*0x9a6478*/
    goto LABEL_26; /*0x9a647e*/
  }
  if ( sub_783370((_DWORD *)a2) ) /*0x9a6485*/
  {
    v11 = *(float **)(a2 + 0x30); /*0x9a648e*/
    g_NiD3DConstantMap_MappedFloat4[0] = *v11; /*0x9a6493*/
    g_NiD3DConstantMap_MappedFloat4[1] = v11[1]; /*0x9a649c*/
    g_NiD3DConstantMap_MappedFloat4[2] = v11[2]; /*0x9a64a5*/
    v8 = 1.0; /*0x9a64ab*/
    goto LABEL_26; /*0x9a64ad*/
  }
  if ( sub_7833A0((_DWORD *)a2) || sub_7833D0((_DWORD *)a2) ) /*0x9a64c3*/
  {
    v13 = *(float **)(a2 + 0x30); /*0x9a655e*/
    g_NiD3DConstantMap_MappedFloat4[0] = *v13; /*0x9a6563*/
    g_NiD3DConstantMap_MappedFloat4[1] = v13[1]; /*0x9a656c*/
    g_NiD3DConstantMap_MappedFloat4[2] = v13[2]; /*0x9a6575*/
    v8 = v13[3]; /*0x9a657b*/
    goto LABEL_26; /*0x9a657b*/
  }
  if ( sub_782DE0((_DWORD *)a2) ) /*0x9a64d2*/
  {
    v12 = *(float **)(a2 + 0x30); /*0x9a64db*/
    g_NiD3DConstantMap_MappedMatrix[0] = *v12; /*0x9a64e2*/
    g_NiD3DConstantMap_MappedMatrix[1] = v12[1]; /*0x9a64f0*/
    g_NiD3DConstantMap_MappedMatrix[2] = v12[2]; /*0x9a64f9*/
    g_NiD3DConstantMap_MappedMatrix[3] = 0.0; /*0x9a6501*/
    g_NiD3DConstantMap_MappedMatrix[4] = v12[3]; /*0x9a650a*/
    g_NiD3DConstantMap_MappedMatrix[5] = v12[4]; /*0x9a6513*/
    g_NiD3DConstantMap_MappedMatrix[6] = v12[5]; /*0x9a651c*/
    g_NiD3DConstantMap_MappedMatrix[7] = 0.0; /*0x9a6522*/
    g_NiD3DConstantMap_MappedMatrix[8] = v12[6]; /*0x9a652b*/
    g_NiD3DConstantMap_MappedMatrix[9] = v12[7]; /*0x9a6534*/
    g_NiD3DConstantMap_MappedMatrix[0xA] = v12[8]; /*0x9a653d*/
    g_NiD3DConstantMap_MappedMatrix[0xB] = 0.0; /*0x9a6543*/
    v5 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))( /*0x9a6549*/
           a1,
           a2,
           g_NiD3DConstantMap_MappedMatrix,
           0);
  }
  else
  {
    if ( !sub_782E10((_DWORD *)a2) ) /*0x9a6554*/
      return v3; /*0x9a6554*/
    v5 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, a2, *(_DWORD *)(a2 + 0x30), 0); /*0x9a655c*/
  }
LABEL_27:
  if ( !v5 ) /*0x9a6599*/
    return 0x80000050; /*0x9a659b*/
  return v3; /*0x9a65a0*/
}
