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

  v4 = *(unsigned __int8 *)(a4 + 0xD);
  v6 = 0;
  switch ( *(_BYTE *)(a4 + 0xD) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x18:
      v6 = sub_940B80(a4);
      break;
    case 0x14:
    case 0x15:
      if ( sub_940B70((signed __int16 *)a4) )
        v6 = sub_940B70((signed __int16 *)a4) * *(unsigned __int8 *)(a1 + 0xC);
      else
        v6 = *(unsigned __int8 *)(a1 + 0xC);
      break;
    case 0x16:
    case 0x17:
    case 0x1A:
    case 0x1B:
      if ( v4 == 0x1B )
        v6 = *(unsigned __int8 *)(a1 + 0xC);
      v6 += *(unsigned __int8 *)(a1 + 0xC) + 4;
      if ( v4 == 0x16 )
        v6 += 4;
      break;
    case 0x19:
      v7 = (_DWORD *)sub_90D1F0((_DWORD *)a4);
      if ( sub_940B70((signed __int16 *)a4) )
      {
        v8 = sub_940B70((signed __int16 *)a4);
        v6 = v8 * sub_953130(v7);
      }
      else
      {
        v6 = sub_953130(v7);
      }
      break;
    case 0x1C:
      if ( sub_940B70((signed __int16 *)a4) )
        v6 = 2 * sub_940B70((signed __int16 *)a4) * *(unsigned __int8 *)(a1 + 0xC);
      else
        v6 = 2 * *(unsigned __int8 *)(a1 + 0xC);
      break;
    default:
      sub_8BBFB0((int)v26, a2, v27, 0x200u, 1);
      sub_8BBDB0(v26, "Unknown class member type found!");
      (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
        dword_BA7FB0,
        3,
        0x5EF4E5A4,
        v27,
        ".\\copier\\hkObjectCopier.cpp",
        0xA3);
      sub_8BC000(v26);
      break;
  }
  v9 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v10 = *(_DWORD **)(v9 + 0x19C);
  v22 = 0;
  v23 = 0;
  v24 = 0x80000000;
  v11 = (_BYTE *)v10[8];
  v12 = &v11[(v6 + 0x10) & 0xFFFFFFF0];
  if ( (unsigned int)v12 > v10[0xB] )
  {
    v13 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, (v6 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v10[8] = v12;
    v13 = v11;
  }
  v22 = v13;
  v25 = v13;
  v24 = v6 | 0x80000000;
  if ( v6 > v23 )
  {
    v14 = v6 & 0x3FFFFFFF;
    v15 = v23;
    if ( (v6 & 0x3FFFFFFF) < v6 )
    {
      v16 = 2 * v14;
      if ( v6 >= 2 * v14 )
        v16 = v6;
      sub_8A6E40((const void **)&v22, v16, 1);
    }
    for ( i = v15; i < v6; ++i )
      v22[i] = 0;
  }
  v23 = v6;
  sub_918390(a3);
  v18 = *(_DWORD **)(v9 + 0x19C);
  v19 = v25;
  v20 = v25 == (_BYTE *)v18[0xA];
  v18[8] = v25;
  if ( v20 )
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v18 + 0x10))(v18, v19);
  result = v24;
  if ( v24 >= 0 )
    return sub_8A75D0(*(_DWORD *)(v9 + 0x19C), v22, v24 & 0x3FFFFFFF, 0x14);
  return result;
}
