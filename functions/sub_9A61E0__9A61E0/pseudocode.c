// Verified NiD3DSCM_Vertex attribute constant path: when supplied an SCM object, cursor+14 indexes 8-byte entries at+1C. A cache hit compares the key against entry numeric register | (passIndex<<16), reads the NiExtraData pointer, and increments the cursor. Otherwise falls back to GetExtraData by the constant entry name. This is a cursor over a prebuilt attribute lookup cache, not an appended draw record.
int __stdcall NiD3DSCM_Vertex_SetAttributeConstant(
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
  unsigned int vertexCursor; // edi
  NiSCMConstantEntry *v15; // eax
  NiExtraData *extraData; // eax
  void *v17; // edi
  UInt32 Flags; // ebx
  UInt32 v19; // ebx

  if ( !geometry ) /*0x9a61e8*/
    return 1; /*0x9a61f0*/
  if ( cache /*0x9a623b*/
    && (vertexCursor = cache->vertexCursor,
        v15 = &cache->vertexEntries[vertexCursor],
        v15->constantAndPass == (entry->ShaderRegister | (passIndex << 0x10)))
    && (extraData = v15->extraData, cache->vertexCursor = vertexCursor + 1, extraData)
    || (extraData = NiObjectNET_GetExtraData(geometry, entry->Key)) != 0 )
  {
    v17 = sub_9A9040(entry, (int)extraData); /*0x9a625f*/
    if ( !v17 ) /*0x9a6263*/
      return 0x80000040; /*0x9a626d*/
  }
  else
  {
    v17 = (void *)NiD3DShaderConstantMap_ConvertMappedValue(entry); /*0x9a6245*/
    if ( !v17 ) /*0x9a6249*/
      return 0x80000010; /*0x9a6253*/
  }
  Flags = entry->Flags; /*0x9a6277*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a627a*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a627c*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)Flags] == 9 ) /*0x9a628f*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(NiD3DShaderProgram *, NiD3DShaderConstantMapEntry *, void *, int))(*(_DWORD *)shaderProgram + 0x28))( /*0x9a629e*/
            shaderProgram,
            entry,
            v17,
            4) )
      return 0x80000050; /*0x9a62b0*/
    return 0; /*0x9a62a2*/
  }
  v19 = entry->Flags; /*0x9a62ba*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a62bd*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a62bf*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v19] != 6 /*0x9a630d*/
    && !sub_7833A0(entry)
    && !sub_783340(entry)
    && !sub_783310(entry)
    && !sub_7833D0(entry)
    && !sub_7832E0(entry)
    && !sub_7832B0(entry) )
  {
    if ( sub_782DE0(entry) ) /*0x9a6318*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(NiD3DShaderProgram *, NiD3DShaderConstantMapEntry *, void *, int))(*(_DWORD *)shaderProgram + 0x28))( /*0x9a632e*/
              shaderProgram,
              entry,
              v17,
              3) )
        return 0x80000050; /*0x9a633c*/
    }
    else
    {
      sub_9A32B0(entry); /*0x9a6341*/
    }
    return 0; /*0x9a6332*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(NiD3DShaderProgram *, NiD3DShaderConstantMapEntry *, void *, _DWORD))(*(_DWORD *)shaderProgram + 0x28))( /*0x9a635b*/
         shaderProgram,
         entry,
         v17,
         0) )
  {
    return 0; /*0x9a634b*/
  }
  return 0x80000050; /*0x9a61ef*/
}
