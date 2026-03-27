void __thiscall __noreturn sub_6F3B50(_DWORD *this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  char *v13; // edi
  int v14; // eax
  unsigned int *v15; // eax
  _DWORD *v16; // ecx
  char *v17; // ecx
  _DWORD v18[6]; // [esp+0h] [ebp-60h] BYREF
  char *v19; // [esp+18h] [ebp-48h]
  unsigned int v20; // [esp+1Ch] [ebp-44h]
  int v21; // [esp+20h] [ebp-40h]
  int v22; // [esp+24h] [ebp-3Ch]
  int v23; // [esp+28h] [ebp-38h]
  int v24; // [esp+2Ch] [ebp-34h]
  char v25[4]; // [esp+30h] [ebp-30h] BYREF
  unsigned int v26; // [esp+34h] [ebp-2Ch]
  int v27; // [esp+44h] [ebp-1Ch]
  unsigned int v28; // [esp+48h] [ebp-18h]
  _DWORD *v29; // [esp+50h] [ebp-10h]
  int v30; // [esp+5Ch] [ebp-4h]

  v29 = v18;
  v5 = a5[1];
  v21 = *a5;
  v7 = a5[2];
  v22 = v5;
  v8 = a5[3];
  v9 = 0;
  v23 = v7;
  v19 = (char *)this;
  v24 = v8;
  v28 = 0xF;
  v27 = 0;
  LOBYTE(v26) = 0;
  sub_414420((int)v25, a5 + 4, 0, 0xFFFFFFFF);
  v10 = *(this + 1);
  v30 = 0;
  if ( v10 )
    v9 = (*(this + 3) - v10) / 0x2C;
  if ( a4 )
  {
    if ( v10 )
      v11 = (*(this + 2) - v10) / 0x2C;
    else
      v11 = 0;
    if ( 0x5D1745D - v11 < a4 )
      sub_790B90();
    if ( v10 )
      v12 = (*(this + 2) - v10) / 0x2C;
    else
      v12 = 0;
    if ( v9 < a4 + v12 )
    {
      if ( 0x5D1745D - (v9 >> 1) >= v9 )
        v13 = (char *)((v9 >> 1) + v9);
      else
        v13 = 0;
      if ( v10 )
        v14 = (*(this + 2) - v10) / 0x2C;
      else
        v14 = 0;
      if ( (unsigned int)v13 < a4 + v14 )
        v13 = (char *)(a4 + sub_6F1140(this));
      v15 = sub_556440(v13);
      v16 = (_DWORD *)*(this + 1);
      LOBYTE(v20) = 0;
      v18[4] = v15;
      v18[5] = v15;
      LOBYTE(v30) = 1;
      sub_6F18A0(v16, a3, v15);
    }
    v17 = (char *)*(this + 2);
    v20 = (unsigned int)v17;
    if ( (v17 - a3) / 0x2C < a4 )
    {
      v20 = 0x2C * a4;
      sub_6F3610(this, a3, v17, (unsigned int *)&a3[0x2C * a4]);
    }
    v19 = &v17[0xFFFFFFD4 * a4];
    sub_6F3610(this, v19, v17, (unsigned int *)v17);
  }
  if ( v28 >= 0x10 )
    FormHeapFree(v26);
}
