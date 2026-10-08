//
// DX11 material consumption audit 2026-10-01: current register values must be sampled AFTER all map applications for each native occurrence, not from the final bucket state or earlier captured shader words. 77A1F0 orders pass maps before shader maps; repeated payload occurrences can have different effective inherited/overwritten constants. Numeric setters change only their supplied spans, so a complete current device baseline plus a fully resolved ordered stream legitimately retains untouched registers. Shader-read packing is a renderer-side operation and is not native writer coverage.
BOOL __thiscall NiD3DShaderConstantMap_SetShaderConstants(
        NiD3DShaderConstantMap *this,
        NiD3DShaderProgram *shaderProgram,
        NiObjectNET *geometry,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  unsigned int v14; // eax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // ecx
  unsigned int i; // [esp+2Ch] [ebp-8h]
  NiExtraData *ExtraData; // [esp+30h] [ebp-4h]
  char shaderPrograma; // [esp+38h] [ebp+4h]
  UINT a11a; // [esp+5Ch] [ebp+28h]

  this->LastShaderProgram = shaderProgram; /*0x9a8e3f*/
  shaderPrograma = 1; /*0x9a8e48*/
  ExtraData = NiObjectNET_GetExtraData(geometry, off_B29F84); /*0x9a8e52*/
  v14 = 0; /*0x9a8e56*/
  for ( i = 0; i < this->Entries.end; v14 = ++i ) /*0x9a8e58*/
  {
    v16 = *((_DWORD *)&this->Entries.data->_vtbl + v14); /*0x9a8e73*/
    if ( !v16 ) /*0x9a8e78*/
      continue; /*0x9a8e78*/
    if ( !*(_BYTE *)(v16 + 8) ) /*0x9a8e82*/
      return shaderPrograma == 0; /*0x9a8e82*/
    a11a = *(_DWORD *)(v16 + 0x1C); /*0x9a8e8e*/
    if ( a11a == 0xFFFFFFFF && !*(_DWORD *)(v16 + 0x24) ) /*0x9a8e94*/
      continue; /*0x9a8e98*/
    v17 = *(_DWORD *)(v16 + 0x14) & 0xF0000000; /*0x9a8ea1*/
    switch ( v17 ) /*0x9a8ead*/
    {
      case 0x20000000u: /*0x9a8ead*/
        v18 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderProgram *, int, NiObjectNET *, int, int, int, int, int, int, int, int))this->_vtbl->sub_9A3310)( /*0x9a8eb4*/
                this,
                shaderProgram,
                v16,
                geometry,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11);
        break;
      case 0x10000000u: /*0x9a8ead*/
        v19 = *(_DWORD *)(v16 + 0x18); /*0x9a8ec5*/
        if ( v19 == 1 ) /*0x9a8ecb*/
        {
          v18 = (int)this->Device->lpVtbl->SetVertexShaderConstantF( /*0x9a8ef7*/
                       this->Device,
                       a11a,
                       *(_DWORD *)(v16 + 0x30),
                       *(_DWORD *)(v16 + 0x20)) < 0;
        }
        else if ( v19 == 2 ) /*0x9a8f01*/
        {
          v18 = (int)this->Device->lpVtbl->SetPixelShaderConstantF( /*0x9a8f2d*/
                       this->Device,
                       a11a,
                       *(_DWORD *)(v16 + 0x30),
                       *(_DWORD *)(v16 + 0x20)) < 0;
        }
        else
        {
          v18 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderProgram *, int, int))this->_vtbl->sub_9A27A0)( /*0x9a8f3e*/
                  this,
                  shaderProgram,
                  v16,
                  a11);
        }
        break;
      case 0x30000000u: /*0x9a8ead*/
        v18 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderProgram *, int, NiObjectNET *, int, int, int, int, int, int, int, int, int, NiExtraData *))this->_vtbl->sub_9A35A0)( /*0x9a8f85*/
                this,
                shaderProgram,
                v16,
                geometry,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11,
                a12,
                ExtraData);
        break;
      case 0x40000000u: /*0x9a8ead*/
        v18 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderProgram *, int, int))this->_vtbl->sub_9A3730)( /*0x9a8f9e*/
                this,
                shaderProgram,
                v16,
                a11);
        break;
      case 0x50000000u: /*0x9a8ead*/
        v18 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderProgram *, int, NiObjectNET *, int, int, int, int, int, int))this->_vtbl->sub_9A4370)( /*0x9a8fce*/
                this,
                shaderProgram,
                v16,
                geometry,
                a4,
                a7,
                a8,
                a9,
                a10,
                a11);
        break;
      case 0x60000000u: /*0x9a8ead*/
        v18 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderProgram *, int, NiObjectNET *, int, int, int, int, int, int, int, int))this->_vtbl->sub_9A3970)( /*0x9a9008*/
                this,
                shaderProgram,
                v16,
                geometry,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11);
        break;
      default:
        goto LABEL_23; /*0x9a8fd8*/
    }
    if ( v18 ) /*0x9a900c*/
LABEL_23:
      shaderPrograma = 0; /*0x9a900e*/
  }
  return shaderPrograma == 0; /*0x9a9032*/
}
