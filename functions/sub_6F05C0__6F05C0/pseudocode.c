void __thiscall __noreturn sub_6F05C0(_DWORD *this, int a2, float *a3, unsigned int a4, float *a5)
{
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int *v12; // eax
  float *v13; // ecx
  float *v14; // ecx
  float v15[5]; // [esp+0h] [ebp-40h] BYREF
  int v16; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+24h] [ebp-1Ch]
  int v19; // [esp+28h] [ebp-18h]
  _DWORD *v20; // [esp+2Ch] [ebp-14h]
  float *v21; // [esp+30h] [ebp-10h]
  int v22; // [esp+3Ch] [ebp-4h]

  v21 = v15;
  v20 = this;
  v15[4] = *a5;
  sub_557250(&v16, (int)(a5 + 1));
  v6 = *(this + 1);
  v7 = 0;
  v22 = 0;
  if ( v6 )
    v7 = (*(this + 3) - v6) / 0x14;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(this + 2) - v6) / 0x14;
    else
      v8 = 0;
    if ( 0xFFFFFFFF - v8 < a4 )
      sub_790B90();
    if ( v6 )
      v9 = (*(this + 2) - v6) / 0x14;
    else
      v9 = 0;
    if ( v7 < a4 + v9 )
    {
      if ( 0xFFFFFFFF - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(this + 2) - v6) / 0x14;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_54F720(this);
      v18 = 0x14 * v10;
      v12 = (unsigned int *)FormHeapAlloc(0x14 * v10);
      v13 = (float *)*(this + 1);
      LOBYTE(v19) = 0;
      LOBYTE(v22) = 1;
      sub_557880(v13, a3, v12);
    }
    v14 = (float *)*(this + 2);
    if ( ((char *)v14 - (char *)a3) / 0x14 < a4 )
      sub_559300(a3, v14, (unsigned int *)&a3[5 * a4]);
    sub_559300(&v14[0xFFFFFFFB * a4], v14, (unsigned int *)v14);
  }
  if ( v17 )
    FormHeapFree(v17);
}
