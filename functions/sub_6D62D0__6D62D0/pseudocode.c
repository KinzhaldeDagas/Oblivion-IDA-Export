void __thiscall sub_6D62D0(float *this)
{
  float *v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  float *v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  char v11; // bl
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int v14; // ebp
  int v15; // eax
  float *v16; // edi
  char v17; // bl
  unsigned int v18; // esi
  int v19; // ecx
  unsigned int v20; // esi
  int v21; // eax
  int v22; // edi
  char v23; // bl
  unsigned int v24; // edx
  int v25; // eax
  void (__thiscall ***v26)(_DWORD, int); // esi
  bool v27; // zf
  float v29; // [esp+54h] [ebp-34h]
  float v30; // [esp+58h] [ebp-30h] BYREF
  float v31; // [esp+5Ch] [ebp-2Ch]
  float v32; // [esp+60h] [ebp-28h]
  float v33; // [esp+64h] [ebp-24h]
  _DWORD v34[8]; // [esp+68h] [ebp-20h] BYREF

  v1 = this;
  v2 = *((_DWORD *)this + 0xB);
  if ( v2 )
  {
    v3 = dword_B24260;
    v4 = dword_B24264;
    *(float *)&v34[7] = flt_A79E10;
    v5 = dword_B24268;
    v6 = *(float **)(v2 + 0x24);
    v34[0] = v3;
    v34[3] = dword_B3CBA4;
    v34[6] = dword_B3CBB0;
    v7 = *(unsigned __int16 *)(v2 + 0xA);
    v34[1] = v4;
    v8 = dword_B3CBA8;
    v34[2] = v5;
    v9 = dword_B3CBAC;
    v34[4] = v8;
    v10 = *(_DWORD *)(v2 + 0x14);
    v34[5] = v9;
    if ( !v7 )
    {
      sub_6E1F00((_DWORD *)v2, 0, 0, 0);
LABEL_13:
      if ( -flt_A7DEB4 != v1[3] )
        sub_471390(v34, v1 + 3);
LABEL_15:
      v13 = *((_DWORD *)v1 + 0xB);
      v14 = *(unsigned __int16 *)(v13 + 8);
      v15 = *(_DWORD *)(v13 + 0x10);
      v16 = *(float **)(v13 + 0x20);
      if ( !*(_WORD *)(v13 + 8) )
      {
        sub_6E1E90(v13, v14, v14, *(unsigned __int16 *)(v13 + 8));
        if ( -flt_A7DEB4 == v1[7] )
          goto LABEL_35;
LABEL_34:
        sub_471430(v34, v1 + 6);
        goto LABEL_35;
      }
      v30 = v16[1];
      v31 = v16[2];
      v32 = v16[3];
      v33 = v16[4];
      if ( v14 != 1 || v15 == 4 )
      {
        if ( v15 != 1 && v15 != 5 )
        {
LABEL_33:
          if ( -flt_A7DEB4 == v1[7] )
            goto LABEL_35;
          goto LABEL_34;
        }
        v17 = 1;
        v18 = 1;
        while ( v18 < v14 )
        {
          if ( v30 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 4)
            || v31 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 8)
            || v32 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 0xC)
            || v33 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 0x10) )
          {
            v17 = 0;
          }
          ++v18;
          if ( !v17 )
          {
            v1 = this;
            goto LABEL_33;
          }
        }
        v1 = this;
      }
      sub_6E1E90(v13, 0, 0, 0);
      sub_471430(v34, &v30);
LABEL_35:
      v19 = *((_DWORD *)v1 + 0xB);
      v20 = *(unsigned __int16 *)(v19 + 0xC);
      v21 = *(_DWORD *)(v19 + 0x18);
      v22 = *(_DWORD *)(v19 + 0x28);
      if ( *(_WORD *)(v19 + 0xC) )
      {
        v29 = *(float *)(v22 + 4);
        if ( v20 == 1 )
          goto LABEL_64;
        if ( v21 == 1 || v21 == 5 )
        {
          v23 = 1;
          v24 = 1;
          while ( v24 < v20 )
          {
            if ( v29 != *(float *)(v24 * *(unsigned __int8 *)(v19 + 0x1E) + v22 + 4) )
              v23 = 0;
            ++v24;
            if ( !v23 )
            {
              v1 = this;
              goto LABEL_48;
            }
          }
          v27 = v23 == 0;
          v1 = this;
          if ( !v27 )
          {
LABEL_64:
            sub_6E1F60((_DWORD *)v19, 0, 0, 0);
            goto LABEL_50;
          }
        }
      }
      else
      {
        sub_6E1F60((_DWORD *)v19, v20, v20, *(unsigned __int16 *)(v19 + 0xC));
      }
LABEL_48:
      if ( -flt_A7DEB4 == v1[0xA] )
      {
LABEL_53:
        v25 = *((_DWORD *)v1 + 0xB);
        if ( !*(_WORD *)(v25 + 0xA) && !*(_WORD *)(v25 + 8) && !*(_WORD *)(v25 + 0xC) )
        {
          v26 = *((void (__thiscall ****)(_DWORD, int))v1 + 0xB);
          if ( v25 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
            {
              if ( v26 )
                (**v26)(v26, 1);
            }
            v1[0xB] = 0.0;
          }
        }
        qmemcpy(v1 + 3, v34, 0x20u);
        return;
      }
      v29 = v1[0xA];
LABEL_50:
      if ( !_isnan(v29) )
      {
        if ( _finite(v29) )
          *(float *)&v34[7] = v29;
      }
      goto LABEL_53;
    }
    v30 = v6[1];
    v31 = v6[2];
    v32 = v6[3];
    if ( v7 != 1 )
    {
      if ( v10 != 1 && v10 != 5 )
        goto LABEL_13;
      v11 = 1;
      v12 = 1;
      while ( v12 < *(unsigned __int16 *)(v2 + 0xA) )
      {
        if ( sub_8AA390((float *)((char *)v6 + v12 * *(unsigned __int8 *)(v2 + 0x1D) + 4), &v30) )
          v11 = 0;
        ++v12;
        if ( !v11 )
        {
          v1 = this;
          goto LABEL_13;
        }
      }
      v1 = this;
    }
    sub_6E1F00((_DWORD *)v2, 0, 0, 0);
    sub_471390(v34, &v30);
    goto LABEL_15;
  }
}
