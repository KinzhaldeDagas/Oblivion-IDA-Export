char __thiscall sub_7609C0(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  D3DFORMAT v8; // eax
  bool v9; // zf
  int v11; // ecx
  D3DFORMAT v12; // eax
  NiSurfaceData *inited; // eax
  int v14; // eax
  int v15; // edx
  D3DFORMAT v16; // eax
  D3DFORMAT v17; // [esp-4h] [ebp-7Ch]
  D3DFORMAT a1[4]; // [esp+14h] [ebp-64h] BYREF
  int v19; // [esp+24h] [ebp-54h]
  int v20; // [esp+28h] [ebp-50h]
  int v21; // [esp+2Ch] [ebp-4Ch]
  int v22; // [esp+30h] [ebp-48h]
  NiSurfaceData v23; // [esp+34h] [ebp-44h] BYREF

  v2 = a2;
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 0x34))(a2);
  v5 = 0;
  *(this + 0x17) = v4;
  *((_BYTE *)this + 0x65) = v4 != 1;
  *(this + 0x1A) = 0;
  v6 = (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 0x28))(v2);
  if ( v6 == 3 )
  {
    if ( *(this + 0x17) )
    {
      while ( (*(int (__stdcall **)(int, int, D3DFORMAT *))(*(_DWORD *)v2 + 0x44))(v2, v5, a1) >= 0 )
      {
        if ( !v5 )
        {
          v7 = v21;
          *(this + 0x16) = v22;
          v8 = a1[0];
          v9 = a1[0] == D3DFMT_A8P8;
          *(this + 0x15) = v7;
          if ( v9 || v8 == D3DFMT_P8 )
            return 0;
          qmemcpy(this + 3, InitSurfacEData(&v23), 0x44u);
          D3DFMTToTextureFormat(a1[0], (NiSurfaceData *)(this + 3));
          v2 = a2;
        }
        *(this + 0x1A) += (v21 * v22 * (unsigned int)*((unsigned __int8 *)this + 0xD)) >> 3;
        if ( (unsigned int)++v5 >= *(this + 0x17) )
        {
          *(this + 0x14) = v2;
          return 1;
        }
      }
      return 0;
    }
    goto LABEL_28;
  }
  if ( v6 != 5 )
  {
    if ( v6 == 4 && *(this + 0x17) )
    {
      while ( (*(int (__stdcall **)(int, int, D3DFORMAT *))(*(_DWORD *)v2 + 0x44))(v2, v5, a1) >= 0 )
      {
        if ( !v5 )
        {
          v15 = v19;
          *(this + 0x16) = v20;
          v16 = a1[0];
          v9 = a1[0] == D3DFMT_A8P8;
          *(this + 0x15) = v15;
          if ( v9 || v16 == D3DFMT_P8 )
            return 0;
          qmemcpy(this + 3, InitSurfacEData(&v23), 0x44u);
          D3DFMTToTextureFormat(a1[0], (NiSurfaceData *)(this + 3));
          v2 = a2;
        }
        *(this + 0x1A) += (v19 * v20 * v21 * (unsigned int)*((unsigned __int8 *)this + 0xD)) >> 3;
        if ( (unsigned int)++v5 >= *(this + 0x17) )
          goto LABEL_28;
      }
      return 0;
    }
LABEL_28:
    *(this + 0x14) = v2;
    return 1;
  }
  if ( *(this + 0x17) )
  {
    while ( (*(int (__stdcall **)(int, int, D3DFORMAT *))(*(_DWORD *)v2 + 0x44))(v2, v5, a1) >= 0 )
    {
      if ( !v5 )
      {
        v11 = v22;
        *(this + 0x15) = v21;
        v12 = a1[0];
        v9 = a1[0] == D3DFMT_A8P8;
        *(this + 0x16) = v11;
        if ( v9 || v12 == D3DFMT_P8 )
          return 0;
        inited = InitSurfacEData(&v23);
        v17 = a1[0];
        qmemcpy(this + 3, inited, 0x44u);
        D3DFMTToTextureFormat(v17, (NiSurfaceData *)(this + 3));
        v2 = a2;
      }
      *(this + 0x1A) += (v21 * v22 * (unsigned int)*((unsigned __int8 *)this + 0xD)) >> 3;
      if ( (unsigned int)++v5 >= *(this + 0x17) )
        goto LABEL_19;
    }
    return 0;
  }
LABEL_19:
  v14 = *(this + 0x1A);
  *(this + 0x14) = v2;
  *(this + 0x1A) = 6 * v14;
  return 1;
}
