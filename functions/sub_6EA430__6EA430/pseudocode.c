char __thiscall sub_6EA430(float *this, float a2, int a3, _DWORD *a4)
{
  double v4; // st7
  float *v6; // esi
  unsigned __int8 v7; // bl
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  char v16; // [esp+23h] [ebp-51h]
  float v17; // [esp+24h] [ebp-50h]
  float v18; // [esp+28h] [ebp-4Ch]
  float v19; // [esp+28h] [ebp-4Ch]
  float v20; // [esp+28h] [ebp-4Ch]
  float v21; // [esp+2Ch] [ebp-48h]
  float v22; // [esp+30h] [ebp-44h]
  float v23; // [esp+34h] [ebp-40h] BYREF
  float v24; // [esp+38h] [ebp-3Ch]
  float v25; // [esp+3Ch] [ebp-38h]
  float v26; // [esp+40h] [ebp-34h]
  float v27[4]; // [esp+44h] [ebp-30h] BYREF
  int v28[4]; // [esp+54h] [ebp-20h] BYREF
  int v29[4]; // [esp+64h] [ebp-10h] BYREF

  v4 = 0.0;
  v6 = this + 0xC;
  *(this + 0xC) = 0.0;
  v7 = 0;
  *(this + 0xD) = 0.0;
  v16 = 0;
  *(this + 0xE) = 0.0;
  *(this + 0xF) = 0.0;
  v17 = 0.0;
  if ( !*((_BYTE *)this + 0xD) )
    goto LABEL_16;
  do
  {
    v8 = *((_DWORD *)this + 5);
    v9 = 0x18 * v7;
    v10 = *(_DWORD *)(v8 + v9);
    v11 = v8 + v9;
    if ( v10 )
    {
      if ( v4 < *(float *)(v11 + 8) )
      {
        v18 = a2;
        if ( v4 != *(float *)(v11 + 8) )
        {
          if ( (*(_BYTE *)(this + 3) & 1) != 0 )
            v18 = *(float *)(v11 + 0x14);
          if ( flt_A79F00 != v18 )
          {
            v4 = 0.0;
            if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x58))(
                   COERCE_FLOAT(LODWORD(v18)),
                   a3,
                   &v23) )
            {
              if ( v17 > 0.0 )
              {
                v19 = v6[1] * v24 + *v6 * v23 + v6[2] * v25 + v6[3] * v26;
                if ( v19 < 0.0 )
                {
                  v12 = sub_714CC0(&v23, v27);
                  v23 = *v12;
                  v24 = v12[1];
                  v25 = v12[2];
                  v26 = v12[3];
                }
              }
              v13 = (float *)sub_72F930(&v23, (int)v28, *(float *)(*((_DWORD *)this + 5) + v9 + 8));
              v23 = *v13;
              v24 = v13[1];
              v25 = v13[2];
              v26 = v13[3];
              v14 = (float *)sub_72F930(v6, (int)v29, v17);
              *v6 = *v14;
              v6[1] = v14[1];
              v6[2] = v14[2];
              v6[3] = v14[3];
              v22 = *(this + 0xF);
              v21 = *(this + 0xE);
              v20 = *(this + 0xD);
              *v6 = v23 + *v6;
              v6[1] = v24 + v20;
              v6[2] = v25 + v21;
              v6[3] = v26 + v22;
              sub_715340(v6);
              v16 = 1;
              v17 = *(float *)(*((_DWORD *)this + 5) + v9 + 8) + v17;
              v4 = 0.0;
            }
          }
        }
      }
    }
    ++v7;
  }
  while ( v7 < *((_BYTE *)this + 0xD) );
  if ( v16 )
  {
    *a4 = *(_DWORD *)v6;
    a4[1] = *((_DWORD *)v6 + 1);
    a4[2] = *((_DWORD *)v6 + 2);
    a4[3] = *((_DWORD *)v6 + 3);
    return 1;
  }
  else
  {
LABEL_16:
    *(_DWORD *)v6 = dword_B3EBA0;
    *((_DWORD *)v6 + 1) = dword_B3EBA4;
    *((_DWORD *)v6 + 2) = dword_B3EBA8;
    *((_DWORD *)v6 + 3) = dword_B3EBAC;
    *a4 = *(_DWORD *)v6;
    a4[1] = *((_DWORD *)v6 + 1);
    a4[2] = *((_DWORD *)v6 + 2);
    a4[3] = *((_DWORD *)v6 + 3);
    return 0;
  }
}
