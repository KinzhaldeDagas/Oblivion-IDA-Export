NiAVObject *__cdecl sub_47F070(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _BYTE *v7; // ebp
  NiAVObject *v8; // eax

  v4 = (_DWORD *)FormHeapAlloc(0x18u);
  *v4 = *a1;
  v4[1] = a1[1];
  v4[2] = a1[2];
  v4[3] = *a3;
  v4[4] = a3[1];
  v4[5] = a3[2];
  v5 = (_DWORD *)FormHeapAlloc(0x20u);
  v6 = v5;
  if ( v5 )
    sub_401080(v5, 0x10, 2, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v6 = 0;
  *v6 = *a2;
  v6[1] = a2[1];
  v6[2] = a2[2];
  v6[3] = a2[3];
  v6[4] = *a4;
  v6[5] = a4[1];
  v6[6] = a4[2];
  v6[7] = a4[3];
  v7 = (_BYTE *)FormHeapAlloc(2u);
  *v7 = 1;
  v7[1] = 0;
  v8 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v8 )
    return sub_7177E0(v8, 2u, (int)v4, (int)v6, 0, 0, 0, (int)v7);
  else
    return 0;
}
