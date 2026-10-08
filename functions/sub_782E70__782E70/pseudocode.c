// DirectX10OBSE authority: Oblivion NiD3DPixelShader constant setter. Dispatches typed constant entries to D3D SetPixelShaderConstantB/I/F via vtable +0x1C4/+0x1BC/+0x1B4; bridge hooks setters and now seeds active native PS constants after create/reset.
// DX11 final-bank audit 2026-10-01: numeric setters affect full device register banks independently of shader read/packing metadata. Dispatch type table B428D8[DWORD(entry+14h)&FFh] value1 selects BOOL, value3 int4, otherwise float4. Non-null source override wins over entry+30. Nonzero count override wins over entry+20, which otherwise defaults to1. Keep exact bank, register span and write order; do not drop an unconsumed register or reinterpret an int/BOOL writer as absent. Logical handoff now supports all six banks, but complete current producer coverage remains required before omitting native setup.
bool __thiscall NiD3DPixelShader_SetNumericConstant(
        NiD3DPixelShader *self,
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

  DataSource = (void *)sourceOverride; /*0x782e71*/
  if ( !sourceOverride ) /*0x782e80*/
    DataSource = entry->DataSource; /*0x782e82*/
  RegisterCount = countOverride; /*0x782e85*/
  if ( !countOverride ) /*0x782e8b*/
  {
    RegisterCount = entry->RegisterCount; /*0x782e8d*/
    if ( !RegisterCount ) /*0x782e92*/
      RegisterCount = 1; /*0x782e94*/
  }
  Flags = entry->Flags; /*0x782ea0*/
  sourceOverridea = Flags; /*0x782ea3*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x782e99*/
  {
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x782ea9*/
    LOBYTE(Flags) = sourceOverridea; /*0x782eae*/
  }
  v8 = *((_DWORD *)self + 9); /*0x782eb5*/
  v9 = *(_DWORD *)(4 * (unsigned __int8)Flags + 0xB428D8); /*0x782ebd*/
  ShaderRegister = entry->ShaderRegister; /*0x782ec9*/
  if ( v9 == 1 ) /*0x782eca*/
    return (*(int (__stdcall **)(_DWORD, UInt32, void *, unsigned int))(**(_DWORD **)(v8 + 0xFF8) + 0x1C4))( /*0x782ee7*/
             *(_DWORD *)(v8 + 0xFF8),
             ShaderRegister,
             DataSource,
             RegisterCount) >= 0;
  v11 = **(_DWORD **)(v8 + 0xFF8); /*0x782ef6*/
  v12 = *(_DWORD *)(v8 + 0xFF8); /*0x782ef8*/
  if ( v9 == 3 ) /*0x782ef9*/
    return (*(int (__stdcall **)(int, UInt32, void *, unsigned int))(v11 + 0x1BC))( /*0x782f0d*/
             v12,
             ShaderRegister,
             DataSource,
             RegisterCount) >= 0;
  else
    return (*(int (__stdcall **)(int, UInt32, void *, unsigned int))(v11 + 0x1B4))( /*0x782f25*/
             v12,
             ShaderRegister,
             DataSource,
             RegisterCount) >= 0;
}
