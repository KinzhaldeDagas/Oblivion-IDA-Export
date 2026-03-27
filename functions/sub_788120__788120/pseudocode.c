void __thiscall sub_788120(unsigned __int8 *this, int a2, int a3)
{
  int v4; // edi
  _BOOL2 v5; // cx
  unsigned __int16 v6; // bx
  int v7; // edx
  void *v8; // ecx
  int v9; // edx
  double v10; // st7
  float v11; // ebp
  bool v12; // zf
  int v14; // eax
  int v15; // eax
  double v16; // st7
  unsigned __int16 v17; // dx
  bool v18; // cl
  unsigned __int16 v19; // dx
  bool v20; // cl
  unsigned __int16 v21; // ax
  float v22; // [esp+14h] [ebp-4Ch]
  int v23; // [esp+38h] [ebp-28h]
  int v24; // [esp+3Ch] [ebp-24h]
  int v25; // [esp+40h] [ebp-20h] BYREF
  int v26; // [esp+44h] [ebp-1Ch] BYREF
  int v27; // [esp+48h] [ebp-18h] BYREF
  int v28; // [esp+4Ch] [ebp-14h]
  int v29; // [esp+50h] [ebp-10h]
  int v30; // [esp+54h] [ebp-Ch]
  void *v31; // [esp+58h] [ebp-8h]
  float v32; // [esp+5Ch] [ebp-4h]
  int v33; // [esp+64h] [ebp+4h]
  float v34; // [esp+64h] [ebp+4h]
  int v35; // [esp+64h] [ebp+4h]

  v4 = *(_DWORD *)(*(_DWORD *)this + 0xC0);
  v5 = byte_B4297C != 0;
  v6 = v4;
  v30 = dword_B2B6D8;
  v26 = (unsigned __int16)v4;
  v7 = (unsigned __int16)(v4 + v5);
  v8 = (void *)dword_B2B6DC;
  v29 = v7;
  v9 = dword_B2B6E0;
  v31 = v8;
  v32 = *(float *)&v9;
  v10 = *(float *)&v8;
  sub_98598A(v8);
  *(float *)&v27 = v10;
  *(float *)&v24 = *(float *)&v27 * dbl_A8BA48;
  *(float *)&v27 = asin(v32);
  v11 = 0.0;
  v12 = (_WORD)v4 == 0;
  *(float *)&v23 = *(float *)&v27 * dbl_A8BA50;
  if ( !v12 )
  {
    do
    {
      sub_7989B0(*((_DWORD *)this + 2), a2 + 0x78, v11, v24, v23, *((float *)this + 9));
      ++LODWORD(v11);
    }
    while ( LOWORD(v11) < *(_WORD *)(*(_DWORD *)this + 0xC0) );
    v6 = v26;
  }
  if ( (__int16)a3 <= (__int16)0xFFFFFFFF )
  {
    v14 = *((_DWORD *)this + 6);
    if ( v14 == 1 )
    {
      v15 = *((_DWORD *)this + 0xD);
      *(float *)&v25 = flt_A30634;
      v27 = v25;
      a3 = 0xFFFFFFFF;
      v26 = 0xFFFFFFFF;
      if ( v15 )
        v16 = *(float *)(v15 + 0x10);
      else
        v16 = *(float *)(*(_DWORD *)this + 0x14);
      v34 = v16;
      v28 = *(this + 0x44);
      v22 = (float)v28;
      sub_787220(
        v34,
        v29,
        *((float *)this + 7),
        *((float *)this + 0xA),
        *((float *)this + 8),
        v22,
        (float *)&v25,
        (float *)&v27,
        (__int16 *)&a3,
        &v26);
      v17 = a3;
      v18 = (_WORD)a3 != 0xFFFF && (__int16)a3 < (int)v6;
      *(_BYTE *)(a2 + 0x78) = v18;
      if ( v18 )
      {
        sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), v17, v24, v23, COERCE_INT(*((float *)this + 9)));
        *(float *)(a2 + 0x7C) = *(float *)&v25;
      }
      v19 = v26;
      v20 = (_WORD)v26 != 0xFFFF && (__int16)v26 < (int)v6;
      *(_BYTE *)(a2 + 0xB4) = v20;
      if ( v20 )
      {
        sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0xB4), v19, v24, v23, COERCE_INT(*((float *)this + 9)));
        *(float *)(a2 + 0xB8) = *(float *)&v27;
      }
    }
    else if ( v14 == 3 )
    {
      sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), 0, v24, v23, COERCE_INT(*((float *)this + 9)));
      *(_BYTE *)(a2 + 0x78) = 1;
      v35 = *(this + 0x44);
      *(_BYTE *)(a2 + 0xB4) = 0;
      *(float *)(a2 + 0x7C) = (float)v35;
    }
    else
    {
      v21 = sub_787CD0(this, flt_A30634);
      if ( v21 < *(_WORD *)(*(_DWORD *)this + 0xC0) )
      {
        sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), v21, v24, v23, COERCE_INT(*((float *)this + 9)));
        *(_BYTE *)(a2 + 0x78) = 1;
        *(float *)(a2 + 0x7C) = (float)*(this + 0x44);
      }
      *(_BYTE *)(a2 + 0xB4) = 0;
    }
  }
  else
  {
    sub_798630(*((_DWORD *)this + 2), (_DWORD *)(a2 + 0x78), a3, v24, v23, COERCE_INT(*((float *)this + 9)));
    *(_BYTE *)(a2 + 0x78) = 1;
    v33 = *(this + 0x44);
    *(_BYTE *)(a2 + 0xB4) = 0;
    *(float *)(a2 + 0x7C) = (float)v33;
  }
}
