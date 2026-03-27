char __thiscall sub_54C6B0(int *this, float a2, int a3)
{
  signed int v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // rt2
  double v10; // st6
  double v11; // st7
  double v12; // st7
  float v13; // [esp+4h] [ebp-14h]
  float v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h] BYREF
  float v17; // [esp+1Ch] [ebp+4h]
  float v18; // [esp+1Ch] [ebp+4h]
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+1Ch] [ebp+4h]
  float v21; // [esp+1Ch] [ebp+4h]
  float v22; // [esp+1Ch] [ebp+4h]
  float v23; // [esp+1Ch] [ebp+4h]

  if ( *((_BYTE *)this + 0x1DA) )
    return 0;
  v5 = sub_54A0B0(this);
  v15 = *(this + 0x67);
  v16 = *(this + 0x68);
  if ( v5 < 0xD )
    sub_54A120((float *)this, v5, (int)&v15, (int)&v16, a2);
  v14 = *(float *)&v15 - *((float *)this + 0x63);
  *(float *)&v15 = *(float *)&v16 - *((float *)this + 0x64);
  v17 = fTrackSpeed * a2;
  v6 = v17;
  v18 = -v17;
  if ( v14 <= v6 )
  {
    if ( v18 > (double)v14 )
      v14 = v18;
    v7 = v6;
    v8 = v18;
  }
  else
  {
    v7 = v6;
    v8 = v18;
    v14 = v7;
  }
  v9 = v7;
  v10 = v8;
  v11 = v9;
  v19 = v10;
  if ( *(float *)&v15 > v9 || (v11 = v19, v19 > (double)*(float *)&v15) )
    *(float *)&v15 = v11;
  v20 = v14 + *((float *)this + 0x63);
  v12 = v20;
  *((float *)this + 0x63) = v20;
  v21 = *((float *)this + 0x64) + *(float *)&v15;
  *((float *)this + 0x64) = v21;
  v22 = v21 - *((float *)this + 0x62);
  v13 = v22;
  v23 = v12 - *((float *)this + 0x61);
  sub_54B8C0((int)this, (int)this, v23, v13);
  return 1;
}
