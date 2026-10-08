void __stdcall sub_6B4630(int a1)
{
  int v2; // edi
  int i; // eax
  int v4; // ebp
  int j; // eax
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  double v10; // st7
  int *v11; // edx
  char v12; // al
  int *v13; // ecx
  char v14; // bl
  int v15; // eax
  int v16; // eax
  float v17[3]; // [esp+4h] [ebp-24h] BYREF
  float v18; // [esp+10h] [ebp-18h]
  float v19; // [esp+14h] [ebp-14h]
  char v20; // [esp+18h] [ebp-10h]
  char v21; // [esp+19h] [ebp-Fh]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]
  int v24; // [esp+24h] [ebp-4h]

  sub_88D4E0(a1); /*0x6b4639*/
  if ( !*(_DWORD *)(a1 + 0x1C) ) /*0x6b463e*/
  {
    v2 = *(_DWORD *)a1; /*0x6b4652*/
    v18 = *(float *)(a1 + 0x18) * dbl_A372E0; /*0x6b4654*/
    for ( i = *(_DWORD *)(v2 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x6b465d*/
      v2 = i; /*0x6b4660*/
    v4 = *(_DWORD *)(a1 + 4); /*0x6b466a*/
    for ( j = *(_DWORD *)(v4 + 0xC); j; j = *(_DWORD *)(j + 0xC) ) /*0x6b4672*/
      v4 = j; /*0x6b4674*/
    if ( flt_B23C50 <= (double)v18 && v18 >= (double)flt_A31E2C ) /*0x6b469f*/
    {
      v6 = *(_DWORD *)(v4 + 0x1C); /*0x6b46a5*/
      v7 = *(_DWORD *)(v2 + 0x1C); /*0x6b46a8*/
      if ( ((v7 ^ v6) & 0xFFFF0000) != 0 ) /*0x6b46b5*/
      {
        if ( (v7 & 0x3F) == 8 ) /*0x6b46c5*/
        {
          v8 = (*(_DWORD *)(v2 + 0x1C) & 0x1F00) == 0x1100; /*0x6b46cc*/
        }
        else
        {
          if ( (v6 & 0x3F) != 8 ) /*0x6b46d9*/
          {
LABEL_15:
            HavokVector_ToWorldVector(v17, *(__m128 **)(a1 + 0x10)); /*0x6b46ed*/
            v9 = *(_DWORD *)(a1 + 0x14); /*0x6b46fb*/
            if ( v9 ) /*0x6b4703*/
              v10 = (double)*(unsigned __int16 *)(v9 + 4) * dbl_A4C2D0; /*0x6b4711*/
            else
              v10 = flt_A3744C; /*0x6b4719*/
            v11 = *(int **)a1; /*0x6b471f*/
            v19 = v10; /*0x6b4721*/
            v12 = sub_536140(v11, v17); /*0x6b472c*/
            v13 = *(int **)(a1 + 4); /*0x6b4731*/
            v20 = v12; /*0x6b4734*/
            v14 = sub_536140(v13, v17); /*0x6b4745*/
            v21 = v14; /*0x6b474a*/
            v23 = 0; /*0x6b474e*/
            v24 = 0; /*0x6b4752*/
            if ( *(_BYTE *)(v2 + 0x18) == 1 ) /*0x6b475a*/
            {
              v15 = sub_47DE00(v2); /*0x6b475d*/
              if ( v15 ) /*0x6b4767*/
                v23 = *(_DWORD *)(v15 + 0xC); /*0x6b476c*/
            }
            if ( *(_BYTE *)(v4 + 0x18) == 1 ) /*0x6b4774*/
            {
              v16 = sub_47DE00(v4); /*0x6b4777*/
              if ( v16 ) /*0x6b4781*/
                v24 = *(_DWORD *)(v16 + 0xC); /*0x6b4786*/
            }
            v22 = (v20 + 1) * (v14 + 1); /*0x6b47a0*/
            sub_6B0C70(COERCE_FLOAT(v17)); /*0x6b47a4*/
            return; /*0x6b47a4*/
          }
          v8 = (v6 & 0x1F00) == 0x1100; /*0x6b46e1*/
        }
      }
      else
      {
        v8 = (v7 & 0x3F) == 8; /*0x6b46b9*/
      }
      if ( v8 ) /*0x6b46e7*/
        return; /*0x6b46e7*/
      goto LABEL_15; /*0x6b46e7*/
    }
  }
}
