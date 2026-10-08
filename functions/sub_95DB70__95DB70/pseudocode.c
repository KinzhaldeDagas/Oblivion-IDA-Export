int __thiscall sub_95DB70(float *this, float *a2)
{
  int v2; // edx
  double v4; // st7
  int result; // eax
  int v6; // ecx
  double v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+1Ch] [ebp+4h]

  v2 = *((_DWORD *)a2 + 1); /*0x95db77*/
  v7 = a2[3]; /*0x95db7e*/
  v8 = *(_DWORD *)a2; /*0x95db86*/
  v10 = *((_DWORD *)a2 + 2); /*0x95db8d*/
  v9 = v2; /*0x95db95*/
  v4 = Vector3_NormalizeInPlace((float *)&v8); /*0x95db99*/
  result = v9; /*0x95dba6*/
  v6 = v10; /*0x95dbaa*/
  *((_DWORD *)this + 1) = v8; /*0x95dbae*/
  *((_DWORD *)this + 2) = result; /*0x95dbb1*/
  *((_DWORD *)this + 3) = v6; /*0x95dbb4*/
  v11 = v7 / v4; /*0x95dbb7*/
  *(this + 4) = v11; /*0x95dbbf*/
  return result; /*0x95dbc2*/
}
