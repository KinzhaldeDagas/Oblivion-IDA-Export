_BYTE *__cdecl sub_71DE80(int a1, int a2, int a3, _BYTE *Dst, int a5, int a6, _BYTE *Src, int a8)
{
  _BYTE *result; // eax
  _BYTE *v9; // ecx
  int v10; // ebp
  int v11; // esi
  _BYTE *v12; // eax

  result = (_BYTE *)a8; /*0x71de80*/
  if ( *(_DWORD *)(a8 + 4) == 0xFF00 ) /*0x71de8b*/
  {
    result = *(_BYTE **)a8; /*0x71de8d*/
    if ( *(_DWORD *)a8 == 0xFF0000 ) /*0x71de94*/
    {
      result = (_BYTE *)a2; /*0x71de96*/
      if ( a2 ) /*0x71de9c*/
      {
        v9 = Src; /*0x71de9e*/
        v10 = a2; /*0x71dea9*/
        result = Dst; /*0x71deab*/
        do /*0x71dedb*/
        {
          if ( a1 ) /*0x71deb2*/
          {
            v11 = a1; /*0x71deb4*/
            do /*0x71ded6*/
            {
              *result = v9[2]; /*0x71deba*/
              v12 = result + 1; /*0x71dec0*/
              *v12++ = v9[1]; /*0x71dec3*/
              *v12 = *v9; /*0x71decb*/
              result = v12 + 1; /*0x71decd*/
              v9 += 3; /*0x71ded0*/
              --v11; /*0x71ded3*/
            }
            while ( v11 ); /*0x71ded6*/
          }
          --v10; /*0x71ded8*/
        }
        while ( v10 ); /*0x71dedb*/
      }
    }
    else if ( result == (_BYTE *)0xFF ) /*0x71dee6*/
    {
      return memcpy(Dst, Src, 3 * a2 * a1); /*0x71deff*/
    }
  }
  return result; /*0x71dee0*/
}
