void __thiscall __noreturn sub_6F41C0(_DWORD *this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // edi
  int v11; // eax
  unsigned int *v12; // eax
  _DWORD *v13; // ecx
  char *v14; // ecx
  _DWORD v15[6]; // [esp+0h] [ebp-60h] BYREF
  char *v16; // [esp+18h] [ebp-48h]
  unsigned int v17; // [esp+1Ch] [ebp-44h]
  char v18[4]; // [esp+20h] [ebp-40h] BYREF
  unsigned int v19; // [esp+24h] [ebp-3Ch]
  unsigned int v20; // [esp+38h] [ebp-28h]
  unsigned int v21; // [esp+40h] [ebp-20h]
  int v22; // [esp+44h] [ebp-1Ch]
  int v23; // [esp+48h] [ebp-18h]
  _DWORD *v24; // [esp+50h] [ebp-10h]
  int v25; // [esp+5Ch] [ebp-4h]

  v24 = v15;
  v16 = (char *)this;
  sub_6F2D30((int)v18, a5);
  v6 = *(this + 1);
  v7 = 0;
  v25 = 0;
  if ( v6 )
    v7 = (*(this + 3) - v6) / 0x2C;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(this + 2) - v6) / 0x2C;
    else
      v8 = 0;
    if ( 0x5D1745D - v8 < a4 )
      sub_790B90();
    if ( v6 )
      v9 = (*(this + 2) - v6) / 0x2C;
    else
      v9 = 0;
    if ( v7 < a4 + v9 )
    {
      if ( 0x5D1745D - (v7 >> 1) >= v7 )
        v10 = (char *)((v7 >> 1) + v7);
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(this + 2) - v6) / 0x2C;
      else
        v11 = 0;
      if ( (unsigned int)v10 < a4 + v11 )
        v10 = (char *)(a4 + sub_6F1140(this));
      v12 = sub_556440(v10);
      v13 = (_DWORD *)*(this + 1);
      LOBYTE(v17) = 0;
      v15[4] = v12;
      v15[5] = v12;
      LOBYTE(v25) = 1;
      sub_6F3310(v13, a3, v12);
    }
    v14 = (char *)*(this + 2);
    v17 = (unsigned int)v14;
    if ( (v14 - a3) / 0x2C < a4 )
    {
      v17 = 0x2C * a4;
      sub_6F4160(a3, v14, (unsigned int *)&a3[0x2C * a4]);
    }
    v16 = &v14[0xFFFFFFD4 * a4];
    sub_6F4160(v16, v14, (unsigned int *)v14);
  }
  if ( v21 )
    FormHeapFree(v21);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( v20 >= 0x10 )
    FormHeapFree(v19);
}
