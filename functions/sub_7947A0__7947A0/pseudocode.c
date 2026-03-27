void __thiscall sub_7947A0(_DWORD *this, float *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // [esp+14h] [ebp-58h]
  float v13; // [esp+1Ch] [ebp-50h]
  float v14; // [esp+20h] [ebp-4Ch]
  float v15[3]; // [esp+24h] [ebp-48h] BYREF
  float v16[6]; // [esp+30h] [ebp-3Ch] BYREF
  _BYTE v17[24]; // [esp+48h] [ebp-24h] BYREF
  unsigned int v18; // [esp+68h] [ebp-4h]
  float v19; // [esp+70h] [ebp+4h]

  v2 = this;
  v3 = *(this + 0x1B);
  if ( v3 )
    v4 = (*(this + 0x1C) - v3) >> 2;
  else
    v4 = 0;
  if ( (unsigned __int16)(v4 / 3) )
  {
    v6 = 0;
    v11 = (unsigned __int16)(v4 / 3);
    while ( 1 )
    {
      v7 = v2[0x1B];
      if ( !v7 || !((v2[0x1C] - v7) >> 2) )
        _invalid_parameter_noinfo();
      v8 = v2[0x1B];
      v9 = *(float *)(v8 + v6);
      v10 = v6 + v8;
      v19 = v9;
      v13 = *(float *)(v10 + 4);
      v14 = *(float *)(v10 + 8);
      v15[0] = v19;
      v15[1] = v13;
      v15[2] = v14;
      qmemcpy(a2, sub_7A6B10(a2, v16, v15), 0x30u);
      v18 = 0;
      TESTexture::ClearComponentReferences(v17);
      v18 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v16);
      v6 += 0xC;
      if ( !--v11 )
        break;
      v2 = this;
    }
  }
}
