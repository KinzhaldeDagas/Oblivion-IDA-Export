void __cdecl sub_934100(int **a1, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int *v13; // edx

  v4 = **a1; /*0x93410c*/
  v5 = *(_DWORD *)v4 + v4 + 0x10; /*0x934110*/
  switch ( *(_BYTE *)(v4 + 0x10) ) /*0x93412a*/
  {
    case 0: /*0x93412a*/
      def_93412A(v5, (_DWORD *)v4, *(unsigned __int8 *)(v4 + 0x13) + v4 + 0x10, (int)a1, a2, a3, a4); /*0x934166*/
      return; /*0x934166*/
    case 1: /*0x93412a*/
      v8 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9341d4*/
      v9 = *(_DWORD **)(v8 + 0x19C); /*0x9341d7*/
      v10 = v9[0x2A]; /*0x9341dd*/
      if ( v10 >= v9[0xC] ) /*0x9341e6*/
      {
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x1C))(unk_BA7D98, v4, 0xC, 0x1C); /*0x934206*/
      }
      else
      {
        v11 = v9[0x19]; /*0x9341e8*/
        v9[0x2A] = v10 + 1; /*0x9341ec*/
        *(_DWORD *)v4 = v11; /*0x9341f2*/
        v9[0x19] = v4; /*0x9341f4*/
      }
      v12 = (int)a1[2]; /*0x934209*/
      if ( v12 >= 0 ) /*0x93420e*/
        sub_8A75D0(*(_DWORD *)(v8 + 0x19C), *a1, 4 * v12, 0x14); /*0x934225*/
      v13 = (int *)((unsigned int)a1[2] & 0x40000000 | 0x80000000); /*0x934234*/
      *a1 = 0; /*0x93423b*/
      a1[1] = 0; /*0x934242*/
      a1[2] = v13; /*0x934249*/
      return; /*0x93424f*/
    case 2: /*0x93412a*/
    case 3: /*0x93412a*/
    case 6: /*0x93412a*/
      v6 = v4 + 0x20; /*0x934131*/
      goto LABEL_3; /*0x934131*/
    case 4: /*0x93412a*/
    case 5: /*0x93412a*/
      v6 = v4 + 0x30; /*0x93415c*/
LABEL_3:
      v7 = *(unsigned __int8 *)(v4 + 0x13) + v4 + 0x10; /*0x934134*/
      (*(void (__cdecl **)(int, int, int))(0x34 * *(unsigned __int8 *)(v4 + 0x11) + a2 + 0x1698))(v4 + 0x10, v6, a3); /*0x93414c*/
      def_93412A(v5, (_DWORD *)v4, v7, (int)a1, a2, a3, a4); /*0x93415a*/
      return;
    default:
      JUMPOUT(0x934167); /*0x934167*/
  }
}
