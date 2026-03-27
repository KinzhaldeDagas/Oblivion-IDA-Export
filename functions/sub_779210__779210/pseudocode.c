int __userpurge sub_779210@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
  int v6; // eax
  signed int v7; // ecx
  void *v8; // edx
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  signed int v13; // eax
  void *v14; // ecx
  int v15; // [esp-8h] [ebp-24h]
  int *v16; // [esp+4h] [ebp-18h]
  signed int v17[2]; // [esp+14h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+1Ch] [ebp+0h]

  if ( !a3 )
    return 0;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x4C))(a3, a2);
  a1[0x16] = v6;
  a1[0x15] = v6;
  a1[0x17] = 1;
  v7 = *(_DWORD *)(a3 + 0x1C);
  v8 = *(void **)(a3 + 0x20);
  v17[0] = *(_DWORD *)(a3 + 0x18);
  v16 = (int *)(a1[2] + 0x7FC);
  v17[1] = v7;
  retaddr = v8;
  v9 = sub_773960(v17, v16);
  v10 = *(_DWORD *)(v9 + 0xC);
  if ( *(_BYTE *)(a3 + 0x34) )
    v10 = *(_DWORD *)(a3 + 0x38);
  v11 = *(_DWORD *)(a1[2] + 0x280);
  v15 = v10;
  v12 = a1[0x15];
  a4 = 0;
  v13 = (*(int (__stdcall **)(int, int, int, int, int, _DWORD, int *))(*(_DWORD *)v11 + 0x64))(
          v11,
          v12,
          1,
          1,
          v15,
          0,
          &a4);
  if ( v13 >= 0 )
  {
    a1[0x14] = a3;
    return v9;
  }
  else
  {
    sub_7736F0(v13);
    TESTexture::ClearComponentReferences(v14);
    a1[0x14] = 0;
    return 0;
  }
}
