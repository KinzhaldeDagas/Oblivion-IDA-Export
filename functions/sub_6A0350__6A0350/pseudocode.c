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

  v1 = *(_DWORD *)(this + 0x18); /*0x6a0350*/
  if ( !v1 || *(float *)(v1 + 0x18) < fCostant_100 || *(_DWORD *)(this + 0x2C) != 0x574E5352 ) /*0x6a0371*/
  {
    v2 = *(_DWORD *)(this + 0x48); /*0x6a0375*/
    v7 = 0.0; /*0x6a037a*/
    if ( v2 ) /*0x6a037d*/
    {
      v8 = *(float *)(v2 + 0x48); /*0x6a0388*/
      v3 = *(float *)(v2 + 0x38); /*0x6a038c*/
      if ( v8 >= v3 ) /*0x6a039a*/
        v3 = v8; /*0x6a03a0*/
      v7 = v3; /*0x6a03a2*/
    }
    if ( *(_BYTE *)(this + 0x28) ) /*0x6a03a5*/
    {
      v7 = 0.0; /*0x6a03ab*/
      *(float *)(v2 + 0x38) = 0.0; /*0x6a03ae*/
      *(float *)(*(_DWORD *)(this + 0x48) + 0x48) = 0.0; /*0x6a03b4*/
    }
    v4 = *(_DWORD *)(this + 0x34); /*0x6a03bb*/
    if ( *(float *)(v4 + 0x6C) <= (double)v7 ) /*0x6a03cb*/
      v5 = *(float *)(v4 + 0x2C); /*0x6a03d7*/
    else
      v5 = v7 / *(float *)(v4 + 0x6C) * *(float *)(v4 + 0x2C); /*0x6a03d0*/
    v6 = *(float **)(this + 0x3C); /*0x6a03da*/
    *(float *)(this + 0x38) = v5; /*0x6a03dd*/
    if ( v6 ) /*0x6a03e2*/
      sub_7E4700(v6, *(float *)(this + 0x38)); /*0x6a03ed*/
  }
}
