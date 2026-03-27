unsigned int __stdcall sub_9A83B0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        float *a9,
        float *a10,
        int a11)
{
  int v11; // esi
  int v12; // ebx
  int v13; // edi
  int v14; // eax
  _DWORD *v15; // ebx
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  unsigned int v20; // [esp+10h] [ebp-4h]

  v11 = a2;
  v12 = *(unsigned __int8 *)(a2 + 0x15);
  v13 = *(_DWORD *)(a2 + 0x18);
  v20 = 0;
  if ( !byte_B4295C )
    sub_783D70();
  v14 = dword_B42914[v12];
  v15 = a8;
  v16 = sub_9A8290(a8, v14, v13);
  v17 = *(_DWORD *)(v11 + 0x10);
  v18 = v16;
  if ( !sub_9A5610(v17, &a2, &a8) )
    return 0x80000010;
  if ( !sub_9A66F0(flt_BAA8E0, 0x10 * a2, v17, v18, a3, a4, a5, a6, a7, (int)v15, a9, a10) )
    v20 = 0x80000060;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x28))(a1, v11, flt_BAA8E0, 0) )
    return 0x80000050;
  return v20;
}
