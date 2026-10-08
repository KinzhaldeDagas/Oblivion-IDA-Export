unsigned int __stdcall NiD3DVertexConstantMap_ApplyMappedConstant(
        NiD3DVertexShader *program,
        const NiD3DShaderConstantMapEntry *entry,
        unsigned int passIndex)
{
  const void *v3; // eax

  v3 = NiD3DShaderConstantMap_ConvertMappedValue(entry); /*0x9a4ac6*/
  if ( v3 )
    return (*(unsigned __int8 (__thiscall **)(NiD3DVertexShader *, const NiD3DShaderConstantMapEntry *, const void *, _DWORD))(*(_DWORD *)program + 0x28))(
             program,
             entry,
             v3,
             0) != 0
         ? 0
         : 0x80000050;
  else
    return 1; /*0x9a4acf*/
}
