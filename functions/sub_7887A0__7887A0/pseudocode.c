int __thiscall sub_7887A0(unsigned __int8 *this, float a2, char a3)
{
  float v3; // edi
  int result; // eax
  unsigned __int16 v6; // bx
  float v7; // edx
  double v8; // st6
  int v9; // eax
  double v10; // st5
  double v11; // st7
  double v12; // st6
  double v13; // st5
  int v14; // edx
  double v15; // st5
  double v16; // st4
  double v17; // st7
  __int16 v18; // cx
  __int16 i; // dx
  double v20; // st7
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  double v24; // st7
  double v25; // st6
  double v26; // st7
  double v27; // st5
  double v28; // rt1
  double v29; // st5
  double v30; // st7
  int v31; // esi
  double v32; // st5
  float v33; // [esp+8h] [ebp-60h]
  float v34; // [esp+Ch] [ebp-5Ch]
  float v35; // [esp+10h] [ebp-58h]
  float v36; // [esp+14h] [ebp-54h]
  float v37; // [esp+38h] [ebp-30h]
  int v38; // [esp+3Ch] [ebp-2Ch] BYREF
  int v39; // [esp+40h] [ebp-28h] BYREF
  int v40; // [esp+44h] [ebp-24h] BYREF
  float v41; // [esp+48h] [ebp-20h]
  float v42; // [esp+4Ch] [ebp-1Ch]
  void *v43; // [esp+50h] [ebp-18h]
  float v44; // [esp+54h] [ebp-14h]
  int v45; // [esp+58h] [ebp-10h]
  float v46; // [esp+5Ch] [ebp-Ch]
  float v47; // [esp+60h] [ebp-8h]

  v3 = a2;
  result = sub_788430(this, SLODWORD(a2));
  if ( *(_BYTE *)(LODWORD(v3) + 0xF0) )
  {
    v6 = *((_WORD *)this + 0x2A);
    if ( v6 )
    {
      LODWORD(a2) = *(this + 0x44);
      v7 = *(float *)&dword_B2B6DC;
      v8 = *(float *)(LODWORD(v3) + 0xFC);
      v9 = dword_B2B6E0;
      v43 = (void *)dword_B2B6D8;
      v44 = v7;
      v10 = dbl_A3DDD8;
      v45 = v9;
      v37 = (v8 - (double)SLODWORD(a2)) / (v10 - (double)SLODWORD(a2));
      v46 = -*(float *)&v43;
      v47 = -v7;
      sub_98598A(v43);
      a2 = v47 * dbl_A8BA48;
      v11 = a2;
      v12 = dbl_A56CA0;
      if ( a2 < 0.0 )
      {
        a2 = v11 + v12;
        v11 = a2;
      }
      a2 = flt_A30634;
      *(float *)&v38 = a2;
      LODWORD(v41) = v6;
      v13 = dbl_A2FAA0 / (double)v6;
      v14 = *(this + 0x44);
      v39 = 0xFFFFFFFF;
      v40 = 0xFFFFFFFF;
      v41 = v13;
      v42 = v41;
      v41 = *(float *)&v14;
      v36 = (float)v14;
      v35 = *((float *)this + 8);
      v34 = *((float *)this + 0xA);
      v33 = v42;
      v15 = v42;
      v42 = 1.0 - v42;
      v16 = v11;
      v17 = v42 - v15;
      v42 = v16 / v12;
      v42 = v17 * v42 + v15;
      sub_787220(v42, v6, v33, v34, v35, v36, &a2, (float *)&v38, (__int16 *)&v39, &v40);
      v18 = *((_WORD *)this + 0x2A) - v39 - 1;
      for ( i = *((_WORD *)this + 0x2A) - v40 - 1; v18 >= (int)v6; v18 -= v6 )
        ;
      for ( ; i >= (int)v6; i -= v6 )
        ;
      if ( (a3 & 0x20) != 0 )
      {
        v20 = a2;
        *(_BYTE *)(LODWORD(v3) + 0xF0) = 1;
        if ( *(float *)&v38 <= v20 )
        {
          v23 = i;
          v21 = *((_DWORD *)this + 0x13);
          v22 = 0x20 * v23;
        }
        else
        {
          v21 = *((_DWORD *)this + 0x13);
          v22 = 0x20 * v18;
        }
        *(_DWORD *)(LODWORD(v3) + 0xF4) = *(_DWORD *)(v21 + 0xC) + v22;
        result = *(this + 0x44);
        a2 = (float)result;
        v24 = a2;
        v25 = a2;
        *(_BYTE *)(LODWORD(v3) + 0x104) = 0;
        *(float *)(LODWORD(v3) + 0xFC) = v24 + (dbl_A3DDD8 - v25) * v37;
      }
      else
      {
        result = *((_DWORD *)this + 0x13);
        if ( result )
          *(_DWORD *)(LODWORD(v3) + 0xF4) = *(_DWORD *)(result + 0xC) + 0x20 * v18;
        else
          *(_DWORD *)(LODWORD(v3) + 0xF4) = 0;
        v26 = a2;
        *(_WORD *)(LODWORD(v3) + 0x100) = v18;
        v27 = dbl_A3DDD8;
        *(_DWORD *)(LODWORD(v3) + 0x10C) = *(_DWORD *)(LODWORD(v3) + 0xF8);
        v28 = v27;
        v29 = v26 + (v27 - v26) * v37;
        v30 = v28;
        *(float *)(LODWORD(v3) + 0xFC) = v29;
        v31 = *((_DWORD *)this + 0x13);
        if ( v31 )
        {
          result = *(_DWORD *)(v31 + 0xC) + 0x20 * i;
          *(_DWORD *)(LODWORD(v3) + 0x108) = result;
        }
        else
        {
          *(_DWORD *)(LODWORD(v3) + 0x108) = 0;
        }
        v32 = *(float *)&v38;
        *(_WORD *)(LODWORD(v3) + 0x114) = i;
        *(_BYTE *)(LODWORD(v3) + 0x104) = 1;
        *(float *)(LODWORD(v3) + 0x110) = v32 + v37 * (v30 - v32);
      }
    }
  }
  return result;
}
