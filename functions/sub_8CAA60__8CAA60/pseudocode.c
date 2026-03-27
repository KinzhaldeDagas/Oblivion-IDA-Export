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

  if ( *(_BYTE *)(a1 + 0x58) )
  {
    if ( *(_BYTE *)(a1 + 0x80) )
    {
      *(_BYTE *)(a1 + 0x80) = 0;
      LODWORD(v3) = sub_917FC0();
      v4 = (unsigned __int64)(v3 - *(_QWORD *)(a1 + 0x60) + *(_QWORD *)(a1 + 0x68)) >> 0x20;
      a2 = v3 - *(_DWORD *)(a1 + 0x60) + *(_DWORD *)(a1 + 0x68);
      v5 = (unsigned int)v3 < *(_DWORD *)(a1 + 0x70);
      LODWORD(v3) = v3 - *(_DWORD *)(a1 + 0x70);
      v6 = *(_DWORD *)(a1 + 0x78);
      *(_DWORD *)(a1 + 0x6C) = v4;
      HIDWORD(v3) -= v5 + *(_DWORD *)(a1 + 0x74);
      v7 = __PAIR64__(*(_DWORD *)(a1 + 0x7C), v3) + v6;
      LODWORD(v3) = *(_DWORD *)(a1 + 0x84) + 1;
      *(_DWORD *)(a1 + 0x68) = a2;
      *(_DWORD *)(a1 + 0x78) = v7;
      *(_DWORD *)(a1 + 0x7C) = HIDWORD(v3) + HIDWORD(v7);
      *(_DWORD *)(a1 + 0x84) = v3;
    }
  }
  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 )
  {
    v9 = (*(int (**)(void))(*(_DWORD *)v8 + 0x24))();
    if ( v9 )
    {
      sub_8BBFB0((int)v13, a2, v14, 0x200u, 1);
      sub_8BBDB0(v13, "A new network client has been received (host name not availibe at present)");
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
        dword_BA7FB0,
        0,
        0xFFFFFFFF,
        v14,
        ".\\hkVisualDebugger.cpp",
        0xBF);
      sub_8BC000(v13);
      sub_8CA940((const void **)a1, v9, v9 + 8, v9 + 0x14);
    }
  }
  LOBYTE(v10) = *(_BYTE *)(a1 + 0x58);
  if ( (_BYTE)v10 )
  {
    *(_BYTE *)(a1 + 0x80) = 1;
    v10 = sub_917FC0();
    *(_DWORD *)(a1 + 0x60) = v10;
    *(_DWORD *)(a1 + 0x64) = v11;
    *(_DWORD *)(a1 + 0x70) = v10;
    *(_DWORD *)(a1 + 0x74) = v11;
  }
  return v10;
}
