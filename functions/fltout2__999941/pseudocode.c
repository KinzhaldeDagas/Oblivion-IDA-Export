_DWORD *__cdecl _fltout2(int a1, int a2, _DWORD *a3, char *a4, rsize_t SizeInBytes)
{
  _DWORD *v5; // ebx
  char *v6; // esi
  int v7; // edx
  int v8; // ecx
  __int16 v10; // [esp-Eh] [ebp-4Ah] BYREF
  int v11; // [esp-Ch] [ebp-48h]
  int v12; // [esp-8h] [ebp-44h]
  int v13; // [esp-4h] [ebp-40h]
  char *Dst; // [esp+Ch] [ebp-30h]
  __int16 v15; // [esp+10h] [ebp-2Ch] BYREF
  char v16; // [esp+12h] [ebp-2Ah]
  char Src[24]; // [esp+14h] [ebp-28h] BYREF
  int v18[2]; // [esp+2Ch] [ebp-10h] BYREF
  __int16 v19; // [esp+34h] [ebp-8h]

  v5 = a3; /*0x999955*/
  Dst = a4; /*0x999959*/
  __dtold(v18, &a1); /*0x999965*/
  v6 = Dst; /*0x999985*/
  v5[2] = _I10_OUTPUT(v18[0], v18[1], v19, 0x11, 0, (int)&v15); /*0x999988*/
  *v5 = v16; /*0x99998f*/
  v5[1] = v15; /*0x999995*/
  if ( strcpy_s(v6, SizeInBytes, Src) ) /*0x9999a0*/
  {
    v13 = 0; /*0x9999ae*/
    v12 = 0; /*0x9999af*/
    v11 = 0; /*0x9999b0*/
    v10 = 0; /*0x9999b1*/
    _invoke_watson(0, v7, v8, (int)v5, (int)&v10, (int)v6); /*0x9999b3*/
  }
  v5[3] = v6; /*0x9999bf*/
  return v5; /*0x9999bb*/
}
