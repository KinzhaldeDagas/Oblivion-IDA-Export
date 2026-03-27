void __thiscall sub_4029E0(_DWORD *this, float a2)
{
  double v3; // st7
  char v4; // al
  double v5; // st7
  unsigned __int16 v6; // bx
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st6
  float v11; // [esp+4h] [ebp-Ch]
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]
  float v16; // [esp+Ch] [ebp-4h]
  float v17; // [esp+14h] [ebp+4h]
  float v18; // [esp+14h] [ebp+4h]

  v13 = *(float *)(*(this + 5) + 0x24) * a2 / 3600.0 + *(float *)(*(this + 3) + 0x24);
  v3 = v13;
  if ( v13 > 24.0 )
  {
    v11 = *(float *)(*(this + 2) + 0x24);
    v17 = *(float *)(*(this + 1) + 0x24);
    v15 = *(float *)(*this + 0x24);
    v4 = Double_To_SInt32(v17);
    v5 = 1.0;
    v6 = sub_47D2B0(v4);
    v7 = v13;
    do
    {
      v14 = v7 - 24.0;
      v11 = v11 + v5;
      if ( TESDataHandler_g_PlayerRef )
      {
        v5 = 1.0;
        if ( sub_5E04C0(TESDataHandler_g_PlayerRef) )
          ++TESDataHandler_g_PlayerRef->miscStats[0x16];
      }
      *(float *)(*(this + 4) + 0x24) = *(float *)(*(this + 4) + 0x24) + v5;
      v7 = v14;
    }
    while ( v14 > 24.0 );
    v8 = (double)v6;
    if ( v11 <= v8 )
    {
      v9 = v11;
    }
    else
    {
      v18 = v17 + v5;
      if ( v18 >= 12.0 )
      {
        v18 = v18 - 12.0;
        v16 = v5 + v15;
        *(float *)(*this + 0x24) = v16;
      }
      *(float *)(*(this + 1) + 0x24) = v18;
      v12 = v11 - v8;
      v9 = v12;
    }
    v10 = v9;
    v3 = v14;
    *(float *)(*(this + 2) + 0x24) = v10;
  }
  *(float *)(*(this + 3) + 0x24) = v3;
}
