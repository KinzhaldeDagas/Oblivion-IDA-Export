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

  v5 = *(_DWORD *)this; /*0x701547*/
  if ( *(this + 0x20C) ) /*0x701540*/
    v6 = *(int (**)(void))(v5 + 0x80); /*0x70154d*/
  else
    v6 = *(int (**)(void))(v5 + 0x7C); /*0x701555*/
  v7 = v6(); /*0x70155a*/
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x4C))(v7, 0); /*0x701567*/
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x50))(v7, 0); /*0x701572*/
  if ( !v8 || !v9 ) /*0x70157a*/
    return 0; /*0x7015e0*/
  v10 = (double)a2; /*0x701580*/
  if ( a2 < 0 ) /*0x701586*/
    v10 = v10 + flt_A2FC78; /*0x701588*/
  v11 = (double)v8; /*0x701594*/
  if ( v8 < 0 ) /*0x701598*/
    v11 = v11 + flt_A2FC78; /*0x70159a*/
  *a4 = v10 / v11; /*0x7015ac*/
  v12 = (double)a3; /*0x7015ae*/
  if ( a3 < 0 ) /*0x7015b2*/
    v12 = v12 + flt_A2FC78; /*0x7015b4*/
  v13 = (double)v9; /*0x7015c0*/
  if ( v9 < 0 ) /*0x7015c4*/
    v13 = v13 + flt_A2FC78; /*0x7015c6*/
  *a5 = 1.0 - v12 / v13; /*0x7015da*/
  return 1; /*0x7015df*/
}
