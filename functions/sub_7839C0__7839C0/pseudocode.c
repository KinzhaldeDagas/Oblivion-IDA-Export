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

  if ( !*(this + 0x10) )
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
  v10 = a2[4];
  v20 = 0;
  if ( v10 == 0x21 || v10 == 0x23 || v10 == 0x22 || v10 == 0x24 )
    v20 = 1;
  v11 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x10) + 0x24))(*(this + 0x10), 0, v9);
  v22 = v11;
  if ( !v11 )
  {
    TESTexture::ClearComponentReferences((void *)*(this + 2));
    return 0;
  }
  v12 = *(this + 0x10);
  v21 = 1;
  (*(void (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v12 + 0x18))(v12, v11, v24, &v21);
  if ( a6 )
  {
    v13 = 0;
    if ( !a4 )
      return 1;
    while ( 1 )
    {
      v14 = *(_WORD *)(a6 + 2 * v13);
      v15 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0x10) + 0x28))(*(this + 0x10), v22, v13);
      v16 = *(this + 0x10);
      v23 = v15;
      v21 = 1;
      (*(void (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v16 + 0x18))(v16, v15, v24, &v21);
      if ( v20 )
      {
        v17 = (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x178))(
                *(_DWORD *)(*(this + 9) + 0xFF8),
                v25,
                a3 + 0x10 * a5 * v14,
                v26);
      }
      else
      {
        D3DXMatrixTranspose_0(v27, a3 + 0x10 * a5 * v14);
        v17 = (*(int (__stdcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x178))(
                *(_DWORD *)(*(this + 9) + 0xFF8),
                v25,
                v27,
                v26);
      }
      if ( v17 < 0 )
        break;
      if ( ++v13 >= a4 )
        return 1;
    }
    return 0;
  }
  v19 = 0x80004005;
  if ( v20 )
  {
    if ( sub_783010((_DWORD **)*(this + 9), v25, a3, v26, 0) )
      return 1;
  }
  else
  {
    v19 = (*(int (__stdcall **)(_DWORD, _DWORD, int, int, unsigned int))(*(_DWORD *)*(this + 0x10) + 0x58))(
            *(this + 0x10),
            *(this + 7),
            v11,
            a3,
            a4);
  }
  return v19 >= 0;
}
