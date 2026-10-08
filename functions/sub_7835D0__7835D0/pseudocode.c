// Oblivion-authoritative: uploads pixel-shader constant arrays. Supports direct constant-table SetValue and indexed array-element updates; matrix array elements are transposed before float-register upload.
bool __thiscall sub_7835D0(_DWORD *this, _DWORD *a2, int a3, unsigned int a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  void *v10; // ecx
  int v11; // esi
  int v12; // eax
  unsigned int i; // esi
  unsigned __int16 v14; // bx
  int v16; // [esp+40h] [ebp-7Ch]
  int v17; // [esp+44h] [ebp-78h] BYREF
  int v18; // [esp+48h] [ebp-74h]
  _BYTE v19[8]; // [esp+4Ch] [ebp-70h] BYREF
  int v20; // [esp+54h] [ebp-68h]
  int v21; // [esp+58h] [ebp-64h]
  _BYTE v22[64]; // [esp+7Ch] [ebp-40h] BYREF

  if ( !*(this + 0xD) ) /*0x7835e1*/
    return 0; /*0x7835e1*/
  if ( !*(this + 7) ) /*0x7835eb*/
    return 0; /*0x7835eb*/
  v7 = a2[5]; /*0x7835ff*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x7835f5*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x783604*/
  if ( *(_DWORD *)(4 * (unsigned __int8)v7 + 0xB428D8) != 8 ) /*0x783617*/
  {
    v8 = a2[5]; /*0x783620*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x783619*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x783625*/
    if ( *(_DWORD *)(4 * (unsigned __int8)v8 + 0xB428D8) != 9 ) /*0x783638*/
      return 0; /*0x783638*/
  }
  if ( !a3 ) /*0x783642*/
    a3 = a2[0xC]; /*0x783647*/
  v9 = a2[9]; /*0x78364a*/
  if ( !v9 ) /*0x78364f*/
    v9 = a2[3]; /*0x783651*/
  v11 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 0xD) + 0x24))(*(this + 0xD), 0, v9); /*0x783662*/
  v18 = v11; /*0x783666*/
  if ( !v11 ) /*0x78366a*/
  {
    Shared_NoOpVirtual_60D0A0(v10); /*0x783752*/
    return 0; /*0x78375c*/
  }
  v12 = *(this + 0xD); /*0x783670*/
  v17 = 1; /*0x78367d*/
  v16 = (*(int (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v12 + 0x18))(v12, v11, v19, &v17); /*0x783692*/
  if ( !a6 ) /*0x783696*/
    return (*(int (__stdcall **)(_DWORD, _DWORD, int, int, unsigned int))(*(_DWORD *)*(this + 0xD) + 0x58))( /*0x78373d*/
             *(this + 0xD),
             *(this + 7),
             v11,
             a3,
             a4) >= 0;
  for ( i = 0; i < a4; ++i ) /*0x7836a1*/
  {
    v14 = *(_WORD *)(a6 + 2 * i); /*0x7836a6*/
    (*(void (__stdcall **)(_DWORD, int, unsigned int))(*(_DWORD *)*(this + 0xD) + 0x28))(*(this + 0xD), v18, i); /*0x7836b9*/
    D3DXMatrixTranspose_0((int)v22, a3 + 0x10 * a5 * v14); /*0x7836ce*/
    if ( (*(int (__stdcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x1B4))( /*0x7836f8*/
           *(_DWORD *)(*(this + 9) + 0xFF8),
           v20,
           v22,
           v21) < 0 )
    {
      if ( v16 < 0 ) /*0x783709*/
        return 0; /*0x783709*/
    }
    else
    {
      v16 = 0; /*0x7836fa*/
    }
  }
  return 1; /*0x783715*/
}
