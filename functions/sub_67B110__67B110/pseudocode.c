int __cdecl sub_67B110(int a1, int a2, int a3)
{
  TESChildCELL *v6; // ebp
  int result; // eax
  bool v8; // zf
  TESChildCELL *v9; // ecx
  bool v10; // zf
  TESChildCELL *v11; // ecx
  int v12; // [esp+14h] [ebp+4h]
  int v13; // [esp+1Ch] [ebp+Ch]

  while ( 1 ) /*0x67b122*/
  {
    v6 = *(TESChildCELL **)(a1 + 4 * a2); /*0x67b122*/
    result = a2; /*0x67b125*/
    v13 = a2; /*0x67b127*/
    v12 = a3; /*0x67b12b*/
    if ( a2 < a3 ) /*0x67b12f*/
    {
      do /*0x67b1a8*/
      {
        if ( (int)sub_67B080(*(TESChildCELL **)(a1 + 4 * a3), v6) > 0 ) /*0x67b140*/
        {
LABEL_5:
          v8 = a2 == a3; /*0x67b15b*/
        }
        else
        {
          while ( 1 ) /*0x67b142*/
          {
            v8 = a2 == a3; /*0x67b142*/
            if ( a2 >= a3 ) /*0x67b144*/
              break; /*0x67b144*/
            v9 = *(TESChildCELL **)(a1 + 4 * a3-- - 4); /*0x67b146*/
            if ( (int)sub_67B080(v9, v6) > 0 ) /*0x67b159*/
              goto LABEL_5; /*0x67b159*/
          }
        }
        if ( !v8 ) /*0x67b15d*/
          *(_DWORD *)(a1 + 4 * a2++) = *(_DWORD *)(a1 + 4 * a3); /*0x67b162*/
        if ( (int)sub_67B080(*(TESChildCELL **)(a1 + 4 * a2), v6) < 0 ) /*0x67b177*/
        {
LABEL_11:
          v10 = a2 == a3; /*0x67b199*/
        }
        else
        {
          while ( 1 ) /*0x67b180*/
          {
            v10 = a2 == a3; /*0x67b180*/
            if ( a2 >= a3 ) /*0x67b182*/
              break; /*0x67b182*/
            v11 = *(TESChildCELL **)(a1 + 4 * a2++ + 4); /*0x67b184*/
            if ( (int)sub_67B080(v11, v6) < 0 ) /*0x67b197*/
              goto LABEL_11; /*0x67b197*/
          }
        }
        if ( !v10 ) /*0x67b19b*/
          *(_DWORD *)(a1 + 4 * a3--) = *(_DWORD *)(a1 + 4 * a2); /*0x67b1a0*/
      }
      while ( a2 < a3 ); /*0x67b1a8*/
      result = v13; /*0x67b1aa*/
    }
    a3 = v12; /*0x67b1b0*/
    *(_DWORD *)(a1 + 4 * a2) = v6; /*0x67b1b4*/
    if ( result < a2 ) /*0x67b1b7*/
      result = sub_67B110(a1, result, a2 - 1); /*0x67b1bf*/
    if ( v12 <= a2 ) /*0x67b1cb*/
      return result; /*0x67b1d5*/
    ++a2; /*0x67b1cd*/
  }
}
