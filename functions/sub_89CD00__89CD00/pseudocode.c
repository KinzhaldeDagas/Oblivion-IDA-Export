void __thiscall sub_89CD00(const void **this, int a2, int a3)
{
  int v4; // eax
  char **v5; // ecx
  int v6; // edi
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  char *v9; // ebp
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // edx
  char *v13; // edi
  _DWORD *v14; // eax
  int v15; // ebp
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // esi
  _DWORD *v21; // edx
  char *v22; // ebp
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // eax
  int (__thiscall ***v26)(_DWORD, int *, int, int); // eax
  bool v27; // zf
  _DWORD *v28; // ecx
  _DWORD *v29; // eax
  int v30; // ecx
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // ecx
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // [esp+Ch] [ebp-44h]
  int v38; // [esp+10h] [ebp-40h]
  _DWORD v39[2]; // [esp+14h] [ebp-3Ch] BYREF
  int v40; // [esp+1Ch] [ebp-34h]
  _DWORD *v41; // [esp+20h] [ebp-30h] BYREF
  int v42; // [esp+24h] [ebp-2Ch]
  signed int v43; // [esp+28h] [ebp-28h]
  _DWORD *v44; // [esp+2Ch] [ebp-24h]
  _DWORD *v45; // [esp+30h] [ebp-20h] BYREF
  int v46; // [esp+34h] [ebp-1Ch]
  signed int v47; // [esp+38h] [ebp-18h]
  _DWORD *v48; // [esp+3Ch] [ebp-14h]
  _DWORD *v49; // [esp+40h] [ebp-10h] BYREF
  int v50; // [esp+44h] [ebp-Ch]
  signed int v51; // [esp+48h] [ebp-8h]
  _DWORD *v52; // [esp+4Ch] [ebp-4h]

  v4 = (int)*(this + 0x22); /*0x89cd06*/
  if ( (char *)*(this + 0x23) + v4 ) /*0x89cd12*/
  {
    v5 = (char **)*(this + 0x20); /*0x89cd24*/
    LOBYTE(v39[0]) = 0xF; /*0x89cd2a*/
    v39[1] = a2; /*0x89cd2f*/
    LOWORD(v40) = a3; /*0x89cd33*/
    sub_8D8830(v5, (int)v39); /*0x89cd38*/
  }
  else
  {
    v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x89cd53*/
    *(this + 0x22) = (const void *)(v4 + 1); /*0x89cd56*/
    v7 = *(_DWORD **)(v6 + 0x19C); /*0x89cd5c*/
    v49 = 0; /*0x89cd66*/
    v50 = 0; /*0x89cd6a*/
    v51 = 0x80000000; /*0x89cd6e*/
    v38 = v6; /*0x89cd76*/
    if ( !v7 ) /*0x89cd7a*/
      v7 = (_DWORD *)unk_BA7D9C; /*0x89cd7c*/
    v8 = (_DWORD *)v7[8]; /*0x89cd82*/
    v9 = (char *)v8 + ((4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89cd95*/
    if ( (unsigned int)v9 > v7[0xB] ) /*0x89cd9b*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89cda7*/
    }
    else
    {
      v7[8] = v9; /*0x89cd9d*/
      v10 = v8; /*0x89cda0*/
    }
    v11 = *(_DWORD **)(v6 + 0x19C); /*0x89cdaa*/
    v49 = v10; /*0x89cdb0*/
    v52 = v10; /*0x89cdb6*/
    v51 = a3 | 0x80000000; /*0x89cdc4*/
    v45 = 0; /*0x89cdc8*/
    v46 = 0; /*0x89cdcc*/
    v47 = 0x80000000; /*0x89cdd0*/
    if ( !v11 ) /*0x89cdd8*/
      v11 = (_DWORD *)unk_BA7D9C; /*0x89cdda*/
    v12 = (_DWORD *)v11[8]; /*0x89cde0*/
    v13 = (char *)v12 + ((0x20 * a3 + 0x10) & 0xFFFFFFF0); /*0x89cdee*/
    if ( (unsigned int)v13 > v11[0xB] ) /*0x89cdf4*/
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v11 + 0xC))(v11, (0x20 * a3 + 0x10) & 0xFFFFFFF0); /*0x89ce00*/
    }
    else
    {
      v11[8] = v13; /*0x89cdf6*/
      v14 = v12; /*0x89cdf9*/
    }
    v47 = a3 | 0x80000000; /*0x89ce03*/
    v15 = 0; /*0x89ce07*/
    v45 = v14; /*0x89ce0b*/
    v48 = v14; /*0x89ce0f*/
    v46 = a3; /*0x89ce13*/
    v50 = a3; /*0x89ce17*/
    if ( a3 > 0 ) /*0x89ce1b*/
    {
      v37 = 0; /*0x89ce27*/
      do /*0x89cebb*/
      {
        v16 = *(_DWORD **)(a2 + 4 * v15); /*0x89ce34*/
        if ( !v16[7] ) /*0x89ce37*/
          v16[7] = (*(int (__thiscall **)(_DWORD))(*v16 + 0xC))(*(_DWORD *)(a2 + 4 * v15)); /*0x89ce45*/
        v16[2] = this; /*0x89ce48*/
        v49[v15] = v16 + 0xA; /*0x89ce52*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v16 + 0x14))(v16, &v45[v37]); /*0x89ce64*/
        sub_8BC720(v16); /*0x89ce69*/
        if ( *(this + 0x2F) == (const void *)((unsigned int)*(this + 0x30) & 0x3FFFFFFF) ) /*0x89ce7c*/
          sub_8A6EE0(this + 0x2E, 4); /*0x89ce81*/
        *((_DWORD *)*(this + 0x2E) + (_DWORD)*(this + 0x2F)) = v16; /*0x89ce8e*/
        v17 = (int)*(this + 0x2F) + 1; /*0x89ce94*/
        *(this + 0x2F) = (const void *)v17; /*0x89ce97*/
        v18 = sub_8DC530(v17, (int)this, (int)v16); /*0x89ce9a*/
        sub_8DE590(v18, (int)v16); /*0x89cea4*/
        ++v15; /*0x89ceb1*/
        v37 += 8; /*0x89ceb7*/
      }
      while ( v15 < a3 ); /*0x89cebb*/
    }
    v19 = *(_DWORD **)(v38 + 0x19C); /*0x89cec5*/
    v20 = (int)*(this + 0xA9); /*0x89cecb*/
    v41 = 0; /*0x89ced5*/
    v42 = 0; /*0x89ced9*/
    v43 = 0x80000000; /*0x89cedd*/
    if ( !v19 ) /*0x89cee5*/
      v19 = (_DWORD *)unk_BA7D9C; /*0x89cee7*/
    v21 = (_DWORD *)v19[8]; /*0x89ceed*/
    v22 = (char *)v21 + ((8 * v20 + 0x10) & 0xFFFFFFF0); /*0x89cefa*/
    if ( (unsigned int)v22 > v19[0xB] ) /*0x89cf00*/
    {
      v23 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v19 + 0xC))(v19, (8 * v20 + 0x10) & 0xFFFFFFF0); /*0x89cf0c*/
    }
    else
    {
      v19[8] = v22; /*0x89cf02*/
      v23 = v21; /*0x89cf05*/
    }
    v24 = (int)*(this + 0x19); /*0x89cf0f*/
    v41 = v23; /*0x89cf26*/
    v43 = v20 | 0x80000000; /*0x89cf2a*/
    v44 = v23; /*0x89cf2e*/
    (*(void (__thiscall **)(int, _DWORD **, _DWORD **, _DWORD **))(*(_DWORD *)v24 + 0xC))(v24, &v49, &v45, &v41); /*0x89cf35*/
    v25 = (int)*(this + 0x1E); /*0x89cf38*/
    if ( v25 ) /*0x89cf3f*/
      v26 = (int (__thiscall ***)(_DWORD, int *, int, int))(v25 + 8); /*0x89cf41*/
    else
      v26 = 0; /*0x89cf46*/
    sub_8D8370((_DWORD **)*(this + 0x1A), v41, v42, v26); /*0x89cf56*/
    v27 = *(this + 0x22) == (const void *)1; /*0x89cf5b*/
    *(this + 0x22) = (char *)*(this + 0x22) + 0xFFFFFFFF; /*0x89cf5b*/
    if ( v27 ) /*0x89cf61*/
    {
      if ( *(this + 0x21) ) /*0x89cf63*/
      {
        if ( !*((_BYTE *)this + 0x90) ) /*0x89cf6d*/
          sub_899210((int)this); /*0x89cf79*/
      }
    }
    v28 = *(_DWORD **)(v38 + 0x19C); /*0x89cf7e*/
    v29 = v44; /*0x89cf86*/
    if ( !v28 ) /*0x89cf8a*/
      v28 = (_DWORD *)unk_BA7D9C; /*0x89cf8c*/
    v27 = v44 == (_DWORD *)v28[0xA]; /*0x89cf92*/
    v28[8] = v44; /*0x89cf95*/
    if ( v27 ) /*0x89cf98*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v28 + 0x10))(v28, v29); /*0x89cf9d*/
    if ( v43 >= 0 ) /*0x89cfa6*/
    {
      v30 = *(_DWORD *)(v38 + 0x19C); /*0x89cfa8*/
      if ( !v30 ) /*0x89cfb0*/
        v30 = unk_BA7D9C; /*0x89cfb2*/
      sub_8A75D0(v30, v41, 8 * v43, 0x14); /*0x89cfc8*/
    }
    v31 = *(_DWORD **)(v38 + 0x19C); /*0x89cfcd*/
    v32 = v48; /*0x89cfd5*/
    if ( !v31 ) /*0x89cfd9*/
      v31 = (_DWORD *)unk_BA7D9C; /*0x89cfdb*/
    v27 = v48 == (_DWORD *)v31[0xA]; /*0x89cfe1*/
    v31[8] = v48; /*0x89cfe4*/
    if ( v27 ) /*0x89cfe7*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v31 + 0x10))(v31, v32); /*0x89cfec*/
    if ( v47 >= 0 ) /*0x89cff5*/
    {
      v33 = *(_DWORD *)(v38 + 0x19C); /*0x89cff7*/
      if ( !v33 ) /*0x89cfff*/
        v33 = unk_BA7D9C; /*0x89d001*/
      sub_8A75D0(v33, v45, 0x20 * v47, 0x14); /*0x89d017*/
    }
    v34 = *(_DWORD **)(v38 + 0x19C); /*0x89d01c*/
    v35 = v52; /*0x89d024*/
    if ( !v34 ) /*0x89d028*/
      v34 = (_DWORD *)unk_BA7D9C; /*0x89d02a*/
    v27 = v52 == (_DWORD *)v34[0xA]; /*0x89d030*/
    v34[8] = v52; /*0x89d033*/
    if ( v27 ) /*0x89d036*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v34 + 0x10))(v34, v35); /*0x89d03b*/
    if ( v51 >= 0 ) /*0x89d044*/
    {
      v36 = *(_DWORD *)(v38 + 0x19C); /*0x89d046*/
      if ( !v36 ) /*0x89d04e*/
        v36 = unk_BA7D9C; /*0x89d050*/
      sub_8A75D0(v36, v49, 4 * v51, 0x14); /*0x89d066*/
    }
  }
}
