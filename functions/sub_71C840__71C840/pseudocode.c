void __cdecl sub_71C840(unsigned int a1, int a2, int a3, _BYTE *a4, int a5, _DWORD *a6, int a7)
{
  int v7; // esi
  int v8; // ebx
  unsigned int v9; // ebp
  _BYTE *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx
  _BYTE *v13; // eax
  unsigned __int8 *v14; // eax
  _BYTE *v15; // ecx
  unsigned int v16; // edi
  _BYTE *v17; // ecx
  _BYTE *v18; // ecx
  unsigned int v19; // edi
  _BYTE *v20; // ecx
  unsigned int v21; // [esp+18h] [ebp+14h]

  v7 = *(_DWORD *)(a5 + 0x14); /*0x71c850*/
  if ( a6[1] == 0xFF00 ) /*0x71c853*/
  {
    v8 = a2; /*0x71c85a*/
    v9 = a1; /*0x71c85f*/
    v10 = (_BYTE *)FormHeapAlloc(a2 * a1); /*0x71c86a*/
    v11 = a2 * (a1 >> 1); /*0x71c873*/
    v12 = 0; /*0x71c879*/
    v21 = (unsigned int)v10; /*0x71c87d*/
    if ( v11 ) /*0x71c881*/
    {
      do /*0x71c8a4*/
      {
        *v10 = *(_BYTE *)(v12 + a7) >> 4; /*0x71c88e*/
        v13 = v10 + 1; /*0x71c894*/
        *v13 = *(_BYTE *)(v12 + a7) & 0xF; /*0x71c89a*/
        ++v12; /*0x71c89c*/
        v10 = v13 + 1; /*0x71c89f*/
      }
      while ( v12 < v11 ); /*0x71c8a4*/
      v9 = a1; /*0x71c8a6*/
    }
    v14 = (unsigned __int8 *)v21; /*0x71c8b6*/
    if ( *a6 == 0xFF ) /*0x71c8ba*/
    {
      if ( a2 ) /*0x71c8be*/
      {
        v15 = a4; /*0x71c8c4*/
        do /*0x71c901*/
        {
          if ( v9 ) /*0x71c8ca*/
          {
            v16 = v9; /*0x71c8cc*/
            do /*0x71c8fc*/
            {
              *v15 = *(_BYTE *)(v7 + 4 * *v14); /*0x71c8d7*/
              v17 = v15 + 1; /*0x71c8e1*/
              *v17++ = *(_BYTE *)(v7 + 4 * *v14 + 1); /*0x71c8e4*/
              *v17 = *(_BYTE *)(v7 + 4 * *v14 + 2); /*0x71c8f1*/
              v15 = v17 + 1; /*0x71c8f3*/
              ++v14; /*0x71c8f6*/
              --v16; /*0x71c8f9*/
            }
            while ( v16 ); /*0x71c8fc*/
          }
          --v8; /*0x71c8fe*/
        }
        while ( v8 ); /*0x71c901*/
      }
    }
    else if ( *a6 == 0xFF0000 ) /*0x71c91b*/
    {
      if ( a2 ) /*0x71c91f*/
      {
        v18 = a4; /*0x71c921*/
        do /*0x71c961*/
        {
          if ( v9 ) /*0x71c927*/
          {
            v19 = v9; /*0x71c929*/
            do /*0x71c95c*/
            {
              *v18 = *(_BYTE *)(v7 + 4 * *v14 + 2); /*0x71c938*/
              v20 = v18 + 1; /*0x71c942*/
              *v20++ = *(_BYTE *)(v7 + 4 * *v14 + 1); /*0x71c945*/
              *v20 = *(_BYTE *)(v7 + 4 * *v14); /*0x71c951*/
              v18 = v20 + 1; /*0x71c953*/
              ++v14; /*0x71c956*/
              --v19; /*0x71c959*/
            }
            while ( v19 ); /*0x71c95c*/
          }
          --v8; /*0x71c95e*/
        }
        while ( v8 ); /*0x71c961*/
      }
    }
    FormHeapFree(v21); /*0x71c968*/
  }
}
