int __cdecl sub_8CB8A0(_DWORD *a1, const void **a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  bool v8; // zf
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // [esp+10h] [ebp-4h]

  v2 = a1; /*0x8cb8a1*/
  result = a1[0x1B] - 1; /*0x8cb8a8*/
  v4 = a1[2]; /*0x8cb8b1*/
  if ( result >= 0 ) /*0x8cb8b4*/
  {
    v5 = 0x1C * result; /*0x8cb8bc*/
    v12 = a1[0x1B]; /*0x8cb8c0*/
    do /*0x8cb960*/
    {
      v6 = *(_DWORD *)(v2[0x1A] + v5); /*0x8cb8c7*/
      if ( *(_WORD *)(v6 + 4) ) /*0x8cb8ca*/
        ++*(_WORD *)(v6 + 6); /*0x8cb8d1*/
      if ( *(_DWORD *)(v4 + 0x88) ) /*0x8cb8d5*/
      {
        sub_91ED30(v6); /*0x8cb8e0*/
      }
      else
      {
        *(_DWORD *)(v4 + 0x88) = 1; /*0x8cb8ea*/
        sub_91ED30(v6); /*0x8cb8f4*/
        v7 = *(_DWORD *)(v4 + 0x88) - 1; /*0x8cb902*/
        *(_DWORD *)(v4 + 0x88) = v7; /*0x8cb903*/
        if ( !v7 ) /*0x8cb909*/
        {
          if ( *(_DWORD *)(v4 + 0x84) ) /*0x8cb90b*/
          {
            if ( !*(_BYTE *)(v4 + 0x90) ) /*0x8cb915*/
              sub_899210(v4); /*0x8cb921*/
          }
        }
      }
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x8cb934*/
        sub_8A6EE0(a2, 4); /*0x8cb939*/
      v2 = a1; /*0x8cb946*/
      *((_DWORD *)*a2 + (_DWORD)a2[1]) = v6; /*0x8cb94a*/
      v5 -= 0x1C; /*0x8cb955*/
      result = v12 - 1; /*0x8cb958*/
      v8 = v12 == 1; /*0x8cb958*/
      a2[1] = (char *)a2[1] + 1; /*0x8cb959*/
      --v12; /*0x8cb95c*/
    }
    while ( !v8 ); /*0x8cb960*/
  }
  v9 = v2[0x1E] - 1; /*0x8cb969*/
  if ( v9 >= 0 ) /*0x8cb96a*/
  {
    while ( 1 ) /*0x8cb983*/
    {
      v10 = *(_DWORD *)(v2[0x1D] + 4 * v9); /*0x8cb983*/
      if ( *(_WORD *)(v10 + 4) ) /*0x8cb986*/
        ++*(_WORD *)(v10 + 6); /*0x8cb98d*/
      if ( *(_DWORD *)(v4 + 0x88) ) /*0x8cb991*/
      {
        sub_91ED30(v10); /*0x8cb99c*/
      }
      else
      {
        *(_DWORD *)(v4 + 0x88) = 1; /*0x8cb9a6*/
        sub_91ED30(v10); /*0x8cb9b0*/
        v11 = *(_DWORD *)(v4 + 0x88) - 1; /*0x8cb9be*/
        *(_DWORD *)(v4 + 0x88) = v11; /*0x8cb9bf*/
        if ( !v11 ) /*0x8cb9c5*/
        {
          if ( *(_DWORD *)(v4 + 0x84) ) /*0x8cb9c7*/
          {
            if ( !*(_BYTE *)(v4 + 0x90) ) /*0x8cb9d1*/
              sub_899210(v4); /*0x8cb9dd*/
          }
        }
      }
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x8cb9f0*/
        sub_8A6EE0(a2, 4); /*0x8cb9f5*/
      result = (int)a2[1]; /*0x8cb9fd*/
      *((_DWORD *)*a2 + result) = v10; /*0x8cba02*/
      --v9; /*0x8cba09*/
      a2[1] = (char *)a2[1] + 1; /*0x8cba0a*/
      if ( v9 < 0 ) /*0x8cba0d*/
        break; /*0x8cba0d*/
      v2 = a1; /*0x8cb972*/
    }
  }
  return result; /*0x8cba13*/
}
