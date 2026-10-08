void __thiscall sub_8DE950(_DWORD *this, int a2)
{
  int *v3; // ecx
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  char *v9; // ebp
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // edx
  char *v15; // ebp
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int (__thiscall ***v20)(_DWORD, int *, int, int); // eax
  int v21; // ecx
  bool v22; // zf
  _DWORD *v23; // ecx
  _DWORD *v24; // eax
  int v25; // ecx
  _DWORD *v26; // ecx
  _DWORD *v27; // eax
  int v28; // ecx
  _DWORD *v29; // [esp+10h] [ebp-30h] BYREF
  _DWORD v30[3]; // [esp+14h] [ebp-2Ch] BYREF
  _DWORD *v31; // [esp+20h] [ebp-20h] BYREF
  int v32; // [esp+24h] [ebp-1Ch]
  signed int v33; // [esp+28h] [ebp-18h]
  _DWORD *v34; // [esp+2Ch] [ebp-14h]
  _DWORD *v35; // [esp+30h] [ebp-10h] BYREF
  int v36; // [esp+34h] [ebp-Ch]
  signed int v37; // [esp+38h] [ebp-8h]
  _DWORD *v38; // [esp+3Ch] [ebp-4h]

  v3 = (int *)*(this + 2); /*0x8de956*/
  if ( v3 ) /*0x8de95d*/
  {
    if ( v3[0x22] + v3[0x23] ) /*0x8de96a*/
    {
      LOBYTE(v30[0]) = 0x11; /*0x8de97b*/
      v30[1] = this; /*0x8de980*/
      v30[2] = a2; /*0x8de984*/
      sub_898820(v3, (int)v30); /*0x8de988*/
    }
    else
    {
      v4 = MEMORY[0xBA9DE4]; /*0x8de99b*/
      ++v3[0x22]; /*0x8de9a2*/
      v5 = *(_DWORD *)(*(this + 2) + 0x2A8); /*0x8de9ab*/
      v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v4); /*0x8de9b9*/
      v7 = *(_DWORD **)(v6 + 0x19C); /*0x8de9bc*/
      v35 = 0; /*0x8de9c4*/
      v36 = 0; /*0x8de9c8*/
      v37 = 0x80000000; /*0x8de9cc*/
      if ( !v7 ) /*0x8de9d4*/
        v7 = (_DWORD *)unk_BA7D9C; /*0x8de9d6*/
      v8 = (_DWORD *)v7[8]; /*0x8de9dc*/
      v9 = (char *)v8 + ((8 * v5 + 0x10) & 0xFFFFFFF0); /*0x8de9ea*/
      if ( (unsigned int)v9 > v7[0xB] ) /*0x8de9f0*/
      {
        v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (8 * v5 + 0x10) & 0xFFFFFFF0); /*0x8de9fc*/
      }
      else
      {
        v7[8] = v9; /*0x8de9f2*/
        v10 = v8; /*0x8de9f5*/
      }
      v11 = *(_DWORD **)(v6 + 0x19C); /*0x8de9ff*/
      v35 = v10; /*0x8dea05*/
      v38 = v10; /*0x8dea0f*/
      v12 = *(this + 2); /*0x8dea13*/
      v37 = v5 | 0x80000000; /*0x8dea16*/
      v13 = *(_DWORD *)(v12 + 0x2A8); /*0x8dea1a*/
      v31 = 0; /*0x8dea24*/
      v32 = 0; /*0x8dea28*/
      v33 = 0x80000000; /*0x8dea2c*/
      if ( !v11 ) /*0x8dea34*/
        v11 = (_DWORD *)unk_BA7D9C; /*0x8dea36*/
      v14 = (_DWORD *)v11[8]; /*0x8dea3c*/
      v15 = (char *)v14 + ((8 * v13 + 0x10) & 0xFFFFFFF0); /*0x8dea49*/
      if ( (unsigned int)v15 > v11[0xB] ) /*0x8dea4f*/
      {
        v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v11 + 0xC))(v11, (8 * v13 + 0x10) & 0xFFFFFFF0); /*0x8dea5b*/
      }
      else
      {
        v11[8] = v15; /*0x8dea51*/
        v16 = v14; /*0x8dea54*/
      }
      v17 = *(this + 2); /*0x8dea5e*/
      v31 = v16; /*0x8dea61*/
      v34 = v16; /*0x8dea65*/
      v33 = v13 | 0x80000000; /*0x8dea72*/
      v29 = this + 0xA; /*0x8dea76*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v17 + 8) + 0x24))(*(_DWORD *)(v17 + 8)); /*0x8dea7f*/
      (*(void (__thiscall **)(_DWORD, _DWORD **, int, int, _DWORD **, _DWORD **))(**(_DWORD **)(*(this + 2) + 0x64) /*0x8deaa0*/
                                                                                + 0x18))(
        *(_DWORD *)(*(this + 2) + 0x64),
        &v29,
        a2,
        1,
        &v35,
        &v31);
      if ( v36 || v32 ) /*0x8deab2*/
      {
        sub_8D84F0((const void **)&v35, (int *)&v31); /*0x8deabe*/
        sub_8D83E0(*(_DWORD ***)(*(this + 2) + 0x68), v31, v32); /*0x8dead6*/
        v18 = *(this + 2); /*0x8deadb*/
        v19 = *(_DWORD *)(v18 + 0x78); /*0x8deade*/
        if ( v19 ) /*0x8deae3*/
          v20 = (int (__thiscall ***)(_DWORD, int *, int, int))(v19 + 8); /*0x8deae5*/
        else
          v20 = 0; /*0x8deaea*/
        sub_8D8370(*(_DWORD ***)(v18 + 0x68), v35, v36, v20); /*0x8deafa*/
        sub_8DE4E0(this + 0x14); /*0x8deb02*/
      }
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 2) + 8) + 0x28))(*(_DWORD *)(*(this + 2) + 8)); /*0x8deb0f*/
      v21 = *(this + 2); /*0x8deb12*/
      v22 = (*(_DWORD *)(v21 + 0x88))-- == 1; /*0x8deb15*/
      if ( v22 ) /*0x8deb1b*/
      {
        if ( *(_DWORD *)(v21 + 0x84) ) /*0x8deb1d*/
        {
          if ( !*(_BYTE *)(v21 + 0x90) ) /*0x8deb27*/
            sub_899210(v21); /*0x8deb31*/
        }
      }
      v23 = *(_DWORD **)(v6 + 0x19C); /*0x8deb36*/
      v24 = v34; /*0x8deb3e*/
      if ( !v23 ) /*0x8deb42*/
        v23 = (_DWORD *)unk_BA7D9C; /*0x8deb44*/
      v22 = v34 == (_DWORD *)v23[0xA]; /*0x8deb4a*/
      v23[8] = v34; /*0x8deb4d*/
      if ( v22 ) /*0x8deb50*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v23 + 0x10))(v23, v24); /*0x8deb55*/
      if ( v33 >= 0 ) /*0x8deb5e*/
      {
        v25 = *(_DWORD *)(v6 + 0x19C); /*0x8deb60*/
        if ( !v25 ) /*0x8deb68*/
          v25 = unk_BA7D9C; /*0x8deb6a*/
        sub_8A75D0(v25, v31, 8 * v33, 0x14); /*0x8deb80*/
      }
      v26 = *(_DWORD **)(v6 + 0x19C); /*0x8deb85*/
      v27 = v38; /*0x8deb8d*/
      if ( !v26 ) /*0x8deb91*/
        v26 = (_DWORD *)unk_BA7D9C; /*0x8deb93*/
      v22 = v38 == (_DWORD *)v26[0xA]; /*0x8deb99*/
      v26[8] = v38; /*0x8deb9c*/
      if ( v22 ) /*0x8deb9f*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v26 + 0x10))(v26, v27); /*0x8deba4*/
      if ( v37 >= 0 ) /*0x8debad*/
      {
        v28 = *(_DWORD *)(v6 + 0x19C); /*0x8debaf*/
        if ( !v28 ) /*0x8debb7*/
          v28 = unk_BA7D9C; /*0x8debb9*/
        sub_8A75D0(v28, v35, 8 * v37, 0x14); /*0x8debcf*/
      }
    }
  }
}
