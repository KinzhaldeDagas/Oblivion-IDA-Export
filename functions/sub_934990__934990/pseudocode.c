int __cdecl sub_934990(
        _DWORD ***a1,
        int **a2,
        void (__cdecl *a3)(int **, unsigned __int8 *, unsigned __int8 *),
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  _DWORD **v13; // eax
  _DWORD *v14; // eax
  int v15; // edx
  _DWORD *v16; // edi
  int v17; // eax
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  int v20; // esi
  _DWORD *v21; // ecx
  _DWORD *v22; // eax
  int v23; // edi
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // ebx
  int v30; // eax
  int *v31; // edx
  int result; // eax
  int v33; // [esp+18h] [ebp-248h]
  int v34; // [esp+30h] [ebp-230h] BYREF
  int v35; // [esp+34h] [ebp-22Ch]
  int *v36; // [esp+40h] [ebp-220h] BYREF
  int *v37; // [esp+44h] [ebp-21Ch]
  int *v38; // [esp+48h] [ebp-218h]
  int v39; // [esp+4Ch] [ebp-214h]
  int v40; // [esp+50h] [ebp-210h]
  int v41; // [esp+54h] [ebp-20Ch]
  int v42; // [esp+58h] [ebp-208h]
  int v43; // [esp+5Ch] [ebp-204h]
  _BYTE v44[512]; // [esp+60h] [ebp-200h] BYREF

  v37 = a2[1];
  v13 = *a1;
  v36 = (int *)v37[2];
  v14 = *v13;
  v15 = (int)v14 + *v14 + 0x10;
  v16 = v14 + 4;
  v34 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v17 = *(_DWORD *)(v34 + 0x19C);
  v18 = *(_DWORD **)(v17 + 0x64);
  v35 = v15;
  if ( v18 )
  {
    --*(_DWORD *)(v17 + 0xA8);
    *(_DWORD *)(v17 + 0x64) = *v18;
    v19 = v18;
  }
  else
  {
    v19 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x18))(dword_BA7D98, 0xC, 0x1C);
  }
  if ( v19 )
  {
    *v19 = 0;
    v20 = (int)(v19 + 4);
  }
  else
  {
    v20 = 0x10;
  }
  if ( (*((unsigned __int8 *)v16 + 3) >> 4) - 1 >= 0 )
  {
    v21 = v16 + 3;
    v22 = (_DWORD *)(v20 + 8);
    v33 = *((unsigned __int8 *)v16 + 3) >> 4;
    do
    {
      v22[0xFFFFFFFE] = v21[0xFFFFFFFD];
      v22[0xFFFFFFFF] = v21[0xFFFFFFFE];
      *v22 = *(_DWORD *)((char *)v22 + (_DWORD)v16 - v20);
      v22[1] = *v21;
      v21 += 4;
      v22 += 4;
      --v33;
    }
    while ( v33 );
  }
  v23 = v16[2];
  v24 = (int)a2[1];
  v38 = *a2;
  v25 = (int)a2[2];
  v39 = v24;
  v26 = (int)a2[3];
  v40 = v25;
  v27 = (int)a2[4];
  v41 = v26;
  v28 = (int)a2[5];
  v42 = v27;
  v43 = v28;
  v29 = 0x10;
  switch ( *(_BYTE *)v20 )
  {
    case 0:
      goto LABEL_15;
    case 1:
      return def_934AC8(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    case 2:
    case 6:
      goto LABEL_14;
    case 3:
      goto LABEL_12;
    case 4:
      v29 = 0x20;
LABEL_14:
      v34 = (*(int (__thiscall **)(int *, int, _BYTE *))(*a2[2] + 0x28))(a2[2], v23, v44);
      v35 = v23;
LABEL_15:
      v36 = *a2;
      v37 = &v34;
      a3(&v36, (unsigned __int8 *)v20, (unsigned __int8 *)(v20 + v29));
      result = def_934AC8(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
      break;
    case 5:
      v29 = 0x20;
LABEL_12:
      v30 = (*(int (__thiscall **)(int *, int, _BYTE *))(*a2[2] + 0x28))(a2[2], v23, v44);
      v31 = *a2;
      v34 = v30;
      v35 = v23;
      v37 = v31;
      v36 = &v34;
      a3(&v36, (unsigned __int8 *)v20, (unsigned __int8 *)(v20 + v29));
      result = def_934AC8(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
      break;
    default:
      JUMPOUT(0x934B56);
  }
  return result;
}
