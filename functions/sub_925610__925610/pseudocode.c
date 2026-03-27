int __cdecl sub_925610(int ***a1, int a2, int a3)
{
  int **v3; // ebx
  int **v4; // ebp
  int **v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int *v9; // ecx
  int **v11; // [esp+10h] [ebp-4h]
  int *v12; // [esp+18h] [ebp+4h]

  v3 = a1[1];
  v4 = *a1;
  v5 = a1[2];
  v11 = a1[3];
  v6 = ***a1;
  v12 = *v5;
  v7 = (*(int (__thiscall **)(int *))(v6 + 8))(*v4);
  v8 = (*(int (__thiscall **)(int *))(**v3 + 8))(*v3);
  if ( *((_BYTE *)v5 + 0xC) )
    v9 = v12 + 0x164;
  else
    v9 = v12 + 0x64;
  *(_DWORD *)(a2 + 4) = ((int (__cdecl *)(int **, int **, int **, int **))v12[5 * *((unsigned __int8 *)&v9[8 * v7] + v8)
                                                                            + 0x264])(
                          v4,
                          v3,
                          v5,
                          v11);
  *(_BYTE *)a2 = 6;
  return a3;
}
