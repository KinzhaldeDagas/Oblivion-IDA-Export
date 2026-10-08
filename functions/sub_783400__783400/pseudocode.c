// Oblivion-authoritative: resolves an HLSL pixel constant-table handle from the shader constant-map entry, inspects the D3DX descriptor, and uploads scalar bool/float/int data; matrix values are transposed before upload.
bool __thiscall sub_783400(int this, _DWORD *a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+34h] [ebp-78h]
  int v12; // [esp+38h] [ebp-74h] BYREF
  _BYTE v13[8]; // [esp+3Ch] [ebp-70h] BYREF
  int v14; // [esp+44h] [ebp-68h]
  int v15; // [esp+48h] [ebp-64h]
  _BYTE v16[64]; // [esp+6Ch] [ebp-40h] BYREF

  if ( *(_DWORD *)(this + 0x34) && *(_DWORD *)(this + 0x1C) ) /*0x78341b*/
  {
    if ( !a3 ) /*0x78342c*/
      a3 = a2[0xC]; /*0x783431*/
    v5 = a2[9]; /*0x783434*/
    if ( !v5 ) /*0x783439*/
      v5 = a2[3]; /*0x78343b*/
    v6 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0x34) + 0x24))( /*0x78344a*/
           *(_DWORD *)(this + 0x34),
           0,
           v5);
    if ( v6 ) /*0x78344e*/
    {
      v7 = *(_DWORD *)(this + 0x34); /*0x783454*/
      v12 = 1; /*0x783461*/
      v8 = (*(int (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v7 + 0x18))(v7, v6, v13, &v12); /*0x783470*/
      v9 = a2[5]; /*0x783479*/
      v11 = v8; /*0x78347c*/
      if ( !g_D3DXParameterDispatchInitialized ) /*0x783472*/
        NiD3DHLSLShader__InitializeParameterClassTables(); /*0x783482*/
      if ( *(_DWORD *)(4 * (unsigned __int8)v9 + 0xB428D8) == 8 || sub_782E10(a2) ) /*0x78349d*/
      {
        D3DXMatrixTranspose_0((int)v16, a3); /*0x783561*/
        if ( (*(int (__stdcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(*(_DWORD *)(this + 0x24) + 0xFF8) + 0x1B4))( /*0x78358b*/
               *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0xFF8),
               v14,
               v16,
               v15) >= 0 )
LABEL_26:
          v11 = 0; /*0x78358d*/
        return v11 >= 0; /*0x7835a4*/
      }
      if ( sub_783340(a2) || sub_783370(a2) || sub_7833A0(a2) || sub_7833D0(a2) || sub_783310(a2) ) /*0x7834d8*/
      {
        if ( NiDX9RenderState__SetPixelShaderConstantF(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) ) /*0x7834f4*/
          goto LABEL_26; /*0x7834fb*/
        return v11 >= 0; /*0x7834fb*/
      }
      if ( sub_7832E0(a2) ) /*0x783508*/
      {
        if ( NiDX9RenderState__SetPixelShaderConstantI(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) ) /*0x783524*/
          goto LABEL_26; /*0x78352b*/
        return v11 >= 0; /*0x78352b*/
      }
      if ( sub_7832B0(a2) ) /*0x783531*/
      {
        if ( NiDX9RenderState__SetPixelShaderConstantB(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) ) /*0x78354d*/
          goto LABEL_26; /*0x783554*/
        return v11 >= 0; /*0x783554*/
      }
    }
    else
    {
      Shared_NoOpVirtual_60D0A0(*(void **)(this + 8)); /*0x7835b1*/
    }
  }
  return 0; /*0x78359e*/
}
