_DWORD *__cdecl _fltout2(int a1, int a2, _DWORD *a3, char *a4, rsize_t SizeInBytes)
{
  _DWORD *v5; // ebx
  char *v6; // esi
  int v7; // edx
  int v8; // ecx
  char *v10[7]; // [esp-10h] [ebp-4Ch] BYREF
  char *Dst; // [esp+Ch] [ebp-30h]
  __int16 v12; // [esp+10h] [ebp-2Ch] BYREF
  char v13; // [esp+12h] [ebp-2Ah]
  char Src[24]; // [esp+14h] [ebp-28h] BYREF
  int v15[2]; // [esp+2Ch] [ebp-10h] BYREF
  __int16 v16; // [esp+34h] [ebp-8h]

  v5 = a3;
  Dst = a4;
  __dtold(v15, &a1);
  LOWORD(v10[0]) = v16;
  v6 = Dst;
  v5[2] = _I10_OUTPUT(v15[0], v15[1], v10[0], 0x11, 0, &v12);
  *v5 = v13;
  v5[1] = v12;
  if ( strcpy_s(v6, SizeInBytes, Src) )
  {
    memset(&v10[1], 0, 0xC);
    HIWORD(v10[0]) = 0;
    _invoke_watson(0, v7, v8, (int)v5, (int)v10 + 2, (int)v6);
  }
  v5[3] = v6;
  return v5;
}
