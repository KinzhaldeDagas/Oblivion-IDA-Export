int __usercall sub_958130@<eax>(
        _DWORD *a1@<eax>,
        int a2@<esi>,
        char a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  int v15; // ebx
  char v16; // [esp+1Fh] [ebp-19h] BYREF
  int i; // [esp+20h] [ebp-18h]
  unsigned int v18; // [esp+24h] [ebp-14h]
  _DWORD v19[4]; // [esp+28h] [ebp-10h] BYREF

  sub_9183A0(v19, a2, a9);
  sub_918460(v19, a3, a4);
  if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) )
    goto LABEL_3;
  sub_918460(v19, a5, a6);
  if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) )
    goto LABEL_3;
  v11 = a1[1];
  sub_918440(v19, v11);
  v12 = 0;
  for ( i = 0x14; v12 < v11; i += 8 )
  {
    sub_918440(v19, *(_DWORD *)(*a1 + 8 * v12));
    sub_918440(v19, *(_DWORD *)(*a1 + 8 * v12 + 4));
    if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) )
      goto LABEL_3;
    ++v12;
  }
  v18 = a1[4];
  v13 = v18;
  sub_918440(v19, v18);
  v14 = 0;
  i += 4;
  if ( v13 )
  {
    v15 = 0;
    do
    {
      sub_918440(v19, *(_DWORD *)(v15 + a1[3]));
      sub_918460(v19, *(_DWORD *)(v15 + a1[3] + 4), 0);
      sub_918460(v19, *(_DWORD *)(v15 + a1[3] + 8), 0);
      if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) )
        goto LABEL_3;
      i += 0x14;
      ++v14;
      v15 += 0xC;
    }
    while ( v14 < v18 );
  }
  sub_918440(v19, a8);
  if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16)
    || ((*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 0xC))(a2, a7, a8),
        !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16)) )
  {
LABEL_3:
    sub_918180(v19);
    return 0xFFFFFFFF;
  }
  sub_918180(v19);
  return i + a8 + 4;
}
