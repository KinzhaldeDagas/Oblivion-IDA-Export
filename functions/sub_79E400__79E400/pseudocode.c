void __thiscall __noreturn sub_79E400(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  char *v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  _DWORD *v14; // ecx
  _DWORD v15[6]; // [esp+0h] [ebp-60h] BYREF
  _DWORD *v16; // [esp+18h] [ebp-48h]
  unsigned int v17; // [esp+1Ch] [ebp-44h]
  _BYTE v18[4]; // [esp+20h] [ebp-40h] BYREF
  unsigned int v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+34h] [ebp-2Ch]
  unsigned int v21; // [esp+38h] [ebp-28h]
  float v22; // [esp+3Ch] [ebp-24h]
  float v23; // [esp+40h] [ebp-20h]
  float v24; // [esp+44h] [ebp-1Ch]
  float v25; // [esp+48h] [ebp-18h]
  _DWORD *v26; // [esp+50h] [ebp-10h]
  int v27; // [esp+5Ch] [ebp-4h]

  v26 = v15;
  v5 = 0;
  v16 = this;
  v21 = 0xF;
  v20 = 0;
  LOBYTE(v19) = 0;
  sub_414420((int)v18, (_DWORD *)a5, 0, 0xFFFFFFFF);
  v22 = *(float *)(a5 + 0x1C);
  v23 = *(float *)(a5 + 0x20);
  v24 = *(float *)(a5 + 0x24);
  v25 = *(float *)(a5 + 0x28);
  v7 = *(this + 1);
  v27 = 0;
  if ( v7 )
    v5 = (*(this + 3) - v7) / 0x2C;
  if ( a4 )
  {
    if ( v7 )
      v8 = (*(this + 2) - v7) / 0x2C;
    else
      v8 = 0;
    if ( 0x5D1745D - v8 < a4 )
      sub_790B90(v5);
    if ( v7 )
      v9 = (*(this + 2) - v7) / 0x2C;
    else
      v9 = 0;
    if ( v5 < a4 + v9 )
    {
      if ( 0x5D1745D - (v5 >> 1) >= v5 )
        v10 = (char *)((v5 >> 1) + v5);
      else
        v10 = 0;
      if ( v7 )
        v11 = (*(this + 2) - v7) / 0x2C;
      else
        v11 = 0;
      if ( (unsigned int)v10 < a4 + v11 )
        v10 = (char *)(a4 + sub_6F1140(this));
      v12 = sub_556440(v10);
      v13 = *(this + 1);
      LOBYTE(v17) = 0;
      v15[4] = v12;
      v15[5] = v12;
      LOBYTE(v27) = 1;
      sub_79B470(v13, a3, v12);
    }
    v14 = (_DWORD *)*(this + 2);
    v17 = (unsigned int)v14;
    if ( ((int)v14 - a3) / 0x2C < a4 )
    {
      v17 = 0x2C * a4;
      sub_79E0F0(this, a3, (int)v14, (_DWORD *)(a3 + 0x2C * a4));
    }
    v16 = &v14[0xFFFFFFF5 * a4];
    sub_79E0F0(this, (int)v16, (int)v14, v14);
  }
  if ( v21 >= 0x10 )
    FormHeapFree(v19);
}
