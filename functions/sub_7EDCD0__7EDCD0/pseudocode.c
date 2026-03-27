void __cdecl sub_7EDCD0(int a1, int a2, float a3)
{
  int v3; // esi
  void (__thiscall ***v4)(_DWORD, int); // edi
  char v5; // bl
  double v6; // st7
  float v7; // edx
  float v8; // eax
  bool v9; // zf
  double v10; // st6
  float v11; // edx
  float v12; // eax
  double v13; // st6
  double v14; // st6
  float v15; // edx
  float v16; // eax
  float v17; // ecx
  double v18; // st7
  float v19; // edx
  double v20; // st7
  float v21; // eax
  double v22; // st2
  double v23; // st6
  double v24; // st3
  double v25; // st3
  char v26; // cl
  double v27; // st6
  float v28; // edx
  float v29; // ecx
  float v30; // edx
  int v31; // [esp+1Ch] [ebp-34h] BYREF
  float v32; // [esp+20h] [ebp-30h]
  NiPoint3 v33; // [esp+24h] [ebp-2Ch] BYREF
  float v34; // [esp+30h] [ebp-20h]
  NiPoint3 v35; // [esp+34h] [ebp-1Ch] BYREF
  float x; // [esp+40h] [ebp-10h]
  int y_low; // [esp+44h] [ebp-Ch]
  int z_low; // [esp+48h] [ebp-8h]
  float v39; // [esp+4Ch] [ebp-4h]

  if ( a1 < 0x14 )
  {
    if ( !a2 )
    {
      sub_7FAB00(a1, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC);
      return;
    }
    v3 = *sub_405AD0((_DWORD *)a2, &v31);
    if ( v31 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
        (**v4)(v4, 1);
    }
    v5 = *(_BYTE *)(a2 + 0xFC);
    v6 = a3;
    if ( v5 )
    {
      if ( !v3 )
      {
LABEL_28:
        v26 = UseHDR;
        v27 = *(float *)(v3 + 0xDC);
        if ( !UseHDR && v27 > dbl_A2F928 )
          v27 = (float)1.0;
        v28 = *(float *)(v3 + 0xF0);
        v35.x = *(float *)(v3 + 0xEC);
        v35.z = *(float *)(v3 + 0xF4);
        v35.x = v35.x * v27;
        v35.y = v28 * v27;
        v35.z = v27 * v35.z;
        v33.x = v35.x * v6;
        v33.y = v35.y * v6;
        v33.z = v35.z * v6;
        v32 = *(float *)(a2 + 0xD4);
        v33.x = v32 * v33.x;
        v33.y = v32 * v33.y;
        v33.z = v32 * v33.z;
        if ( v5 )
        {
          if ( v6 < 1.0 )
          {
            v29 = *(float *)&dword_B3FA94;
            v30 = *(float *)&dword_B3FA98;
            LODWORD(v33.x) = dword_B3FA90;
            v33.y = v29;
            v33.z = v30;
          }
        }
        else if ( v26 )
        {
          if ( !byte_B43074 )
            NiPoint3::MutliplyByValue(&v33, flt_B42F4C);
        }
        x = v33.x;
        y_low = SLODWORD(v33.y);
        z_low = SLODWORD(v33.z);
        sub_7FAB00(a1, SLODWORD(v33.x), SLODWORD(v33.y), SLODWORD(v33.z), COERCE_INT(*(float *)(a2 + 0xD8)));
        return;
      }
      v15 = *(float *)(v3 + 0x8C);
      v16 = *(float *)(v3 + 0x90);
      v35.x = *(float *)(v3 + 0x88);
      v17 = *(float *)(v3 + 0xF8);
      x = v35.x;
      v35.y = v15;
      v18 = v15;
      v19 = *(float *)(v3 + 0xFC);
      *(float *)&y_low = v18;
      v35.z = v16;
      v20 = v16;
      v21 = *(float *)(v3 + 0x100);
      *(float *)&z_low = v20;
      v33.x = v17;
      v39 = v17;
      v33.z = v21;
      v33.y = v19;
      sub_7FAAD0(a1, SLODWORD(v35.x), y_low, z_low, SLODWORD(v17));
    }
    else
    {
      if ( v3 )
      {
        v7 = *(float *)(v3 + 0x10C);
        v8 = *(float *)(v3 + 0x110);
        v35.x = *(float *)(v3 + 0x108);
        v35.y = v7;
        v35.z = v8;
        sub_43F350(&v35.x);
        v33.x = v35.x;
        v33.y = v35.y;
        v33.z = v35.z;
        v34 = 1.0;
        sub_7FAAD0(a1, SLODWORD(v35.x), SLODWORD(v35.y), SLODWORD(v35.z), COERCE_INT(1.0));
        v6 = a3;
      }
      if ( !byte_B42EA7 )
        goto LABEL_13;
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B40224, (NiObject *)v3) )
      {
        v6 = a3;
LABEL_13:
        v9 = UseHDR == 0;
        v32 = flt_B46924;
        v10 = *(float *)(v3 + 0xDC);
        if ( v9 && v10 > dbl_A2F928 )
          v10 = (float)1.0;
        v11 = *(float *)(v3 + 0xE4);
        v12 = *(float *)(v3 + 0xE8);
        v33.x = *(float *)(v3 + 0xE0);
        v33.x = v33.x * v10;
        v33.y = v11 * v10;
        v33.z = v10 * v12;
        if ( v32 > 0.0 )
        {
          v32 = dbl_A924F0 + v33.x * dbl_A924F0 + dbl_A924F8 * v33.y + v33.z;
          v13 = v32;
          if ( v32 > 0.0 )
          {
            v22 = flt_B46924;
            if ( v22 >= v13 )
            {
              v24 = v22 / v13;
              v23 = v33.x;
            }
            else
            {
              v23 = v33.x;
              v24 = 1.0;
            }
            v32 = v24;
            v25 = dbl_A2FC80;
            v35.x = (v23 + v25) * v32;
            v35.y = (v33.y + v25) * v32;
            v14 = v32 * (v25 + v33.z);
          }
          else
          {
            v14 = flt_B46924;
            v35.x = v14;
            v35.y = v14;
          }
          v35.z = v14;
          v33 = v35;
        }
        v33.x = v33.x * v6;
        v33.y = v33.y * v6;
        v33.z = v6 * v33.z;
        x = v33.x;
        y_low = SLODWORD(v33.y);
        z_low = SLODWORD(v33.z);
        v39 = 1.0;
        sub_7FAB30(SLODWORD(v33.x), SLODWORD(v33.y), SLODWORD(v33.z), COERCE_INT(1.0));
      }
    }
    v6 = a3;
    goto LABEL_28;
  }
}
