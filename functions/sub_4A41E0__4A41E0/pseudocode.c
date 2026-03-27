int sub_4A41E0()
{
  int result; // eax
  NiPixelData *v1; // ebx
  NiPixelData *v2; // eax
  _BYTE *v3; // esi
  int v4; // ebp
  int v5; // edi
  NiObjectNET *v6; // eax
  NiObjectNET *v7; // esi
  NiTexturingProperty *v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // edi

  result = dword_B35414;
  v1 = 0;
  if ( !dword_B35414 )
  {
    v2 = (NiPixelData *)FormHeapAlloc(0x70u);
    if ( v2 )
      v1 = NiPixelData::NiPixelData(v2, 0x40u, 0x40u, (int)&unk_B25E00, 1u, 1);
    v3 = (_BYTE *)(*((_DWORD *)v1 + 0x14) + **((_DWORD **)v1 + 0x17) + 2);
    v4 = 0x40;
    do
    {
      v5 = 0x40;
      do
      {
        v3[0xFFFFFFFE] = (int)Rand5(flt_A40098);
        v3[0xFFFFFFFF] = (int)Rand5(flt_A40098);
        *v3 = (int)Rand5(flt_A40098);
        v3 += 4;
        --v5;
        v3[0xFFFFFFFD] = (int)Rand5(flt_A40098);
      }
      while ( v5 );
      --v4;
    }
    while ( v4 );
    ++*((_DWORD *)v1 + 0x1A);
    v6 = (NiObjectNET *)FormHeapAlloc(0x30u);
    if ( v6 )
      v7 = sub_704800(v6, (NiSourceTexture *)v1);
    else
      v7 = 0;
    v8 = (NiTexturingProperty *)dword_B35414;
    if ( (NiObjectNET *)dword_B35414 != v7 )
    {
      if ( v8 )
      {
        v9 = (void (__thiscall ***)(_DWORD, int))dword_B35414;
        if ( !InterlockedDecrement((volatile LONG *)&v8->super) )
          (**v9)(v9, 1);
      }
      v8 = (NiTexturingProperty *)v7;
      dword_B35414 = (int)v7;
      if ( v7 )
      {
        InterlockedIncrement((volatile LONG *)&v7->members);
        v8 = (NiTexturingProperty *)dword_B35414;
      }
    }
    sub_405870(v8, 0);
    return dword_B35414;
  }
  return result;
}
