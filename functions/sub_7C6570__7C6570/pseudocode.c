double __thiscall sub_7C6570(int this, int a2, int a3, int a4, _DWORD *a5, float *a6, float *a7, float a8)
{
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // ecx
  float *v11; // eax
  LONG (__stdcall *v12)(volatile LONG *); // edi
  float v13; // esi
  double v14; // st6
  double v15; // st7
  float *v16; // eax
  float v17; // esi
  double v18; // st6
  double v19; // st7
  float v21; // [esp+8h] [ebp-8h]
  int v22; // [esp+Ch] [ebp-4h]
  int v23; // [esp+14h] [ebp+4h]
  int v24; // [esp+14h] [ebp+4h]
  float v25; // [esp+18h] [ebp+8h]
  float v26; // [esp+18h] [ebp+8h]
  float v27; // [esp+1Ch] [ebp+Ch]
  float v28; // [esp+1Ch] [ebp+Ch]

  v21 = 0.0;
  v8 = *(_DWORD **)(this + 0xE8);
  v22 = this;
  if ( v8 )
  {
    v9 = LODWORD(a8);
    do
    {
      v10 = v8[2];
      v8 = (_DWORD *)*v8;
      if ( v10 )
      {
        v21 = sub_7D31B0(v10, *(float *)&a2, *(float *)&a3, *(float *)&a4, v9) + v21;
        if ( v21 > 0.0 )
          ++*a5;
      }
    }
    while ( v8 );
    this = v22;
  }
  v11 = (float *)*sub_405AD0(*(_DWORD **)(this + 0x118), &a8);
  v12 = InterlockedDecrement;
  v27 = v11[0x3A];
  v23 = *((int *)v11 + 0x38);
  v25 = v11[0x39];
  if ( a8 != 0.0 )
  {
    v13 = a8;
    if ( !v12((volatile LONG *)(LODWORD(a8) + 4)) )
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v13))(LODWORD(v13), 1);
  }
  if ( v27 >= (double)v25 )
  {
    a8 = v27;
    v14 = v25;
    v15 = v27;
  }
  else
  {
    v14 = v25;
    v15 = v27;
    a8 = v25;
  }
  if ( a8 >= (double)*(float *)&v23 )
  {
    if ( v14 > v15 )
      v15 = v14;
  }
  else
  {
    v15 = *(float *)&v23;
  }
  a8 = v15;
  *a6 = a8;
  v16 = (float *)*sub_405AD0(*(_DWORD **)(v22 + 0x118), &a8);
  v28 = v16[0x3D];
  v24 = *((int *)v16 + 0x3B);
  v26 = v16[0x3C];
  if ( a8 != 0.0 )
  {
    v17 = a8;
    if ( !v12((volatile LONG *)(LODWORD(a8) + 4)) )
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v17))(LODWORD(v17), 1);
  }
  if ( v28 >= (double)v26 )
  {
    a8 = v28;
    v18 = v26;
    v19 = v28;
  }
  else
  {
    v18 = v26;
    v19 = v28;
    a8 = v26;
  }
  if ( a8 >= (double)*(float *)&v24 )
  {
    if ( v18 <= v19 )
      goto LABEL_28;
  }
  else
  {
    v18 = *(float *)&v24;
  }
  v19 = v18;
LABEL_28:
  a8 = v19;
  *a7 = a8;
  return v21;
}
