int __thiscall sub_788430(unsigned __int8 *this, int a2)
{
  int v3; // eax
  __int16 v4; // cx
  unsigned __int16 v5; // bp
  int v6; // ecx
  double v7; // st7
  int v8; // ecx
  double v9; // st7
  int v11; // eax
  double v12; // st6
  int result; // eax
  double v14; // st7
  float v15; // [esp+14h] [ebp-3Ch]
  float v16; // [esp+38h] [ebp-18h]
  int v17; // [esp+3Ch] [ebp-14h] BYREF
  int v18; // [esp+40h] [ebp-10h] BYREF
  int v19; // [esp+44h] [ebp-Ch] BYREF
  int v20; // [esp+48h] [ebp-8h] BYREF
  int v21; // [esp+4Ch] [ebp-4h]
  float v22; // [esp+54h] [ebp+4h]

  if ( !byte_B4297C )
  {
    *(_BYTE *)(a2 + 0xF0) = 0;
    *(_BYTE *)(a2 + 0x104) = 0;
    *(_BYTE *)(a2 + 0x118) = 0;
    return a2;
  }
  v3 = *(_DWORD *)this;
  v4 = *(_WORD *)(*(_DWORD *)this + 0xC0);
  *(float *)&v18 = flt_A30634;
  v20 = v18;
  v5 = v4 + 1;
  v17 = 0xFFFFFFFF;
  v19 = 0xFFFFFFFF;
  v6 = *((_DWORD *)this + 0xD);
  if ( v6 )
    v7 = *(float *)(v6 + 0x10);
  else
    v7 = *(float *)(v3 + 0x14);
  v16 = v7;
  v21 = *(this + 0x44);
  v15 = (float)v21;
  sub_787220(
    v16,
    v5,
    *((float *)this + 7),
    *((float *)this + 0xA),
    *((float *)this + 8),
    v15,
    (float *)&v18,
    (float *)&v20,
    (__int16 *)&v17,
    &v19);
  v8 = (__int16)v17;
  v9 = flt_A30634;
  *(float *)(a2 + 0xFC) = flt_A30634;
  v11 = v5 - 1;
  if ( v8 == v11 )
  {
    v12 = *(float *)&v18;
LABEL_9:
    *(float *)(a2 + 0xFC) = v12;
    goto LABEL_10;
  }
  if ( (__int16)v19 == v11 )
  {
    v12 = *(float *)&v20;
    goto LABEL_9;
  }
LABEL_10:
  result = v9 != *(float *)(a2 + 0xFC);
  *(_BYTE *)(a2 + 0xF0) = result;
  *(_WORD *)(a2 + 0x100) = 0;
  if ( (_BYTE)result )
  {
    *(_DWORD *)(a2 + 0xF8) = sub_7878F0(
                               *((float **)this + 5),
                               *(float *)(*((_DWORD *)this + 0x10) + 0x18),
                               *(float *)(*((_DWORD *)this + 0x10) + 0x14));
    result = *((_DWORD *)this + 0x13);
    if ( result )
    {
      result = *(_DWORD *)(result + 0xC);
      *(_DWORD *)(a2 + 0xF4) = result;
    }
    else
    {
      *(_DWORD *)(a2 + 0xF4) = 0;
    }
  }
  *(_BYTE *)(a2 + 0x104) = 0;
  *(_WORD *)(a2 + 0x114) = 0;
  if ( *(this + 0x6D) )
  {
    *(_DWORD *)(a2 + 0x120) = this + 0x70;
    if ( *((_DWORD *)this + 0x13) )
      *(_DWORD *)(a2 + 0x11C) = 0x20 * *(_DWORD *)(*((_DWORD *)this + 0x13) + 8)
                              + *(_DWORD *)(*((_DWORD *)this + 0x13) + 0xC)
                              - 0x20;
    else
      *(_DWORD *)(a2 + 0x11C) = 0;
    v22 = *(float *)(a2 + 0xFC);
    *(float *)(a2 + 0x124) = v22;
    result = v22 >= 0.0;
    *(_BYTE *)(a2 + 0x118) = result;
    v14 = flt_B2B604;
    *(_WORD *)(a2 + 0x128) = 0;
    *(float *)(a2 + 0x124) = v14;
  }
  else
  {
    *(_BYTE *)(a2 + 0x118) = 0;
    *(_WORD *)(a2 + 0x128) = 0;
  }
  return result;
}
