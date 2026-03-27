int __cdecl sub_931B80(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // edx
  int v5; // ebx
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
  int v31; // ecx
  int v32; // ecx
  _WORD **v33; // eax
  int v34; // ecx
  _WORD *v35; // edi
  int v36; // ecx
  _WORD *v37; // ebp
  int v38; // ecx
  _WORD *v39; // ecx
  int v40; // edx
  int v41; // ecx
  int v42; // edx
  _WORD *v43; // ecx
  int v44; // edx
  int v45; // ecx
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
  int v58; // [esp+18h] [ebp-40h]
  int v59; // [esp+1Ch] [ebp-3Ch]
  int v60; // [esp+1Ch] [ebp-3Ch]
  __int16 v61; // [esp+20h] [ebp-38h]
  int v62; // [esp+24h] [ebp-34h]
  int v63; // [esp+28h] [ebp-30h]
  int v64; // [esp+34h] [ebp-24h]
  const void *v65[2]; // [esp+38h] [ebp-20h] BYREF
  signed int v66; // [esp+40h] [ebp-18h]
  const void *v67; // [esp+44h] [ebp-14h]
  const void *v68[2]; // [esp+48h] [ebp-10h] BYREF
  signed int v69; // [esp+50h] [ebp-8h]
  const void *v70; // [esp+54h] [ebp-4h]
  int v71; // [esp+5Ch] [ebp+4h]
  int v72; // [esp+60h] [ebp+8h]
  int v73; // [esp+60h] [ebp+8h]

  v4 = TlsIndex;
  v5 = (int)a4;
  a4[2] = 0;
  v68[0] = 0;
  v68[1] = 0;
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v4);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_DWORD **)(v6 + 0x19C);
  v69 = 0x80000000;
  v9 = (char *)v8[8];
  v10 = &v9[(2 * v7 + 0x10) & 0xFFFFFFF0];
  v63 = v6;
  if ( (unsigned int)v10 > v8[0xB] )
  {
    v11 = (const void *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v8 + 0xC))(v8, (2 * v7 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v8[8] = v10;
    v11 = v9;
  }
  v68[0] = v11;
  v70 = v11;
  v54 = (int)v8;
  v69 = v7 | 0x80000000;
  LOBYTE(v54) = 1;
  sub_931140(a1, v54, (int)a4, v68);
  v12 = *(_DWORD *)(a2 + 8);
  v13 = *(_DWORD **)(v6 + 0x19C);
  v65[0] = 0;
  v65[1] = 0;
  v66 = 0x80000000;
  v14 = (char *)v13[8];
  v15 = &v14[(2 * v12 + 0x10) & 0xFFFFFFF0];
  if ( (unsigned int)v15 > v13[0xB] )
  {
    v16 = (const void *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))(v13, (2 * v12 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v13[8] = v15;
    v16 = v14;
  }
  v65[0] = v16;
  v67 = v16;
  v55 = (int)v13;
  v66 = v12 | 0x80000000;
  LOBYTE(v55) = 0;
  sub_931140(a2, v55, (int)a4, v65);
  v17 = a3;
  v18 = a4[2] + 3 * a3[1];
  v19 = a4 + 1;
  if ( (a4[3] & 0x3FFFFFFF) < v18 )
    sub_8A6E40((const void **)a4 + 1, v18, 8);
  v59 = 0;
  if ( (int)a3[1] > 0 )
  {
    v72 = 0;
    do
    {
      v20 = v72 + *a3;
      v21 = *(_WORD **)v20;
      *(_WORD *)(v20 + 8) = **(_WORD **)v20;
      *(_WORD *)(v20 + 0xC) = *(_WORD *)(*(_DWORD *)(a1 + 4) + 8 * (unsigned __int16)v21[2]);
      v22 = *(_WORD **)(v20 + 4);
      *(_WORD *)(v20 + 0xE) = *v22;
      v23 = *((unsigned __int16 *)v68[0] + (((int)v21 - *(_DWORD *)(a1 + 4)) >> 3));
      v24 = (8 * (unsigned __int16)v22[1]) >> 3;
      if ( v23 == 0xFFFF )
        v25 = 0;
      else
        v25 = *v19 + 8 * v23;
      *(_DWORD *)v20 = v25;
      v26 = *((unsigned __int16 *)v65[0] + v24);
      if ( v26 == 0xFFFF )
        v27 = 0;
      else
        v27 = *v19 + 8 * v26;
      *(_DWORD *)(v20 + 4) = v27;
      v28 = ++v59 < a3[1];
      v72 += 0x10;
    }
    while ( v28 );
  }
  v29 = (_DWORD *)*a3;
  v56 = 0;
  v30 = a3[1] - 1;
  v71 = *v19;
  v31 = a4[2];
  v57 = 0xFFFF;
  v64 = v31;
  if ( v30 >= 0 )
  {
    v32 = 0x10 * v30;
    v60 = 0x10 * v30;
    v62 = a3[1];
    while ( 1 )
    {
      v33 = (_WORD **)(v32 + *v17);
      v73 = *(_DWORD *)(v5 + 8);
      v34 = a4[2];
      a4[2] = v34 + 1;
      v35 = (_WORD *)(*v19 + 8 * v34);
      v58 = *(_DWORD *)(v5 + 8);
      v36 = a4[2];
      a4[2] = v36 + 1;
      v37 = (_WORD *)(*v19 + 8 * v36);
      v38 = (int)*v33;
      if ( *v33 == (_WORD *)*v29 )
      {
        v39 = v33[1];
        if ( v39[3] == 2 )
          LOWORD(v40) = v39[1];
        else
          v40 = *(_DWORD *)(v5 + 8);
        v61 = v40;
        if ( v39[3] == 2 )
        {
          v41 = (unsigned __int16)v39[1];
          v42 = v71;
        }
        else
        {
          v41 = a4[2];
          a4[2] = v41 + 1;
          v42 = *v19;
        }
        v43 = (_WORD *)(v42 + 8 * v41);
        *v35 = *v33[1];
        v35[2] = v58;
        v35[1] = v57;
        if ( v56 )
          v56[1] = v73;
        *v43 = *((_WORD *)v33 + 7);
        v43[2] = v73;
        v43[1] = ((int)v33[1] - v71) >> 3;
        v33[1][1] = v61;
        *v37 = *((_WORD *)v33 + 4);
        v37[2] = v61;
      }
      else
      {
        if ( *(_WORD *)(v38 + 6) == 2 )
          LOWORD(v44) = *(_WORD *)(v38 + 2);
        else
          v44 = *(_DWORD *)(v5 + 8);
        if ( *(_WORD *)(v38 + 6) == 2 )
        {
          v45 = *(unsigned __int16 *)(v38 + 2);
          v46 = v71;
        }
        else
        {
          v45 = a4[2];
          a4[2] = v45 + 1;
          v46 = *v19;
        }
        v47 = (_WORD *)(v46 + 8 * v45);
        *v35 = *((_WORD *)v33 + 7);
        v35[2] = v44;
        v35[1] = v57;
        if ( v56 )
          v56[1] = v73;
        *v47 = *((_WORD *)v33 + 6);
        v47[2] = v58;
        v5 = (int)a4;
        v47[1] = ((int)*v33 - v71) >> 3;
        (*v33)[1] = v44;
        *v37 = **v33;
        v37[2] = v73;
      }
      v57 = v58;
      v29 = v33;
      v48 = v62 == 1;
      v56 = v37;
      v60 -= 0x10;
      --v62;
      if ( v48 )
        break;
      v17 = a3;
      v32 = v60;
    }
    v31 = v64;
    v6 = v63;
  }
  v56[1] = v31;
  *(_WORD *)(v71 + 8 * v31 + 2) = v57;
  v49 = *(_DWORD **)(v6 + 0x19C);
  v50 = v67;
  v48 = v67 == (const void *)v49[0xA];
  v49[8] = v67;
  if ( v48 )
    (*(void (__thiscall **)(_DWORD *, const void *))(*v49 + 0x10))(v49, v50);
  if ( v66 >= 0 )
    sub_8A75D0(*(_DWORD *)(v6 + 0x19C), (_DWORD *)v65[0], 2 * (v66 & 0x3FFFFFFF), 0x14);
  v51 = *(_DWORD **)(v6 + 0x19C);
  v52 = v70;
  v48 = v70 == (const void *)v51[0xA];
  v51[8] = v70;
  if ( v48 )
    (*(void (__thiscall **)(_DWORD *, const void *))(*v51 + 0x10))(v51, v52);
  result = v69;
  if ( v69 >= 0 )
    return sub_8A75D0(*(_DWORD *)(v6 + 0x19C), (_DWORD *)v68[0], 2 * (v69 & 0x3FFFFFFF), 0x14);
  return result;
}
