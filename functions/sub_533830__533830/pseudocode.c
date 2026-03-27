int __thiscall sub_533830(int this, float *a2, float *a3, float a4)
{
  double v5; // st6
  int v6; // eax
  int v7; // eax
  int *v8; // eax
  int v9; // eax
  double v10; // st7
  _DWORD *v11; // esi
  int v12; // edi
  float v14[4]; // [esp+8h] [ebp-40h] BYREF
  float v15[4]; // [esp+18h] [ebp-30h] BYREF
  float v16; // [esp+28h] [ebp-20h]
  float v17; // [esp+2Ch] [ebp-1Ch]

  v5 = hkFactor;
  if ( a4 != 0.0
    && (v6 = *(_DWORD *)(this + 0x1A0)) != 0
    && ((v7 = *(_DWORD *)(v6 + 8)) == 0 || (v8 = (int *)(v7 + 0x14)) == 0 ? (v9 = 0) : (v9 = *v8), v9) )
  {
    v10 = v5;
    *(float *)(v9 + 0xC) = a4 * v5;
  }
  else
  {
    v10 = v5;
  }
  v11 = *(_DWORD **)(this + 0x1A0);
  *(float *)(this + 4) = flt_A5613C;
  *(_DWORD *)(this + 0x14) = 0;
  if ( v11 )
  {
    v16 = flt_A56138;
    v17 = v16;
    v14[0] = *a2 * v10;
    v14[1] = a2[1] * v10;
    v14[2] = a2[2] * v10;
    v15[0] = *a3 * v10;
    v15[1] = a3[1] * v10;
    v15[2] = v10 * a3[2];
    v12 = v11[2];
    if ( v12 )
    {
      sub_89F570(v11);
      (*(void (__thiscall **)(int, float *, float *, int, _DWORD))(*(_DWORD *)v12 + 0x30))(v12, v14, v15, this, 0);
      sub_89F570(v11);
    }
  }
  return *(_DWORD *)(this + 0x14);
}
