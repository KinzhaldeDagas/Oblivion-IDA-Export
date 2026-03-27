void __thiscall sub_787DC0(float *this, int a2, float a3)
{
  char v3; // bl
  unsigned __int16 v5; // bp
  double v6; // st7
  bool v8; // zf
  signed __int16 v9; // bx
  double v10; // st6
  int v11; // eax
  double v12; // rt0
  double v13; // st6
  double v14; // st7
  double v15; // rt1
  double v16; // rt2
  double v17; // st6
  int v18; // edx
  void *v19; // ecx
  double v20; // st7
  int v21; // eax
  bool v22; // al
  unsigned __int16 v23; // dx
  bool v24; // cl
  unsigned __int16 v25; // ax
  float v26; // [esp+14h] [ebp-48h]
  int v27; // [esp+38h] [ebp-24h] BYREF
  int v28; // [esp+3Ch] [ebp-20h] BYREF
  int v29; // [esp+40h] [ebp-1Ch] BYREF
  int v30; // [esp+44h] [ebp-18h] BYREF
  int v31; // [esp+48h] [ebp-14h]
  int v32; // [esp+4Ch] [ebp-10h]
  int v33; // [esp+50h] [ebp-Ch]
  float v34; // [esp+54h] [ebp-8h]
  float v35; // [esp+58h] [ebp-4h]
  float v36; // [esp+60h] [ebp+4h]
  float v37; // [esp+60h] [ebp+4h]
  int v38; // [esp+60h] [ebp+4h]
  int v39; // [esp+60h] [ebp+4h]
  int v40; // [esp+64h] [ebp+8h]

  v3 = byte_B4297C;
  *(float *)&v27 = flt_A30634;
  v29 = v27;
  v31 = *(unsigned __int16 *)(*(_DWORD *)this + 0xC0);
  v30 = 0xFFFFFFFF;
  v28 = 0xFFFFFFFF;
  v5 = v31 + (v3 != 0);
  v32 = *((unsigned __int8 *)this + 0x44);
  v26 = (float)v32;
  sub_787220(a3, v5, *(this + 7), *(this + 0xA), *(this + 8), v26, (float *)&v27, (float *)&v29, (__int16 *)&v30, &v28);
  v6 = *(float *)&v27;
  v8 = v3 == 0;
  v9 = v30;
  if ( v8 )
  {
    *(_BYTE *)(a2 + 0xF0) = 0;
  }
  else
  {
    v10 = flt_A30634;
    *(float *)(a2 + 0xFC) = flt_A30634;
    v11 = v5 - 1;
    if ( v9 == v11 )
    {
      v12 = v10;
      v13 = v6;
      v14 = v12;
      *(float *)(a2 + 0xFC) = v13;
    }
    else
    {
      if ( (__int16)v28 == v11 )
        *(float *)(a2 + 0xFC) = *(float *)&v29;
      v15 = v10;
      v13 = v6;
      v14 = v15;
    }
    v16 = v13;
    v17 = v14;
    v6 = v16;
    *(_BYTE *)(a2 + 0xF0) = v17 != *(float *)(a2 + 0xFC);
  }
  if ( a3 >= 0.0 )
  {
    if ( byte_B4297C )
    {
      if ( v9 != v5 - 2 )
      {
        if ( v9 == v5 - 1 )
          v6 = flt_A40098;
        else
          v6 = (double)*((unsigned __int8 *)this + 0x44);
      }
    }
    else
    {
      v6 = (double)*((unsigned __int8 *)this + 0x44);
    }
    *(float *)(a2 + 0x38) = v6;
    v18 = dword_B2B6D8;
    v19 = (void *)dword_B2B6E0;
    v34 = *(float *)&dword_B2B6DC;
    v20 = v34;
    v33 = v18;
    v35 = *(float *)&v19;
    sub_98598A(v19);
    v36 = v20;
    *(float *)&v40 = v36 * dbl_A8BA48;
    v37 = asin(v35);
    v21 = *((_DWORD *)this + 6);
    *(float *)&v38 = v37 * dbl_A8BA50;
    if ( v21 == 1 )
    {
      sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), 0, v40, v38, COERCE_INT(*(this + 9)));
      v22 = v9 != (signed __int16)0xFFFF && v9 < (int)(unsigned __int16)v31;
      *(_BYTE *)(a2 + 0x78) = v22;
      if ( v22 )
      {
        sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), v9, v40, v38, COERCE_INT(*(this + 9)));
        *(float *)(a2 + 0x7C) = *(float *)&v27;
      }
      v23 = v28;
      v24 = (_WORD)v28 != 0xFFFF && (__int16)v28 < (int)(unsigned __int16)v31;
      *(_BYTE *)(a2 + 0xB4) = v24;
      if ( v24 )
      {
        sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0xB4), v23, v40, v38, COERCE_INT(*(this + 9)));
        *(float *)(a2 + 0xB8) = *(float *)&v29;
      }
    }
    else if ( v21 == 3 )
    {
      sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), 0, v40, v38, COERCE_INT(*(this + 9)));
      *(_BYTE *)(a2 + 0x78) = 1;
      v39 = *((unsigned __int8 *)this + 0x44);
      *(_BYTE *)(a2 + 0xB4) = 0;
      *(float *)(a2 + 0x7C) = (float)v39;
    }
    else
    {
      v25 = sub_787CD0(this, flt_A30634);
      if ( v25 < *(_WORD *)(*(_DWORD *)this + 0xC0) )
      {
        sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), v25, v40, v38, COERCE_INT(*(this + 9)));
        *(_BYTE *)(a2 + 0x78) = 1;
        *(float *)(a2 + 0x7C) = (float)*((unsigned __int8 *)this + 0x44);
      }
      *(_BYTE *)(a2 + 0xB4) = 0;
    }
  }
}
