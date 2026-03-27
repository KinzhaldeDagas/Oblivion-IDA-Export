void __cdecl sub_552990(char *a1, char *a2, int a3, char a4, float a5)
{
  int v5; // edx
  char *v6; // eax
  int v7; // ebx
  char *v8; // ecx
  int *v9; // esi
  int *v10; // ebp
  int v11; // eax
  int *v12; // edi
  int v13; // ecx
  int v14; // edi
  double v15; // st7
  double v16; // st6
  _DWORD *v17; // eax
  int v18; // edi
  double v19; // st7
  double v20; // st6
  int v21; // [esp+1Ch] [ebp-30h]
  float v22; // [esp+20h] [ebp-2Ch]
  float v23; // [esp+20h] [ebp-2Ch]
  float v24; // [esp+20h] [ebp-2Ch]
  float v25; // [esp+20h] [ebp-2Ch]
  float v26; // [esp+20h] [ebp-2Ch]
  float v27; // [esp+20h] [ebp-2Ch]
  int v28[3]; // [esp+28h] [ebp-24h] BYREF
  unsigned int v29; // [esp+34h] [ebp-18h]
  int v30; // [esp+38h] [ebp-14h]
  int v31; // [esp+3Ch] [ebp-10h]
  unsigned int v32; // [esp+48h] [ebp-4h]

  v5 = a3;
  if ( a3 )
  {
    v6 = a1;
    if ( !a1 )
    {
      v6 = a2;
      if ( !a2 )
        return;
      goto LABEL_4;
    }
    if ( !a2 )
    {
LABEL_4:
      sub_5528F0((int *)v6, a3);
      return;
    }
    v7 = 0;
    v8 = &a1[-a3];
    while ( 1 )
    {
      v9 = (int *)(v5 + 0x30 * v7);
      v10 = (int *)(v5 + 0x30);
      v21 = 2;
      while ( 1 )
      {
        v11 = *(int *)((char *)v9 + (_DWORD)v8);
        v12 = (int *)((char *)v9 + (_DWORD)v8);
        if ( v11 && (v13 = *(int *)((char *)v9 + (_DWORD)v8 + 4)) != 0 )
        {
          *v9 = v11;
          v9[1] = v13;
          sub_527160(v9 + 2, v13 * v11, COERCE_INT(0.0));
          if ( v7 == 1 && a4 )
          {
            sub_5520E0(v10, 1, &a1[(_DWORD)v10 - a3]);
            if ( a5 > 0.0 )
            {
              v14 = *v10;
              v15 = sub_5511D0((unsigned int *)v10);
              v16 = (double)v14;
              if ( v14 < 0 )
                v16 = v16 + flt_A2FC78;
              v22 = v15 / v16;
              v23 = sqrt(v22);
              if ( a5 < (double)v23 )
              {
                v24 = a5 / v23;
                sub_551D40(v10, v24);
              }
            }
          }
          else
          {
            v17 = sub_552530(v12, v28, (int *)((char *)v12 + a2 - a1));
            v32 = 0;
            sub_5520E0(v9, v7, v17);
            v32 = 0xFFFFFFFF;
            if ( v29 )
              FormHeapFree(v29);
            v29 = 0;
            v30 = 0;
            v31 = 0;
            if ( a5 > 0.0 )
            {
              v18 = *v9;
              v19 = sub_5511D0((unsigned int *)v9);
              v20 = (double)v18;
              if ( v18 < 0 )
                v20 = v20 + flt_A2FC78;
              v25 = v19 / v20;
              v26 = sqrt(v25);
              if ( a5 < (double)v26 )
              {
                v27 = a5 / v26;
                sub_551D40(v9, v27);
              }
            }
          }
        }
        else
        {
          *v9 = 0;
          v9[1] = 0;
          sub_527160(v9 + 2, 0, COERCE_INT(0.0));
        }
        v10 += 6;
        v9 += 6;
        if ( !--v21 )
          break;
        v8 = &a1[-a3];
      }
      if ( ++v7 >= 2 )
        break;
      v8 = &a1[-a3];
      v5 = a3;
    }
  }
}
