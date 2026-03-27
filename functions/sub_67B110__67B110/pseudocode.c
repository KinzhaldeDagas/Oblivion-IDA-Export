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

  while ( 1 )
  {
    v6 = *(TESChildCELL **)(a1 + 4 * a2);
    result = a2;
    v13 = a2;
    v12 = a3;
    if ( a2 < a3 )
    {
      do
      {
        if ( (int)sub_67B080(*(TESChildCELL **)(a1 + 4 * a3), v6) > 0 )
        {
LABEL_5:
          v8 = a2 == a3;
        }
        else
        {
          while ( 1 )
          {
            v8 = a2 == a3;
            if ( a2 >= a3 )
              break;
            v9 = *(TESChildCELL **)(a1 + 4 * a3-- - 4);
            if ( (int)sub_67B080(v9, v6) > 0 )
              goto LABEL_5;
          }
        }
        if ( !v8 )
          *(_DWORD *)(a1 + 4 * a2++) = *(_DWORD *)(a1 + 4 * a3);
        if ( (int)sub_67B080(*(TESChildCELL **)(a1 + 4 * a2), v6) < 0 )
        {
LABEL_11:
          v10 = a2 == a3;
        }
        else
        {
          while ( 1 )
          {
            v10 = a2 == a3;
            if ( a2 >= a3 )
              break;
            v11 = *(TESChildCELL **)(a1 + 4 * a2++ + 4);
            if ( (int)sub_67B080(v11, v6) < 0 )
              goto LABEL_11;
          }
        }
        if ( !v10 )
          *(_DWORD *)(a1 + 4 * a3--) = *(_DWORD *)(a1 + 4 * a2);
      }
      while ( a2 < a3 );
      result = v13;
    }
    a3 = v12;
    *(_DWORD *)(a1 + 4 * a2) = v6;
    if ( result < a2 )
      result = sub_67B110(a1, result, a2 - 1);
    if ( v12 <= a2 )
      return result;
    ++a2;
  }
}
