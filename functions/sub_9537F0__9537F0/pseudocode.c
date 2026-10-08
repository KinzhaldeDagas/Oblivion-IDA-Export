int __userpurge sub_9537F0@<eax>(int a1@<ecx>, int a2@<ebx>, _DWORD **a3, int a4)
{
  int v4; // eax
  int v6; // esi
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // ebp
  _DWORD *v10; // ecx
  _BYTE *v11; // edx
  char *v12; // edi
  _BYTE *v13; // eax
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int i; // eax
  _DWORD *v18; // ecx
  _BYTE *v19; // eax
  bool v20; // zf
  int result; // eax
  _BYTE *v22; // [esp+24h] [ebp-21Ch] BYREF
  int v23; // [esp+28h] [ebp-218h]
  signed int v24; // [esp+2Ch] [ebp-214h]
  _BYTE *v25; // [esp+30h] [ebp-210h]
  int *v26[3]; // [esp+34h] [ebp-20Ch] BYREF
  char v27[512]; // [esp+40h] [ebp-200h] BYREF

  v4 = *(unsigned __int8 *)(a4 + 0xD); /*0x953800*/
  v6 = 0; /*0x953809*/
  switch ( *(_BYTE *)(a4 + 0xD) ) /*0x95381b*/
  {
    case 1: /*0x95381b*/
    case 2: /*0x95381b*/
    case 3: /*0x95381b*/
    case 4: /*0x95381b*/
    case 5: /*0x95381b*/
    case 6: /*0x95381b*/
    case 7: /*0x95381b*/
    case 8: /*0x95381b*/
    case 9: /*0x95381b*/
    case 0xA: /*0x95381b*/
    case 0xB: /*0x95381b*/
    case 0xC: /*0x95381b*/
    case 0xD: /*0x95381b*/
    case 0xE: /*0x95381b*/
    case 0xF: /*0x95381b*/
    case 0x10: /*0x95381b*/
    case 0x11: /*0x95381b*/
    case 0x12: /*0x95381b*/
    case 0x18: /*0x95381b*/
      v6 = sub_940B80(a4); /*0x953829*/
      break; /*0x95382b*/
    case 0x14: /*0x95381b*/
    case 0x15: /*0x95381b*/
      if ( sub_940B70((signed __int16 *)a4) ) /*0x953832*/
        v6 = sub_940B70((signed __int16 *)a4) * *(unsigned __int8 *)(a1 + 0xC); /*0x953846*/
      else
        v6 = *(unsigned __int8 *)(a1 + 0xC); /*0x953857*/
      break; /*0x953849*/
    case 0x16: /*0x95381b*/
    case 0x17: /*0x95381b*/
    case 0x1A: /*0x95381b*/
    case 0x1B: /*0x95381b*/
      if ( v4 == 0x1B ) /*0x953862*/
        v6 = *(unsigned __int8 *)(a1 + 0xC); /*0x953864*/
      v6 += *(unsigned __int8 *)(a1 + 0xC) + 4; /*0x95386f*/
      if ( v4 == 0x16 ) /*0x953873*/
        v6 += 4; /*0x953879*/
      break; /*0x95387c*/
    case 0x19: /*0x95381b*/
      v7 = (_DWORD *)sub_90D1F0((_DWORD *)a4); /*0x95388a*/
      if ( sub_940B70((signed __int16 *)a4) ) /*0x95388c*/
      {
        v8 = sub_940B70((signed __int16 *)a4); /*0x95389e*/
        v6 = v8 * sub_953130(v7); /*0x9538a7*/
      }
      else
      {
        v6 = sub_953130(v7); /*0x9538bd*/
      }
      break; /*0x9538aa*/
    case 0x1C: /*0x95381b*/
      if ( sub_940B70((signed __int16 *)a4) ) /*0x9538c4*/
        v6 = 2 * sub_940B70((signed __int16 *)a4) * *(unsigned __int8 *)(a1 + 0xC); /*0x9538db*/
      else
        v6 = 2 * *(unsigned __int8 *)(a1 + 0xC); /*0x9538eb*/
      break; /*0x9538dd*/
    default:
      sub_8BBFB0((int)v26, a2, v27, 0x200u, 1); /*0x953903*/
      sub_8BBDB0(v26, "Unknown class member type found!"); /*0x953911*/
      (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x953934*/
        unk_BA7FB0,
        3,
        0x5EF4E5A4,
        v27,
        ".\\copier\\hkObjectCopier.cpp",
        0xA3);
      sub_8BC000(v26); /*0x95393b*/
      break; /*0x95393b*/
  }
  v9 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x95394d*/
  v10 = *(_DWORD **)(v9 + 0x19C); /*0x953950*/
  v22 = 0; /*0x953956*/
  v23 = 0; /*0x95395e*/
  v24 = 0x80000000; /*0x953966*/
  v11 = (_BYTE *)v10[8]; /*0x95396e*/
  v12 = &v11[(v6 + 0x10) & 0xFFFFFFF0]; /*0x953977*/
  if ( (unsigned int)v12 > v10[0xB] ) /*0x95397d*/
  {
    v13 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, (v6 + 0x10) & 0xFFFFFFF0); /*0x953989*/
  }
  else
  {
    v10[8] = v12; /*0x95397f*/
    v13 = v11; /*0x953982*/
  }
  v22 = v13; /*0x95398c*/
  v25 = v13; /*0x953992*/
  v24 = v6 | 0x80000000; /*0x9539a2*/
  if ( v6 > v23 ) /*0x9539a6*/
  {
    v14 = v6 & 0x3FFFFFFF; /*0x9539a8*/
    v15 = v23; /*0x9539b0*/
    if ( (v6 & 0x3FFFFFFF) < v6 ) /*0x9539b2*/
    {
      v16 = 2 * v14; /*0x9539b4*/
      if ( v6 >= 2 * v14 ) /*0x9539b9*/
        v16 = v6; /*0x9539bb*/
      sub_8A6E40((const void **)&v22, v16, 1); /*0x9539c5*/
    }
    for ( i = v15; i < v6; ++i ) /*0x9539d1*/
      v22[i] = 0; /*0x9539d7*/
  }
  v23 = v6; /*0x9539ed*/
  sub_918390(a3); /*0x9539f1*/
  v18 = *(_DWORD **)(v9 + 0x19C); /*0x9539f6*/
  v19 = v25; /*0x9539fc*/
  v20 = v25 == (_BYTE *)v18[0xA]; /*0x953a00*/
  v18[8] = v25; /*0x953a03*/
  if ( v20 ) /*0x953a06*/
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v18 + 0x10))(v18, v19); /*0x953a0b*/
  result = v24; /*0x953a0e*/
  if ( v24 >= 0 ) /*0x953a14*/
    return sub_8A75D0(*(_DWORD *)(v9 + 0x19C), v22, v24 & 0x3FFFFFFF, 0x14); /*0x953a29*/
  return result; /*0x953a2e*/
}
