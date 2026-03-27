void __thiscall sub_6A0350(int this)
{
  int v1; // eax
  int v2; // edx
  double v3; // st6
  int v4; // edx
  double v5; // st7
  float *v6; // eax
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]

  v1 = *(_DWORD *)(this + 0x18);
  if ( !v1 || *(float *)(v1 + 0x18) < fCostant_100 || *(_DWORD *)(this + 0x2C) != 0x574E5352 )
  {
    v2 = *(_DWORD *)(this + 0x48);
    v7 = 0.0;
    if ( v2 )
    {
      v8 = *(float *)(v2 + 0x48);
      v3 = *(float *)(v2 + 0x38);
      if ( v8 >= v3 )
        v3 = v8;
      v7 = v3;
    }
    if ( *(_BYTE *)(this + 0x28) )
    {
      v7 = 0.0;
      *(float *)(v2 + 0x38) = 0.0;
      *(float *)(*(_DWORD *)(this + 0x48) + 0x48) = 0.0;
    }
    v4 = *(_DWORD *)(this + 0x34);
    if ( *(float *)(v4 + 0x6C) <= (double)v7 )
      v5 = *(float *)(v4 + 0x2C);
    else
      v5 = v7 / *(float *)(v4 + 0x6C) * *(float *)(v4 + 0x2C);
    v6 = *(float **)(this + 0x3C);
    *(float *)(this + 0x38) = v5;
    if ( v6 )
      sub_7E4700(v6, *(float *)(this + 0x38));
  }
}
