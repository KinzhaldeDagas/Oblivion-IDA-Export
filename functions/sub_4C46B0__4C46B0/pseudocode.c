float *__thiscall sub_4C46B0(_DWORD *this, float *a2)
{
  int v3; // ecx
  int i; // edi
  int v6; // ecx
  int v7; // ecx
  float v8; // eax
  int v9; // esi
  int v10; // edx
  float v11; // [esp+4h] [ebp-8h] BYREF
  float v12; // [esp+8h] [ebp-4h]

  v3 = *(this + 9); /*0x4c46b6*/
  if ( v3 ) /*0x4c46bb*/
  {
    if ( *(float *)(v3 + 0x18) == dbl_A3A5B0 || *(float *)(v3 + 0x1C) == dbl_A40398 ) /*0x4c46f7*/
    {
      if ( (*(_BYTE *)(this + 7) & 1) != 0 ) /*0x4c46fd*/
      {
        for ( i = 0; i < 4; ++i ) /*0x4c4700*/
        {
          sub_4C4630(this, &v11, i); /*0x4c470a*/
          v6 = *(this + 9); /*0x4c4713*/
          if ( *(float *)(v6 + 0x18) > (double)v11 ) /*0x4c4720*/
            *(float *)(v6 + 0x18) = v11; /*0x4c4722*/
          v7 = *(this + 9); /*0x4c4729*/
          if ( *(float *)(v7 + 0x1C) < (double)v12 ) /*0x4c473a*/
            *(float *)(v7 + 0x1C) = v12; /*0x4c473c*/
        }
      }
      else
      {
        v11 = flt_A37448; /*0x4c4754*/
        v12 = v11; /*0x4c475c*/
        v8 = v11; /*0x4c4760*/
        *(float *)(v3 + 0x18) = v11; /*0x4c4764*/
        *(float *)(v3 + 0x1C) = v8; /*0x4c4767*/
      }
    }
    v9 = *(this + 9); /*0x4c476a*/
    v10 = *(_DWORD *)(v9 + 0x1C); /*0x4c4774*/
    *a2 = *(float *)(v9 + 0x18); /*0x4c4777*/
    *((_DWORD *)a2 + 1) = v10; /*0x4c4779*/
    return a2; /*0x4c4770*/
  }
  else
  {
    *a2 = flt_A32048; /*0x4c46c7*/
    a2[1] = flt_A3B888; /*0x4c46d0*/
    return a2; /*0x4c46bd*/
  }
}
