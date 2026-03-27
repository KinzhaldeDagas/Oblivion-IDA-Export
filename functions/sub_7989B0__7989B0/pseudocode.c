void __thiscall sub_7989B0(int this, _DWORD *a2, float a3, int a4, int a5, float a6)
{
  int v7; // ebp
  int v8; // eax
  bool v9; // zf
  _BYTE *v10; // ebp
  int v11; // esi
  double v12; // st7
  int v13; // ebp
  double v14; // st6
  double v15; // st5
  double v16; // rt0
  int v17; // eax
  int v18; // ecx
  float *v19; // eax
  int v20; // ecx
  double v21; // rt2
  double v22; // st5
  double v23; // st6
  int v24; // eax
  float v25; // [esp+8h] [ebp-9Ch]
  float v26; // [esp+Ch] [ebp-98h]
  float v27; // [esp+10h] [ebp-94h]
  float v28; // [esp+18h] [ebp-8Ch] BYREF
  float v29; // [esp+1Ch] [ebp-88h]
  float v30; // [esp+20h] [ebp-84h]
  float v31; // [esp+24h] [ebp-80h]
  float v32; // [esp+28h] [ebp-7Ch]
  float v33; // [esp+2Ch] [ebp-78h]
  float v34; // [esp+30h] [ebp-74h]
  float v35; // [esp+34h] [ebp-70h]
  float v36; // [esp+38h] [ebp-6Ch]
  float v37; // [esp+3Ch] [ebp-68h]
  float i; // [esp+40h] [ebp-64h]
  float v39; // [esp+44h] [ebp-60h]
  _BYTE *v40; // [esp+48h] [ebp-5Ch]
  float v41; // [esp+4Ch] [ebp-58h] BYREF
  float v42; // [esp+50h] [ebp-54h]
  float v43; // [esp+54h] [ebp-50h]
  float v44; // [esp+58h] [ebp-4Ch]
  float v45; // [esp+5Ch] [ebp-48h]
  float v46; // [esp+60h] [ebp-44h]
  float v47; // [esp+64h] [ebp-40h]
  float v48; // [esp+68h] [ebp-3Ch]
  float v49; // [esp+6Ch] [ebp-38h]
  float v50; // [esp+70h] [ebp-34h]
  float v51; // [esp+74h] [ebp-30h]
  float v52; // [esp+78h] [ebp-2Ch]
  int v53; // [esp+7Ch] [ebp-28h]
  float v54; // [esp+84h] [ebp-20h]
  float v55; // [esp+88h] [ebp-1Ch]
  float v56; // [esp+90h] [ebp-14h]
  float v57; // [esp+A0h] [ebp-4h]

  v7 = *(_DWORD *)(this + 0x2C);
  if ( v7 )
  {
    if ( LOWORD(a3) < *(_WORD *)(this + 0x28) )
    {
      if ( *(_DWORD *)(this + 0x10) )
      {
        if ( *(_DWORD *)(this + 0x24) )
        {
          if ( *(_DWORD *)(this + 0x20) )
          {
            v8 = *(_DWORD *)(this + 4);
            if ( v8 )
            {
              if ( *(_DWORD *)(this + 0xC) )
              {
                v9 = *(_BYTE *)(v7 + 0x44 * LOWORD(a3) + 0x3C) == 0;
                v10 = (_BYTE *)(v7 + 0x44 * LOWORD(a3));
                v53 = LOWORD(a3);
                v40 = v10;
                if ( v9 )
                {
                  if ( *(_DWORD *)(v8 + 0x10) == 1 )
                    sub_7987D0(this, a3);
                  v25 = 1.0;
                  if ( LOWORD(a3) )
                    v25 = (double)v53 * a6 + dbl_A2F928;
                  sub_401080(&v28, 0xC, 4, (void *(__thiscall *)(void *))sub_786E40);
                  sub_401080(&v41, 0xC, 4, (void *(__thiscall *)(void *))sub_786E40);
                  v11 = 0;
                  if ( 2 * *(unsigned __int16 *)(this + 0x1C) > 0 )
                  {
                    v12 = v25;
                    v13 = *(unsigned __int16 *)(this + 8);
                    v14 = 0.0;
                    v15 = 1.0;
                    while ( 1 )
                    {
                      v17 = *(_DWORD *)(this + 0x24);
                      v18 = 0xC * (v11 / 2);
                      v26 = *(float *)(v17 + v18);
                      v27 = *(float *)(v18 + v17 + 4);
                      if ( !(v11 % 2) )
                        v26 = v15 - v26;
                      v19 = (float *)(v18 + *(_DWORD *)(this + 0x20));
                      v20 = 0;
                      v54 = (v15 - v26) * v12 * *v19;
                      v55 = (v15 - v27) * v12 * v19[1];
                      v56 = -(v26 * *v19 * v12);
                      v57 = -(v27 * v19[1] * v12);
                      v21 = v15;
                      v22 = v14;
                      v23 = v21;
                      v28 = v22;
                      v29 = v54;
                      v30 = v55;
                      v31 = v22;
                      v32 = v56;
                      v35 = v56;
                      v33 = v55;
                      v34 = v22;
                      v36 = v57;
                      v39 = v57;
                      v37 = v34;
                      for ( i = v54; v20 < v13; v13 = *(unsigned __int16 *)(this + 8) )
                      {
                        v42 = v29;
                        v43 = v30;
                        v44 = v31;
                        v45 = v32;
                        v46 = v33;
                        v47 = v34;
                        v48 = v35;
                        v49 = v36;
                        v50 = v37;
                        v51 = i;
                        v52 = v39;
                        v41 = v28;
                        v24 = *(_DWORD *)(*(_DWORD *)(this + 0x10) + 4 * LOWORD(a3)) + ((v20 + v11 * v13) << 6);
                        ++v20;
                        *(float *)v24 = v28;
                        *(float *)(v24 + 4) = v42;
                        *(float *)(v24 + 8) = v43;
                        *(float *)(v24 + 0x10) = v44;
                        *(float *)(v24 + 0x14) = v45;
                        *(float *)(v24 + 0x18) = v46;
                        v24 += 0x10;
                        *(float *)(v24 + 0x10) = v47;
                        v24 += 0x10;
                        *(float *)(v24 + 4) = v48;
                        *(float *)(v24 + 8) = v49;
                        *(float *)(v24 + 0x10) = v50;
                        *(float *)(v24 + 0x14) = v51;
                        *(float *)(v24 + 0x18) = v52;
                      }
                      if ( ++v11 >= 2 * *(unsigned __int16 *)(this + 0x1C) )
                        break;
                      v16 = v22;
                      v15 = v23;
                      v14 = v16;
                    }
                    v10 = v40;
                  }
                  v10[0x3C] = 1;
                }
                qmemcpy(a2, v10, 0x3Cu);
                a2[2] = LOWORD(a3);
                *(_BYTE *)a2 = 1;
              }
            }
          }
        }
      }
    }
  }
}
