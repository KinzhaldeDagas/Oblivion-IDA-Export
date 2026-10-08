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

  v3 = *(_DWORD *)(result + 0x1448); /*0x745e21*/
  v4 = *(_DWORD *)(result + 4 * a3 + 0xB54); /*0x745e2d*/
  v5 = 2 * a3; /*0x745e34*/
  v6 = 2 * a3 < v3; /*0x745e37*/
  v15 = v4; /*0x745e39*/
  if ( 2 * a3 > v3 ) /*0x745e3d*/
  {
    *(_DWORD *)(result + 4 * a3 + 0xB54) = v4; /*0x745edb*/
  }
  else
  {
    while ( 1 ) /*0x745e44*/
    {
      if ( v6 ) /*0x745e44*/
      {
        v7 = *(_DWORD *)(result + 4 * v5 + 0xB58); /*0x745e46*/
        v8 = *(_DWORD *)(result + 4 * v5 + 0xB54); /*0x745e4d*/
        v9 = *(_WORD *)(a2 + 4 * v7); /*0x745e54*/
        v10 = *(_WORD *)(a2 + 4 * v8); /*0x745e58*/
        if ( v9 < v10 || v9 == v10 && *(_BYTE *)(v7 + result + 0x1450) <= *(_BYTE *)(result + v8 + 0x1450) ) /*0x745e71*/
          ++v5; /*0x745e73*/
        v4 = v15; /*0x745e76*/
      }
      v11 = *(_DWORD *)(result + 4 * v5 + 0xB54); /*0x745e7a*/
      v12 = *(_WORD *)(a2 + 4 * v4); /*0x745e81*/
      v13 = *(_WORD *)(a2 + 4 * v11); /*0x745e85*/
      if ( v12 < v13 ) /*0x745e8c*/
      {
LABEL_12:
        *(_DWORD *)(result + 4 * a3 + 0xB54) = v4; /*0x745ebb*/
        return result; /*0x745eca*/
      }
      if ( v12 == v13 && *(_BYTE *)(result + v4 + 0x1450) <= *(_BYTE *)(v11 + result + 0x1450) ) /*0x745e9e*/
        break; /*0x745e9e*/
      *(_DWORD *)(result + 4 * a3 + 0xB54) = v11; /*0x745ea4*/
      v14 = *(_DWORD *)(result + 0x1448); /*0x745eab*/
      a3 = v5; /*0x745eb1*/
      v5 *= 2; /*0x745eb5*/
      v6 = v5 < v14; /*0x745eb7*/
      if ( v5 > v14 ) /*0x745eb9*/
        goto LABEL_12; /*0x745eb9*/
    }
    *(_DWORD *)(result + 4 * a3 + 0xB54) = v4; /*0x745ed1*/
  }
  return result; /*0x745ec0*/
}
