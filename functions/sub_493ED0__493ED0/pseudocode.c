char __cdecl sub_493ED0(int a1, _BYTE *a2, int a3)
{
  int v3; // ebp
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  void (__cdecl *v6)(int, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v3 = a3;
  if ( !a3 )
    return 1;
  do
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(a1 + 4);
    v9 = 1;
    v5(a1, &a3, 1, &v9, 1);
    if ( (_BYTE)a3 )
    {
      *a2++ = a3;
      --v3;
    }
    else
    {
      v6 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(a1 + 4);
      v9 = 1;
      v6(a1, &v8, 2, &v9, 1);
      _memset(a2, 0, v8);
      a2 += v8;
      v3 -= 3;
    }
  }
  while ( v3 );
  return 1;
}
