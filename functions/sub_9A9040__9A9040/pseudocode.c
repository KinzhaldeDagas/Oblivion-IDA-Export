float *__stdcall sub_9A9040(_DWORD *a1, int a2)
{
  int v2; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax

  v2 = a1[5]; /*0x9a904d*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a9050*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a9052*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v2] == 1 ) /*0x9a9065*/
  {
    g_NiD3DConstantMap_MappedBool = *(unsigned __int8 *)(a2 + 0xC); /*0x9a9070*/
    return (float *)&g_NiD3DConstantMap_MappedBool; /*0x9a907c*/
  }
  v4 = a1[5]; /*0x9a9086*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a9089*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a908b*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v4] != 2 ) /*0x9a909e*/
  {
    v5 = a1[5]; /*0x9a90ab*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a90ae*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a90b0*/
    if ( g_D3DXParameterClassDispatch[(unsigned __int8)v5] == 3 ) /*0x9a90c3*/
    {
      g_NiD3DConstantMap_MappedInt4[0] = *(_DWORD *)(a2 + 0xC); /*0x9a90cd*/
      g_NiD3DConstantMap_MappedInt4[1] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a90d2*/
      g_NiD3DConstantMap_MappedInt4[2] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a90d7*/
      g_NiD3DConstantMap_MappedInt4[3] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a90dc*/
      return (float *)g_NiD3DConstantMap_MappedInt4; /*0x9a90e7*/
    }
    v6 = a1[5]; /*0x9a90f1*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a90f4*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a90f6*/
    if ( g_D3DXParameterClassDispatch[(unsigned __int8)v6] == 4 ) /*0x9a9109*/
    {
      g_NiD3DConstantMap_MappedFloat4[0] = *(float *)(a2 + 0xC); /*0x9a9113*/
      g_NiD3DConstantMap_MappedFloat4[1] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a9125*/
      g_NiD3DConstantMap_MappedFloat4[2] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a912b*/
      g_NiD3DConstantMap_MappedFloat4[3] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a9131*/
      return g_NiD3DConstantMap_MappedFloat4; /*0x9a9137*/
    }
    if ( sub_783340(a1) ) /*0x9a913c*/
    {
      v7 = *(float **)(a2 + 0x10); /*0x9a9149*/
      g_NiD3DConstantMap_MappedFloat4[0] = *v7; /*0x9a914f*/
      g_NiD3DConstantMap_MappedFloat4[1] = v7[1]; /*0x9a9159*/
      g_NiD3DConstantMap_MappedFloat4[2] = *v7; /*0x9a9161*/
      g_NiD3DConstantMap_MappedFloat4[3] = v7[1]; /*0x9a916f*/
      return g_NiD3DConstantMap_MappedFloat4; /*0x9a9175*/
    }
    if ( sub_783370(a1) ) /*0x9a917a*/
    {
      v8 = *(float **)(a2 + 0x10); /*0x9a9187*/
      g_NiD3DConstantMap_MappedFloat4[0] = *v8; /*0x9a918d*/
      g_NiD3DConstantMap_MappedFloat4[1] = v8[1]; /*0x9a9197*/
      g_NiD3DConstantMap_MappedFloat4[2] = v8[2]; /*0x9a91a5*/
      g_NiD3DConstantMap_MappedFloat4[3] = 1.0; /*0x9a91ad*/
      return g_NiD3DConstantMap_MappedFloat4; /*0x9a91b3*/
    }
    if ( sub_7833A0(a1) ) /*0x9a91b8*/
    {
      v9 = *(float **)(a2 + 0x10); /*0x9a91c5*/
      g_NiD3DConstantMap_MappedFloat4[0] = *v9; /*0x9a91cb*/
      g_NiD3DConstantMap_MappedFloat4[1] = v9[1]; /*0x9a91d5*/
      g_NiD3DConstantMap_MappedFloat4[2] = v9[2]; /*0x9a91de*/
      g_NiD3DConstantMap_MappedFloat4[3] = v9[3]; /*0x9a91ec*/
      return g_NiD3DConstantMap_MappedFloat4; /*0x9a91f2*/
    }
    if ( sub_782DE0(a1) ) /*0x9a91f7*/
    {
      v10 = *(float **)(a2 + 0x10); /*0x9a9204*/
      g_NiD3DConstantMap_MappedMatrix[0] = *v10; /*0x9a920a*/
      g_NiD3DConstantMap_MappedMatrix[1] = v10[1]; /*0x9a9214*/
      g_NiD3DConstantMap_MappedMatrix[2] = v10[2]; /*0x9a921d*/
      g_NiD3DConstantMap_MappedMatrix[3] = 0.0; /*0x9a9225*/
      g_NiD3DConstantMap_MappedMatrix[4] = v10[3]; /*0x9a922e*/
      g_NiD3DConstantMap_MappedMatrix[5] = v10[4]; /*0x9a9237*/
      g_NiD3DConstantMap_MappedMatrix[6] = v10[5]; /*0x9a9240*/
      g_NiD3DConstantMap_MappedMatrix[7] = 0.0; /*0x9a9246*/
      g_NiD3DConstantMap_MappedMatrix[8] = v10[6]; /*0x9a924f*/
      g_NiD3DConstantMap_MappedMatrix[9] = v10[7]; /*0x9a9258*/
      g_NiD3DConstantMap_MappedMatrix[0xA] = v10[8]; /*0x9a9266*/
      g_NiD3DConstantMap_MappedMatrix[0xB] = 0.0; /*0x9a926c*/
      return g_NiD3DConstantMap_MappedMatrix; /*0x9a9272*/
    }
    if ( sub_782E10(a1) ) /*0x9a9277*/
      return *(float **)(a2 + 0x10); /*0x9a9289*/
    if ( sub_7833D0(a1) ) /*0x9a928e*/
    {
      g_NiD3DConstantMap_MappedFloat4[0] = *(float *)(a2 + 0xC); /*0x9a929f*/
      g_NiD3DConstantMap_MappedFloat4[1] = *(float *)(a2 + 0x10); /*0x9a92a9*/
      g_NiD3DConstantMap_MappedFloat4[2] = *(float *)(a2 + 0x14); /*0x9a92b2*/
      g_NiD3DConstantMap_MappedFloat4[3] = *(float *)(a2 + 0x18); /*0x9a92c0*/
      return g_NiD3DConstantMap_MappedFloat4; /*0x9a92c6*/
    }
    sub_9A32B0(a1); /*0x9a92cb*/
  }
  return 0; /*0x9a906f*/
}
