char __userpurge sub_78DF90@<al>(float **a1@<ecx>, char *a2@<esi>, int a3, int a4)
{
  float *v5; // ecx
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  HighProcess *v10; // ecx
  float *AV; // eax
  bool v12; // zf
  double v13; // st7
  int v15; // [esp+0h] [ebp-60h] BYREF
  char *v16[2]; // [esp+34h] [ebp-2Ch] BYREF
  unsigned int v17; // [esp+3Ch] [ebp-24h]
  int v18; // [esp+40h] [ebp-20h]
  char v19; // [esp+4Fh] [ebp-11h]
  int *v20; // [esp+50h] [ebp-10h]
  int v21; // [esp+5Ch] [ebp-4h]
  int savedregs; // [esp+60h] [ebp+0h] BYREF
  float v23; // [esp+6Ch] [ebp+Ch]
  float v24; // [esp+6Ch] [ebp+Ch]
  float v25; // [esp+6Ch] [ebp+Ch]

  v20 = &v15;
  v19 = 0;
  v21 = 0;
  sub_78D600(v16, a3, a4);
  v5 = *a1;
  LOBYTE(v21) = 1;
  if ( sub_7A4DF0(v5, (unsigned int *)v16) )
  {
    if ( v17 && v16[0] < (char *)(v18 - v17) )
    {
      v6 = 0;
      v7 = sub_78EB40((unsigned int *)v16);
      while ( v7 > 0x3E8D )
      {
        if ( v7 <= 0x4E20 )
        {
          switch ( v7 )
          {
            case 0x4E20:
              ((void (__thiscall *)(float **, char **))loc_78AB60)(a1, v16);
              goto LABEL_45;
            case 0x3E8E:
              v23 = sub_78EB10((unsigned int *)v16);
              *((float *)a1 + 0xA) = v23;
              goto LABEL_45;
            case 0x4650:
              sub_787400(a1, (unsigned int *)v16);
              goto LABEL_45;
            case 0x4A38:
              sub_788DA0(a1, (unsigned int *)v16);
              goto LABEL_45;
          }
          goto LABEL_38;
        }
        v8 = v7 - 0x5208;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 0x3E7 )
            {
              a2 = v16[0]++;
              if ( !v17 || (unsigned int)a2 >= v18 - v17 )
                _invalid_parameter_noinfo();
              byte_B429C8 = a2[v17] != 0;
              goto LABEL_45;
            }
LABEL_38:
            v6 = 1;
            goto LABEL_45;
          }
          v24 = sub_78EB10((unsigned int *)v16);
          a1[4][0x10] = v24;
        }
        else
        {
          v25 = sub_78EB10((unsigned int *)v16);
          a1[4][0xF] = v25;
        }
LABEL_45:
        if ( v17 )
        {
          if ( v16[0] < (char *)(v18 - v17) )
          {
            v7 = sub_78EB40((unsigned int *)v16);
            if ( !v6 )
              continue;
          }
        }
        goto LABEL_48;
      }
      if ( v7 == 0x3E8D )
      {
        sub_7A2540(*a1, (unsigned int *)v16);
        goto LABEL_45;
      }
      if ( v7 > 0x2EE0 )
      {
        switch ( v7 )
        {
          case 0x32C8:
            sub_79F1E0(a1[0x17], (unsigned int *)v16);
            goto LABEL_45;
          case 0x3A98:
            sub_7A2A40(*a1, (unsigned int *)v16);
            goto LABEL_45;
          case 0x3E80:
            sub_7A2C60(*a1, (unsigned int *)v16);
            goto LABEL_45;
        }
      }
      else
      {
        if ( v7 == 0x2EE0 )
        {
          sub_78DD10(a1, (int)a1, (unsigned int *)v16);
          goto LABEL_45;
        }
        if ( v7 > 0x2710 )
        {
          if ( v7 == 0x2AF8 )
          {
            sub_7897B0(a1, (unsigned int *)v16);
            goto LABEL_45;
          }
        }
        else
        {
          switch ( v7 )
          {
            case 0x2710:
              ((void (__thiscall *)(float **, char **))loc_7898D0)(a1, v16);
              goto LABEL_45;
            case 0x1F40:
              sub_794340((int)a1[3], v6, (int)&savedregs, (int)a1, (int)a2, (unsigned int *)v16);
              goto LABEL_45;
            case 0x2328:
              sub_789610((float *)a1, (unsigned int *)v16);
              goto LABEL_45;
          }
        }
      }
      goto LABEL_38;
    }
LABEL_48:
    sub_78B320((int)a1, (int)a1, *(_DWORD **)a1[3]);
    sub_78B440((int)a1, (int)a1, *((_DWORD *)a1[3] + 0xE));
    sub_78B560((int)a1, (int)a1, *((_DWORD **)a1[3] + 0x1E));
    v10 = (HighProcess *)a1[0x17];
    a1[0x12] = *((float **)*a1 + 0x3C);
    AV = (float *)ValueModifierEffect_GetAV(v10);
    v12 = a1[6] == (float *)2;
    a1[0xF] = AV;
    if ( v12 )
    {
      v13 = flt_A3D65C;
      a1[6] = (float *)1;
      *((float *)a1 + 0xA) = v13;
    }
    sub_793C40(a1[4], 0, (unsigned __int16)word_B42A10);
    v19 = 1;
  }
  if ( v17 )
    FormHeapFree(v17);
  return v19;
}
