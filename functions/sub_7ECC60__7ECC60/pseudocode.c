char __thiscall sub_7ECC60(_DWORD *this, _DWORD *a2, float a3, _DWORD *a4)
{
  _DWORD *v5; // ecx
  _DWORD *v6; // ebp
  _DWORD *v7; // edi
  float v8; // esi
  float *v9; // eax
  float v10; // esi
  double v11; // st7
  float v12; // ebx
  float v13; // ebx
  float *v14; // eax
  double v15; // st7
  void (__thiscall ***v16)(_DWORD, int); // edi
  _DWORD *v17; // [esp+10h] [ebp-20h]
  float v18; // [esp+14h] [ebp-1Ch] BYREF
  float v19; // [esp+18h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-14h] BYREF
  float v21; // [esp+20h] [ebp-10h]
  float v22; // [esp+24h] [ebp-Ch]
  float v23; // [esp+28h] [ebp-8h]
  float v24; // [esp+2Ch] [ebp-4h]

  *a4 = 0;
  if ( !*(this + 0x1E) )
    return 0;
  v5 = (_DWORD *)*(this + 0x1C);
  v6 = (_DWORD *)*v5;
  v7 = (_DWORD *)v5[2];
  v17 = v5;
  v19 = *(float *)(*sub_405AD0(a2, &v18) + 0xF8);
  if ( v18 != 0.0 )
  {
    v8 = v18;
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v18) + 4)) )
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v8))(LODWORD(v8), 1);
  }
  if ( v7 )
  {
    v9 = (float *)*sub_405AD0(a2, &v18);
    v10 = a3;
    v11 = v9[0x22] - *(float *)LODWORD(a3);
    v9 += 0x22;
    v22 = v11;
    v23 = v9[1] - *(float *)(LODWORD(a3) + 4);
    v24 = v9[2] - *(float *)(LODWORD(a3) + 8);
    a3 = v23 * v23 + v22 * v22 + v24 * v24;
    a3 = sqrt(a3);
    v21 = (a3 - *(float *)(LODWORD(v10) + 0xC)) / v19;
    if ( v18 != 0.0 )
    {
      v12 = v18;
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v18) + 4)) )
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v12))(LODWORD(v12), 1);
    }
    while ( 1 )
    {
      if ( v7 == a2 )
        return 1;
      if ( !*a4 )
      {
        v18 = *(float *)(*sub_405AD0(v7, &a3) + 0xF8);
        if ( a3 != 0.0 )
        {
          v13 = a3;
          if ( !InterlockedDecrement((volatile LONG *)(LODWORD(a3) + 4)) )
            (**(void (__thiscall ***)(float, int))LODWORD(v13))(COERCE_FLOAT(LODWORD(v13)), 1);
        }
        v14 = (float *)*sub_405AD0(v7, &v20);
        v15 = v14[0x22];
        v14 += 0x22;
        v22 = v15 - *(float *)LODWORD(v10);
        v23 = v14[1] - *(float *)(LODWORD(v10) + 4);
        v24 = v14[2] - *(float *)(LODWORD(v10) + 8);
        v19 = v23 * v23 + v22 * v22 + v24 * v24;
        v19 = sqrt(v19);
        v19 = (v19 - *(float *)(LODWORD(v10) + 0xC)) / v18;
        if ( v20 )
        {
          v16 = (void (__thiscall ***)(_DWORD, int))v20;
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
            (**v16)(v16, 1);
        }
        if ( v19 > (double)v21 )
          break;
      }
      if ( !v6 )
        return 0;
      v7 = (_DWORD *)v6[2];
      v17 = v6;
      v6 = (_DWORD *)*v6;
      if ( !v7 )
        return 0;
    }
    *a4 = v17;
  }
  return 0;
}
