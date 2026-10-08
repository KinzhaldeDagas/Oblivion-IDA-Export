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

  result = a4; /*0x729370*/
  v7 = a5; /*0x729377*/
  if ( a5 > a4 ) /*0x72937d*/
  {
    while ( 1 ) /*0x72939a*/
    {
      v9 = result - 1; /*0x72939a*/
      v10 = v7 + 1; /*0x7293a2*/
      v14 = sub_728A00(this, a2, a3, result, v7); /*0x7293ad*/
      while ( 1 ) /*0x7293cd*/
      {
        do /*0x7293cd*/
          v11 = *(_WORD *)(a2 + 2 * v10-- - 2); /*0x7293b5*/
        while ( sub_728440(this, v14, v11, a3) < 0 ); /*0x7293cd*/
        do /*0x7293ec*/
        {
          v12 = *(_WORD *)(a2 + 2 * v9++ + 2); /*0x7293d8*/
          result = sub_728440(this, v12, v14, a3); /*0x7293e5*/
        }
        while ( result < 0 ); /*0x7293ec*/
        if ( v9 >= v10 ) /*0x7293f0*/
          break; /*0x7293f0*/
        v13 = *(_WORD *)(a2 + 2 * v9); /*0x7293f2*/
        *(_WORD *)(a2 + 2 * v9) = *(_WORD *)(a2 + 2 * v10); /*0x7293fa*/
        *(_WORD *)(a2 + 2 * v10) = v13; /*0x7293fe*/
      }
      if ( v10 == a5 ) /*0x729408*/
      {
        a5 = v10 - 1; /*0x72940d*/
      }
      else
      {
        result = sub_729370(this, a2, a3, a4, v10); /*0x729421*/
        a4 = v10 + 1; /*0x729429*/
      }
      if ( a5 <= a4 ) /*0x729435*/
        break; /*0x729435*/
      v7 = a5; /*0x729390*/
      result = a4; /*0x729394*/
    }
  }
  return result; /*0x72943e*/
}
