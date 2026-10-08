int __cdecl sub_90BC80(unsigned __int8 *a1, int a2, _DWORD *a3, int a4)
{
  int v4; // esi
  int result; // eax
  _DWORD *v6; // edi
  int v7; // esi
  int v8; // ebp
  _DWORD *v9; // ecx
  signed int *v10; // edx
  unsigned int v11; // eax
  signed int *v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // esi
  signed int *v18; // edx
  unsigned int v19; // eax
  signed int *v20; // eax
  int v21; // esi
  int v22; // eax
  signed int v23; // esi
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // esi
  signed int *v27; // eax
  bool v28; // zf
  _DWORD *v29; // ecx
  signed int *v30; // eax
  signed int *v31; // [esp+10h] [ebp-224h] BYREF
  int v32; // [esp+14h] [ebp-220h]
  signed int v33; // [esp+18h] [ebp-21Ch]
  signed int *v34; // [esp+1Ch] [ebp-218h]
  signed int *v35; // [esp+20h] [ebp-214h] BYREF
  int v36; // [esp+24h] [ebp-210h]
  signed int v37; // [esp+28h] [ebp-20Ch]
  signed int *v38; // [esp+2Ch] [ebp-208h]
  int v39[129]; // [esp+30h] [ebp-204h] BYREF

  v4 = 0; /*0x90bc91*/
  switch ( *a3 ) /*0x90bca5*/
  {
    case 1: /*0x90bca5*/
    case 2: /*0x90bca5*/
    case 3: /*0x90bca5*/
    case 4: /*0x90bca5*/
    case 5: /*0x90bca5*/
    case 6: /*0x90bca5*/
    case 7: /*0x90bca5*/
    case 8: /*0x90bca5*/
    case 9: /*0x90bca5*/
    case 0xA: /*0x90bca5*/
    case 0xB: /*0x90bca5*/
    case 0xC: /*0x90bca5*/
    case 0xD: /*0x90bca5*/
    case 0xE: /*0x90bca5*/
    case 0xF: /*0x90bca5*/
    case 0x10: /*0x90bca5*/
    case 0x11: /*0x90bca5*/
    case 0x12: /*0x90bca5*/
    case 0x18: /*0x90bca5*/
      return sub_940B80(a2); /*0x90bcc4*/
    case 0x13: /*0x90bca5*/
      v39[0] = *(unsigned __int8 *)(a2 + 0xD); /*0x90bf4a*/
      return sub_90BC80(a1, a2, v39, a4); /*0x90bf69*/
    case 0x14: /*0x90bca5*/
    case 0x15: /*0x90bca5*/
      if ( sub_940B70((signed __int16 *)a2) ) /*0x90bcce*/
        return a4 * sub_940B70((signed __int16 *)a2); /*0x90bcde*/
      else
        return a4; /*0x90bcf8*/
    case 0x16: /*0x90bca5*/
      v4 = 4; /*0x90bd23*/
      goto LABEL_8; /*0x90bd23*/
    case 0x17: /*0x90bca5*/
      goto LABEL_36;
    case 0x19: /*0x90bca5*/
      v6 = (_DWORD *)sub_90D1F0((_DWORD *)a2); /*0x90bd4c*/
      v7 = sub_90D240(v6); /*0x90bd5c*/
      v8 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x90bd63*/
      v9 = *(_DWORD **)(v8 + 0x19C); /*0x90bd66*/
      v35 = 0; /*0x90bd6c*/
      v36 = 0; /*0x90bd70*/
      v37 = 0x80000000; /*0x90bd74*/
      v10 = (signed int *)v9[8]; /*0x90bd7c*/
      v11 = (4 * v7 + 0x10) & 0xFFFFFFF0; /*0x90bd86*/
      if ( (unsigned int)v10 + v11 > v9[0xB] ) /*0x90bd8f*/
      {
        v12 = (signed int *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v9 + 0xC))(v9, v11); /*0x90bd9b*/
      }
      else
      {
        v9[8] = (char *)v10 + v11; /*0x90bd91*/
        v12 = v10; /*0x90bd94*/
      }
      v35 = v12; /*0x90bda6*/
      v37 = v7 | 0x80000000; /*0x90bdaa*/
      v38 = v12; /*0x90bdae*/
      v13 = sub_90D240(v6); /*0x90bdb7*/
      if ( (v37 & 0x3FFFFFFF) < v13 ) /*0x90bdc4*/
      {
        v14 = 2 * (v37 & 0x3FFFFFFF); /*0x90bdc6*/
        if ( v13 >= v14 ) /*0x90bdca*/
          v14 = v13; /*0x90bdcc*/
        sub_8A6E40((const void **)&v35, v14, 4); /*0x90bdd6*/
      }
      v36 = v13; /*0x90bde0*/
      v15 = sub_90D200((int)v6); /*0x90bde4*/
      v16 = *(_DWORD **)(v8 + 0x19C); /*0x90bde9*/
      v17 = v15; /*0x90bdef*/
      v31 = 0; /*0x90bdf3*/
      v32 = 0; /*0x90bdf7*/
      v33 = 0x80000000; /*0x90bdfb*/
      v18 = (signed int *)v16[8]; /*0x90be03*/
      v19 = (4 * v15 + 0x10) & 0xFFFFFFF0; /*0x90be0d*/
      if ( (unsigned int)v18 + v19 > v16[0xB] ) /*0x90be16*/
      {
        v20 = (signed int *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v16 + 0xC))(v16, v19); /*0x90be22*/
      }
      else
      {
        v16[8] = (char *)v18 + v19; /*0x90be18*/
        v20 = v18; /*0x90be1b*/
      }
      v31 = v20; /*0x90be2d*/
      v33 = v17 | 0x80000000; /*0x90be31*/
      v34 = v20; /*0x90be35*/
      v21 = sub_90D200((int)v6); /*0x90be3e*/
      if ( (v33 & 0x3FFFFFFF) < v21 ) /*0x90be4b*/
      {
        v22 = 2 * (v33 & 0x3FFFFFFF); /*0x90be4d*/
        if ( v21 >= v22 ) /*0x90be51*/
          v22 = v21; /*0x90be53*/
        sub_8A6E40((const void **)&v31, v22, 4); /*0x90be5d*/
      }
      v32 = v21; /*0x90be77*/
      v23 = sub_90C020(a1, (int)v6, v35, v31); /*0x90be89*/
      if ( sub_940B70((signed __int16 *)a2) ) /*0x90be8b*/
        v24 = sub_940B70((signed __int16 *)a2); /*0x90be96*/
      else
        v24 = 1; /*0x90be9d*/
      v25 = *(_DWORD **)(v8 + 0x19C); /*0x90bea2*/
      v26 = v23 * v24; /*0x90beae*/
      v27 = v34; /*0x90beb0*/
      v28 = v34 == (signed int *)v25[0xA]; /*0x90beb4*/
      v25[8] = v34; /*0x90beb6*/
      if ( v28 ) /*0x90beb9*/
        (*(void (__thiscall **)(_DWORD *, signed int *))(*v25 + 0x10))(v25, v27); /*0x90bebe*/
      if ( v33 >= 0 ) /*0x90bec7*/
        sub_8A75D0(*(_DWORD *)(v8 + 0x19C), v31, 4 * v33, 0x14); /*0x90bedf*/
      v29 = *(_DWORD **)(v8 + 0x19C); /*0x90bee4*/
      v30 = v38; /*0x90beea*/
      v28 = v38 == (signed int *)v29[0xA]; /*0x90beee*/
      v29[8] = v38; /*0x90bef1*/
      if ( v28 ) /*0x90bef4*/
        (*(void (__thiscall **)(_DWORD *, signed int *))(*v29 + 0x10))(v29, v30); /*0x90bef9*/
      if ( v37 < 0 ) /*0x90bf02*/
LABEL_36:
        JUMPOUT(0x90BFD3); /*0x90bfd3*/
      sub_8A75D0(*(_DWORD *)(v8 + 0x19C), v35, 4 * v37, 0x14); /*0x90bf1e*/
      result = v26; /*0x90bf23*/
      break; /*0x90bf2f*/
    case 0x1A: /*0x90bca5*/
LABEL_8:
      result = v4 + a4 + 4; /*0x90bd28*/
      break; /*0x90bd3f*/
    case 0x1B: /*0x90bca5*/
      result = 2 * a4 + 4; /*0x90bf75*/
      break; /*0x90bf81*/
    case 0x1C: /*0x90bca5*/
      result = 2 * a4; /*0x90bd16*/
      break; /*0x90bd22*/
    default:
      JUMPOUT(0x90BF82); /*0x90bf82*/
  }
  return result; /*0x90bcba*/
}
