int __thiscall sub_729370(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // ecx
  int v9; // ebx
  int v10; // edi
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  __int16 v13; // ax
  unsigned __int16 v14; // [esp+8h] [ebp+4h]

  result = a4;
  v7 = a5;
  if ( a5 > a4 )
  {
    while ( 1 )
    {
      v9 = result - 1;
      v10 = v7 + 1;
      v14 = sub_728A00(this, a2, a3, result, v7);
      while ( 1 )
      {
        do
          v11 = *(_WORD *)(a2 + 2 * v10-- - 2);
        while ( sub_728440(this, v14, v11, a3) < 0 );
        do
        {
          v12 = *(_WORD *)(a2 + 2 * v9++ + 2);
          result = sub_728440(this, v12, v14, a3);
        }
        while ( result < 0 );
        if ( v9 >= v10 )
          break;
        v13 = *(_WORD *)(a2 + 2 * v9);
        *(_WORD *)(a2 + 2 * v9) = *(_WORD *)(a2 + 2 * v10);
        *(_WORD *)(a2 + 2 * v10) = v13;
      }
      if ( v10 == a5 )
      {
        a5 = v10 - 1;
      }
      else
      {
        result = sub_729370(this, a2, a3, a4, v10);
        a4 = v10 + 1;
      }
      if ( a5 <= a4 )
        break;
      v7 = a5;
      result = a4;
    }
  }
  return result;
}
