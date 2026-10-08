// Verified pixel counterpart to9A61E0: cursor+18 and entry array+20, same key register | (passIndex<<16), program setter vtable+30. Numeric mapped kind10000000 and supported automatic matrix cases do not enter this attribute-cache path; their wrapper reset leaves both cursors at zero.
int __stdcall NiD3DSCM_Pixel_SetAttributeConstant(
        NiD3DShaderProgram *shaderProgram,
        NiD3DShaderConstantMapEntry *entry,
        NiObjectNET *geometry,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int passIndex,
        int a12,
        NiSCMExtraData *cache)
{
  unsigned int pixelCursor; // edi
  NiSCMConstantEntry *v15; // eax
  NiExtraData *extraData; // eax
  void *v17; // edi
  UInt32 Flags; // ebx
  UInt32 v19; // ebx

  if ( !geometry ) /*0x9a35a8*/
    return 1; /*0x9a35b0*/
  if ( cache /*0x9a35fb*/
    && (pixelCursor = cache->pixelCursor,
        v15 = &cache->pixelEntries[pixelCursor],
        v15->constantAndPass == (entry->ShaderRegister | (passIndex << 0x10)))
    && (extraData = v15->extraData, cache->pixelCursor = pixelCursor + 1, extraData)
    || (extraData = NiObjectNET_GetExtraData(geometry, entry->Key)) != 0 )
  {
    v17 = sub_9A9040(entry, (int)extraData); /*0x9a361f*/
    if ( !v17 ) /*0x9a3623*/
      return 0x80000040; /*0x9a362d*/
  }
  else
  {
    v17 = (void *)NiD3DShaderConstantMap_ConvertMappedValue(entry); /*0x9a3605*/
    if ( !v17 ) /*0x9a3609*/
      return 0x80000010; /*0x9a3613*/
  }
  Flags = entry->Flags; /*0x9a3637*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a363a*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a363c*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)Flags] == 9 ) /*0x9a364f*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(NiD3DShaderProgram *, NiD3DShaderConstantMapEntry *, void *, int))(*(_DWORD *)shaderProgram + 0x30))( /*0x9a365e*/
            shaderProgram,
            entry,
            v17,
            4) )
      return 0x80000050; /*0x9a3670*/
    return 0; /*0x9a3662*/
  }
  v19 = entry->Flags; /*0x9a367a*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a367d*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a367f*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v19] != 6 /*0x9a36cd*/
    && !sub_7833A0(entry)
    && !sub_783340(entry)
    && !sub_783310(entry)
    && !sub_7833D0(entry)
    && !sub_7832E0(entry)
    && !sub_7832B0(entry) )
  {
    if ( sub_782DE0(entry) ) /*0x9a36d8*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(NiD3DShaderProgram *, NiD3DShaderConstantMapEntry *, void *, int))(*(_DWORD *)shaderProgram + 0x30))( /*0x9a36ee*/
              shaderProgram,
              entry,
              v17,
              3) )
        return 0x80000050; /*0x9a36fc*/
    }
    else
    {
      sub_9A32B0(entry); /*0x9a3701*/
    }
    return 0; /*0x9a36f2*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(NiD3DShaderProgram *, NiD3DShaderConstantMapEntry *, void *, _DWORD))(*(_DWORD *)shaderProgram + 0x30))( /*0x9a371b*/
         shaderProgram,
         entry,
         v17,
         0) )
  {
    return 0; /*0x9a370b*/
  }
  return 0x80000050; /*0x9a35af*/
}
