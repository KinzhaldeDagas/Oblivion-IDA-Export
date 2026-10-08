void __cdecl sub_933E10(int ***a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // eax
  int *v8; // edx
  void (__cdecl *v9)(int *, int *, _DWORD *); // ecx

  v7 = **a1 + 4; /*0x933e46*/
  switch ( *(_BYTE *)v7 ) /*0x933e4a*/
  {
    case 0: /*0x933e4a*/
      def_933E4A((int)a1, (int)a2, a3, a4, a5, a6, a7); /*0x933e90*/
      return; /*0x933e90*/
    case 1: /*0x933e4a*/
      return;
    case 2: /*0x933e4a*/
    case 3: /*0x933e4a*/
    case 6: /*0x933e4a*/
      v8 = **a1 + 8; /*0x933e51*/
      goto LABEL_3; /*0x933e51*/
    case 4: /*0x933e4a*/
    case 5: /*0x933e4a*/
      v8 = **a1 + 0xC; /*0x933e7b*/
      (**a1)[7] = 0xBF800000; /*0x933e7e*/
      *((_OWORD *)v7 + 1) = 0; /*0x933e85*/
LABEL_3:
      v9 = *(void (__cdecl **)(int *, int *, _DWORD *))(0x34 * *((unsigned __int8 *)v7 + 1) + *a2 + 0x16B0); /*0x933e54*/
      if ( !v9 ) /*0x933e6c*/
        goto LABEL_7; /*0x933e6c*/
      v9(v7, v8, a2); /*0x933e71*/
      def_933E4A((int)a1, (int)a2, a3, a4, a5, a6, a7); /*0x933e76*/
      return;
    default:
LABEL_7:
      JUMPOUT(0x933E91); /*0x933e91*/
  }
}
