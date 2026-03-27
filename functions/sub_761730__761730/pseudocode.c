int __userpurge sub_761730@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3@<esi>, _DWORD *a4, int a5, int a6)
{
  void *v9; // ecx
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // edx
  signed int v15; // eax
  void *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  unsigned int v20; // ecx
  int v21; // [esp+24h] [ebp-10h]
  signed int v22; // [esp+30h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h]
  int v24; // [esp+38h] [ebp+4h]

  if ( !a4 )
    return 0;
  a1[0x15] = (*(int (__thiscall **)(_DWORD *, int, int))(*a4 + 0x4C))(a4, a2, a3);
  a1[0x16] = (*(int (__thiscall **)(_DWORD *))(*a4 + 0x50))(a4);
  a1[0x17] = 1;
  v9 = (void *)a4[7];
  v10 = a4[8];
  v22 = a4[6];
  retaddr = v9;
  v24 = v10;
  v11 = (_DWORD *)sub_773960(&v22, (int *)(a1[2] + 0x74C));
  qmemcpy(a1 + 3, v11, 0x44u);
  v12 = v11[3];
  v13 = 0;
  v14 = 0;
  if ( *((_BYTE *)a4 + 0x3C) )
    v14 = 1;
  else
    v13 = 1;
  if ( *((_BYTE *)a4 + 0x34) )
    v12 = a4[0xE];
  v15 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, int, int))(**(_DWORD **)(a1[2] + 0x280) + 0x5C))(
          *(_DWORD *)(a1[2] + 0x280),
          a1[0x15],
          a1[0x16],
          1,
          v14,
          v12,
          v13);
  if ( v15 >= 0 )
  {
    v17 = a1[0x15] * a1[0x16];
    a1[0x14] = v24;
    a1[0x18] = v17;
    switch ( v12 )
    {
      case 0x14:
        a1[0x18] = 3 * v17;
        break;
      case 0x15:
      case 0x16:
      case 0x72:
        a1[0x18] = 4 * v17;
        break;
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x51:
        v18 = 2 * v17;
        goto LABEL_16;
      case 0x24:
      case 0x71:
        v18 = 8 * v17;
        goto LABEL_16;
      case 0x74:
        v18 = 0x10 * v17;
LABEL_16:
        a1[0x18] = v18;
        break;
      default:
        break;
    }
    dword_B42064 += a1[0x18];
    v19 = a1[0x18];
    v20 = 0;
    if ( (v19 & 0xFFFFF000) != v19 )
      v20 = (v19 & 0xFFFFF000) - v19 + 0x1000;
    dword_B42068 += v20;
    return v21;
  }
  else
  {
    sub_7736F0(v15);
    TESTexture::ClearComponentReferences(v16);
    a1[0x14] = 0;
    return 0;
  }
}
