// Oblivion-authoritative: uploads vertex-shader constant arrays through D3DX handles or indexed array elements. Matrix transpose is selected from the observed D3DX parameter type.
bool __thiscall sub_7839C0(_DWORD *this, _DWORD *a2, int a3, unsigned int a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13; // edi
  unsigned __int16 v14; // bx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v19; // ebx
  char v20; // [esp+39h] [ebp-7Dh]
  int v21; // [esp+3Ah] [ebp-7Ch] BYREF
  int v22; // [esp+3Eh] [ebp-78h]
  int v23; // [esp+42h] [ebp-74h]
  _BYTE v24[8]; // [esp+46h] [ebp-70h] BYREF
  int v25; // [esp+4Eh] [ebp-68h]
  int v26; // [esp+52h] [ebp-64h]
  _BYTE v27[64]; // [esp+76h] [ebp-40h] BYREF

  if ( !*(this + 0x10) ) /*0x7839d0*/
    return 0; /*0x7839d0*/
  if ( !*(this + 7) ) /*0x7839db*/
    return 0; /*0x7839db*/
  v7 = a2[5]; /*0x7839ef*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x7839e5*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x7839f4*/
  if ( *(_DWORD *)(4 * (unsigned __int8)v7 + 0xB428D8) != 8 ) /*0x783a07*/
  {
    v8 = a2[5]; /*0x783a10*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x783a09*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x783a15*/
    if ( *(_DWORD *)(4 * (unsigned __int8)v8 + 0xB428D8) != 9 ) /*0x783a28*/
      return 0; /*0x783a28*/
  }
  if ( !a3 ) /*0x783a32*/
    a3 = a2[0xC]; /*0x783a37*/
  v9 = a2[9]; /*0x783a3a*/
  if ( !v9 ) /*0x783a3f*/
    v9 = a2[3]; /*0x783a41*/
  v10 = a2[4]; /*0x783a44*/
  v20 = 0; /*0x783a4a*/
  if ( v10 == 0x21 || v10 == 0x23 || v10 == 0x22 || v10 == 0x24 ) /*0x783a5e*/
    v20 = 1; /*0x783a60*/
  v11 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x10) + 0x24))(*(this + 0x10), 0, v9); /*0x783a73*/
  v22 = v11; /*0x783a77*/
  if ( !v11 ) /*0x783a7b*/
  {
    Shared_NoOpVirtual_60D0A0((void *)*(this + 2)); /*0x783bd5*/
    return 0; /*0x783bdf*/
  }
  v12 = *(this + 0x10); /*0x783a81*/
  v21 = 1; /*0x783a8e*/
  (*(void (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v12 + 0x18))(v12, v11, v24, &v21); /*0x783a9d*/
  if ( a6 ) /*0x783aa3*/
  {
    v13 = 0; /*0x783aa9*/
    if ( !a4 ) /*0x783aae*/
      return 1; /*0x783b64*/
    while ( 1 ) /*0x783ab7*/
    {
      v14 = *(_WORD *)(a6 + 2 * v13); /*0x783ab7*/
      v15 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0x10) + 0x28))(*(this + 0x10), v22, v13); /*0x783aca*/
      v16 = *(this + 0x10); /*0x783acc*/
      v23 = v15; /*0x783ad4*/
      v21 = 1; /*0x783ae1*/
      (*(void (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v16 + 0x18))(v16, v15, v24, &v21); /*0x783af0*/
      if ( v20 ) /*0x783af7*/
      {
        v17 = (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x178))( /*0x783b0b*/
                *(_DWORD *)(*(this + 9) + 0xFF8),
                v25,
                a3 + 0x10 * a5 * v14,
                v26);
      }
      else
      {
        D3DXMatrixTranspose_0((int)v27, a3 + 0x10 * a5 * v14); /*0x783b20*/
        v17 = (*(int (__stdcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x178))( /*0x783b46*/
                *(_DWORD *)(*(this + 9) + 0xFF8),
                v25,
                v27,
                v26);
      }
      if ( v17 < 0 ) /*0x783b4a*/
        break; /*0x783b4a*/
      if ( ++v13 >= a4 ) /*0x783b56*/
        return 1; /*0x783b56*/
    }
    return 0; /*0x783b4a*/
  }
  v19 = 0x80004005; /*0x783b6c*/
  if ( v20 ) /*0x783b71*/
  {
    if ( NiDX9RenderState__SetVertexShaderConstantF((_DWORD **)*(this + 9), v25, a3, v26, 0) ) /*0x783b86*/
      return 1; /*0x783b9e*/
  }
  else
  {
    v19 = (*(int (__stdcall **)(_DWORD, _DWORD, int, int, unsigned int))(*(_DWORD *)*(this + 0x10) + 0x58))( /*0x783bb9*/
            *(this + 0x10),
            *(this + 7),
            v11,
            a3,
            a4);
  }
  return v19 >= 0; /*0x783b5e*/
}
