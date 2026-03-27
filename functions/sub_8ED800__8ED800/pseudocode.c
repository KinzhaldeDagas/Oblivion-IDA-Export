_BYTE *__thiscall sub_8ED800(int *this, _BYTE *a2, int a3, int a4)
{
  int v4; // edx
  _DWORD v6[2]; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v4 = *this;
  v8 = a4;
  v6[1] = *(_DWORD *)(a4 + 0x14);
  v6[0] = &off_A9B0D0;
  LOBYTE(v7) = 0;
  (*(void (__thiscall **)(int *, int, _DWORD, _DWORD *))(v4 + 0x18))(this, a3, 0, v6);
  *a2 = v7;
  return a2;
}
