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

  if ( *(_DWORD *)(a1 + 0x88) )
  {
    LOBYTE(v26[0]) = 3;
    v26[1] = a2;
    sub_898820((int *)a1, (int)v26);
  }
  else
  {
    v2 = *(_DWORD *)(a2 + 0x14);
    *(_DWORD *)(a1 + 0x88) = 1;
    if ( v2 )
    {
      v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v4 = *(_DWORD **)(v3 + 0x19C);
      v5 = *(_DWORD *)(a1 + 0x2A4);
      v31 = 0;
      v32 = 0;
      v33 = 0x80000000;
      v25 = v3;
      if ( !v4 )
        v4 = (_DWORD *)dword_BA7D9C;
      v6 = (_DWORD *)v4[8];
      v7 = (char *)v6 + ((8 * v5 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v7 > v4[0xB] )
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v4 + 0xC))(v4, (8 * v5 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v4[8] = v7;
        v8 = v6;
      }
      v9 = *(_DWORD **)(v25 + 0x19C);
      v31 = v8;
      v34 = v8;
      v33 = v5 | 0x80000000;
      v10 = *(_DWORD *)(a1 + 0x2A4);
      v27 = 0;
      v28 = 0;
      v29 = 0x80000000;
      if ( !v9 )
        v9 = (_DWORD *)dword_BA7D9C;
      v11 = (_DWORD *)v9[8];
      v12 = (char *)v11 + ((8 * v10 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v12 > v9[0xB] )
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v9 + 0xC))(v9, (8 * v10 + 0x10) & 0xFFFFFFF0);
      else
        v9[8] = v12;
      v27 = v11;
      v30 = v11;
      v13 = *(_DWORD *)(a1 + 0x74);
      v29 = v10 | 0x80000000;
      v24 = *(float *)(v13 + 8) * flt_A3D65C;
      (*(void (__stdcall **)(_DWORD, _DWORD, _BYTE *))(**(_DWORD **)(a2 + 0x14) + 0xC))(
        *(_DWORD *)(a2 + 0x1C),
        LODWORD(v24),
        v35);
      v14 = *(_DWORD *)(a1 + 0x64);
      v26[0] = a2 + 0x28;
      (*(void (__thiscall **)(int, _DWORD *, _BYTE *, int, _DWORD **, _DWORD **))(*(_DWORD *)v14 + 0x18))(
        v14,
        v26,
        v35,
        1,
        &v31,
        &v27);
      if ( v32 + v28 > 0 )
      {
        sub_8D84F0((int)&v31, (int *)&v27);
        sub_8D83E0(*(_DWORD ***)(a1 + 0x68), v27, v28);
        v15 = *(_DWORD *)(a1 + 0x78);
        if ( v15 )
          v16 = (int (__thiscall ***)(_DWORD, int *, int, int))(v15 + 8);
        else
          v16 = 0;
        sub_8D8370(*(_DWORD ***)(a1 + 0x68), v31, v32, v16);
      }
      v17 = *(_DWORD **)(v25 + 0x19C);
      v18 = v30;
      if ( !v17 )
        v17 = (_DWORD *)dword_BA7D9C;
      v19 = v30 == (_DWORD *)v17[0xA];
      v17[8] = v30;
      if ( v19 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v17 + 0x10))(v17, v18);
      if ( v29 >= 0 )
      {
        v20 = *(_DWORD *)(v25 + 0x19C);
        if ( !v20 )
          v20 = dword_BA7D9C;
        sub_8A75D0(v20, v27, 8 * v29, 0x14);
      }
      v21 = *(_DWORD **)(v25 + 0x19C);
      v22 = v34;
      if ( !v21 )
        v21 = (_DWORD *)dword_BA7D9C;
      v19 = v34 == (_DWORD *)v21[0xA];
      v21[8] = v34;
      if ( v19 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v21 + 0x10))(v21, v22);
      if ( v33 >= 0 )
      {
        v23 = *(_DWORD *)(v25 + 0x19C);
        if ( !v23 )
          v23 = dword_BA7D9C;
        sub_8A75D0(v23, v31, 8 * v33, 0x14);
      }
    }
    v19 = (*(_DWORD *)(a1 + 0x88))-- == 1;
    if ( v19 )
    {
      if ( *(_DWORD *)(a1 + 0x84) )
      {
        if ( !*(_BYTE *)(a1 + 0x90) )
          sub_899210(a1);
      }
    }
  }
}
