char __thiscall sub_701540(_BYTE *this, int a2, int a3, float *a4, float *a5)
{
  int v5; // eax
  int (*v6)(void); // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st7
  double v13; // st6

  v5 = *(_DWORD *)this;
  if ( *(this + 0x20C) )
    v6 = *(int (**)(void))(v5 + 0x80);
  else
    v6 = *(int (**)(void))(v5 + 0x7C);
  v7 = v6();
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x4C))(v7, 0);
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x50))(v7, 0);
  if ( !v8 || !v9 )
    return 0;
  v10 = (double)a2;
  if ( a2 < 0 )
    v10 = v10 + flt_A2FC78;
  v11 = (double)v8;
  if ( v8 < 0 )
    v11 = v11 + flt_A2FC78;
  *a4 = v10 / v11;
  v12 = (double)a3;
  if ( a3 < 0 )
    v12 = v12 + flt_A2FC78;
  v13 = (double)v9;
  if ( v9 < 0 )
    v13 = v13 + flt_A2FC78;
  *a5 = 1.0 - v12 / v13;
  return 1;
}
