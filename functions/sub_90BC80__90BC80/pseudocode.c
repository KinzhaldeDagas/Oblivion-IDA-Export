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

  v4 = 0;
  switch ( *a3 )
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
      return sub_940B80(a2);
    case 0x13:
      v39[0] = *(unsigned __int8 *)(a2 + 0xD);
      return sub_90BC80(a1, a2, v39, a4);
    case 0x14:
    case 0x15:
      if ( sub_940B70((signed __int16 *)a2) )
        return a4 * sub_940B70((signed __int16 *)a2);
      else
        return a4;
    case 0x16:
      v4 = 4;
      goto LABEL_8;
    case 0x17:
      goto LABEL_36;
    case 0x19:
      v6 = (_DWORD *)sub_90D1F0((_DWORD *)a2);
      v7 = sub_90D240(v6);
      v8 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v9 = *(_DWORD **)(v8 + 0x19C);
      v35 = 0;
      v36 = 0;
      v37 = 0x80000000;
      v10 = (signed int *)v9[8];
      v11 = (4 * v7 + 0x10) & 0xFFFFFFF0;
      if ( (unsigned int)v10 + v11 > v9[0xB] )
      {
        v12 = (signed int *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v9 + 0xC))(v9, v11);
      }
      else
      {
        v9[8] = (char *)v10 + v11;
        v12 = v10;
      }
      v35 = v12;
      v37 = v7 | 0x80000000;
      v38 = v12;
      v13 = sub_90D240(v6);
      if ( (v37 & 0x3FFFFFFF) < v13 )
      {
        v14 = 2 * (v37 & 0x3FFFFFFF);
        if ( v13 >= v14 )
          v14 = v13;
        sub_8A6E40((const void **)&v35, v14, 4);
      }
      v36 = v13;
      v15 = sub_90D200((int)v6);
      v16 = *(_DWORD **)(v8 + 0x19C);
      v17 = v15;
      v31 = 0;
      v32 = 0;
      v33 = 0x80000000;
      v18 = (signed int *)v16[8];
      v19 = (4 * v15 + 0x10) & 0xFFFFFFF0;
      if ( (unsigned int)v18 + v19 > v16[0xB] )
      {
        v20 = (signed int *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v16 + 0xC))(v16, v19);
      }
      else
      {
        v16[8] = (char *)v18 + v19;
        v20 = v18;
      }
      v31 = v20;
      v33 = v17 | 0x80000000;
      v34 = v20;
      v21 = sub_90D200((int)v6);
      if ( (v33 & 0x3FFFFFFF) < v21 )
      {
        v22 = 2 * (v33 & 0x3FFFFFFF);
        if ( v21 >= v22 )
          v22 = v21;
        sub_8A6E40((const void **)&v31, v22, 4);
      }
      v32 = v21;
      v23 = sub_90C020(a1, (int)v6, v35, v31);
      if ( sub_940B70((signed __int16 *)a2) )
        v24 = sub_940B70((signed __int16 *)a2);
      else
        v24 = 1;
      v25 = *(_DWORD **)(v8 + 0x19C);
      v26 = v23 * v24;
      v27 = v34;
      v28 = v34 == (signed int *)v25[0xA];
      v25[8] = v34;
      if ( v28 )
        (*(void (__thiscall **)(_DWORD *, signed int *))(*v25 + 0x10))(v25, v27);
      if ( v33 >= 0 )
        sub_8A75D0(*(_DWORD *)(v8 + 0x19C), v31, 4 * v33, 0x14);
      v29 = *(_DWORD **)(v8 + 0x19C);
      v30 = v38;
      v28 = v38 == (signed int *)v29[0xA];
      v29[8] = v38;
      if ( v28 )
        (*(void (__thiscall **)(_DWORD *, signed int *))(*v29 + 0x10))(v29, v30);
      if ( v37 < 0 )
LABEL_36:
        JUMPOUT(0x90BFD3);
      sub_8A75D0(*(_DWORD *)(v8 + 0x19C), v35, 4 * v37, 0x14);
      result = v26;
      break;
    case 0x1A:
LABEL_8:
      result = v4 + a4 + 4;
      break;
    case 0x1B:
      result = 2 * a4 + 4;
      break;
    case 0x1C:
      result = 2 * a4;
      break;
    default:
      JUMPOUT(0x90BF82);
  }
  return result;
}
