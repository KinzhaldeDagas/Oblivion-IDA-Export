int __userpurge sub_8BB6A0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        const char *a3,
        int ArgList,
        const char *a5,
        const char *a6,
        int Args,
        char a8)
{
  int v8; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // edi
  _DWORD v21[2]; // [esp+8h] [ebp-274h] BYREF
  _DWORD v22[3]; // [esp+10h] [ebp-26Ch] BYREF
  _BYTE v23[8]; // [esp+1Ch] [ebp-260h] BYREF
  _BYTE v24[72]; // [esp+24h] [ebp-258h] BYREF
  char DstBuf[12]; // [esp+6Ch] [ebp-210h] BYREF
  char v26[512]; // [esp+78h] [ebp-204h] BYREF

  v8 = ArgList;
  if ( ArgList == 0xFFFFFFFF )
  {
    if ( *(_DWORD *)(a1 + 0x18) )
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 0x14) + 4 * *(_DWORD *)(a1 + 0x18) - 4);
  }
  sub_8B1750(DstBuf, "0x%x", v8);
  sub_8BBFB0((int)v22, a2, v26, 0x200u, 1);
  v10 = sub_8BBDB0(v22, a6);
  v11 = sub_8BBD90((_DWORD **)v10, 0x28);
  v12 = sub_8BBE00(v11, Args);
  v13 = sub_8BBDB0(v12, "): [");
  v14 = sub_8BBDB0(v13, DstBuf);
  v15 = sub_8BBDB0(v14, "] ");
  v16 = sub_8BBDB0(v15, a3);
  v17 = sub_8BBDB0(v16, " : '");
  v18 = sub_8BBDB0(v17, a5);
  sub_8BBDB0(v18, "'\n");
  (*(void (__cdecl **)(char *, _DWORD))(a1 + 0x20))(v26, *(_DWORD *)(a1 + 0x24));
  if ( a8 )
  {
    sub_8F61A0(v21);
    v19 = sub_8F6190((int)v23, 0x14);
    if ( v19 > 2 )
    {
      (*(void (__cdecl **)(const char *, _DWORD))(a1 + 0x20))("Stack trace is:\n", *(_DWORD *)(a1 + 0x24));
      sub_8F6010((int)v24, v19 - 2, *(int (__cdecl **)(const char *, int))(a1 + 0x20), *(_DWORD *)(a1 + 0x24));
    }
    sub_8F5FA0(v21);
  }
  return sub_8BC000(v22);
}
