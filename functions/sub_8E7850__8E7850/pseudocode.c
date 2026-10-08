int __cdecl sub_8E7850(_DWORD *a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp
  int v5; // esi
  char v6; // al
  int **v7; // esi
  int **v8; // edi
  _DWORD *v9; // eax
  int v10; // edx
  int *v11; // esi
  int v12; // ecx
  int v13; // eax
  int v15; // [esp+10h] [ebp-4h] BYREF
  int *v16; // [esp+18h] [ebp+4h]

  v3 = a1; /*0x8e7852*/
  v4 = a2; /*0x8e7857*/
  v5 = a1[4]; /*0x8e785c*/
  v6 = *((_BYTE *)a1 + v5 + 0x91); /*0x8e785f*/
  v7 = (int **)((char *)a1 + v5); /*0x8e786a*/
  v8 = (int **)((char *)a2 + a2[4]); /*0x8e786c*/
  if ( !v6 && !*((_BYTE *)v8 + 0x91) && v7[0x15] != v8[0x15] ) /*0x8e7882*/
    sub_8CD320(v7[2], (int)v7, (int)a2 + a2[4]); /*0x8e788a*/
  if ( *((_WORD *)v7[0x15] + 0x10) != 0xFFFF || (v16 = v8[0x15], *((_WORD *)v16 + 0x10) == 0xFFFF) ) /*0x8e78ab*/
    v16 = v7[0x15]; /*0x8e78ad*/
  sub_8E6490(v3, v4, a3, &v15, (BOOL *)&a2); /*0x8e78c2*/
  if ( a2 ) /*0x8e78d0*/
  {
    v9 = v3; /*0x8e78d2*/
    v3 = v4; /*0x8e78d4*/
    v4 = v9; /*0x8e78d6*/
  }
  v10 = *((char *)v7 + 0x58); /*0x8e78d8*/
  v11 = a3; /*0x8e78e0*/
  v12 = *(_DWORD *)(*a3 + 4 * (*((char *)v8 + 0x58) + 8 * v10) + 0xC); /*0x8e78e9*/
  v13 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *, int *))(*(_DWORD *)v12 + 8))(v12, v3, v4, a3); /*0x8e78f2*/
  return sub_8E6950((int)(v16 + 0x11), (int)v3, (int)v4, v15, v11, v13); /*0x8e790e*/
}
