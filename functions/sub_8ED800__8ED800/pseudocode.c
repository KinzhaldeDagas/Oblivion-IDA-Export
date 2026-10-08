_BYTE *__thiscall sub_8ED800(int *this, _BYTE *a2, int a3, int a4)
{
  int v4; // edx
  _DWORD v6[2]; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v4 = *this; /*0x8ed807*/
  v8 = a4; /*0x8ed809*/
  v6[1] = *(_DWORD *)(a4 + 0x14); /*0x8ed810*/
  v6[0] = &off_A9B0D0; /*0x8ed81f*/
  LOBYTE(v7) = 0; /*0x8ed827*/
  (*(void (__thiscall **)(int *, int, _DWORD, _DWORD *))(v4 + 0x18))(this, a3, 0, v6); /*0x8ed82c*/
  *a2 = v7; /*0x8ed837*/
  return a2; /*0x8ed839*/
}
