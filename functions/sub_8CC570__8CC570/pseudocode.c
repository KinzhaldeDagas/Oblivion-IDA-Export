void __cdecl sub_8CC570(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // esi
  _DWORD *v6; // edx
  char *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // esi
  _DWORD *v11; // eax
  char *v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int (__thiscall ***v16)(_DWORD, int *, int, int); // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  bool v19; // zf
  int v20; // ecx
  _DWORD *v21; // ecx
  _DWORD *v22; // eax
  int v23; // ecx
  float v24; // [esp+Ch] [ebp-68h]
  int v25; // [esp+28h] [ebp-4Ch]
  _DWORD v26[2]; // [esp+2Ch] [ebp-48h] BYREF
  _DWORD *v27; // [esp+34h] [ebp-40h] BYREF
  int v28; // [esp+38h] [ebp-3Ch]
  signed int v29; // [esp+3Ch] [ebp-38h]
  _DWORD *v30; // [esp+40h] [ebp-34h]
  _DWORD *v31; // [esp+44h] [ebp-30h] BYREF
  int v32; // [esp+48h] [ebp-2Ch]
  signed int v33; // [esp+4Ch] [ebp-28h]
  _DWORD *v34; // [esp+50h] [ebp-24h]
  _BYTE v35[32]; // [esp+54h] [ebp-20h] BYREF

  if ( *(_DWORD *)(a1 + 0x88) ) /*0x8cc57d*/
  {
    LOBYTE(v26[0]) = 3; /*0x8cc595*/
    v26[1] = a2; /*0x8cc59a*/
    sub_898820((int *)a1, (int)v26); /*0x8cc59e*/
  }
  else
  {
    v2 = *(_DWORD *)(a2 + 0x14); /*0x8cc5aa*/
    *(_DWORD *)(a1 + 0x88) = 1; /*0x8cc5af*/
    if ( v2 ) /*0x8cc5b9*/
    {
      v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8cc5cb*/
      v4 = *(_DWORD **)(v3 + 0x19C); /*0x8cc5ce*/
      v5 = *(_DWORD *)(a1 + 0x2A4); /*0x8cc5d6*/
      v31 = 0; /*0x8cc5dc*/
      v32 = 0; /*0x8cc5e0*/
      v33 = 0x80000000; /*0x8cc5e4*/
      v25 = v3; /*0x8cc5ec*/
      if ( !v4 ) /*0x8cc5f0*/
        v4 = (_DWORD *)unk_BA7D9C; /*0x8cc5f2*/
      v6 = (_DWORD *)v4[8]; /*0x8cc5f8*/
      v7 = (char *)v6 + ((8 * v5 + 0x10) & 0xFFFFFFF0); /*0x8cc605*/
      if ( (unsigned int)v7 > v4[0xB] ) /*0x8cc60b*/
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v4 + 0xC))(v4, (8 * v5 + 0x10) & 0xFFFFFFF0); /*0x8cc617*/
      }
      else
      {
        v4[8] = v7; /*0x8cc60d*/
        v8 = v6; /*0x8cc610*/
      }
      v9 = *(_DWORD **)(v25 + 0x19C); /*0x8cc61e*/
      v31 = v8; /*0x8cc62a*/
      v34 = v8; /*0x8cc62e*/
      v33 = v5 | 0x80000000; /*0x8cc636*/
      v10 = *(_DWORD *)(a1 + 0x2A4); /*0x8cc63a*/
      v27 = 0; /*0x8cc640*/
      v28 = 0; /*0x8cc644*/
      v29 = 0x80000000; /*0x8cc648*/
      if ( !v9 ) /*0x8cc650*/
        v9 = (_DWORD *)unk_BA7D9C; /*0x8cc652*/
      v11 = (_DWORD *)v9[8]; /*0x8cc658*/
      v12 = (char *)v11 + ((8 * v10 + 0x10) & 0xFFFFFFF0); /*0x8cc665*/
      if ( (unsigned int)v12 > v9[0xB] ) /*0x8cc66b*/
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v9 + 0xC))(v9, (8 * v10 + 0x10) & 0xFFFFFFF0); /*0x8cc675*/
      else
        v9[8] = v12; /*0x8cc66d*/
      v27 = v11; /*0x8cc678*/
      v30 = v11; /*0x8cc67c*/
      v13 = *(_DWORD *)(a1 + 0x74); /*0x8cc685*/
      v29 = v10 | 0x80000000; /*0x8cc68e*/
      v24 = *(float *)(v13 + 8) * kHeadBodyNormalMatchRadius; /*0x8cc6a7*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _BYTE *))(**(_DWORD **)(a2 + 0x14) + 0xC))( /*0x8cc6ab*/
        *(_DWORD *)(a2 + 0x1C),
        LODWORD(v24),
        v35);
      v14 = *(_DWORD *)(a1 + 0x64); /*0x8cc6ae*/
      v26[0] = a2 + 0x28; /*0x8cc6c9*/
      (*(void (__thiscall **)(int, _DWORD *, _BYTE *, int, _DWORD **, _DWORD **))(*(_DWORD *)v14 + 0x18))( /*0x8cc6d0*/
        v14,
        v26,
        v35,
        1,
        &v31,
        &v27);
      if ( v32 + v28 > 0 ) /*0x8cc6df*/
      {
        sub_8D84F0((const void **)&v31, (int *)&v27); /*0x8cc6eb*/
        sub_8D83E0(*(_DWORD ***)(a1 + 0x68), v27, v28); /*0x8cc700*/
        v15 = *(_DWORD *)(a1 + 0x78); /*0x8cc705*/
        if ( v15 ) /*0x8cc70a*/
          v16 = (int (__thiscall ***)(_DWORD, int *, int, int))(v15 + 8); /*0x8cc70c*/
        else
          v16 = 0; /*0x8cc711*/
        sub_8D8370(*(_DWORD ***)(a1 + 0x68), v31, v32, v16); /*0x8cc721*/
      }
      v17 = *(_DWORD **)(v25 + 0x19C); /*0x8cc72a*/
      v18 = v30; /*0x8cc732*/
      if ( !v17 ) /*0x8cc736*/
        v17 = (_DWORD *)unk_BA7D9C; /*0x8cc738*/
      v19 = v30 == (_DWORD *)v17[0xA]; /*0x8cc73e*/
      v17[8] = v30; /*0x8cc741*/
      if ( v19 ) /*0x8cc744*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v17 + 0x10))(v17, v18); /*0x8cc749*/
      if ( v29 >= 0 ) /*0x8cc752*/
      {
        v20 = *(_DWORD *)(v25 + 0x19C); /*0x8cc754*/
        if ( !v20 ) /*0x8cc75c*/
          v20 = unk_BA7D9C; /*0x8cc75e*/
        sub_8A75D0(v20, v27, 8 * v29, 0x14); /*0x8cc774*/
      }
      v21 = *(_DWORD **)(v25 + 0x19C); /*0x8cc779*/
      v22 = v34; /*0x8cc781*/
      if ( !v21 ) /*0x8cc785*/
        v21 = (_DWORD *)unk_BA7D9C; /*0x8cc787*/
      v19 = v34 == (_DWORD *)v21[0xA]; /*0x8cc78d*/
      v21[8] = v34; /*0x8cc790*/
      if ( v19 ) /*0x8cc793*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v21 + 0x10))(v21, v22); /*0x8cc798*/
      if ( v33 >= 0 ) /*0x8cc7a1*/
      {
        v23 = *(_DWORD *)(v25 + 0x19C); /*0x8cc7a3*/
        if ( !v23 ) /*0x8cc7ab*/
          v23 = unk_BA7D9C; /*0x8cc7ad*/
        sub_8A75D0(v23, v31, 8 * v33, 0x14); /*0x8cc7c3*/
      }
    }
    v19 = (*(_DWORD *)(a1 + 0x88))-- == 1; /*0x8cc7c8*/
    if ( v19 ) /*0x8cc7ce*/
    {
      if ( *(_DWORD *)(a1 + 0x84) ) /*0x8cc7d0*/
      {
        if ( !*(_BYTE *)(a1 + 0x90) ) /*0x8cc7da*/
          sub_899210(a1); /*0x8cc7e6*/
      }
    }
  }
}
