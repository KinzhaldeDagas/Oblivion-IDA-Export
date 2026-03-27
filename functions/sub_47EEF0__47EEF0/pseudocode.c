NiAVObject *__cdecl sub_47EEF0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, _DWORD *a10)
{
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _WORD *v13; // edi
  NiAVObject *v14; // eax

  v10 = (_DWORD *)FormHeapAlloc(0x24u);
  *v10 = a1;
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  v10[4] = a5;
  v10[5] = a6;
  v10[6] = a7;
  v10[7] = a8;
  v10[8] = a9;
  v11 = (_DWORD *)FormHeapAlloc(0x30u);
  v12 = v11;
  if ( v11 )
    sub_401080(v11, 0x10, 3, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v12 = 0;
  *v12 = *a10;
  v12[1] = a10[1];
  v12[2] = a10[2];
  v12[3] = a10[3];
  v12[4] = *a10;
  v12[5] = a10[1];
  v12[6] = a10[2];
  v12[7] = a10[3];
  v12[8] = *a10;
  v12[9] = a10[1];
  v12[0xA] = a10[2];
  v12[0xB] = a10[3];
  v13 = (_WORD *)FormHeapAlloc(0xCu);
  *v13 = 0;
  v13[1] = 2;
  v13[2] = 1;
  v13[3] = 0;
  v13[4] = 1;
  v13[5] = 2;
  v14 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v14 )
    return sub_7174B0(v14, 3, (int)v10, 0, (int)v12, 0, 0, 0, 2, (int)v13);
  else
    return 0;
}
