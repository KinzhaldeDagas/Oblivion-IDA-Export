int __usercall sub_745E20@<eax>(int result@<eax>, int a2@<edi>, int a3)
{
  int v3; // edx
  int v4; // ebp
  int v5; // ecx
  bool v6; // cc
  int v7; // esi
  int v8; // ebp
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // bx
  int v11; // esi
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // bx
  int v14; // edx
  int v15; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(result + 0x1448);
  v4 = *(_DWORD *)(result + 4 * a3 + 0xB54);
  v5 = 2 * a3;
  v6 = 2 * a3 < v3;
  v15 = v4;
  if ( 2 * a3 > v3 )
  {
    *(_DWORD *)(result + 4 * a3 + 0xB54) = v4;
  }
  else
  {
    while ( 1 )
    {
      if ( v6 )
      {
        v7 = *(_DWORD *)(result + 4 * v5 + 0xB58);
        v8 = *(_DWORD *)(result + 4 * v5 + 0xB54);
        v9 = *(_WORD *)(a2 + 4 * v7);
        v10 = *(_WORD *)(a2 + 4 * v8);
        if ( v9 < v10 || v9 == v10 && *(_BYTE *)(v7 + result + 0x1450) <= *(_BYTE *)(result + v8 + 0x1450) )
          ++v5;
        v4 = v15;
      }
      v11 = *(_DWORD *)(result + 4 * v5 + 0xB54);
      v12 = *(_WORD *)(a2 + 4 * v4);
      v13 = *(_WORD *)(a2 + 4 * v11);
      if ( v12 < v13 )
      {
LABEL_12:
        *(_DWORD *)(result + 4 * a3 + 0xB54) = v4;
        return result;
      }
      if ( v12 == v13 && *(_BYTE *)(result + v4 + 0x1450) <= *(_BYTE *)(v11 + result + 0x1450) )
        break;
      *(_DWORD *)(result + 4 * a3 + 0xB54) = v11;
      v14 = *(_DWORD *)(result + 0x1448);
      a3 = v5;
      v5 *= 2;
      v6 = v5 < v14;
      if ( v5 > v14 )
        goto LABEL_12;
    }
    *(_DWORD *)(result + 4 * a3 + 0xB54) = v4;
  }
  return result;
}
