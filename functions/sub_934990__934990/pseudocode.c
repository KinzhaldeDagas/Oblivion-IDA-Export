_DWORD *__cdecl sub_934990(
        int *a1,
        int **a2,
        int (__cdecl *a3)(int **, int, int),
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD **v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // edi
  int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // eax
  int v16; // esi
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  int v19; // edi
  int *v20; // edx
  int *v21; // ecx
  int *v22; // edx
  int *v23; // ecx
  int *v24; // edx
  int v25; // ebx
  int v26; // eax
  int *v27; // edx
  int v28; // eax
  _DWORD *result; // eax
  int v30; // eax
  int v31; // [esp+18h] [ebp-248h]
  int v32; // [esp+30h] [ebp-230h] BYREF
  int v33; // [esp+34h] [ebp-22Ch]
  int *v34; // [esp+40h] [ebp-220h] BYREF
  int *v35; // [esp+44h] [ebp-21Ch]
  int *v36; // [esp+48h] [ebp-218h]
  int *v37; // [esp+4Ch] [ebp-214h]
  int *v38; // [esp+50h] [ebp-210h]
  int *v39; // [esp+54h] [ebp-20Ch]
  int *v40; // [esp+58h] [ebp-208h]
  int *v41; // [esp+5Ch] [ebp-204h]
  _BYTE v42[512]; // [esp+60h] [ebp-200h] BYREF
  int savedregs; // [esp+260h] [ebp+0h] BYREF

  v35 = a2[1]; /*0x9349a5*/
  v9 = (_DWORD **)*a1; /*0x9349ac*/
  v34 = (int *)v35[2]; /*0x9349ae*/
  v10 = *v9; /*0x9349b2*/
  v11 = (int)v10 + *v10 + 0x10; /*0x9349b7*/
  v12 = v10 + 4; /*0x9349c8*/
  v32 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9349d3*/
  v13 = *(_DWORD *)(v32 + 0x19C); /*0x9349d7*/
  v14 = *(_DWORD **)(v13 + 0x64); /*0x9349dd*/
  v33 = v11; /*0x9349e4*/
  if ( v14 ) /*0x9349f8*/
  {
    --*(_DWORD *)(v13 + 0xA8); /*0x9349fa*/
    *(_DWORD *)(v13 + 0x64) = *v14; /*0x934a02*/
    v15 = v14; /*0x934a05*/
  }
  else
  {
    v15 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x18))(unk_BA7D98, 0xC, 0x1C); /*0x934a15*/
  }
  if ( v15 ) /*0x934a1a*/
  {
    *v15 = 0; /*0x934a1c*/
    v16 = (int)(v15 + 4); /*0x934a24*/
  }
  else
  {
    v16 = 0x10; /*0x934a2d*/
  }
  if ( (*((unsigned __int8 *)v12 + 3) >> 4) - 1 >= 0 ) /*0x934a42*/
  {
    v17 = v12 + 3; /*0x934a49*/
    v18 = (_DWORD *)(v16 + 8); /*0x934a4c*/
    v31 = *((unsigned __int8 *)v12 + 3) >> 4; /*0x934a4f*/
    do /*0x934a78*/
    {
      v18[0xFFFFFFFE] = v17[0xFFFFFFFD]; /*0x934a56*/
      v18[0xFFFFFFFF] = v17[0xFFFFFFFE]; /*0x934a5c*/
      *v18 = *(_DWORD *)((char *)v18 + (_DWORD)v12 - v16); /*0x934a62*/
      v18[1] = *v17; /*0x934a66*/
      v17 += 4; /*0x934a6d*/
      v18 += 4; /*0x934a70*/
      --v31; /*0x934a74*/
    }
    while ( v31 ); /*0x934a78*/
  }
  v19 = v12[2]; /*0x934a8d*/
  v20 = a2[1]; /*0x934a90*/
  v36 = *a2; /*0x934a93*/
  v21 = a2[2]; /*0x934a97*/
  v37 = v20; /*0x934a9a*/
  v22 = a2[3]; /*0x934a9e*/
  v38 = v21; /*0x934aa1*/
  v23 = a2[4]; /*0x934aa5*/
  v39 = v22; /*0x934aa8*/
  v24 = a2[5]; /*0x934aac*/
  v40 = v23; /*0x934aaf*/
  v41 = v24; /*0x934ab3*/
  v25 = 0x10; /*0x934abd*/
  switch ( *(_BYTE *)v16 ) /*0x934ac8*/
  {
    case 0: /*0x934ac8*/
      goto LABEL_15;
    case 1: /*0x934ac8*/
      return def_934AC8((int)&savedregs, v16 + 0x10, a1, (int)a2, (int)a3, a4, a5, a6, a7, a8, a9); /*0x934b54*/
    case 2: /*0x934ac8*/
    case 6: /*0x934ac8*/
      goto LABEL_14;
    case 3: /*0x934ac8*/
      goto LABEL_12;
    case 4: /*0x934ac8*/
      v25 = 0x20; /*0x934b11*/
LABEL_14:
      v32 = (*(int (__thiscall **)(int *, int, _BYTE *))(*a2[2] + 0x28))(a2[2], v19, v42); /*0x934b16*/
      v33 = v19; /*0x934b2b*/
LABEL_15:
      v34 = *a2; /*0x934b2f*/
      v35 = &v32; /*0x934b45*/
      v30 = a3(&v34, v16, v16 + v25); /*0x934b49*/
      result = def_934AC8((int)&savedregs, v30, a1, (int)a2, (int)a3, a4, a5, a6, a7, a8, a9); /*0x934b51*/
      break; /*0x934b51*/
    case 5: /*0x934ac8*/
      v25 = 0x20; /*0x934acf*/
LABEL_12:
      v26 = (*(int (__thiscall **)(int *, int, _BYTE *))(*a2[2] + 0x28))(a2[2], v19, v42); /*0x934ad4*/
      v27 = *a2; /*0x934ae8*/
      v32 = v26; /*0x934aed*/
      v33 = v19; /*0x934afb*/
      v35 = v27; /*0x934aff*/
      v34 = &v32; /*0x934b03*/
      v28 = a3(&v34, v16, v16 + v25); /*0x934b07*/
      result = def_934AC8((int)&savedregs, v28, a1, (int)a2, (int)a3, a4, a5, a6, a7, a8, a9); /*0x934b0f*/
      break; /*0x934b0f*/
    default:
      JUMPOUT(0x934B56); /*0x934b56*/
  }
  return result;
}
