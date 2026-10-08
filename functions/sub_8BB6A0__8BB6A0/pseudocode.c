int __userpurge sub_8BB6A0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        const char *a3,
        int ArgList,
        const char *a5,
        const char *a6,
        char *Args,
        char a8)
{
  int v8; // eax
  int **v10; // eax
  int **v11; // eax
  int **v12; // eax
  int **v13; // eax
  int **v14; // eax
  int **v15; // eax
  int **v16; // eax
  int **v17; // eax
  int **v18; // eax
  int v19; // edi
  _DWORD v21[2]; // [esp+8h] [ebp-274h] BYREF
  int *v22[3]; // [esp+10h] [ebp-26Ch] BYREF
  _BYTE v23[8]; // [esp+1Ch] [ebp-260h] BYREF
  char v24[72]; // [esp+24h] [ebp-258h] BYREF
  char DstBuf[12]; // [esp+6Ch] [ebp-210h] BYREF
  char v26[512]; // [esp+78h] [ebp-204h] BYREF

  v8 = ArgList; /*0x8bb6b2*/
  if ( ArgList == 0xFFFFFFFF ) /*0x8bb6c0*/
  {
    if ( *(_DWORD *)(a1 + 0x18) ) /*0x8bb6c2*/
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 0x14) + 4 * *(_DWORD *)(a1 + 0x18) - 4); /*0x8bb6ce*/
  }
  sub_8B1750(DstBuf, "0x%x", v8); /*0x8bb6dd*/
  sub_8BBFB0((int)v22, a2, v26, 0x200u, 1); /*0x8bb6fb*/
  v10 = sub_8BBDB0(v22, a6); /*0x8bb742*/
  v11 = sub_8BBD90(v10, 0x28); /*0x8bb749*/
  v12 = sub_8BBE00(v11, Args); /*0x8bb750*/
  v13 = sub_8BBDB0(v12, "): [");
  v14 = sub_8BBDB0(v13, DstBuf); /*0x8bb75e*/
  v15 = sub_8BBDB0(v14, "] "); /*0x8bb765*/
  v16 = sub_8BBDB0(v15, a3); /*0x8bb76c*/
  v17 = sub_8BBDB0(v16, " : '");
  v18 = sub_8BBDB0(v17, a5); /*0x8bb77a*/
  sub_8BBDB0(v18, "'\n"); /*0x8bb781*/
  (*(void (__cdecl **)(char *, _DWORD))(a1 + 0x20))(v26, *(_DWORD *)(a1 + 0x24)); /*0x8bb78f*/
  if ( a8 ) /*0x8bb79e*/
  {
    sub_8F61A0(v21); /*0x8bb7a4*/
    v19 = sub_8F6190((int)v23, 0x14); /*0x8bb7b9*/
    if ( v19 > 2 ) /*0x8bb7be*/
    {
      (*(void (__cdecl **)(const char *, _DWORD))(a1 + 0x20))("Stack trace is:\n", *(_DWORD *)(a1 + 0x24)); /*0x8bb7c9*/
      sub_8F6010((int)v24, v19 - 2, *(int (__cdecl **)(const char *, int))(a1 + 0x20), *(_DWORD *)(a1 + 0x24)); /*0x8bb7e4*/
    }
    sub_8F5FA0(v21); /*0x8bb7ed*/
  }
  return sub_8BC000(v22); /*0x8bb7fb*/
}
