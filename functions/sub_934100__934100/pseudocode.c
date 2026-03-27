void __cdecl sub_934100(int **a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int *v11; // edx

  v4 = **a1;
  switch ( *(_BYTE *)(v4 + 0x10) )
  {
    case 0:
      def_93412A(a1, a2, a3, a4);
      return;
    case 1:
      v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v7 = *(_DWORD **)(v6 + 0x19C);
      v8 = v7[0x2A];
      if ( v8 >= v7[0xC] )
      {
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x1C))(dword_BA7D98, v4, 0xC, 0x1C);
      }
      else
      {
        v9 = v7[0x19];
        v7[0x2A] = v8 + 1;
        *(_DWORD *)v4 = v9;
        v7[0x19] = v4;
      }
      v10 = (int)a1[2];
      if ( v10 >= 0 )
        sub_8A75D0(*(_DWORD *)(v6 + 0x19C), *a1, 4 * v10, 0x14);
      v11 = (int *)((unsigned int)a1[2] & 0x40000000 | 0x80000000);
      *a1 = 0;
      a1[1] = 0;
      a1[2] = v11;
      return;
    case 2:
    case 3:
    case 6:
      v5 = v4 + 0x20;
      goto LABEL_3;
    case 4:
    case 5:
      v5 = v4 + 0x30;
LABEL_3:
      (*(void (__cdecl **)(int, int, int))(0x34 * *(unsigned __int8 *)(v4 + 0x11) + a2 + 0x1698))(v4 + 0x10, v5, a3);
      def_93412A(a1, a2, a3, a4);
      return;
    default:
      JUMPOUT(0x934167);
  }
}
