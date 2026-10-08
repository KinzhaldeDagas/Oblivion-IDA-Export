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

  if ( *(_BYTE *)(this + 0x58) ) /*0x8c9fb7*/
  {
    v3 = *(_DWORD *)(this + 0x68); /*0x8c9fcb*/
    v4 = *(_DWORD *)(this + 0x6C); /*0x8c9fce*/
    if ( *(_BYTE *)(this + 0x80) ) /*0x8c9fc3*/
    {
      LODWORD(v5) = sub_917FC0(); /*0x8c9fd3*/
      v6 = v5 - *(_QWORD *)(this + 0x60) + __PAIR64__(v4, v3); /*0x8c9fe4*/
      v4 = HIDWORD(v6); /*0x8c9fe4*/
      v3 = v6; /*0x8c9fe4*/
    }
    LODWORD(v7) = sub_917FD0(); /*0x8c9fe6*/
    sub_917FB0(__SPAIR64__(v4, v3), v7); /*0x8c9fef*/
    *(_BYTE *)(this + 0x80) = 0; /*0x8c9ff9*/
    LODWORD(v8) = sub_917FC0(); /*0x8ca000*/
    v9 = *(_DWORD *)(this + 0x70); /*0x8ca016*/
    v10 = v8 - *(_QWORD *)(this + 0x60) + *(_QWORD *)(this + 0x68); /*0x8ca01e*/
    v11 = *(_DWORD *)(this + 0x78); /*0x8ca020*/
    *(_DWORD *)(this + 0x68) = v10; /*0x8ca025*/
    v12 = v8 - __PAIR64__(*(_DWORD *)(this + 0x74), v9); /*0x8ca023*/
    v13 = v12; /*0x8ca02b*/
    LODWORD(v12) = *(_DWORD *)(this + 0x84); /*0x8ca02d*/
    *(_DWORD *)(this + 0x6C) = HIDWORD(v10); /*0x8ca033*/
    v14 = __PAIR64__(*(_DWORD *)(this + 0x7C), v13) + v11; /*0x8ca039*/
    *(_DWORD *)(this + 0x78) = v14; /*0x8ca03c*/
    *(_DWORD *)(this + 0x7C) = HIDWORD(v12) + HIDWORD(v14); /*0x8ca03f*/
    *(_DWORD *)(this + 0x84) = v12 + 1; /*0x8ca042*/
  }
  *(_BYTE *)(this + 0x58) = 1; /*0x8ca048*/
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0xC))(this); /*0x8ca050*/
  v15 = *(_DWORD *)(this + 0x10) - 1; /*0x8ca056*/
  for ( i = v15; v15 >= 0; i = v15 ) /*0x8ca05b*/
  {
    v16 = *(_DWORD *)(this + 0xC); /*0x8ca061*/
    v17 = 8 * v15; /*0x8ca064*/
    v18 = *(_DWORD *)(v16 + 8 * v15); /*0x8ca06b*/
    v19 = (int *)(8 * v15 + v16); /*0x8ca06f*/
    if ( !v18 ) /*0x8ca073*/
      goto LABEL_14; /*0x8ca073*/
    if ( *(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v18 + 8))(v18, &v32) ) /*0x8ca083*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(v19[1] + 0xC) + 0x14))(v19[1] + 0xC, a2); /*0x8ca098*/
      v20 = *(_DWORD *)(this + 0xC); /*0x8ca09b*/
      v21 = *(_DWORD *)(v20 + v17); /*0x8ca09e*/
      v22 = v17 + v20; /*0x8ca0a1*/
      if ( v21 ) /*0x8ca0a5*/
      {
        if ( *(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v21 + 8))(v21, &v31) ) /*0x8ca0b1*/
        {
          v23 = *(_DWORD **)(*(_DWORD *)(v22 + 4) + 0x18); /*0x8ca0b9*/
          sub_918440(v23, 5); /*0x8ca0c0*/
          sub_9181B0((_DWORD **)v23, 0); /*0x8ca0c9*/
          sub_918440(v23, a2); /*0x8ca0d8*/
          v24 = sub_953130(v23); /*0x8ca0df*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 0x10))(v24); /*0x8ca0e8*/
        }
      }
      v15 = i; /*0x8ca0eb*/
    }
    v25 = *v19; /*0x8ca0ef*/
    if ( !v25 || !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v25 + 8))(v25, &v29) ) /*0x8ca103*/
    {
LABEL_14:
      sub_8BBFB0((int)v33, v17, v34, 0x200u, 1); /*0x8ca11c*/
      sub_8BBDB0(v33, "Client has died, cleaning up (host name not available at present)"); /*0x8ca12a*/
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8ca14a*/
        unk_BA7FB0,
        0,
        0xFFFFFFFF,
        v34,
        ".\\hkVisualDebugger.cpp",
        0xF6);
      sub_8BC000(v33); /*0x8ca151*/
      sub_8C9F30((_DWORD *)this, v15); /*0x8ca159*/
    }
    --v15; /*0x8ca15e*/
  }
  LOBYTE(v26) = *(_BYTE *)(this + 0x58); /*0x8ca169*/
  if ( (_BYTE)v26 ) /*0x8ca16e*/
  {
    *(_DWORD *)(this + 0x60) = 0; /*0x8ca172*/
    *(_DWORD *)(this + 0x64) = 0; /*0x8ca175*/
    *(_DWORD *)(this + 0x68) = 0; /*0x8ca178*/
    *(_DWORD *)(this + 0x6C) = 0; /*0x8ca17b*/
    *(_DWORD *)(this + 0x70) = 0; /*0x8ca17e*/
    *(_DWORD *)(this + 0x74) = 0; /*0x8ca181*/
    *(_DWORD *)(this + 0x78) = 0; /*0x8ca184*/
    *(_DWORD *)(this + 0x7C) = 0; /*0x8ca187*/
    *(_BYTE *)(this + 0x80) = 0; /*0x8ca18a*/
    *(_DWORD *)(this + 0x84) = 0; /*0x8ca190*/
    *(_BYTE *)(this + 0x80) = 1; /*0x8ca196*/
    v26 = sub_917FC0(); /*0x8ca19d*/
    *(_DWORD *)(this + 0x60) = v26; /*0x8ca1a4*/
    *(_DWORD *)(this + 0x64) = v27; /*0x8ca1a7*/
    *(_DWORD *)(this + 0x70) = v26; /*0x8ca1aa*/
    *(_DWORD *)(this + 0x74) = v27; /*0x8ca1ad*/
  }
  return v26; /*0x8ca1b0*/
}
