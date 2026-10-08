//
// DX11 GPU-world 2026-10-01: automatic matrix handler9A56D0 passes countOverride0, so this setter uses entry RegisterCount, defaulting zero to1. Source float matrix bits are copied unchanged to the class-selected float/int/BOOL bank; target field does not override stage here. Full map-state replacement must include shader-unread writes and apply map entries in native occurrence order.
// DX11 bridge packing note 2026-10-01: the game numeric BOOL API uses scalar register counts. The DX11 translated-shader layout groups four consecutive raw BOOL slots into one uint4; this is the project transport format, not a newly inferred Oblivion native structure. Preserve raw scalar bits and lane order when packing, and keep current integer registers separate from float banks.
bool __thiscall NiD3DVertexShader_SetNumericConstant(
        NiD3DVertexShader *self,
        const NiD3DShaderConstantMapEntry *entry,
        const void *sourceOverride,
        unsigned int countOverride)
{
  void *DataSource; // ebx
  unsigned int RegisterCount; // esi
  UInt32 Flags; // eax
  int v8; // ebp
  int v9; // eax
  int v11; // edx
  int v12; // [esp-10h] [ebp-20h]
  UInt32 ShaderRegister; // [esp-Ch] [ebp-1Ch]
  char sourceOverridea; // [esp+18h] [ebp+8h]

  DataSource = (void *)sourceOverride; /*0x7830c1*/
  if ( !sourceOverride ) /*0x7830d0*/
    DataSource = entry->DataSource; /*0x7830d2*/
  RegisterCount = countOverride; /*0x7830d5*/
  if ( !countOverride ) /*0x7830db*/
  {
    RegisterCount = entry->RegisterCount; /*0x7830dd*/
    if ( !RegisterCount ) /*0x7830e2*/
      RegisterCount = 1; /*0x7830e4*/
  }
  Flags = entry->Flags; /*0x7830f0*/
  sourceOverridea = Flags; /*0x7830f3*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x7830e9*/
  {
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x7830f9*/
    LOBYTE(Flags) = sourceOverridea; /*0x7830fe*/
  }
  v8 = *((_DWORD *)self + 9); /*0x783105*/
  v9 = *(_DWORD *)(4 * (unsigned __int8)Flags + 0xB428D8); /*0x78310d*/
  ShaderRegister = entry->ShaderRegister; /*0x783119*/
  if ( v9 == 1 ) /*0x78311a*/
    return (*(int (__stdcall **)(_DWORD, UInt32, void *, unsigned int))(**(_DWORD **)(v8 + 0xFF8) + 0x188))( /*0x783137*/
             *(_DWORD *)(v8 + 0xFF8),
             ShaderRegister,
             DataSource,
             RegisterCount) >= 0;
  v11 = **(_DWORD **)(v8 + 0xFF8); /*0x783146*/
  v12 = *(_DWORD *)(v8 + 0xFF8); /*0x783148*/
  if ( v9 == 3 ) /*0x783149*/
    return (*(int (__stdcall **)(int, UInt32, void *, unsigned int))(v11 + 0x180))( /*0x78315d*/
             v12,
             ShaderRegister,
             DataSource,
             RegisterCount) >= 0;
  else
    return (*(int (__stdcall **)(int, UInt32, void *, unsigned int))(v11 + 0x178))( /*0x783175*/
             v12,
             ShaderRegister,
             DataSource,
             RegisterCount) >= 0;
}
