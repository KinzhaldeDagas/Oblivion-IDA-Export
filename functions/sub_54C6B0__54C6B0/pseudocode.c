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

  if ( *((_BYTE *)this + 0x1DA) ) /*0x54c6b6*/
    return 0; /*0x54c6bf*/
  v5 = sub_54A0B0(this); /*0x54c6c8*/
  v15 = *(this + 0x67); /*0x54c6d6*/
  v16 = *(this + 0x68); /*0x54c6e0*/
  if ( v5 < 0xD ) /*0x54c6e4*/
    sub_54A120((float *)this, v5, (int)&v15, (int)&v16, a2); /*0x54c6fb*/
  v14 = *(float *)&v15 - *((float *)this + 0x63); /*0x54c70a*/
  *(float *)&v15 = *(float *)&v16 - *((float *)this + 0x64); /*0x54c718*/
  v17 = MEMORY[0xB39AF0] * a2; /*0x54c726*/
  v6 = v17; /*0x54c72a*/
  v18 = -v17; /*0x54c732*/
  if ( v14 <= v6 ) /*0x54c749*/
  {
    if ( v18 > (double)v14 ) /*0x54c762*/
      v14 = v18; /*0x54c764*/
    v7 = v6; /*0x54c76c*/
    v8 = v18; /*0x54c76c*/
  }
  else
  {
    v7 = v6; /*0x54c74d*/
    v8 = v18; /*0x54c74d*/
    v14 = v7; /*0x54c74f*/
  }
  v9 = v7; /*0x54c76e*/
  v10 = v8; /*0x54c76e*/
  v11 = v9; /*0x54c76e*/
  v19 = v10; /*0x54c770*/
  if ( *(float *)&v15 > v9 || (v11 = v19, v19 > (double)*(float *)&v15) ) /*0x54c798*/
    *(float *)&v15 = v11; /*0x54c783*/
  v20 = v14 + *((float *)this + 0x63); /*0x54c7ab*/
  v12 = v20; /*0x54c7af*/
  *((float *)this + 0x63) = v20; /*0x54c7b3*/
  v21 = *((float *)this + 0x64) + *(float *)&v15; /*0x54c7c3*/
  *((float *)this + 0x64) = v21; /*0x54c7cb*/
  v22 = v21 - *((float *)this + 0x62); /*0x54c7d7*/
  v13 = v22; /*0x54c7df*/
  v23 = v12 - *((float *)this + 0x61); /*0x54c7e9*/
  sub_54B8C0((int)this, (int)this, v23, v13); /*0x54c7f4*/
  return 1; /*0x54c6c1*/
}
