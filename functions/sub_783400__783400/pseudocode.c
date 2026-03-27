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

  if ( *(_DWORD *)(this + 0x34) && *(_DWORD *)(this + 0x1C) )
  {
    if ( !a3 )
      a3 = a2[0xC];
    v5 = a2[9];
    if ( !v5 )
      v5 = a2[3];
    v6 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0x34) + 0x24))(
           *(_DWORD *)(this + 0x34),
           0,
           v5);
    if ( v6 )
    {
      v7 = *(_DWORD *)(this + 0x34);
      v12 = 1;
      v8 = (*(int (__stdcall **)(int, int, _BYTE *, int *))(*(_DWORD *)v7 + 0x18))(v7, v6, v13, &v12);
      v9 = a2[5];
      v11 = v8;
      if ( !byte_B4295B )
        sub_783C70();
      if ( *(_DWORD *)(4 * (unsigned __int8)v9 + 0xB428D8) == 8 || sub_782E10(a2) )
      {
        D3DXMatrixTranspose_0(v16, a3);
        if ( (*(int (__stdcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(*(_DWORD *)(this + 0x24) + 0xFF8) + 0x1B4))(
               *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0xFF8),
               v14,
               v16,
               v15) >= 0 )
LABEL_26:
          v11 = 0;
        return v11 >= 0;
      }
      if ( sub_783340(a2) || sub_783370(a2) || sub_7833A0(a2) || sub_7833D0(a2) || sub_783310(a2) )
      {
        if ( sub_782D60(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) )
          goto LABEL_26;
        return v11 >= 0;
      }
      if ( sub_7832E0(a2) )
      {
        if ( sub_782D90(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) )
          goto LABEL_26;
        return v11 >= 0;
      }
      if ( sub_7832B0(a2) )
      {
        if ( sub_782D30(*(_DWORD ***)(this + 0x24), v14, a3, v15, 0) )
          goto LABEL_26;
        return v11 >= 0;
      }
    }
    else
    {
      TESTexture::ClearComponentReferences(*(void **)(this + 8));
    }
  }
  return 0;
}
