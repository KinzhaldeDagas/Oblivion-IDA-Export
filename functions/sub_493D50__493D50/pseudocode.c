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

  v3 = this; /*0x493d63*/
  if ( !a2 ) /*0x493d6a*/
    return 0; /*0x493d6c*/
  v5 = *(this + 1); /*0x493d77*/
  v6 = 0.0; /*0x493d7a*/
  v7 = dbl_A3D998; /*0x493d7e*/
  if ( v5 >= 0 ) /*0x493d84*/
    v8 = 0.0; /*0x493d96*/
  else
    v8 = (double)-v5 * v7; /*0x493d92*/
  v14 = v8; /*0x493d98*/
  if ( v14 <= dbl_A38538 ) /*0x493dab*/
  {
    if ( v5 < 0 ) /*0x493dbb*/
      v6 = v7 * (double)-v5; /*0x493dc5*/
    v15 = v6; /*0x493dcd*/
    v9 = v15; /*0x493dd1*/
  }
  else
  {
    v9 = flt_A3D9A4; /*0x493db1*/
  }
  v16 = v9; /*0x493dd7*/
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, int, _DWORD))(*(_DWORD *)a2 + 0x7C))( /*0x493df2*/
    a2,
    LODWORD(v16),
    0,
    1,
    1,
    1,
    0);
  v10 = 0; /*0x493df4*/
  v17 = 0; /*0x493df8*/
  if ( *v3 ) /*0x493df6*/
  {
    while ( 1 ) /*0x493e09*/
    {
      v11 = flt_A3D9A0; /*0x493e09*/
      qmemcpy(v19, *(const void **)(v3[2] + 4 * v10), sizeof(v19)); /*0x493e1b*/
      v12 = *(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a2 + 0xA0); /*0x493e29*/
      qmemcpy(v20, *(const void **)(*(this + 3) + 4 * v10), 0x44u); /*0x493e38*/
      v13 = v11; /*0x493e3f*/
      v12(a2, v19, LODWORD(v13)); /*0x493e45*/
      (*(void (__thiscall **)(int, _BYTE *, float))(*(_DWORD *)a2 + 0xA4))(a2, v20, flt_A3D9A0); /*0x493e60*/
      if ( (unsigned int)++v17 >= *this ) /*0x493e73*/
        break; /*0x493e73*/
      v10 = v17; /*0x493e00*/
      v3 = this; /*0x493e04*/
    }
  }
  if ( a3 > 0.0 ) /*0x493e83*/
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 0xA8))(a2, 0, LODWORD(a3), 1); /*0x493e97*/
    (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)a2 + 0xA8))(a2, 2, LODWORD(a3), 1); /*0x493eae*/
  }
  return 1; /*0x493d6e*/
}
