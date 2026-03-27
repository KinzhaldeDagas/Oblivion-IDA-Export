void __thiscall sub_6C6DC0(_DWORD *this, float a2, float a3, float a4)
{
  int v4; // ebp
  double v5; // st7
  double v6; // st5
  int v7; // edx
  int v8; // eax
  int v9; // edx
  unsigned __int8 v10; // bl
  double v11; // st4
  int v12; // eax
  unsigned __int8 v13; // bl
  double v14; // st4
  unsigned __int8 v15; // al
  int v16; // edx
  double v17; // rt2
  double v18; // st5
  double v19; // st7
  double v20; // rtt
  double v21; // rt0
  unsigned int v22; // [esp+8h] [ebp-4h]

  v4 = 0;
  v22 = 0;
  if ( *(this + 3) )
  {
    v5 = a4;
    v6 = a2;
    do
    {
      v7 = *(this + 5);
      v8 = *(_DWORD *)(v7 + v4 + 8);
      v9 = v4 + v7;
      if ( v8 )
      {
        v10 = *(_BYTE *)(v9 + 0xC);
        if ( *(_BYTE *)(v8 + 0xE) != 1 || v10 != *(_BYTE *)(v8 + 0xF) )
        {
          *(float *)(*(_DWORD *)(v8 + 0x14) + 0x18 * v10 + 4) = v6;
          *(float *)(v8 + 0x24) = -flt_A7DEB4;
          *(float *)(v8 + 0x28) = -flt_A7DEB4;
          v11 = flt_A7DEB4;
          *(_BYTE *)(v8 + 0xC) |= 4u;
          *(float *)(v8 + 0x2C) = -v11;
        }
        v12 = *(_DWORD *)(v9 + 8);
        v13 = *(_BYTE *)(v9 + 0xC);
        if ( *(_BYTE *)(v12 + 0xE) != 1 || v13 != *(_BYTE *)(v12 + 0xF) )
        {
          *(float *)(*(_DWORD *)(v12 + 0x14) + 0x18 * v13 + 0x10) = a3;
          *(float *)(v12 + 0x24) = -flt_A7DEB4;
          *(float *)(v12 + 0x28) = -flt_A7DEB4;
          v14 = flt_A7DEB4;
          *(_BYTE *)(v12 + 0xC) |= 4u;
          *(float *)(v12 + 0x2C) = -v14;
        }
        v15 = *(_BYTE *)(v9 + 0xC);
        v16 = *(_DWORD *)(v9 + 8);
        if ( *(_BYTE *)(v16 + 0xE) == 1 && v15 == *(_BYTE *)(v16 + 0xF) )
        {
          v17 = v6;
          v18 = v5;
          v19 = v17;
          *(float *)(v16 + 0x20) = v18;
        }
        else
        {
          v20 = v6;
          v18 = v5;
          v19 = v20;
          *(float *)(*(_DWORD *)(v16 + 0x14) + 0x18 * v15 + 0x14) = v18;
        }
        v21 = v18;
        v6 = v19;
        v5 = v21;
      }
      v4 += 0x10;
      ++v22;
    }
    while ( v22 < *(this + 3) );
  }
}
