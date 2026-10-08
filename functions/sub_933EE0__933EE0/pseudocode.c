void __cdecl sub_933EE0(float ***a1, int a2, int a3, _DWORD *a4, int a5, int a6, _DWORD *a7)
{
  float *v7; // esi
  float *v8; // ecx
  float *v9; // edx
  char *v10; // esi
  void (__cdecl *v11)(float *, float *, int, int, _DWORD *); // eax

  v7 = **a1 + 4; /*0x933f01*/
  v8 = v7; /*0x933f16*/
  switch ( *(_BYTE *)v7 ) /*0x933f1a*/
  {
    case 0: /*0x933f1a*/
      v10 = (char *)**a1 + *((unsigned __int8 *)**a1 + 0x13) + 0x10; /*0x933f77*/
      goto LABEL_5; /*0x933f78*/
    case 1: /*0x933f1a*/
      return;
    case 2: /*0x933f1a*/
    case 3: /*0x933f1a*/
    case 6: /*0x933f1a*/
      v9 = **a1 + 8; /*0x933f21*/
      goto LABEL_3; /*0x933f21*/
    case 4: /*0x933f1a*/
    case 5: /*0x933f1a*/
      v9 = **a1 + 0xC; /*0x933f52*/
      if ( (**a1)[7] == *(float *)&a2 ) /*0x933f5f*/
        *((_DWORD *)**a1 + 7) = a3; /*0x933f65*/
      else
        (**a1)[7] = -1.0; /*0x933f6a*/
LABEL_3:
      v10 = (char *)v7 + *((unsigned __int8 *)v7 + 3); /*0x933f24*/
      v11 = *(void (__cdecl **)(float *, float *, int, int, _DWORD *))(0x34 * *((unsigned __int8 *)v8 + 1) + *a4 + 0x16B4); /*0x933f33*/
      if ( !v11 ) /*0x933f3c*/
        goto LABEL_10; /*0x933f3c*/
      v11(v8, v9, a2, a3, a4); /*0x933f47*/
LABEL_5:
      def_933F1A((unsigned int)v10, (int)a1, a2, a3, (unsigned int)a4, a5, a6, a7); /*0x933f49*/
      return;
    default:
LABEL_10:
      JUMPOUT(0x933F79); /*0x933f79*/
  }
}
