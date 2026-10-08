// DX11 mapped-float provenance (2026-09-28):9A92E0 does NOT always return entry+30 directly. size(+28)/stride(+2C) counts1/2/3 broadcast or fill a scratch float4;8/9/12 expand matrices into scratch. Counts4 and16 pass the pointer through. Other counts pass through only when stride==4 and component count is divisible by4. A source-address provenance resolver must reject/bypass scratch-expansion cases rather than treating every mapped source as a direct float4 array.
// DX11 mapped-value implementation 2026-10-01: component count is unsigned DataSize(+28)/DataStride(+2C), using integer quotient. Class1 scalar zero-extends one source byte into a DWORD BOOL; class3 scalar/pair/triple copies integer words and uses integer1 for triple W. Other scalar/pair/triple paths expand floats with W=1.0 for triples. Matrix8/9/12 paths use float loads regardless of class, fill a 16-float scratch result and zero the remaining row/components (not an identity row). Counts4/16 and fallback stride4/divisible-by4 return the original source pointer without float load/store conversion. A port must distinguish those raw bits from x87-expanded signaling NaNs, which are quieted. Counts exceeding the scratch span can expose prior shared scratch values and are not qualified by current-source bytes alone. Source addresses remain borrowed mutable provenance; freshness/ownership must be established separately per current writer.
const void *__stdcall NiD3DShaderConstantMap_ConvertMappedValue(const NiD3DShaderConstantMapEntry *entry)
{
  UInt32 Flags; // edi
  UInt32 v2; // ebx
  int v3; // edi
  const void *result; // eax
  int *DataSource; // esi
  int *v6; // esi
  float *v7; // esi
  double v8; // st7
  float *v9; // esi
  float *v10; // esi

  Flags = entry->Flags; /*0x9a92f6*/
  v2 = entry->DataSize / entry->DataStride; /*0x9a92f9*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a92fb*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a92fd*/
  v3 = g_D3DXParameterClassDispatch[(unsigned __int8)Flags]; /*0x9a9308*/
  switch ( v2 ) /*0x9a9322*/
  {
    case 1u: /*0x9a9322*/
      if ( v3 == 1 ) /*0x9a932c*/
      {
        g_NiD3DConstantMap_MappedBool = *(unsigned __int8 *)entry->DataSource; /*0x9a9336*/
        return &g_NiD3DConstantMap_MappedBool; /*0x9a933c*/
      }
      else if ( v3 == 3 ) /*0x9a9348*/
      {
        g_NiD3DConstantMap_MappedInt4[0] = *(_DWORD *)entry->DataSource; /*0x9a9351*/
        g_NiD3DConstantMap_MappedInt4[1] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a9356*/
        g_NiD3DConstantMap_MappedInt4[2] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a935b*/
        g_NiD3DConstantMap_MappedInt4[3] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a9360*/
        return g_NiD3DConstantMap_MappedInt4; /*0x9a9365*/
      }
      else
      {
        g_NiD3DConstantMap_MappedFloat4[0] = *(float *)entry->DataSource; /*0x9a9374*/
        g_NiD3DConstantMap_MappedFloat4[1] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a9386*/
        g_NiD3DConstantMap_MappedFloat4[2] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a938d*/
        g_NiD3DConstantMap_MappedFloat4[3] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a9393*/
        return g_NiD3DConstantMap_MappedFloat4; /*0x9a9381*/
      }
    case 2u: /*0x9a9322*/
      DataSource = (int *)entry->DataSource; /*0x9a939f*/
      if ( v3 == 3 ) /*0x9a93a2*/
      {
        g_NiD3DConstantMap_MappedInt4[0] = *DataSource; /*0x9a93a6*/
        g_NiD3DConstantMap_MappedInt4[1] = DataSource[1]; /*0x9a93af*/
        g_NiD3DConstantMap_MappedInt4[3] = g_NiD3DConstantMap_MappedInt4[1]; /*0x9a93b5*/
        g_NiD3DConstantMap_MappedInt4[2] = g_NiD3DConstantMap_MappedInt4[0]; /*0x9a93bc*/
        return g_NiD3DConstantMap_MappedInt4; /*0x9a93c1*/
      }
      else
      {
        g_NiD3DConstantMap_MappedFloat4[0] = *(float *)DataSource; /*0x9a93cd*/
        g_NiD3DConstantMap_MappedFloat4[1] = *((float *)DataSource + 1); /*0x9a93dc*/
        g_NiD3DConstantMap_MappedFloat4[2] = g_NiD3DConstantMap_MappedFloat4[0]; /*0x9a93e9*/
        g_NiD3DConstantMap_MappedFloat4[3] = g_NiD3DConstantMap_MappedFloat4[1]; /*0x9a93f5*/
        return g_NiD3DConstantMap_MappedFloat4; /*0x9a93d3*/
      }
    case 3u: /*0x9a9322*/
      v6 = (int *)entry->DataSource; /*0x9a9401*/
      if ( v3 == 3 ) /*0x9a9404*/
      {
        g_NiD3DConstantMap_MappedInt4[0] = *v6; /*0x9a9408*/
        g_NiD3DConstantMap_MappedInt4[1] = v6[1]; /*0x9a9411*/
        g_NiD3DConstantMap_MappedInt4[2] = v6[2]; /*0x9a941b*/
        g_NiD3DConstantMap_MappedInt4[3] = 1; /*0x9a9421*/
        return g_NiD3DConstantMap_MappedInt4; /*0x9a942b*/
      }
      else
      {
        g_NiD3DConstantMap_MappedFloat4[0] = *(float *)v6; /*0x9a9437*/
        g_NiD3DConstantMap_MappedFloat4[1] = *((float *)v6 + 1); /*0x9a9445*/
        g_NiD3DConstantMap_MappedFloat4[2] = *((float *)v6 + 2); /*0x9a944f*/
        g_NiD3DConstantMap_MappedFloat4[3] = 1.0; /*0x9a9458*/
        return g_NiD3DConstantMap_MappedFloat4; /*0x9a943d*/
      }
    case 4u: /*0x9a9322*/
    case 0x10u: /*0x9a9322*/
      goto LABEL_15;
    case 8u: /*0x9a9322*/
      v7 = (float *)entry->DataSource; /*0x9a946a*/
      g_NiD3DConstantMap_MappedMatrix[0] = *v7; /*0x9a946f*/
      g_NiD3DConstantMap_MappedMatrix[1] = v7[1]; /*0x9a9478*/
      g_NiD3DConstantMap_MappedMatrix[2] = v7[2]; /*0x9a9481*/
      g_NiD3DConstantMap_MappedMatrix[3] = v7[3]; /*0x9a948a*/
      g_NiD3DConstantMap_MappedMatrix[4] = v7[4]; /*0x9a9493*/
      g_NiD3DConstantMap_MappedMatrix[5] = v7[5]; /*0x9a949c*/
      g_NiD3DConstantMap_MappedMatrix[6] = v7[6]; /*0x9a94a5*/
      g_NiD3DConstantMap_MappedMatrix[7] = v7[7]; /*0x9a94ae*/
      v8 = 0.0; /*0x9a94b4*/
      g_NiD3DConstantMap_MappedMatrix[8] = 0.0; /*0x9a94b6*/
      g_NiD3DConstantMap_MappedMatrix[9] = 0.0; /*0x9a94bc*/
      g_NiD3DConstantMap_MappedMatrix[0xA] = 0.0; /*0x9a94c2*/
      goto LABEL_17; /*0x9a94c2*/
    case 9u: /*0x9a9322*/
      v9 = (float *)entry->DataSource; /*0x9a94f1*/
      g_NiD3DConstantMap_MappedMatrix[0] = *v9; /*0x9a94f6*/
      g_NiD3DConstantMap_MappedMatrix[1] = v9[1]; /*0x9a94ff*/
      g_NiD3DConstantMap_MappedMatrix[2] = v9[2]; /*0x9a9508*/
      v8 = 0.0; /*0x9a950e*/
      g_NiD3DConstantMap_MappedMatrix[3] = 0.0; /*0x9a9510*/
      g_NiD3DConstantMap_MappedMatrix[4] = v9[3]; /*0x9a9519*/
      g_NiD3DConstantMap_MappedMatrix[5] = v9[4]; /*0x9a9522*/
      g_NiD3DConstantMap_MappedMatrix[6] = v9[5]; /*0x9a952b*/
      g_NiD3DConstantMap_MappedMatrix[7] = 0.0; /*0x9a9531*/
      g_NiD3DConstantMap_MappedMatrix[8] = v9[6]; /*0x9a953a*/
      g_NiD3DConstantMap_MappedMatrix[9] = v9[7]; /*0x9a9543*/
      g_NiD3DConstantMap_MappedMatrix[0xA] = v9[8]; /*0x9a954c*/
LABEL_17:
      g_NiD3DConstantMap_MappedMatrix[0xB] = v8; /*0x9a94c8*/
      goto LABEL_18; /*0x9a94c8*/
    case 0xCu: /*0x9a9322*/
      v10 = (float *)entry->DataSource; /*0x9a9557*/
      g_NiD3DConstantMap_MappedMatrix[0] = *v10; /*0x9a955c*/
      g_NiD3DConstantMap_MappedMatrix[1] = v10[1]; /*0x9a9565*/
      g_NiD3DConstantMap_MappedMatrix[2] = v10[2]; /*0x9a956e*/
      g_NiD3DConstantMap_MappedMatrix[3] = v10[3]; /*0x9a9577*/
      g_NiD3DConstantMap_MappedMatrix[4] = v10[4]; /*0x9a9580*/
      g_NiD3DConstantMap_MappedMatrix[5] = v10[5]; /*0x9a9589*/
      g_NiD3DConstantMap_MappedMatrix[6] = v10[6]; /*0x9a9592*/
      g_NiD3DConstantMap_MappedMatrix[7] = v10[7]; /*0x9a959b*/
      g_NiD3DConstantMap_MappedMatrix[8] = v10[8]; /*0x9a95a4*/
      g_NiD3DConstantMap_MappedMatrix[9] = v10[9]; /*0x9a95ad*/
      g_NiD3DConstantMap_MappedMatrix[0xA] = v10[0xA]; /*0x9a95b6*/
      g_NiD3DConstantMap_MappedMatrix[0xB] = v10[0xB]; /*0x9a95bf*/
      v8 = 0.0; /*0x9a95c5*/
LABEL_18:
      g_NiD3DConstantMap_MappedMatrix[0xC] = v8; /*0x9a94ce*/
      g_NiD3DConstantMap_MappedMatrix[0xD] = v8; /*0x9a94d5*/
      g_NiD3DConstantMap_MappedMatrix[0xE] = v8; /*0x9a94dc*/
      g_NiD3DConstantMap_MappedMatrix[0xF] = v8; /*0x9a94e7*/
      result = g_NiD3DConstantMap_MappedMatrix; /*0x9a94e2*/
      break; /*0x9a94ee*/
    default:
      if ( entry->DataStride == 4 && (v2 & 3) == 0 ) /*0x9a95d5*/
LABEL_15:
        result = entry->DataSource; /*0x9a9461*/
      else
        result = 0; /*0x9a95dd*/
      break; /*0x9a95dd*/
  }
  return result; /*0x9a9334*/
}
