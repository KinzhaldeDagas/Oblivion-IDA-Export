char __thiscall sub_8C9FA0(int this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // kr08_8
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // kr10_8
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // kr04_4
  unsigned __int64 v14; // kr18_8
  int v15; // edi
  int v16; // ebp
  int v17; // ebx
  int v18; // ecx
  int *v19; // ebp
  int v20; // edi
  int v21; // ecx
  int v22; // edi
  _DWORD *v23; // edi
  int v24; // eax
  int v25; // ebp
  int v26; // eax
  int v27; // edx
  char v29; // [esp+23h] [ebp-219h] BYREF
  int i; // [esp+24h] [ebp-218h]
  char v31; // [esp+2Ah] [ebp-212h] BYREF
  char v32; // [esp+2Bh] [ebp-211h] BYREF
  int *v33[3]; // [esp+2Ch] [ebp-210h] BYREF
  char v34[512]; // [esp+38h] [ebp-204h] BYREF

  if ( *(_BYTE *)(this + 0x58) )
  {
    v3 = *(_DWORD *)(this + 0x68);
    v4 = *(_DWORD *)(this + 0x6C);
    if ( *(_BYTE *)(this + 0x80) )
    {
      LODWORD(v5) = sub_917FC0();
      v6 = v5 - *(_QWORD *)(this + 0x60) + __PAIR64__(v4, v3);
      v4 = HIDWORD(v6);
      v3 = v6;
    }
    LODWORD(v7) = sub_917FD0();
    sub_917FB0(__SPAIR64__(v4, v3), v7);
    *(_BYTE *)(this + 0x80) = 0;
    LODWORD(v8) = sub_917FC0();
    v9 = *(_DWORD *)(this + 0x70);
    v10 = v8 - *(_QWORD *)(this + 0x60) + *(_QWORD *)(this + 0x68);
    v11 = *(_DWORD *)(this + 0x78);
    *(_DWORD *)(this + 0x68) = v10;
    v12 = v8 - __PAIR64__(*(_DWORD *)(this + 0x74), v9);
    v13 = v12;
    LODWORD(v12) = *(_DWORD *)(this + 0x84);
    *(_DWORD *)(this + 0x6C) = HIDWORD(v10);
    v14 = __PAIR64__(*(_DWORD *)(this + 0x7C), v13) + v11;
    *(_DWORD *)(this + 0x78) = v14;
    *(_DWORD *)(this + 0x7C) = HIDWORD(v12) + HIDWORD(v14);
    *(_DWORD *)(this + 0x84) = v12 + 1;
  }
  *(_BYTE *)(this + 0x58) = 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0xC))(this);
  v15 = *(_DWORD *)(this + 0x10) - 1;
  for ( i = v15; v15 >= 0; i = v15 )
  {
    v16 = *(_DWORD *)(this + 0xC);
    v17 = 8 * v15;
    v18 = *(_DWORD *)(v16 + 8 * v15);
    v19 = (int *)(8 * v15 + v16);
    if ( !v18 )
      goto LABEL_14;
    if ( *(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v18 + 8))(v18, &v32) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(v19[1] + 0xC) + 0x14))(v19[1] + 0xC, a2);
      v20 = *(_DWORD *)(this + 0xC);
      v21 = *(_DWORD *)(v20 + v17);
      v22 = v17 + v20;
      if ( v21 )
      {
        if ( *(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v21 + 8))(v21, &v31) )
        {
          v23 = *(_DWORD **)(*(_DWORD *)(v22 + 4) + 0x18);
          sub_918440(v23, 5);
          sub_9181B0((_DWORD **)v23, 0);
          sub_918440(v23, a2);
          v24 = sub_953130(v23);
          (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 0x10))(v24);
        }
      }
      v15 = i;
    }
    v25 = *v19;
    if ( !v25 || !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v25 + 8))(v25, &v29) )
    {
LABEL_14:
      sub_8BBFB0((int)v33, v17, v34, 0x200u, 1);
      sub_8BBDB0(v33, "Client has died, cleaning up (host name not available at present)");
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
        dword_BA7FB0,
        0,
        0xFFFFFFFF,
        v34,
        ".\\hkVisualDebugger.cpp",
        0xF6);
      sub_8BC000(v33);
      sub_8C9F30((_DWORD *)this, v15);
    }
    --v15;
  }
  LOBYTE(v26) = *(_BYTE *)(this + 0x58);
  if ( (_BYTE)v26 )
  {
    *(_DWORD *)(this + 0x60) = 0;
    *(_DWORD *)(this + 0x64) = 0;
    *(_DWORD *)(this + 0x68) = 0;
    *(_DWORD *)(this + 0x6C) = 0;
    *(_DWORD *)(this + 0x70) = 0;
    *(_DWORD *)(this + 0x74) = 0;
    *(_DWORD *)(this + 0x78) = 0;
    *(_DWORD *)(this + 0x7C) = 0;
    *(_BYTE *)(this + 0x80) = 0;
    *(_DWORD *)(this + 0x84) = 0;
    *(_BYTE *)(this + 0x80) = 1;
    v26 = sub_917FC0();
    *(_DWORD *)(this + 0x60) = v26;
    *(_DWORD *)(this + 0x64) = v27;
    *(_DWORD *)(this + 0x70) = v26;
    *(_DWORD *)(this + 0x74) = v27;
  }
  return v26;
}
