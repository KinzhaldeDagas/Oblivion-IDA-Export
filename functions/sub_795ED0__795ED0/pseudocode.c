void __cdecl __noreturn sub_795ED0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *i; // esi
  int v9; // [esp+0h] [ebp-38h] BYREF
  _BYTE v10[4]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v11; // [esp+14h] [ebp-24h]
  int v12; // [esp+18h] [ebp-20h]
  int v13; // [esp+1Ch] [ebp-1Ch]
  void *v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int *v16; // [esp+28h] [ebp-10h]
  int v17; // [esp+34h] [ebp-4h]

  v16 = &v9;
  v3 = a3;
  v15 = (int)a3;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  while ( 1 )
  {
    LOBYTE(v17) = 1;
    if ( a1 == a2 )
      break;
    v14 = v3;
    LOBYTE(v17) = 2;
    if ( v3 )
      sub_7A3580(v3, (int)v10);
    v5 = v3[1];
    v3[1] = a1[1];
    a1[1] = v5;
    v6 = v3[2];
    v3[2] = a1[2];
    a1[2] = v6;
    v7 = v3[3];
    v3[3] = a1[3];
    v3 += 4;
    a1[3] = v7;
    a3 = v3;
    a1 += 4;
  }
  if ( v11 )
    FormHeapFree(v11);
  for ( i = (_DWORD *)v15; i != a3; i += 4 )
    sub_79BFF0(i);
  ThrowException__(0, 0);
}
