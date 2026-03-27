int __thiscall sub_711BF0(float *this, int a2)
{
  float *v2; // esi
  int v4; // edi
  int (__cdecl *v5)(int, float *, int, int *, int); // edx
  int result; // eax
  int v7; // [esp-14h] [ebp-28h]
  int v8; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  v2 = this;
  sub_711A00(this);
  v9 = 3;
  do
  {
    v4 = 3;
    do
    {
      v5 = *(int (__cdecl **)(int, float *, int, int *, int))(*(_DWORD *)(a2 + 0x220) + 8);
      v7 = *(_DWORD *)(a2 + 0x220);
      v8 = 4;
      result = v5(v7, v2++, 4, &v8, 1);
      --v4;
    }
    while ( v4 );
    --v9;
  }
  while ( v9 );
  return result;
}
