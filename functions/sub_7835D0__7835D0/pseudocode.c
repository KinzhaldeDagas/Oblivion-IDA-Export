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

  if ( !*(this + 0xD) )
    return 0;
  if ( !*(this + 7) )
    return 0;
  v7 = a2[5];
  if ( !byte_B4295B )
    sub_783C70();
  if ( *(_DWORD *)(4 * (unsigned __int8)v7 + 0xB428D8) != 8 )
  {
    v8 = a2[5];
    if ( !byte_B4295B )
      sub_783C70();
    if ( *(_DWORD *)(4 * (unsigned __int8)v8 + 0xB428D8) != 9 )
      return 0;
  }
  if ( !a3 )
    a3 = a2[0xC];
  v9 = a2[9];
  if ( !v9 )
    v9 = a2[3];
  v11 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 0xD) + 0x24))(*(this + 0xD), 0, v9);
  v18 = v11;
  if ( !v11 )
  {
    TESTexture::ClearComponentReferences(v10);
    return 0;
  }
  v12 = *(this + 0xD);
  v17 = 1;
  v16 = (*(int (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v12 + 0x18))(v12, v11, v19, &v17);
  if ( !a6 )
    return (*(int (__stdcall **)(_DWORD, _DWORD, int, int, unsigned int))(*(_DWORD *)*(this + 0xD) + 0x58))(
             *(this + 0xD),
             *(this + 7),
             v11,
             a3,
             a4) >= 0;
  for ( i = 0; i < a4; ++i )
  {
    v14 = *(_WORD *)(a6 + 2 * i);
    (*(void (__stdcall **)(_DWORD, int, unsigned int))(*(_DWORD *)*(this + 0xD) + 0x28))(*(this + 0xD), v18, i);
    D3DXMatrixTranspose_0(v22, a3 + 0x10 * a5 * v14);
    if ( (*(int (__stdcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x1B4))(
           *(_DWORD *)(*(this + 9) + 0xFF8),
           v20,
           v22,
           v21) < 0 )
    {
      if ( v16 < 0 )
        return 0;
    }
    else
    {
      v16 = 0;
    }
  }
  return 1;
}
