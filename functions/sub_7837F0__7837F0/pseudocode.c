// Oblivion-authoritative: vertex analogue of the scalar HLSL constant path; resolves the constant-table handle and dispatches to bool/float/int vertex-register setters, transposing matrices when required.
bool __thiscall sub_7837F0(int this, _DWORD *a2, int a3, int a4)
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

  if ( *(_DWORD *)(this + 0x40) && *(_DWORD *)(this + 0x1C) ) /*0x78380b*/
  {
    if ( !a3 ) /*0x78381c*/
      a3 = a2[0xC]; /*0x783821*/
    v5 = a2[9]; /*0x783824*/
    if ( !v5 ) /*0x783829*/
      v5 = a2[3]; /*0x78382b*/
    v6 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0x40) + 0x24))( /*0x78383a*/
           *(_DWORD *)(this + 0x40),
           0,
           v5);
    if ( v6 ) /*0x78383e*/
    {
      v7 = *(_DWORD *)(this + 0x40); /*0x783844*/
      v12 = 1; /*0x783851*/
      v8 = (*(int (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v7 + 0x18))(v7, v6, v13, &v12); /*0x783860*/
      v9 = a2[5]; /*0x783869*/
      v11 = v8; /*0x78386c*/
      if ( !g_D3DXParameterDispatchInitialized ) /*0x783862*/
        NiD3DHLSLShader__InitializeParameterClassTables(); /*0x783872*/
      if ( *(_DWORD *)(4 * (unsigned __int8)v9 + 0xB428D8) == 8 || sub_782E10(a2) ) /*0x78388d*/
      {
        D3DXMatrixTranspose_0((int)v16, a3); /*0x783951*/
        if ( (*(int (__stdcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(*(_DWORD *)(this + 0x24) + 0xFF8) + 0x178))( /*0x78397b*/
               *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0xFF8),
               v14,
               v16,
               v15) >= 0 )
LABEL_26:
          v11 = 0; /*0x78397d*/
        return v11 >= 0; /*0x783994*/
      }
      if ( sub_783340(a2) || sub_783370(a2) || sub_7833A0(a2) || sub_7833D0(a2) || sub_783310(a2) ) /*0x7838c8*/
      {
        if ( NiDX9RenderState__SetVertexShaderConstantF(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) ) /*0x7838e4*/
          goto LABEL_26; /*0x7838eb*/
        return v11 >= 0; /*0x7838eb*/
      }
      if ( sub_7832E0(a2) ) /*0x7838f8*/
      {
        if ( NiDX9RenderState__SetVertexShaderConstantI(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) ) /*0x783914*/
          goto LABEL_26; /*0x78391b*/
        return v11 >= 0; /*0x78391b*/
      }
      if ( sub_7832B0(a2) ) /*0x783921*/
      {
        if ( NiDX9RenderState__SetVertexShaderConstantB(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) ) /*0x78393d*/
          goto LABEL_26; /*0x783944*/
        return v11 >= 0; /*0x783944*/
      }
    }
    else
    {
      Shared_NoOpVirtual_60D0A0(*(void **)(this + 8)); /*0x7839a1*/
    }
  }
  return 0; /*0x78398e*/
}
