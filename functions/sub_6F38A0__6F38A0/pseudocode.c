void __thiscall __noreturn sub_6F38A0(char **this, int a2, char *a3, unsigned int a4, int *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  char *v10; // ebx
  int v11; // ecx
  int v12; // ebx
  unsigned int *v13; // eax
  _DWORD *v14; // ecx
  char *v15; // eax
  _DWORD v16[6]; // [esp+0h] [ebp-54h] BYREF
  unsigned int v17; // [esp+18h] [ebp-3Ch]
  char *v18; // [esp+1Ch] [ebp-38h]
  int v19; // [esp+20h] [ebp-34h]
  char v20[4]; // [esp+24h] [ebp-30h] BYREF
  unsigned int v21; // [esp+28h] [ebp-2Ch]
  int v22; // [esp+38h] [ebp-1Ch]
  unsigned int v23; // [esp+3Ch] [ebp-18h]
  _DWORD *v24; // [esp+44h] [ebp-10h]
  int v25; // [esp+50h] [ebp-4h]

  v24 = v16;
  v6 = 0;
  v19 = *a5;
  v16[5] = this;
  v23 = 0xF;
  v22 = 0;
  LOBYTE(v21) = 0;
  sub_414420((int)v20, a5 + 1, 0, 0xFFFFFFFF);
  v7 = (int)*(this + 1);
  v25 = 0;
  if ( v7 )
    v6 = (int)&(*(this + 3))[-v7] >> 5;
  if ( a4 )
  {
    if ( v7 )
      v8 = (int)&(*(this + 2))[-v7] >> 5;
    else
      v8 = 0;
    if ( 0x7FFFFFF - v8 < a4 )
      sub_790B90();
    if ( v7 )
      v9 = (int)&(*(this + 2))[-v7] >> 5;
    else
      v9 = 0;
    if ( v6 < a4 + v9 )
    {
      if ( 0x7FFFFFF - (v6 >> 1) >= v6 )
        v10 = (char *)((v6 >> 1) + v6);
      else
        v10 = 0;
      if ( v7 )
        v11 = (int)&(*(this + 2))[-v7] >> 5;
      else
        v11 = 0;
      if ( (unsigned int)v10 < a4 + v11 )
      {
        if ( v7 )
          v12 = (int)&(*(this + 2))[-v7] >> 5;
        else
          v12 = 0;
        v10 = (char *)(a4 + v12);
      }
      v13 = sub_5563E0(v10);
      v14 = *(this + 1);
      LOBYTE(v18) = 0;
      v16[4] = v13;
      v17 = (unsigned int)v13;
      LOBYTE(v25) = 1;
      sub_6F1800(v14, a3, v13);
    }
    v15 = *(this + 2);
    v18 = v15;
    if ( (v15 - a3) >> 5 < a4 )
    {
      v17 = 0x20 * a4;
      sub_6F3590(this, a3, v15, (unsigned int *)&a3[0x20 * a4]);
    }
    v17 = 0x20 * a4;
    sub_6F3590(this, &v15[0xFFFFFFE0 * a4], v15, (unsigned int *)v15);
  }
  if ( v23 >= 0x10 )
    FormHeapFree(v21);
}
