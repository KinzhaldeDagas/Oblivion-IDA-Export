char __usercall sub_8CAA60@<al>(int a1@<ecx>, int a2@<ebx>)
{
  __int64 v3; // rax
  int v4; // ecx
  bool v5; // cf
  unsigned int v6; // edi
  unsigned __int64 v7; // kr10_8
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int *v13[3]; // [esp+14h] [ebp-210h] BYREF
  char v14[512]; // [esp+20h] [ebp-204h] BYREF

  if ( *(_BYTE *)(a1 + 0x58) ) /*0x8caa76*/
  {
    if ( *(_BYTE *)(a1 + 0x80) ) /*0x8caa7e*/
    {
      *(_BYTE *)(a1 + 0x80) = 0; /*0x8caa88*/
      LODWORD(v3) = sub_917FC0(); /*0x8caa8f*/
      v4 = (unsigned __int64)(v3 - *(_QWORD *)(a1 + 0x60) + *(_QWORD *)(a1 + 0x68)) >> 0x20; /*0x8caaaa*/
      a2 = v3 - *(_DWORD *)(a1 + 0x60) + *(_DWORD *)(a1 + 0x68); /*0x8caaaa*/
      v5 = (unsigned int)v3 < *(_DWORD *)(a1 + 0x70); /*0x8caaac*/
      LODWORD(v3) = v3 - *(_DWORD *)(a1 + 0x70); /*0x8caaac*/
      v6 = *(_DWORD *)(a1 + 0x78); /*0x8caaaf*/
      *(_DWORD *)(a1 + 0x6C) = v4; /*0x8caab2*/
      HIDWORD(v3) -= v5 + *(_DWORD *)(a1 + 0x74); /*0x8caab5*/
      v7 = __PAIR64__(*(_DWORD *)(a1 + 0x7C), v3) + v6; /*0x8caac3*/
      LODWORD(v3) = *(_DWORD *)(a1 + 0x84) + 1; /*0x8caac5*/
      *(_DWORD *)(a1 + 0x68) = a2; /*0x8caac6*/
      *(_DWORD *)(a1 + 0x78) = v7; /*0x8caac9*/
      *(_DWORD *)(a1 + 0x7C) = HIDWORD(v3) + HIDWORD(v7); /*0x8caacc*/
      *(_DWORD *)(a1 + 0x84) = v3; /*0x8caacf*/
    }
  }
  v8 = *(_DWORD *)(a1 + 8); /*0x8caad5*/
  if ( v8 ) /*0x8caada*/
  {
    v9 = (*(int (**)(void))(*(_DWORD *)v8 + 0x24))(); /*0x8caae3*/
    if ( v9 ) /*0x8caae7*/
    {
      sub_8BBFB0((int)v13, a2, v14, 0x200u, 1); /*0x8caafd*/
      sub_8BBDB0(v13, "A new network client has been received (host name not availibe at present)"); /*0x8cab0b*/
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8cab2b*/
        unk_BA7FB0,
        0,
        0xFFFFFFFF,
        v14,
        ".\\hkVisualDebugger.cpp",
        0xBF);
      sub_8BC000(v13); /*0x8cab32*/
      sub_8CA940((const void **)a1, v9, v9 + 8, v9 + 0x14); /*0x8cab42*/
    }
  }
  LOBYTE(v10) = *(_BYTE *)(a1 + 0x58); /*0x8cab47*/
  if ( (_BYTE)v10 ) /*0x8cab4c*/
  {
    *(_BYTE *)(a1 + 0x80) = 1; /*0x8cab4e*/
    v10 = sub_917FC0(); /*0x8cab55*/
    *(_DWORD *)(a1 + 0x60) = v10; /*0x8cab5c*/
    *(_DWORD *)(a1 + 0x64) = v11; /*0x8cab5f*/
    *(_DWORD *)(a1 + 0x70) = v10; /*0x8cab62*/
    *(_DWORD *)(a1 + 0x74) = v11; /*0x8cab65*/
  }
  return v10; /*0x8cab68*/
}
