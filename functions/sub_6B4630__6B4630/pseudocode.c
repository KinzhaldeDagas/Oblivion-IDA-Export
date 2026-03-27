void __userpurge sub_6B4630(double a1@<st2>, int a2)
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

  sub_88D4E0(a2);
  if ( !*(_DWORD *)(a2 + 0x1C) )
  {
    v2 = *(_DWORD *)a2;
    v18 = *(float *)(a2 + 0x18) * dbl_A372E0;
    for ( i = *(_DWORD *)(v2 + 0xC); i; i = *(_DWORD *)(i + 0xC) )
      v2 = i;
    v4 = *(_DWORD *)(a2 + 4);
    for ( j = *(_DWORD *)(v4 + 0xC); j; j = *(_DWORD *)(j + 0xC) )
      v4 = j;
    if ( flt_B23C50 <= (double)v18 && v18 >= (double)flt_A31E2C )
    {
      v6 = *(_DWORD *)(v4 + 0x1C);
      v7 = *(_DWORD *)(v2 + 0x1C);
      if ( ((v7 ^ v6) & 0xFFFF0000) != 0 )
      {
        if ( (v7 & 0x3F) == 8 )
        {
          v8 = (*(_DWORD *)(v2 + 0x1C) & 0x1F00) == 0x1100;
        }
        else
        {
          if ( (v6 & 0x3F) != 8 )
          {
LABEL_15:
            sub_43F3E0(v17, *(__m128 **)(a2 + 0x10));
            v9 = *(_DWORD *)(a2 + 0x14);
            if ( v9 )
              v10 = (double)*(unsigned __int16 *)(v9 + 4) * dbl_A4C2D0;
            else
              v10 = flt_A3744C;
            v11 = *(int **)a2;
            v19 = v10;
            v12 = sub_536140(v11, v17);
            v13 = *(int **)(a2 + 4);
            v20 = v12;
            v14 = sub_536140(v13, v17);
            v21 = v14;
            v23 = 0;
            v24 = 0;
            if ( *(_BYTE *)(v2 + 0x18) == 1 )
            {
              v15 = sub_47DE00(v2);
              if ( v15 )
                v23 = *(_DWORD *)(v15 + 0xC);
            }
            if ( *(_BYTE *)(v4 + 0x18) == 1 )
            {
              v16 = sub_47DE00(v4);
              if ( v16 )
                v24 = *(_DWORD *)(v16 + 0xC);
            }
            v22 = (v20 + 1) * (v14 + 1);
            sub_6B0C70(a1, v10, COERCE_FLOAT(v17));
            return;
          }
          v8 = (v6 & 0x1F00) == 0x1100;
        }
      }
      else
      {
        v8 = (v7 & 0x3F) == 8;
      }
      if ( v8 )
        return;
      goto LABEL_15;
    }
  }
}
