int __cdecl sub_931B80(int a1, int a2, _DWORD *a3, const void **a4)
{
  int v4; // edx
  const void **v5; // ebx
  int v6; // ebp
  int v7; // esi
  _DWORD *v8; // ecx
  char *v9; // edx
  char *v10; // edi
  const void *v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  char *v14; // edx
  char *v15; // edi
  const void *v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int *v19; // esi
  int v20; // eax
  _WORD *v21; // ecx
  _WORD *v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  bool v28; // cc
  _DWORD *v29; // edx
  int v30; // eax
  const void *v31; // ecx
  int v32; // ecx
  _WORD **v33; // eax
  const void *v34; // ecx
  _WORD *v35; // edi
  const void *v36; // ecx
  _WORD *v37; // ebp
  int v38; // ecx
  _WORD *v39; // ecx
  const void *v40; // edx
  const void *v41; // ecx
  int v42; // edx
  _WORD *v43; // ecx
  const void *v44; // edx
  const void *v45; // ecx
  int v46; // ebx
  _WORD *v47; // ecx
  bool v48; // zf
  _DWORD *v49; // ecx
  const void *v50; // eax
  _DWORD *v51; // ecx
  const void *v52; // eax
  int result; // eax
  int v54; // [esp-Ch] [ebp-64h]
  int v55; // [esp-Ch] [ebp-64h]
  _WORD *v56; // [esp+10h] [ebp-48h]
  __int16 v57; // [esp+14h] [ebp-44h]
  const void *v58; // [esp+18h] [ebp-40h]
  int v59; // [esp+1Ch] [ebp-3Ch]
  int v60; // [esp+1Ch] [ebp-3Ch]
  __int16 v61; // [esp+20h] [ebp-38h]
  int v62; // [esp+24h] [ebp-34h]
  int v63; // [esp+28h] [ebp-30h]
  const void *v64; // [esp+34h] [ebp-24h]
  const void *v65[2]; // [esp+38h] [ebp-20h] BYREF
  signed int v66; // [esp+40h] [ebp-18h]
  const void *v67; // [esp+44h] [ebp-14h]
  const void *v68[2]; // [esp+48h] [ebp-10h] BYREF
  signed int v69; // [esp+50h] [ebp-8h]
  const void *v70; // [esp+54h] [ebp-4h]
  int v71; // [esp+5Ch] [ebp+4h]
  int v72; // [esp+60h] [ebp+8h]
  const void *v73; // [esp+60h] [ebp+8h]

  v4 = MEMORY[0xBA9DE4]; /*0x931b87*/
  v5 = a4; /*0x931b90*/
  a4[2] = 0; /*0x931b94*/
  v68[0] = 0; /*0x931b97*/
  v68[1] = 0; /*0x931b9b*/
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v4); /*0x931ba6*/
  v7 = *(_DWORD *)(a1 + 8); /*0x931baa*/
  v8 = *(_DWORD **)(v6 + 0x19C); /*0x931bad*/
  v69 = 0x80000000; /*0x931bb3*/
  v9 = (char *)v8[8]; /*0x931bbb*/
  v10 = &v9[(2 * v7 + 0x10) & 0xFFFFFFF0]; /*0x931bc6*/
  v63 = v6; /*0x931bcc*/
  if ( (unsigned int)v10 > v8[0xB] ) /*0x931bd0*/
  {
    v11 = (const void *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v8 + 0xC))(v8, (2 * v7 + 0x10) & 0xFFFFFFF0); /*0x931bdc*/
  }
  else
  {
    v8[8] = v10; /*0x931bd2*/
    v11 = v9; /*0x931bd5*/
  }
  v68[0] = v11; /*0x931bdf*/
  v70 = v11; /*0x931be3*/
  v54 = (int)v8; /*0x931bed*/
  v69 = v7 | 0x80000000; /*0x931bfa*/
  LOBYTE(v54) = 1; /*0x931bff*/
  sub_931140(a1, v54, (int)a4, v68); /*0x931c02*/
  v12 = *(_DWORD *)(a2 + 8); /*0x931c0b*/
  v13 = *(_DWORD **)(v6 + 0x19C); /*0x931c0e*/
  v65[0] = 0; /*0x931c16*/
  v65[1] = 0; /*0x931c1a*/
  v66 = 0x80000000; /*0x931c1e*/
  v14 = (char *)v13[8]; /*0x931c26*/
  v15 = &v14[(2 * v12 + 0x10) & 0xFFFFFFF0]; /*0x931c30*/
  if ( (unsigned int)v15 > v13[0xB] ) /*0x931c39*/
  {
    v16 = (const void *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))(v13, (2 * v12 + 0x10) & 0xFFFFFFF0); /*0x931c45*/
  }
  else
  {
    v13[8] = v15; /*0x931c3b*/
    v16 = v14; /*0x931c3e*/
  }
  v65[0] = v16; /*0x931c48*/
  v67 = v16; /*0x931c4c*/
  v55 = (int)v13; /*0x931c56*/
  v66 = v12 | 0x80000000; /*0x931c63*/
  LOBYTE(v55) = 0; /*0x931c68*/
  sub_931140(a2, v55, (int)a4, v65); /*0x931c6b*/
  v17 = a3; /*0x931c70*/
  v18 = (int)a4[2] + 3 * a3[1]; /*0x931c7d*/
  v19 = (int *)(a4 + 1); /*0x931c82*/
  if ( (int)((unsigned int)a4[3] & 0x3FFFFFFF) < v18 ) /*0x931c90*/
    sub_8A6E40(a4 + 1, v18, 8); /*0x931c96*/
  v59 = 0; /*0x931ca5*/
  if ( (int)a3[1] > 0 ) /*0x931ca9*/
  {
    v72 = 0; /*0x931caf*/
    do /*0x931d48*/
    {
      v20 = v72 + *a3; /*0x931cbd*/
      v21 = *(_WORD **)v20; /*0x931cbf*/
      *(_WORD *)(v20 + 8) = **(_WORD **)v20; /*0x931cc4*/
      *(_WORD *)(v20 + 0xC) = *(_WORD *)(*(_DWORD *)(a1 + 4) + 8 * (unsigned __int16)v21[2]); /*0x931cd4*/
      v22 = *(_WORD **)(v20 + 4); /*0x931cd8*/
      *(_WORD *)(v20 + 0xE) = *v22; /*0x931cde*/
      v23 = *((unsigned __int16 *)v68[0] + (((int)v21 - *(_DWORD *)(a1 + 4)) >> 3)); /*0x931cf4*/
      v24 = (8 * (unsigned __int16)v22[1]) >> 3; /*0x931cfc*/
      if ( v23 == 0xFFFF ) /*0x931d05*/
        v25 = 0; /*0x931d07*/
      else
        v25 = *v19 + 8 * v23; /*0x931d0d*/
      *(_DWORD *)v20 = v25; /*0x931d11*/
      v26 = *((unsigned __int16 *)v65[0] + v24); /*0x931d17*/
      if ( v26 == 0xFFFF ) /*0x931d21*/
        v27 = 0; /*0x931d23*/
      else
        v27 = *v19 + 8 * v26; /*0x931d29*/
      *(_DWORD *)(v20 + 4) = v27; /*0x931d30*/
      v28 = ++v59 < a3[1]; /*0x931d3e*/
      v72 += 0x10; /*0x931d44*/
    }
    while ( v28 ); /*0x931d48*/
  }
  v29 = (_DWORD *)*a3; /*0x931d56*/
  v56 = 0; /*0x931d58*/
  v30 = a3[1] - 1; /*0x931d5f*/
  v71 = *v19; /*0x931d60*/
  v31 = a4[2]; /*0x931d64*/
  v57 = 0xFFFF; /*0x931d67*/
  v64 = v31; /*0x931d6f*/
  if ( v30 >= 0 ) /*0x931d73*/
  {
    v32 = 0x10 * v30; /*0x931d7b*/
    v60 = 0x10 * v30; /*0x931d7f*/
    v62 = a3[1]; /*0x931d83*/
    while ( 1 ) /*0x931d93*/
    {
      v33 = (_WORD **)(v32 + *v17); /*0x931d93*/
      v73 = v5[2]; /*0x931d98*/
      v34 = a4[2]; /*0x931d9c*/
      a4[2] = (char *)v34 + 1; /*0x931da2*/
      v35 = (_WORD *)(*v19 + 8 * (_DWORD)v34); /*0x931da7*/
      v58 = v5[2]; /*0x931dad*/
      v36 = a4[2]; /*0x931db1*/
      a4[2] = (char *)v36 + 1; /*0x931db7*/
      v37 = (_WORD *)(*v19 + 8 * (_DWORD)v36); /*0x931dbc*/
      v38 = (int)*v33; /*0x931dc0*/
      if ( *v33 == (_WORD *)*v29 ) /*0x931dc4*/
      {
        v39 = v33[1]; /*0x931dca*/
        if ( v39[3] == 2 ) /*0x931ddb*/
          LOWORD(v40) = v39[1]; /*0x931ddd*/
        else
          v40 = v5[2]; /*0x931de3*/
        v61 = (__int16)v40; /*0x931de6*/
        if ( v39[3] == 2 ) /*0x931df0*/
        {
          v41 = (const void *)(unsigned __int16)v39[1]; /*0x931df2*/
          v42 = v71; /*0x931df6*/
        }
        else
        {
          v41 = a4[2]; /*0x931dfc*/
          a4[2] = (char *)v41 + 1; /*0x931e02*/
          v42 = *v19; /*0x931e05*/
        }
        v43 = (_WORD *)(v42 + 8 * (_DWORD)v41); /*0x931e07*/
        *v35 = *v33[1]; /*0x931e10*/
        v35[2] = (_WORD)v58; /*0x931e18*/
        v35[1] = v57; /*0x931e21*/
        if ( v56 ) /*0x931e2b*/
          v56[1] = (_WORD)v73; /*0x931e32*/
        *v43 = *((_WORD *)v33 + 7); /*0x931e3e*/
        v43[2] = (_WORD)v73; /*0x931e46*/
        v43[1] = ((int)v33[1] - v71) >> 3; /*0x931e52*/
        v33[1][1] = v61; /*0x931e5d*/
        *v37 = *((_WORD *)v33 + 4); /*0x931e65*/
        v37[2] = v61; /*0x931e69*/
      }
      else
      {
        if ( *(_WORD *)(v38 + 6) == 2 ) /*0x931e80*/
          LOWORD(v44) = *(_WORD *)(v38 + 2); /*0x931e82*/
        else
          v44 = v5[2]; /*0x931e88*/
        if ( *(_WORD *)(v38 + 6) == 2 ) /*0x931e91*/
        {
          v45 = (const void *)*(unsigned __int16 *)(v38 + 2); /*0x931e93*/
          v46 = v71; /*0x931e97*/
        }
        else
        {
          v45 = a4[2]; /*0x931e9d*/
          a4[2] = (char *)v45 + 1; /*0x931ea3*/
          v46 = *v19; /*0x931ea6*/
        }
        v47 = (_WORD *)(v46 + 8 * (_DWORD)v45); /*0x931ea8*/
        *v35 = *((_WORD *)v33 + 7); /*0x931eaf*/
        v35[2] = (_WORD)v44; /*0x931eb7*/
        v35[1] = v57; /*0x931ebb*/
        if ( v56 ) /*0x931ec5*/
          v56[1] = (_WORD)v73; /*0x931ecc*/
        *v47 = *((_WORD *)v33 + 6); /*0x931ed8*/
        v47[2] = (_WORD)v58; /*0x931ee0*/
        v5 = a4; /*0x931ee8*/
        v47[1] = ((int)*v33 - v71) >> 3; /*0x931eef*/
        (*v33)[1] = (_WORD)v44; /*0x931ef5*/
        *v37 = **v33; /*0x931f03*/
        v37[2] = (_WORD)v73; /*0x931f07*/
      }
      v57 = (__int16)v58; /*0x931f0f*/
      v29 = v33; /*0x931f17*/
      v48 = v62 == 1; /*0x931f20*/
      v56 = v37; /*0x931f21*/
      v60 -= 0x10; /*0x931f25*/
      --v62; /*0x931f29*/
      if ( v48 ) /*0x931f2d*/
        break; /*0x931f2d*/
      v17 = a3; /*0x931d89*/
      v32 = v60; /*0x931d8d*/
    }
    v31 = v64; /*0x931f33*/
    v6 = v63; /*0x931f37*/
  }
  v56[1] = (_WORD)v31; /*0x931f44*/
  *(_WORD *)(v71 + 8 * (_DWORD)v31 + 2) = v57; /*0x931f4c*/
  v49 = *(_DWORD **)(v6 + 0x19C); /*0x931f51*/
  v50 = v67; /*0x931f57*/
  v48 = v67 == (const void *)v49[0xA]; /*0x931f5b*/
  v49[8] = v67; /*0x931f5e*/
  if ( v48 ) /*0x931f61*/
    (*(void (__thiscall **)(_DWORD *, const void *))(*v49 + 0x10))(v49, v50); /*0x931f66*/
  if ( v66 >= 0 ) /*0x931f6f*/
    sub_8A75D0(*(_DWORD *)(v6 + 0x19C), (_DWORD *)v65[0], 2 * (v66 & 0x3FFFFFFF), 0x14); /*0x931f86*/
  v51 = *(_DWORD **)(v6 + 0x19C); /*0x931f8b*/
  v52 = v70; /*0x931f91*/
  v48 = v70 == (const void *)v51[0xA]; /*0x931f95*/
  v51[8] = v70; /*0x931f98*/
  if ( v48 ) /*0x931f9b*/
    (*(void (__thiscall **)(_DWORD *, const void *))(*v51 + 0x10))(v51, v52); /*0x931fa0*/
  result = v69; /*0x931fa3*/
  if ( v69 >= 0 ) /*0x931fa9*/
    return sub_8A75D0(*(_DWORD *)(v6 + 0x19C), (_DWORD *)v68[0], 2 * (v69 & 0x3FFFFFFF), 0x14); /*0x931fc0*/
  return result; /*0x931fc5*/
}
