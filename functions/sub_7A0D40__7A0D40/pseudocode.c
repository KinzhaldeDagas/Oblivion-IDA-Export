void __cdecl __noreturn sub_7A0D40(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int i; // esi
  unsigned int v9; // edi
  unsigned int *v10; // edi
  int v11; // [esp+0h] [ebp-38h] BYREF
  _BYTE v12[4]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v13; // [esp+14h] [ebp-24h]
  unsigned int *v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  void *v16; // [esp+20h] [ebp-18h]
  int v17; // [esp+24h] [ebp-14h]
  int *v18; // [esp+28h] [ebp-10h]
  int v19; // [esp+34h] [ebp-4h]

  v18 = &v11;
  v3 = a3;
  v17 = (int)a3;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  while ( 1 )
  {
    LOBYTE(v19) = 1;
    if ( a1 == a2 )
      break;
    v16 = v3;
    LOBYTE(v19) = 2;
    if ( v3 )
      sub_79EE40(v3, (int)v12);
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
  v9 = v13;
  if ( v13 )
  {
    if ( (unsigned int *)v13 != v14 )
    {
      v10 = (unsigned int *)(v13 + 4);
      do
      {
        if ( *v10 )
          FormHeapFree(*v10);
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 0;
        v10 += 0xC;
      }
      while ( v10 + 0xFFFFFFFF != v14 );
      v9 = v13;
    }
    FormHeapFree(v9);
  }
  for ( i = v17; (_DWORD *)i != a3; i += 0x10 )
    sub_7A0B00(i);
  ThrowException__(0, 0);
}
