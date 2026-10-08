char __thiscall sub_6D2600(int this, float a2, int a3, float *a4)
{
  double v4; // st7
  unsigned __int8 v6; // bl
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  char v13; // [esp+1Fh] [ebp-9h]
  float v14; // [esp+20h] [ebp-8h]
  float v15; // [esp+24h] [ebp-4h] BYREF
  float v16; // [esp+30h] [ebp+8h]
  float v17; // [esp+30h] [ebp+8h]

  v4 = 0.0; /*0x6d2603*/
  *(float *)(this + 0x30) = 0.0; /*0x6d2609*/
  v6 = 0; /*0x6d260c*/
  v14 = 1.0; /*0x6d2613*/
  v13 = 0; /*0x6d2617*/
  if ( *(_BYTE *)(this + 0xD) ) /*0x6d260e*/
  {
    while ( 1 ) /*0x6d2638*/
    {
      v8 = *(_DWORD *)(this + 0x14); /*0x6d2638*/
      v9 = 0x18 * v6; /*0x6d263f*/
      v10 = *(_DWORD *)(v9 + v8); /*0x6d2641*/
      v11 = v9 + v8; /*0x6d2646*/
      if ( v10 ) /*0x6d2649*/
      {
        if ( v4 < *(float *)(v11 + 8) ) /*0x6d2657*/
        {
          v16 = a2; /*0x6d2663*/
          if ( v4 == *(float *)(v11 + 8) ) /*0x6d2671*/
            goto LABEL_11; /*0x6d2671*/
          if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6d2677*/
            v16 = *(float *)(v11 + 0x14); /*0x6d267c*/
          if ( flt_A79F00 == v16 ) /*0x6d2693*/
          {
LABEL_11:
            v14 = v14 - *(float *)(v11 + 8); /*0x6d269e*/
          }
          else if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x5C))( /*0x6d26b3*/
                      COERCE_FLOAT(LODWORD(v16)),
                      a3,
                      &v15) )
          {
            v13 = 1; /*0x6d26c0*/
            *(float *)(this + 0x30) = *(float *)(v9 + *(_DWORD *)(this + 0x14) + 8) * v15 + *(float *)(this + 0x30); /*0x6d26cc*/
          }
          else
          {
            v14 = v14 - *(float *)(v9 + *(_DWORD *)(this + 0x14) + 8); /*0x6d26dc*/
          }
        }
      }
      if ( ++v6 >= *(_BYTE *)(this + 0xD) ) /*0x6d26ea*/
        break; /*0x6d26ea*/
      v4 = 0.0; /*0x6d2630*/
    }
  }
  v17 = *(float *)(this + 0x30) / v14; /*0x6d2702*/
  *(float *)(this + 0x30) = v17; /*0x6d270a*/
  if ( v13 ) /*0x6d270d*/
  {
    *a4 = v17; /*0x6d2735*/
    return 1; /*0x6d2737*/
  }
  else
  {
    *a4 = flt_A7C6B0; /*0x6d271d*/
    *(float *)(this + 0x30) = flt_A7C6B0; /*0x6d2725*/
    return 0; /*0x6d271b*/
  }
}
