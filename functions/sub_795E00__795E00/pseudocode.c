void __cdecl __noreturn sub_795E00(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *i; // esi
  int v6; // [esp+0h] [ebp-38h] BYREF
  char v7[4]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v8; // [esp+14h] [ebp-24h]
  int v9; // [esp+18h] [ebp-20h]
  int v10; // [esp+1Ch] [ebp-1Ch]
  void *v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int *v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+34h] [ebp-4h]
  int savedregs; // [esp+38h] [ebp+0h] BYREF

  v13 = &v6;
  v3 = a3;
  v12 = (int)a3;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v14 = 1;
  while ( a1 != a2 )
  {
    v11 = v3;
    LOBYTE(v14) = 2;
    if ( v3 )
      sub_795480(v3, (unsigned int)&savedregs, (unsigned int)v3, (int)v7);
    LOBYTE(v14) = 1;
    sub_795630(v3, (unsigned int)&savedregs, a1);
    v3 += 4;
    a1 += 4;
    a3 = v3;
  }
  if ( v8 )
    FormHeapFree(v8);
  for ( i = (_DWORD *)v12; i != a3; i += 4 )
    sub_79BFF0(i);
  ThrowException__(0, 0);
}
