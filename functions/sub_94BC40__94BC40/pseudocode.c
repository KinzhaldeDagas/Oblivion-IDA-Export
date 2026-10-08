_WORD *__usercall sub_94BC40@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, __m128 *a3)
{
  int v3; // ecx
  int v5; // edi
  int v6; // esi
  const void **v7; // eax
  const void **v8; // esi
  _WORD *v9; // eax
  _WORD *v10; // eax
  int v11; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  _WORD *v13; // ebx
  int v14; // ecx
  int v15; // ecx
  char *v17; // [esp+10h] [ebp-24h] BYREF
  int v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  _DWORD *v20; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+20h] [ebp-14h]
  int v22; // [esp+24h] [ebp-10h]
  int v23[2]; // [esp+2Ch] [ebp-8h] BYREF
  int retaddr; // [esp+34h] [ebp+0h]

  v20 = 0; /*0x94bc57*/
  v21 = 0; /*0x94bc5b*/
  v22 = 0x80000000; /*0x94bc5f*/
  sub_8F1EC0(a1, (const void **)&v20); /*0x94bc63*/
  if ( v21 >= 1 )
  {
    v17 = 0; /*0x94bcbd*/
    v18 = 0; /*0x94bcc1*/
    v19 = 0x80000000; /*0x94bcc5*/
    v5 = v21; /*0x94bcc9*/
    sub_8A6E40((const void **)&v17, v21 < 0 ? 0 : v21, 0x10);
    v18 = v5; /*0x94bce9*/
    v6 = 0; /*0x94bcef*/
    do /*0x94bd0a*/
    {
      hkTransform_TransformPosition((__m128 *)&v17[v6 * 4], a3, (__m128 *)&v20[v6]); /*0x94bd01*/
      v6 += 4; /*0x94bd06*/
      --v5; /*0x94bd09*/
    }
    while ( v5 ); /*0x94bd0a*/
    v7 = (const void **)(*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x94bd1d*/
                          unk_BA7D98,
                          0x18,
                          0x24,
                          a2);
    if ( v7 ) /*0x94bd22*/
    {
      v7[2] = (const void *)0x80000000; /*0x94bd24*/
      *v7 = 0; /*0x94bd27*/
      v7[1] = 0; /*0x94bd29*/
      v7[5] = (const void *)0x80000000; /*0x94bd2c*/
      v7[3] = 0; /*0x94bd2f*/
      v7[4] = 0; /*0x94bd32*/
      v8 = v7; /*0x94bd35*/
    }
    else
    {
      v8 = 0; /*0x94bd39*/
    }
    v23[1] = v19; /*0x94bd4b*/
    retaddr = 0x10; /*0x94bd4f*/
    v23[0] = v18; /*0x94bd57*/
    sub_8F21E0(v23, v8, 1); /*0x94bd5b*/
    v9 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60); /*0x94bd6f*/
    v9[2] = 0x60; /*0x94bd75*/
    v10 = sub_94CCB0(v9, (int)v8); /*0x94bd7b*/
    v11 = MEMORY[0xBA9DE4]; /*0x94bd80*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x94bd86*/
    v13 = v10; /*0x94bd8d*/
    if ( v19 >= 0 ) /*0x94bd95*/
    {
      v14 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x94bd9a*/
      if ( !v14 ) /*0x94bda2*/
        v14 = unk_BA7D9C; /*0x94bda4*/
      sub_8A75D0(v14, v17, 0x10 * v19, 0x14); /*0x94bdba*/
    }
    if ( v22 >= 0 ) /*0x94bdc5*/
    {
      v15 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C); /*0x94bdca*/
      if ( !v15 ) /*0x94bdd2*/
        v15 = unk_BA7D9C; /*0x94bdd4*/
      sub_8A75D0(v15, v20, 0x10 * v22, 0x14); /*0x94bdea*/
    }
    return v13; /*0x94bdf2*/
  }
  else
  {
    if ( (v22 & 0x80000000) == 0 ) /*0x94bc7a*/
    {
      v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94bc8c*/
      if ( !v3 ) /*0x94bc94*/
        v3 = unk_BA7D9C; /*0x94bc96*/
      sub_8A75D0(v3, v20, 0x10 * v22, 0x14); /*0x94bcac*/
    }
    return 0; /*0x94bcb3*/
  }
}
