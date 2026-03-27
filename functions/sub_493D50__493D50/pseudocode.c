char __thiscall sub_493D50(_DWORD *this, int a2, float a3)
{
  _DWORD *v3; // esi
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  int v10; // eax
  double v11; // st7
  void (__thiscall *v12)(int, _BYTE *, _DWORD); // edx
  float v13; // [esp+38h] [ebp-A4h]
  float v14; // [esp+4Ch] [ebp-90h]
  float v15; // [esp+4Ch] [ebp-90h]
  float v16; // [esp+4Ch] [ebp-90h]
  int v17; // [esp+4Ch] [ebp-90h]
  _BYTE v19[64]; // [esp+54h] [ebp-88h] BYREF
  _BYTE v20[72]; // [esp+94h] [ebp-48h] BYREF

  v3 = this;
  if ( !a2 )
    return 0;
  v5 = *(this + 1);
  v6 = 0.0;
  v7 = dbl_A3D998;
  if ( v5 >= 0 )
    v8 = 0.0;
  else
    v8 = (double)-v5 * v7;
  v14 = v8;
  if ( v14 <= dbl_A38538 )
  {
    if ( v5 < 0 )
      v6 = v7 * (double)-v5;
    v15 = v6;
    v9 = v15;
  }
  else
  {
    v9 = flt_A3D9A4;
  }
  v16 = v9;
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, int, _DWORD))(*(_DWORD *)a2 + 0x7C))(
    a2,
    LODWORD(v16),
    0,
    1,
    1,
    1,
    0);
  v10 = 0;
  v17 = 0;
  if ( *v3 )
  {
    while ( 1 )
    {
      v11 = flt_A3D9A0;
      qmemcpy(v19, *(const void **)(v3[2] + 4 * v10), sizeof(v19));
      v12 = *(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a2 + 0xA0);
      qmemcpy(v20, *(const void **)(*(this + 3) + 4 * v10), 0x44u);
      v13 = v11;
      v12(a2, v19, LODWORD(v13));
      (*(void (__thiscall **)(int, _BYTE *, float))(*(_DWORD *)a2 + 0xA4))(a2, v20, flt_A3D9A0);
      if ( (unsigned int)++v17 >= *this )
        break;
      v10 = v17;
      v3 = this;
    }
  }
  if ( a3 > 0.0 )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 0xA8))(a2, 0, LODWORD(a3), 1);
    (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)a2 + 0xA8))(a2, 2, LODWORD(a3), 1);
  }
  return 1;
}
