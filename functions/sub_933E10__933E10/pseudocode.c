void __cdecl sub_933E10(int ***a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // eax
  int *v8; // edx
  int v9; // esi
  void (__cdecl *v10)(int *, int *, _DWORD *); // ecx
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v7 = **a1 + 4;
  switch ( *(_BYTE *)v7 )
  {
    case 0:
      def_933E4A(
        (int)&savedregs,
        (int)**a1 + *((unsigned __int8 *)**a1 + 0x13) + 0x10,
        (int)a1,
        (int)a2,
        a3,
        a4,
        a5,
        a6,
        a7);
      return;
    case 1:
      return;
    case 2:
    case 3:
    case 6:
      v8 = **a1 + 8;
      goto LABEL_3;
    case 4:
    case 5:
      v8 = **a1 + 0xC;
      (**a1)[7] = 0xBF800000;
      *((_OWORD *)v7 + 1) = 0;
LABEL_3:
      v9 = (int)v7 + *((unsigned __int8 *)v7 + 3);
      v10 = *(void (__cdecl **)(int *, int *, _DWORD *))(0x34 * *((unsigned __int8 *)v7 + 1) + *a2 + 0x16B0);
      if ( !v10 )
        goto LABEL_7;
      v10(v7, v8, a2);
      def_933E4A((int)&savedregs, v9, (int)a1, (int)a2, a3, a4, a5, a6, a7);
      return;
    default:
LABEL_7:
      JUMPOUT(0x933E91);
  }
}
