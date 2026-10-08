int __thiscall sub_94CD00(_DWORD *this, const void **a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // ebp
  _DWORD *v10; // eax
  _OWORD *v11; // ebx
  _OWORD *v12; // eax
  int v13; // ebp
  _OWORD *v14; // ebx
  _OWORD *v15; // eax
  _OWORD *v16; // ebx
  _OWORD *v17; // eax
  _OWORD *v18; // ebx
  _OWORD *v19; // eax
  _OWORD *v20; // ebx
  _OWORD *v21; // eax
  _OWORD *v22; // ebx
  _OWORD *v23; // eax
  bool v24; // zf
  int v25; // [esp+4h] [ebp-18h]
  int v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+18h] [ebp-4h]
  int v28; // [esp+20h] [ebp+4h]

  result = *(this + 0x14); /*0x94cd06*/
  if ( result ) /*0x94cd0b*/
  {
    v4 = *(_DWORD *)(result + 0x10) - 1; /*0x94cd14*/
    if ( v4 >= 0 ) /*0x94cd15*/
    {
      v5 = 0xC * v4; /*0x94cd20*/
      v28 = 0xC * v4; /*0x94cd29*/
      v25 = v4 + 1; /*0x94cd2d*/
      while ( 1 ) /*0x94cd40*/
      {
        v7 = (_DWORD *)*(this + 0x14); /*0x94cd40*/
        v8 = v7[3]; /*0x94cd43*/
        v9 = *(_DWORD *)(v5 + v8 + 4); /*0x94cd46*/
        v10 = (_DWORD *)(v8 + v5); /*0x94cd4c*/
        v11 = (_OWORD *)(0x10 * *v10 + *v7); /*0x94cd56*/
        v26 = 0x10 * *v10; /*0x94cd58*/
        v27 = v10[2]; /*0x94cd5f*/
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94cd6e*/
          sub_8A6EE0(a2, 0x10); /*0x94cd73*/
        v12 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94cd85*/
        a2[1] = (char *)a2[1] + 1; /*0x94cd88*/
        *v12 = *v11; /*0x94cd8e*/
        v13 = 0x10 * v9; /*0x94cd9c*/
        v14 = (_OWORD *)(v13 + *(_DWORD *)*(this + 0x14)); /*0x94cda4*/
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94cdac*/
          sub_8A6EE0(a2, 0x10); /*0x94cdb1*/
        v15 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94cdc7*/
        a2[1] = (char *)a2[1] + 1; /*0x94cdca*/
        *v15 = *v14; /*0x94cdd0*/
        v16 = (_OWORD *)(v26 + *(_DWORD *)*(this + 0x14)); /*0x94cddb*/
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94cde8*/
          sub_8A6EE0(a2, 0x10); /*0x94cded*/
        v17 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94cdff*/
        a2[1] = (char *)a2[1] + 1; /*0x94ce02*/
        *v17 = *v16; /*0x94ce08*/
        v18 = (_OWORD *)(0x10 * v27 + *(_DWORD *)*(this + 0x14)); /*0x94ce25*/
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94ce29*/
          sub_8A6EE0(a2, 0x10); /*0x94ce2e*/
        v19 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94ce40*/
        a2[1] = (char *)a2[1] + 1; /*0x94ce43*/
        *v19 = *v18; /*0x94ce49*/
        v20 = (_OWORD *)(v13 + *(_DWORD *)*(this + 0x14)); /*0x94ce58*/
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94ce64*/
          sub_8A6EE0(a2, 0x10); /*0x94ce69*/
        v21 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94ce7b*/
        a2[1] = (char *)a2[1] + 1; /*0x94ce7e*/
        *v21 = *v20; /*0x94ce84*/
        v22 = (_OWORD *)(0x10 * v27 + *(_DWORD *)*(this + 0x14)); /*0x94ce98*/
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94ce9c*/
          sub_8A6EE0(a2, 0x10); /*0x94cea1*/
        v23 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94ceb3*/
        a2[1] = (char *)a2[1] + 1; /*0x94ceb6*/
        *v23 = *v22; /*0x94cec0*/
        result = v25 - 1; /*0x94ceca*/
        v24 = v25 == 1; /*0x94ceca*/
        v28 -= 0xC; /*0x94cecb*/
        --v25; /*0x94cecf*/
        if ( v24 ) /*0x94ced3*/
          break; /*0x94ced3*/
        v5 = v28; /*0x94cd33*/
      }
    }
  }
  return result; /*0x94cedc*/
}
