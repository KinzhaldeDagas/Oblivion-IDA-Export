void __cdecl sub_933EE0(float ***a1, int a2, int a3, _DWORD *a4, int a5, int a6, _DWORD *a7)
{
  float *v7; // esi
  float *v8; // ecx
  float *v9; // edx
  char *v10; // esi
  void (__cdecl *v11)(float *, float *, int, int, _DWORD *); // eax

  v7 = **a1 + 4;
  v8 = v7;
  switch ( *(_BYTE *)v7 )
  {
    case 0:
      v10 = (char *)**a1 + *((unsigned __int8 *)**a1 + 0x13) + 0x10;
      goto LABEL_5;
    case 1:
      return;
    case 2:
    case 3:
    case 6:
      v9 = **a1 + 8;
      goto LABEL_3;
    case 4:
    case 5:
      v9 = **a1 + 0xC;
      if ( (**a1)[7] == *(float *)&a2 )
        *((_DWORD *)**a1 + 7) = a3;
      else
        (**a1)[7] = -1.0;
LABEL_3:
      v10 = (char *)v7 + *((unsigned __int8 *)v7 + 3);
      v11 = *(void (__cdecl **)(float *, float *, int, int, _DWORD *))(0x34 * *((unsigned __int8 *)v8 + 1) + *a4 + 0x16B4);
      if ( !v11 )
        goto LABEL_10;
      v11(v8, v9, a2, a3, a4);
LABEL_5:
      def_933F1A((int)v10, (int)a1, a2, a3, (int)a4, a5, a6, a7);
      return;
    default:
LABEL_10:
      JUMPOUT(0x933F79);
  }
}
