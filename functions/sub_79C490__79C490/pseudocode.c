char *__thiscall sub_79C490(
        int *this,
        int a2,
        int a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14,
        int a15)
{
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  _DWORD v22[3]; // [esp+0h] [ebp-38h] BYREF
  _BYTE v23[36]; // [esp+Ch] [ebp-2Ch] BYREF
  float v24; // [esp+30h] [ebp-8h]
  int v25; // [esp+34h] [ebp-4h]

  v22[0] = a2;
  v22[1] = a3;
  v22[2] = a4;
  qmemcpy(v23, &a5, sizeof(v23));
  v24 = a14;
  v25 = a15;
  v16 = *(this + 3);
  if ( v16 )
    v16 = (*(this + 4) - v16) / 0x30;
  v17 = v16 - 1;
  v18 = *(this + 3);
  if ( !v18
    || (v19 = *(this + 4) - v18, v20 = (int)((unsigned __int64)(0x2AAAAAABLL * v19) >> 0x20) >> 3, v17 >= v19 / 0x30) )
  {
    _invalid_parameter_noinfo();
  }
  return sub_79BD20((unsigned int *)(*(this + 3) + 0x30 * v17), v20, v22);
}
