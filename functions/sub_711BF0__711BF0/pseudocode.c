int __thiscall sub_711BF0(float *this, int a2)
{
  float *v2; // esi
  int v4; // edi
  int (__cdecl *v5)(int, float *, int, int *, int); // edx
  int result; // eax
  int v7; // [esp-14h] [ebp-28h]
  int v8; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  v2 = this; /*0x711bf5*/
  sub_711A00(this); /*0x711bf7*/
  v9 = 3; /*0x711c00*/
  do /*0x711c3d*/
  {
    v4 = 3; /*0x711c10*/
    do /*0x711c36*/
    {
      v5 = *(int (__cdecl **)(int, float *, int, int *, int))(*(_DWORD *)(a2 + 0x220) + 8); /*0x711c1b*/
      v7 = *(_DWORD *)(a2 + 0x220); /*0x711c27*/
      v8 = 4; /*0x711c28*/
      result = v5(v7, v2++, 4, &v8, 1); /*0x711c2c*/
      --v4; /*0x711c33*/
    }
    while ( v4 ); /*0x711c36*/
    --v9; /*0x711c38*/
  }
  while ( v9 ); /*0x711c3d*/
  return result; /*0x711c3f*/
}
