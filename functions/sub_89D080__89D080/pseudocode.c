void __thiscall sub_89D080(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  char **v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebp
  _DWORD *v10; // edx
  char *v11; // edi
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // edi
  _DWORD *v17; // eax
  char *v18; // ebp
  int v19; // ecx
  int v20; // edi
  _DWORD *v21; // eax
  _DWORD *v22; // edx
  bool v23; // zf
  int v24; // ecx
  int v25; // ebp
  int (__thiscall ***v26)(int (__stdcall ***)(signed int), int); // edi
  signed int v27; // eax
  int v28; // ecx
  int (__thiscall ****v29)(int (__stdcall ***)(signed int), int); // edx
  int v30; // ecx
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // ecx
  int v34; // [esp+14h] [ebp-24h]
  _DWORD *v35; // [esp+18h] [ebp-20h] BYREF
  int v36; // [esp+1Ch] [ebp-1Ch]
  signed int v37; // [esp+20h] [ebp-18h]
  _DWORD *v38; // [esp+24h] [ebp-14h]
  _DWORD *v39; // [esp+28h] [ebp-10h] BYREF
  int v40; // [esp+2Ch] [ebp-Ch]
  signed int v41; // [esp+30h] [ebp-8h]
  _DWORD *v42; // [esp+34h] [ebp-4h]

  v4 = *(this + 0x22); /*0x89d086*/
  if ( v4 + *(this + 0x23) ) /*0x89d092*/
  {
    v5 = (char **)*(this + 0x20); /*0x89d0a4*/
    LOBYTE(v35) = 0x10; /*0x89d0aa*/
    v36 = a2; /*0x89d0af*/
    LOWORD(v37) = a3; /*0x89d0b3*/
    sub_8D8830(v5, (int)&v35); /*0x89d0b8*/
  }
  else
  {
    v6 = MEMORY[0xBA9DE4]; /*0x89d0c4*/
    *(this + 0x22) = v4 + 1; /*0x89d0cb*/
    v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6); /*0x89d0d7*/
    v8 = *(_DWORD **)(v7 + 0x19C); /*0x89d0da*/
    v9 = 0; /*0x89d0e2*/
    v39 = 0; /*0x89d0e7*/
    v40 = 0; /*0x89d0eb*/
    v41 = 0x80000000; /*0x89d0ef*/
    v34 = v7; /*0x89d0f7*/
    if ( !v8 ) /*0x89d0fb*/
      v8 = (_DWORD *)unk_BA7D9C; /*0x89d0fd*/
    v10 = (_DWORD *)v8[8]; /*0x89d107*/
    v11 = (char *)v10 + ((4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89d114*/
    if ( (unsigned int)v11 > v8[0xB] ) /*0x89d11a*/
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v8 + 0xC))(v8, (4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89d126*/
    }
    else
    {
      v8[8] = v11; /*0x89d11c*/
      v12 = v10; /*0x89d11f*/
    }
    v39 = v12; /*0x89d133*/
    v41 = a3 | 0x80000000; /*0x89d137*/
    v42 = v12; /*0x89d13b*/
    if ( a3 > 0 ) /*0x89d13f*/
    {
      do /*0x89d173*/
      {
        v13 = *(_DWORD *)(a2 + 4 * v9); /*0x89d145*/
        v39[v40++] = v13 + 0x28; /*0x89d153*/
        v14 = sub_8DC5C0(v13 + 0x28, (int)this, v13); /*0x89d161*/
        sub_8DE520(v14, v13); /*0x89d16b*/
        ++v9; /*0x89d170*/
      }
      while ( v9 < a3 ); /*0x89d173*/
    }
    v15 = *(_DWORD **)(v34 + 0x19C); /*0x89d179*/
    v16 = *(this + 0xA9); /*0x89d17f*/
    v35 = 0; /*0x89d189*/
    v36 = 0; /*0x89d18d*/
    v37 = 0x80000000; /*0x89d191*/
    if ( !v15 ) /*0x89d199*/
      v15 = (_DWORD *)unk_BA7D9C; /*0x89d19b*/
    v17 = (_DWORD *)v15[8]; /*0x89d1a1*/
    v18 = (char *)v17 + ((8 * v16 + 0x10) & 0xFFFFFFF0); /*0x89d1ae*/
    if ( (unsigned int)v18 > v15[0xB] ) /*0x89d1b4*/
      v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v15 + 0xC))(v15, (8 * v16 + 0x10) & 0xFFFFFFF0); /*0x89d1be*/
    else
      v15[8] = v18; /*0x89d1b6*/
    v19 = *(this + 0x19); /*0x89d1c1*/
    v35 = v17; /*0x89d1c4*/
    v38 = v17; /*0x89d1c8*/
    v37 = v16 | 0x80000000; /*0x89d1db*/
    (*(void (__thiscall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v19 + 0x14))(v19, &v39, &v35); /*0x89d1e2*/
    sub_8D83E0((_DWORD **)*(this + 0x1A), v35, v36); /*0x89d1f2*/
    v20 = v34; /*0x89d1f7*/
    v21 = *(_DWORD **)(v34 + 0x19C); /*0x89d1fb*/
    v22 = v38; /*0x89d203*/
    if ( !v21 ) /*0x89d207*/
      v21 = (_DWORD *)unk_BA7D9C; /*0x89d209*/
    v23 = v38 == (_DWORD *)v21[0xA]; /*0x89d20e*/
    v21[8] = v38; /*0x89d211*/
    if ( v23 ) /*0x89d214*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v21 + 0x10))(v21, v22); /*0x89d21b*/
    if ( v37 >= 0 ) /*0x89d224*/
    {
      v24 = *(_DWORD *)(v34 + 0x19C); /*0x89d226*/
      if ( !v24 ) /*0x89d22e*/
        v24 = unk_BA7D9C; /*0x89d230*/
      sub_8A75D0(v24, v35, 8 * v37, 0x14); /*0x89d246*/
    }
    v25 = 0; /*0x89d24b*/
    if ( a3 > 0 ) /*0x89d24f*/
    {
      do /*0x89d2b2*/
      {
        v26 = *(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(a2 + 4 * v25); /*0x89d255*/
        v27 = 0; /*0x89d258*/
        v26[2] = 0; /*0x89d25a*/
        v28 = *(this + 0x2F); /*0x89d25d*/
        if ( v28 <= 0 ) /*0x89d265*/
        {
LABEL_28:
          v27 = 0xFFFFFFFF; /*0x89d27c*/
        }
        else
        {
          v29 = (int (__thiscall ****)(int (__stdcall ***)(signed int), int))*(this + 0x2E); /*0x89d267*/
          while ( *v29 != v26 ) /*0x89d272*/
          {
            ++v27; /*0x89d274*/
            ++v29; /*0x89d275*/
            if ( v27 >= v28 ) /*0x89d27a*/
              goto LABEL_28; /*0x89d27a*/
          }
        }
        v30 = *(this + 0x2F) - 1; /*0x89d285*/
        *(this + 0x2F) = v30; /*0x89d286*/
        *(_DWORD *)(*(this + 0x2E) + 4 * v27) = *(_DWORD *)(*(this + 0x2E) + 4 * v30); /*0x89d297*/
        if ( !*((_WORD *)v26 + 2) ) /*0x89d29a*/
          ((void (__thiscall *)(int (__thiscall ***)(int (__stdcall ***)(signed int), int)))(*v26)[0xB])(v26); /*0x89d2a5*/
        sub_8BC730(v26); /*0x89d2aa*/
        ++v25; /*0x89d2af*/
      }
      while ( v25 < a3 ); /*0x89d2b2*/
      v20 = v34; /*0x89d2b4*/
    }
    v23 = (*(this + 0x22))-- == 1; /*0x89d2b8*/
    if ( v23 ) /*0x89d2be*/
    {
      if ( *(this + 0x21) ) /*0x89d2c0*/
      {
        if ( !*((_BYTE *)this + 0x90) ) /*0x89d2ca*/
          sub_899210((int)this); /*0x89d2d6*/
      }
    }
    v31 = *(_DWORD **)(v20 + 0x19C); /*0x89d2db*/
    v32 = v42; /*0x89d2e3*/
    if ( !v31 ) /*0x89d2e7*/
      v31 = (_DWORD *)unk_BA7D9C; /*0x89d2e9*/
    v23 = v42 == (_DWORD *)v31[0xA]; /*0x89d2ef*/
    v31[8] = v42; /*0x89d2f2*/
    if ( v23 ) /*0x89d2f5*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v31 + 0x10))(v31, v32); /*0x89d2fa*/
    if ( v41 >= 0 ) /*0x89d303*/
    {
      v33 = *(_DWORD *)(v20 + 0x19C); /*0x89d305*/
      if ( !v33 ) /*0x89d30d*/
        v33 = unk_BA7D9C; /*0x89d30f*/
      sub_8A75D0(v33, v39, 4 * v41, 0x14); /*0x89d325*/
    }
  }
}
